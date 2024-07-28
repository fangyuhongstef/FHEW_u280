#include "xdma_axi4lite_m.h"
#include <errno.h>

void *control_base;
int control_fd;


static int open_control(char *filename) {
    int fd;
    fd = open(filename, O_RDWR | O_SYNC);
    if(fd == -1) {
        printf("*** ERROR: open control error\n");
        return -1;
    }
    return fd;
}


static void *mmap_control(int fd,long mapsize) {
    void *vir_addr;
    vir_addr = mmap(NULL, mapsize, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (vir_addr == (void *)-1)
        printf("*** ERROR: mmap control error [%s]]\n",strerror(errno));
    return vir_addr;
}


void dev_user_wr(uint32_t reg_id, uint32_t val) {
    uint32_t wr_val = htoll(val);
    *((uint32_t *)(control_base + (reg_id << REG_ADDR_BIAS))) = wr_val;
}


uint32_t dev_user_rd(uint32_t reg_id) {
    uint32_t res = *((uint32_t *)(control_base + (reg_id << REG_ADDR_BIAS)));
    res = ltohl(res);
    return res;
}


int dev_user_init() {
    control_fd = open_control(DEV_USER_NAME);
    if(control_fd < 0)
        return -1;
    control_base = mmap_control(control_fd, MAP_SIZE);
    return 1;
}


void dev_user_deinit() {
    if(control_fd >= 0)
        close(control_fd);
}


int axi4lite_m_xdma_test(int test_reg_num) {
    int         ret = 0;
    uint32_t    res;

    printf("start init xdma0_user\n");
    ret = dev_user_init();
    if(ret < 0)
        printf("*** ERROR: dev user init error\n");

    for(uint32_t i =0; i < test_reg_num; i++) {
        dev_user_wr(i, i);
        printf("reg id:0x%02X \t wr data:0x%08X\n", i, i);
    }

    for(uint32_t i =0; i < test_reg_num; i++) {
        res = dev_user_rd(i);
        printf("reg id:0x%02X \t rd data:0x%08X\n", i, res);
    }

    // release xdma dev user
    dev_user_deinit();
    return ret;
}