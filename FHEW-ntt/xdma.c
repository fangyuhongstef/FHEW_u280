#include "xdma.h"

static int dev_h2c_fd;
static int dev_c2h_fd;
static int dev_event_fd;

void dev_h2c_init() {
    dev_h2c_fd = open(DEV_H2C_NAME, O_RDWR); // open device
    if(dev_h2c_fd < 0) {
        printf("*** ERROR: failed to open device %s\n", DEV_H2C_NAME);
        close(dev_h2c_fd);
    }
}

void dev_h2c_deinit() {
    if(dev_h2c_fd >= 0)
        close(dev_h2c_fd);
}


void dev_c2h_init() {
    dev_c2h_fd = open(DEV_C2H_NAME, O_RDWR); // open device
    if(dev_c2h_fd < 0) {
        printf("*** ERROR: failed to open device %s\n", DEV_C2H_NAME);
        close(dev_c2h_fd);
    }
}

void dev_c2h_deinit() {
    if(dev_c2h_fd >= 0)
        close(dev_c2h_fd);
}


void dev_event_init() {
    dev_event_fd = open(DEV_EVENT_NAME, O_RDWR|O_SYNC|O_NONBLOCK); // open device
    if(dev_event_fd < 0) {
        printf("*** ERROR: failed to open device %s\n", DEV_EVENT_NAME);
        close(dev_event_fd);
    }
}

void dev_event_deinit() {
    if(dev_event_fd >= 0)
        close(dev_event_fd);
}

/*获取用户中断*/
int read_event()
{
    int val;
    int read_res;
    read_res = read(dev_event_fd,&val,4);
    printf("read event value = %d,read event res = %d\n",val,read_res);
    if(read_res < 0){
	printf("read failed, errno %d\n",errno);
        return -1;
    }
    return val;
}

// function : get_nanosecond
// description : get time in nanosecond
uint32_t get_nanosecond() {
    struct timespec ts;
    if(clock_gettime(CLOCK_REALTIME, &ts) == 0) {
        uint32_t nanoseconds = (uint32_t)ts.tv_nsec;
        return nanoseconds;
        // printf("Current time in nanoseconds: %ld\n", nanoseconds);
    }
    else {
        perror("clock_gettime error\n");
    }
}
// function : get_second
// description : get time in second
uint32_t get_second() {
    struct timespec ts;
    if(clock_gettime(CLOCK_REALTIME, &ts) == 0) {
        uint32_t seconds = (uint32_t)ts.tv_sec;
        return seconds;
        // printf("Current time in seconds: %ld\n", seconds);
    }
    else {
        perror("clock_gettime error\n");
    }
}
// function : dev_write
// description : write data from local memory (buffer) to device, (i.e. host-to-device)
// parameter :
//       dev_fd : device instance
//       addr   : target address in the device
//       buffer : buffer base pointer
//       size   : data size
// return:
//       int : 0=success,  -1=failed
int dev_write(uint64_t addr, void *buffer, uint64_t size) {
    if(addr != lseek(dev_h2c_fd, addr, SEEK_SET)) // seek
        return -1; // seek failed
    if(size != write(dev_h2c_fd, buffer, size)) // write device from buffer
        return -1; // write failed
    return 0;
}

// function : dev_read
// description : read data from device to local memory (buffer), (i.e. device-to-host)
// parameter :
//       dev_fd : device instance
//       addr   : source address in the device
//       buffer : buffer base pointer
//       size   : data size
// return:
//       int : 0=success,  -1=failed
int dev_read(uint64_t addr, void *buffer, uint64_t size) {
    if(addr != lseek(dev_c2h_fd, addr, SEEK_SET)) // seek
        return -1; // seek failed
    if(size != read(dev_c2h_fd, buffer, size)) // read device to buffer
        return -1; // read failed
    return 0;
}

// AXI4-Master transfer test function
int axi4_m_xdma_test(uint64_t trans_base_addr, uint32_t trans_size, char print_enable) {
    int         ret = -1;

    uint64_t    time_ns;
    uint64_t    time_ns_new;
    uint64_t    check_err_cnt = 0;

    int*        buffer_h2c = NULL;
    int*        buffer_c2h = NULL;
    int         c2h_sem=0;
    //uint32_t    res;

    if(trans_size % 4 != 0) {
        printf("*** ERROR: trans size should align 4 Bytes.\n");
        return -1;
    }

    printf("start XDMA test, addr: 0x%016lX, size: 0x%08X\n", trans_base_addr, trans_size);

    // check DMA trans_size
    if (trans_size > DMA_MAX_SIZE || trans_size == 0) {
        printf("*** ERROR: DMA trans_size must larger than 0 and NOT be larger than %lu\n", DMA_MAX_SIZE);
        return -1;
    }

    // init xdma device
    dev_h2c_init();
    dev_c2h_init();
    dev_user_init();
    dev_event_init();

    // allocate buffer memory
    buffer_h2c = (int*)malloc((trans_size >> 2) * sizeof(int)); // allocate local memory (buffer)
    if(buffer_h2c == NULL) {
        printf("*** ERROR: failed to allocate buffer_h2c\n");
        goto close_and_clear;
    }

    buffer_c2h = (int*)malloc((trans_size >> 2) * sizeof(int)); // allocate local memory (buffer)
    if (buffer_c2h == NULL) {
        printf("*** ERROR: failed to allocate buffer_c2h\n");
        goto close_and_clear;
    }

    // generate random data fill buffer h2c
    srand((unsigned int)time(NULL));
    if(print_enable == 1)
        printf("number in buffer_h2c[] is :\n");
    for(int i = 0; i < (trans_size >> 2) ; i++) {
        buffer_h2c[i] = ((rand() << 16) + rand());
        if(print_enable == 1){
            printf("%d:0x%08X\t", i, buffer_h2c[i]);
            if((i+1)%4 == 0)
                printf("\n");
        }
    }

    // start write time
    if(print_enable == 1)
        time_ns = get_nanosecond();
    // write data to dev
    ret = dev_write(trans_base_addr, buffer_h2c, trans_size);
    if(ret == -1)
        printf("*** ERROR: failed to write dev_h2c\n");
    // end write time
    if(print_enable == 1)
        time_ns_new = get_nanosecond();
    // caculate write data time
    if(print_enable == 1)
        printf("transfer write cost %ld ns.\n", time_ns_new - time_ns);

    //add wait int
    dev_user_wr(0x00, 0x5a5a);//write int_flag
    printf("*** start wait int\n");
    printf("c2h event thread running, c2h_event_fd = %d\n", dev_event_fd);
    while(1)
    {
	ret = read_event();
	    if (ret > 0) {
		    c2h_sem++;
		    printf("c2h get %d frame event\n",c2h_sem);
    		    dev_user_wr(0x00, 0xa5a5);//int clear
		    break;
	    }
	    else{		
	    }
    } 


    // start read time
    if(print_enable == 1)
        time_ns = get_nanosecond(); 
    // read data from dev
    ret = dev_read(trans_base_addr, buffer_c2h, trans_size);
    if(ret == -1)
        printf("*** ERROR: failed to write dev_c2h\n");
    // end read time
    if(print_enable == 1)
        time_ns_new = get_nanosecond();
    // caculate read data time
    if(print_enable == 1)
        printf("transfer read cost %ld ns.\n", time_ns_new - time_ns);


    // show recevie data
    if(print_enable == 1){
        printf("number in buffer_c2h[] is :\n");
        for(int i = 0; i < (trans_size >> 2) ; i++) {
            printf("%d:0x%08X\t", i, buffer_c2h[i]);
            if((i+1)%4 == 0)
                printf("\n");
        }
    }


    // check recevie data
    for(int i = 0; i < (trans_size >> 2) ; i++) {
        if(buffer_h2c[i] != buffer_c2h[i]) {
            check_err_cnt += 1;
            if(print_enable == 1)
                printf("*** ERROR: not equal data in buffer[%d]\n", i);
        }
    }
    printf("check err cnt is %lu.\n", check_err_cnt);


close_and_clear:

    if(buffer_h2c != NULL) {
        free(buffer_h2c);
        printf("free buffer_h2c.\n");
    }

    if(buffer_c2h != NULL) {
        free(buffer_c2h);
        printf("free buffer_c2h.\n");
    }

    dev_h2c_deinit();
    dev_c2h_deinit();
    dev_user_deinit();
    dev_event_deinit();
    return ret;
}

int pcie_init() {
    uint64_t test_base_addr=0x1000000000;
    uint64_t test_size=0x40000000 + 0x10000; 
    int      ret = -1;
    uint32_t xdma_trans_times = test_size / DMA_MAX_SIZE;
    uint64_t xdma_trans_base_addr = test_base_addr;
    uint64_t xdma_trans_size;
    uint64_t xdma_trans_left_size = test_size % DMA_MAX_SIZE;

    if(test_size % 4 != 0) {
        printf("*** ERROR: trans size should align 4 Bytes.\n");
        return -1;
    }

    printf("start XDMA block test, addr: 0x%016lX, size: 0x%016lX\n", test_base_addr, test_size);

    if(xdma_trans_times == 0) {
        ret = axi4_m_xdma_test(test_base_addr, (uint32_t)test_size, 0);
        printf("end XDMA block test\n");
        return ret;
    }

    xdma_trans_size = DMA_MAX_SIZE;
    for (uint32_t i = 0; i < xdma_trans_times; i++) {
        ret = axi4_m_xdma_test(xdma_trans_base_addr, xdma_trans_size, 0);
        if(ret == -1) {
            printf("*** ERROR: err occur in xdma test.\n");
            printf("end XDMA block test\n");
            return -1;
        }
        xdma_trans_base_addr += DMA_MAX_SIZE;
    }

    if(xdma_trans_left_size > 0){
        ret = axi4_m_xdma_test(xdma_trans_base_addr, xdma_trans_left_size, 0);
        if(ret == -1) {
            printf("*** ERROR: err occur in xdma test.\n");
            printf("end XDMA block test\n");
            return -1;
        }
    }

    printf("end XDMA block test\n");
    return ret;
}

int file_test(int print_enable)  
{
    int         ret = -1;
    uint64_t    time_ns;
    uint64_t    time_ns_new; 
    int i;
    uint64_t trans_write_base_addr = 0x10000000;
    uint64_t trans_read_base_addr = 0x20000000;  
	uint32_t trans_size = 1024*4;  
    uint32_t val = 0;
	
	FILE *fp_in;  //文件指针
	FILE *fp_out;
    int*        buffer_c2h = NULL;
	int data_in[1024];  //保存文件内容的数组
	int data_out[1024];  //保存文件内容的数组
    int err_cnt = 0;

    //if(print_enable == 1)
     //   printf("File test! \n" ); 
	fp_in  = fopen("/home/fangyuhong/Parallel-NTT-main/python/NTT_points_in.txt","r");   //打开文件，只读
	fp_out = fopen("/home/fangyuhong/FHEW_NTT_LIB-main/FHEW-ntt/file/NTT_points_out.txt","r"); 
	if((fp_in == NULL)|(fp_out == NULL))  
	{  
		printf("File cannot open! " );  
		//exit;  
		return 0;
	}  
	
    for(i=0;fscanf(fp_in,"%d",data_in+i)!=EOF;i++);//从输入文件连续读取整数到数组a
    for(i=0;fscanf(fp_out,"%d",data_out+i)!=EOF;i++);//从输入文件连续读取整数到数组a
    if(print_enable == 1){ 
        printf("文件内容为：\n");
        for (i=0;i<1024;i++)  //循环打印保存到数组中的数据
        {
	        printf("[file]%d\n",data_in[i]);  //打印
        } 
    }
    fclose(fp_in);  //关闭文件，释放指向文件的指针
    fclose(fp_out);  //关闭文件，释放指向文件的指针  
 
    // init xdma device     
     
    if(dev_user_init() == -1)
        printf("*** ERROR: failed to dev_user_init\n");     
 
    dev_h2c_init();
    dev_c2h_init();
    //dev_user_init();
    dev_event_init();
 
    dev_user_wr(0x40, 0x0); 
    dev_user_wr(0x40, 0x1); 
    dev_user_wr(0x80, 0x10000000);
    dev_user_wr(0x81, 0x0);
    dev_user_wr(0x82, 0x20000000);
    dev_user_wr(0x83, 0x0);

    print_enable = 1;
    // start write time
    if(print_enable == 1)
        time_ns = get_nanosecond();
    // write data to dev
    ret = dev_write(trans_write_base_addr, data_in, trans_size);
    if(ret == -1)
        printf("*** ERROR: failed to write dev_h2c\n");
    // end write time
    if(print_enable == 1)
        time_ns_new = get_nanosecond();
    // caculate write data time
    if(print_enable == 1)
        printf("transfer write cost %ld ns.\n", time_ns_new - time_ns);


    //fpga start 
    dev_user_wr(0xC0, 0x1); 
    while(1)
    {
	    val = dev_user_rd(0x20);
	    if (val > 0) { 
		    //printf("c2h get frame event\n" ); 
		    break;
	    }
	    else{		
	    }
    } 
    if(print_enable == 1)
        time_ns_new = get_nanosecond();
    // caculate write&read data time
    if(print_enable == 1)
        printf("transfer write&calc cost %ld ns.\n", time_ns_new - time_ns); 

    // read data from dev
    buffer_c2h = (int*)malloc((trans_size >> 2) * sizeof(int)); // allocate local memory (buffer)
    if (buffer_c2h == NULL) {
        printf("*** ERROR: failed to allocate buffer_c2h\n");
        goto close_and_clear;
    }
    ret = dev_read(trans_read_base_addr, buffer_c2h, trans_size);
    if(ret == -1)
        printf("*** ERROR: failed to write dev_c2h\n"); 
    if(print_enable == 1)
        time_ns_new = get_nanosecond();
    // caculate write&read data time
    if(print_enable == 1)
        printf("transfer write&calc&read cost %ld ns.\n", time_ns_new - time_ns); 

    print_enable = 0; 
    // compare recevie data   
    for(int i = 0; i < (trans_size >> 2) ; i++) {
        if(buffer_c2h[i] != data_out[i]){
            //printf("*** [NTT ERROR]buffer_c2h[%d] = 0x%08X , data_out[%d] = 0x%08X \n", i, buffer_c2h[i], i, data_out[i]);
            err_cnt++;
        }
    }

    if(print_enable == 1){
        if(err_cnt == 0)
            printf("NTT FILE TEST PASS !\n");
        else
            printf("NTT FILE TEST FAILED , err_cnt = %d!\n",err_cnt);     
    }
    //stat ntt time
    val = dev_user_rd(0x22);
    if(print_enable == 1) 
        printf("NTT alg cost %d cycles \n",val); 
    val = dev_user_rd(0x23); 
    if(print_enable == 1)
        printf("NTT alg + AXI trans cost %d cycles \n",val); 

 close_and_clear:
    dev_h2c_deinit();
    dev_c2h_deinit();
    dev_user_deinit();
    dev_event_deinit();
    return ret;
} 
