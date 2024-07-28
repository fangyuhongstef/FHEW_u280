#ifndef __XDMA_H__
#define __XDMA_H__


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <errno.h>
#include "xdma_axi4lite_m.h"

// #define DEBUG
#define DMA_MAX_SIZE    0x10000000UL
#define DEV_H2C_NAME    "/dev/xdma0_h2c_0"
#define DEV_C2H_NAME    "/dev/xdma0_c2h_0"
#define DEV_EVENT_NAME    "/dev/xdma0_events_0"


void dev_h2c_init();
void dev_h2c_deinit();
void dev_c2h_init();
void dev_c2h_deinit();
void dev_event_init();
void dev_event_deinit();
int read_event();
uint32_t get_nanosecond();
int dev_write(uint64_t addr, void *buffer, uint64_t size);
int dev_read(uint64_t addr, void *buffer, uint64_t size);
int axi4_m_xdma_test(uint64_t trans_base_addr, uint32_t trans_size, char print_enable);
int pcie_init();
int file_test(int print_enable);
uint32_t get_second();
#endif