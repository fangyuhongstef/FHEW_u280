#ifndef __XDMA_AXI4LITE_M_H__
#define __XDMA_AXI4LITE_M_H__


#include <assert.h>
#include <fcntl.h>
#include <getopt.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdarg.h>
#include <syslog.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/sysinfo.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>


/* ltoh: little to host */
/* htol: little to host */
#if __BYTE_ORDER == __LITTLE_ENDIAN
#  define ltohl(x)       (x)
#  define ltohs(x)       (x)
#  define htoll(x)       (x)
#  define htols(x)       (x)
#elif __BYTE_ORDER == __BIG_ENDIAN
#  define ltohl(x)     __bswap_32(x)
#  define ltohs(x)     __bswap_16(x)
#  define htoll(x)     __bswap_32(x)
#  define htols(x)     __bswap_16(x)
#endif


#define MAP_SIZE            1024 * 4UL
#define REG_ADDR_BIAS       2
#define DEV_USER_NAME       "/dev/xdma0_user"


//static int open_control(char *filename);
//static void *mmap_control(int fd,long mapsize);
void dev_user_wr(uint32_t reg_id, uint32_t val);
uint32_t dev_user_rd(uint32_t reg_id);
int dev_user_init();
void dev_user_deinit();
int axi4lite_m_xdma_test(int test_reg_len);


#endif