#ifndef IP_U280_XDMA_HBM_0_0_H_
#define IP_U280_XDMA_HBM_0_0_H_

// (c) Copyright 1995-2023 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


#ifndef XTLM
#include "xtlm.h"
#endif
#ifndef SYSTEMC_INCLUDED
#include <systemc>
#endif

#if defined(_MSC_VER)
#define DllExport __declspec(dllexport)
#elif defined(__GNUC__)
#define DllExport __attribute__ ((visibility("default")))
#else
#define DllExport
#endif

#include "u280_xdma_hbm_0_0_sc.h"




#ifdef XILINX_SIMULATOR
class DllExport u280_xdma_hbm_0_0 : public u280_xdma_hbm_0_0_sc
{
public:

  u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm);
  virtual ~u280_xdma_hbm_0_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< bool > HBM_REF_CLK_0;
  sc_core::sc_in< bool > HBM_REF_CLK_1;
  sc_core::sc_in< bool > AXI_00_ACLK;
  sc_core::sc_in< bool > AXI_00_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_ARSIZE;
  sc_core::sc_in< bool > AXI_00_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_AWSIZE;
  sc_core::sc_in< bool > AXI_00_AWVALID;
  sc_core::sc_in< bool > AXI_00_RREADY;
  sc_core::sc_in< bool > AXI_00_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_00_WDATA;
  sc_core::sc_in< bool > AXI_00_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_00_WVALID;
  sc_core::sc_in< bool > AXI_01_ACLK;
  sc_core::sc_in< bool > AXI_01_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_ARSIZE;
  sc_core::sc_in< bool > AXI_01_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_AWSIZE;
  sc_core::sc_in< bool > AXI_01_AWVALID;
  sc_core::sc_in< bool > AXI_01_RREADY;
  sc_core::sc_in< bool > AXI_01_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_01_WDATA;
  sc_core::sc_in< bool > AXI_01_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_01_WVALID;
  sc_core::sc_in< bool > AXI_02_ACLK;
  sc_core::sc_in< bool > AXI_02_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_ARSIZE;
  sc_core::sc_in< bool > AXI_02_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_AWSIZE;
  sc_core::sc_in< bool > AXI_02_AWVALID;
  sc_core::sc_in< bool > AXI_02_RREADY;
  sc_core::sc_in< bool > AXI_02_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_02_WDATA;
  sc_core::sc_in< bool > AXI_02_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_02_WVALID;
  sc_core::sc_in< bool > AXI_03_ACLK;
  sc_core::sc_in< bool > AXI_03_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_ARSIZE;
  sc_core::sc_in< bool > AXI_03_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_AWSIZE;
  sc_core::sc_in< bool > AXI_03_AWVALID;
  sc_core::sc_in< bool > AXI_03_RREADY;
  sc_core::sc_in< bool > AXI_03_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_03_WDATA;
  sc_core::sc_in< bool > AXI_03_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_03_WVALID;
  sc_core::sc_in< bool > AXI_16_ACLK;
  sc_core::sc_in< bool > AXI_16_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_ARSIZE;
  sc_core::sc_in< bool > AXI_16_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_AWSIZE;
  sc_core::sc_in< bool > AXI_16_AWVALID;
  sc_core::sc_in< bool > AXI_16_RREADY;
  sc_core::sc_in< bool > AXI_16_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_16_WDATA;
  sc_core::sc_in< bool > AXI_16_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_16_WVALID;
  sc_core::sc_in< bool > AXI_17_ACLK;
  sc_core::sc_in< bool > AXI_17_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_ARSIZE;
  sc_core::sc_in< bool > AXI_17_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_AWSIZE;
  sc_core::sc_in< bool > AXI_17_AWVALID;
  sc_core::sc_in< bool > AXI_17_RREADY;
  sc_core::sc_in< bool > AXI_17_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_17_WDATA;
  sc_core::sc_in< bool > AXI_17_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_17_WVALID;
  sc_core::sc_in< bool > AXI_18_ACLK;
  sc_core::sc_in< bool > AXI_18_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_ARSIZE;
  sc_core::sc_in< bool > AXI_18_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_AWSIZE;
  sc_core::sc_in< bool > AXI_18_AWVALID;
  sc_core::sc_in< bool > AXI_18_RREADY;
  sc_core::sc_in< bool > AXI_18_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_18_WDATA;
  sc_core::sc_in< bool > AXI_18_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_18_WVALID;
  sc_core::sc_in< bool > AXI_19_ACLK;
  sc_core::sc_in< bool > AXI_19_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_ARSIZE;
  sc_core::sc_in< bool > AXI_19_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_AWSIZE;
  sc_core::sc_in< bool > AXI_19_AWVALID;
  sc_core::sc_in< bool > AXI_19_RREADY;
  sc_core::sc_in< bool > AXI_19_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_19_WDATA;
  sc_core::sc_in< bool > AXI_19_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_19_WVALID;
  sc_core::sc_in< bool > APB_0_PCLK;
  sc_core::sc_in< bool > APB_0_PRESET_N;
  sc_core::sc_in< bool > APB_1_PCLK;
  sc_core::sc_in< bool > APB_1_PRESET_N;
  sc_core::sc_out< bool > AXI_00_ARREADY;
  sc_core::sc_out< bool > AXI_00_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_00_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_00_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_RID;
  sc_core::sc_out< bool > AXI_00_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_RRESP;
  sc_core::sc_out< bool > AXI_00_RVALID;
  sc_core::sc_out< bool > AXI_00_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_BRESP;
  sc_core::sc_out< bool > AXI_00_BVALID;
  sc_core::sc_out< bool > AXI_01_ARREADY;
  sc_core::sc_out< bool > AXI_01_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_01_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_01_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_RID;
  sc_core::sc_out< bool > AXI_01_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_RRESP;
  sc_core::sc_out< bool > AXI_01_RVALID;
  sc_core::sc_out< bool > AXI_01_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_BRESP;
  sc_core::sc_out< bool > AXI_01_BVALID;
  sc_core::sc_out< bool > AXI_02_ARREADY;
  sc_core::sc_out< bool > AXI_02_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_02_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_02_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_RID;
  sc_core::sc_out< bool > AXI_02_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_RRESP;
  sc_core::sc_out< bool > AXI_02_RVALID;
  sc_core::sc_out< bool > AXI_02_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_BRESP;
  sc_core::sc_out< bool > AXI_02_BVALID;
  sc_core::sc_out< bool > AXI_03_ARREADY;
  sc_core::sc_out< bool > AXI_03_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_03_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_03_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_RID;
  sc_core::sc_out< bool > AXI_03_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_RRESP;
  sc_core::sc_out< bool > AXI_03_RVALID;
  sc_core::sc_out< bool > AXI_03_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_BRESP;
  sc_core::sc_out< bool > AXI_03_BVALID;
  sc_core::sc_out< bool > AXI_16_ARREADY;
  sc_core::sc_out< bool > AXI_16_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_16_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_16_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_RID;
  sc_core::sc_out< bool > AXI_16_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_RRESP;
  sc_core::sc_out< bool > AXI_16_RVALID;
  sc_core::sc_out< bool > AXI_16_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_BRESP;
  sc_core::sc_out< bool > AXI_16_BVALID;
  sc_core::sc_out< bool > AXI_17_ARREADY;
  sc_core::sc_out< bool > AXI_17_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_17_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_17_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_RID;
  sc_core::sc_out< bool > AXI_17_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_RRESP;
  sc_core::sc_out< bool > AXI_17_RVALID;
  sc_core::sc_out< bool > AXI_17_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_BRESP;
  sc_core::sc_out< bool > AXI_17_BVALID;
  sc_core::sc_out< bool > AXI_18_ARREADY;
  sc_core::sc_out< bool > AXI_18_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_18_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_18_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_RID;
  sc_core::sc_out< bool > AXI_18_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_RRESP;
  sc_core::sc_out< bool > AXI_18_RVALID;
  sc_core::sc_out< bool > AXI_18_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_BRESP;
  sc_core::sc_out< bool > AXI_18_BVALID;
  sc_core::sc_out< bool > AXI_19_ARREADY;
  sc_core::sc_out< bool > AXI_19_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_19_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_19_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_RID;
  sc_core::sc_out< bool > AXI_19_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_RRESP;
  sc_core::sc_out< bool > AXI_19_RVALID;
  sc_core::sc_out< bool > AXI_19_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_BRESP;
  sc_core::sc_out< bool > AXI_19_BVALID;
  sc_core::sc_out< bool > apb_complete_0;
  sc_core::sc_out< bool > apb_complete_1;
  sc_core::sc_out< bool > DRAM_0_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_0_STAT_TEMP;
  sc_core::sc_out< bool > DRAM_1_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_1_STAT_TEMP;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_00_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_00_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_01_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_01_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_02_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_02_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_03_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_03_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_16_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_16_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_17_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_17_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_18_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_18_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_19_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_19_transactor_rst_signal;

};
#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
class DllExport u280_xdma_hbm_0_0 : public u280_xdma_hbm_0_0_sc
{
public:

  u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm);
  virtual ~u280_xdma_hbm_0_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< bool > HBM_REF_CLK_0;
  sc_core::sc_in< bool > HBM_REF_CLK_1;
  sc_core::sc_in< bool > AXI_00_ACLK;
  sc_core::sc_in< bool > AXI_00_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_ARSIZE;
  sc_core::sc_in< bool > AXI_00_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_AWSIZE;
  sc_core::sc_in< bool > AXI_00_AWVALID;
  sc_core::sc_in< bool > AXI_00_RREADY;
  sc_core::sc_in< bool > AXI_00_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_00_WDATA;
  sc_core::sc_in< bool > AXI_00_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_00_WVALID;
  sc_core::sc_in< bool > AXI_01_ACLK;
  sc_core::sc_in< bool > AXI_01_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_ARSIZE;
  sc_core::sc_in< bool > AXI_01_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_AWSIZE;
  sc_core::sc_in< bool > AXI_01_AWVALID;
  sc_core::sc_in< bool > AXI_01_RREADY;
  sc_core::sc_in< bool > AXI_01_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_01_WDATA;
  sc_core::sc_in< bool > AXI_01_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_01_WVALID;
  sc_core::sc_in< bool > AXI_02_ACLK;
  sc_core::sc_in< bool > AXI_02_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_ARSIZE;
  sc_core::sc_in< bool > AXI_02_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_AWSIZE;
  sc_core::sc_in< bool > AXI_02_AWVALID;
  sc_core::sc_in< bool > AXI_02_RREADY;
  sc_core::sc_in< bool > AXI_02_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_02_WDATA;
  sc_core::sc_in< bool > AXI_02_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_02_WVALID;
  sc_core::sc_in< bool > AXI_03_ACLK;
  sc_core::sc_in< bool > AXI_03_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_ARSIZE;
  sc_core::sc_in< bool > AXI_03_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_AWSIZE;
  sc_core::sc_in< bool > AXI_03_AWVALID;
  sc_core::sc_in< bool > AXI_03_RREADY;
  sc_core::sc_in< bool > AXI_03_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_03_WDATA;
  sc_core::sc_in< bool > AXI_03_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_03_WVALID;
  sc_core::sc_in< bool > AXI_16_ACLK;
  sc_core::sc_in< bool > AXI_16_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_ARSIZE;
  sc_core::sc_in< bool > AXI_16_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_AWSIZE;
  sc_core::sc_in< bool > AXI_16_AWVALID;
  sc_core::sc_in< bool > AXI_16_RREADY;
  sc_core::sc_in< bool > AXI_16_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_16_WDATA;
  sc_core::sc_in< bool > AXI_16_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_16_WVALID;
  sc_core::sc_in< bool > AXI_17_ACLK;
  sc_core::sc_in< bool > AXI_17_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_ARSIZE;
  sc_core::sc_in< bool > AXI_17_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_AWSIZE;
  sc_core::sc_in< bool > AXI_17_AWVALID;
  sc_core::sc_in< bool > AXI_17_RREADY;
  sc_core::sc_in< bool > AXI_17_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_17_WDATA;
  sc_core::sc_in< bool > AXI_17_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_17_WVALID;
  sc_core::sc_in< bool > AXI_18_ACLK;
  sc_core::sc_in< bool > AXI_18_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_ARSIZE;
  sc_core::sc_in< bool > AXI_18_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_AWSIZE;
  sc_core::sc_in< bool > AXI_18_AWVALID;
  sc_core::sc_in< bool > AXI_18_RREADY;
  sc_core::sc_in< bool > AXI_18_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_18_WDATA;
  sc_core::sc_in< bool > AXI_18_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_18_WVALID;
  sc_core::sc_in< bool > AXI_19_ACLK;
  sc_core::sc_in< bool > AXI_19_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_ARSIZE;
  sc_core::sc_in< bool > AXI_19_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_AWSIZE;
  sc_core::sc_in< bool > AXI_19_AWVALID;
  sc_core::sc_in< bool > AXI_19_RREADY;
  sc_core::sc_in< bool > AXI_19_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_19_WDATA;
  sc_core::sc_in< bool > AXI_19_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_19_WVALID;
  sc_core::sc_in< bool > APB_0_PCLK;
  sc_core::sc_in< bool > APB_0_PRESET_N;
  sc_core::sc_in< bool > APB_1_PCLK;
  sc_core::sc_in< bool > APB_1_PRESET_N;
  sc_core::sc_out< bool > AXI_00_ARREADY;
  sc_core::sc_out< bool > AXI_00_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_00_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_00_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_RID;
  sc_core::sc_out< bool > AXI_00_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_RRESP;
  sc_core::sc_out< bool > AXI_00_RVALID;
  sc_core::sc_out< bool > AXI_00_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_BRESP;
  sc_core::sc_out< bool > AXI_00_BVALID;
  sc_core::sc_out< bool > AXI_01_ARREADY;
  sc_core::sc_out< bool > AXI_01_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_01_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_01_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_RID;
  sc_core::sc_out< bool > AXI_01_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_RRESP;
  sc_core::sc_out< bool > AXI_01_RVALID;
  sc_core::sc_out< bool > AXI_01_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_BRESP;
  sc_core::sc_out< bool > AXI_01_BVALID;
  sc_core::sc_out< bool > AXI_02_ARREADY;
  sc_core::sc_out< bool > AXI_02_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_02_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_02_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_RID;
  sc_core::sc_out< bool > AXI_02_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_RRESP;
  sc_core::sc_out< bool > AXI_02_RVALID;
  sc_core::sc_out< bool > AXI_02_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_BRESP;
  sc_core::sc_out< bool > AXI_02_BVALID;
  sc_core::sc_out< bool > AXI_03_ARREADY;
  sc_core::sc_out< bool > AXI_03_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_03_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_03_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_RID;
  sc_core::sc_out< bool > AXI_03_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_RRESP;
  sc_core::sc_out< bool > AXI_03_RVALID;
  sc_core::sc_out< bool > AXI_03_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_BRESP;
  sc_core::sc_out< bool > AXI_03_BVALID;
  sc_core::sc_out< bool > AXI_16_ARREADY;
  sc_core::sc_out< bool > AXI_16_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_16_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_16_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_RID;
  sc_core::sc_out< bool > AXI_16_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_RRESP;
  sc_core::sc_out< bool > AXI_16_RVALID;
  sc_core::sc_out< bool > AXI_16_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_BRESP;
  sc_core::sc_out< bool > AXI_16_BVALID;
  sc_core::sc_out< bool > AXI_17_ARREADY;
  sc_core::sc_out< bool > AXI_17_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_17_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_17_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_RID;
  sc_core::sc_out< bool > AXI_17_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_RRESP;
  sc_core::sc_out< bool > AXI_17_RVALID;
  sc_core::sc_out< bool > AXI_17_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_BRESP;
  sc_core::sc_out< bool > AXI_17_BVALID;
  sc_core::sc_out< bool > AXI_18_ARREADY;
  sc_core::sc_out< bool > AXI_18_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_18_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_18_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_RID;
  sc_core::sc_out< bool > AXI_18_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_RRESP;
  sc_core::sc_out< bool > AXI_18_RVALID;
  sc_core::sc_out< bool > AXI_18_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_BRESP;
  sc_core::sc_out< bool > AXI_18_BVALID;
  sc_core::sc_out< bool > AXI_19_ARREADY;
  sc_core::sc_out< bool > AXI_19_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_19_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_19_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_RID;
  sc_core::sc_out< bool > AXI_19_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_RRESP;
  sc_core::sc_out< bool > AXI_19_RVALID;
  sc_core::sc_out< bool > AXI_19_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_BRESP;
  sc_core::sc_out< bool > AXI_19_BVALID;
  sc_core::sc_out< bool > apb_complete_0;
  sc_core::sc_out< bool > apb_complete_1;
  sc_core::sc_out< bool > DRAM_0_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_0_STAT_TEMP;
  sc_core::sc_out< bool > DRAM_1_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_1_STAT_TEMP;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_00_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_00_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_01_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_01_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_02_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_02_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_03_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_03_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_16_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_16_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_17_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_17_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_18_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_18_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_19_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_19_transactor_rst_signal;

};
#endif // XM_SYSTEMC




#ifdef RIVIERA
class DllExport u280_xdma_hbm_0_0 : public u280_xdma_hbm_0_0_sc
{
public:

  u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm);
  virtual ~u280_xdma_hbm_0_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< bool > HBM_REF_CLK_0;
  sc_core::sc_in< bool > HBM_REF_CLK_1;
  sc_core::sc_in< bool > AXI_00_ACLK;
  sc_core::sc_in< bool > AXI_00_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_ARSIZE;
  sc_core::sc_in< bool > AXI_00_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_AWSIZE;
  sc_core::sc_in< bool > AXI_00_AWVALID;
  sc_core::sc_in< bool > AXI_00_RREADY;
  sc_core::sc_in< bool > AXI_00_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_00_WDATA;
  sc_core::sc_in< bool > AXI_00_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_00_WVALID;
  sc_core::sc_in< bool > AXI_01_ACLK;
  sc_core::sc_in< bool > AXI_01_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_ARSIZE;
  sc_core::sc_in< bool > AXI_01_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_AWSIZE;
  sc_core::sc_in< bool > AXI_01_AWVALID;
  sc_core::sc_in< bool > AXI_01_RREADY;
  sc_core::sc_in< bool > AXI_01_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_01_WDATA;
  sc_core::sc_in< bool > AXI_01_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_01_WVALID;
  sc_core::sc_in< bool > AXI_02_ACLK;
  sc_core::sc_in< bool > AXI_02_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_ARSIZE;
  sc_core::sc_in< bool > AXI_02_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_AWSIZE;
  sc_core::sc_in< bool > AXI_02_AWVALID;
  sc_core::sc_in< bool > AXI_02_RREADY;
  sc_core::sc_in< bool > AXI_02_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_02_WDATA;
  sc_core::sc_in< bool > AXI_02_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_02_WVALID;
  sc_core::sc_in< bool > AXI_03_ACLK;
  sc_core::sc_in< bool > AXI_03_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_ARSIZE;
  sc_core::sc_in< bool > AXI_03_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_AWSIZE;
  sc_core::sc_in< bool > AXI_03_AWVALID;
  sc_core::sc_in< bool > AXI_03_RREADY;
  sc_core::sc_in< bool > AXI_03_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_03_WDATA;
  sc_core::sc_in< bool > AXI_03_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_03_WVALID;
  sc_core::sc_in< bool > AXI_16_ACLK;
  sc_core::sc_in< bool > AXI_16_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_ARSIZE;
  sc_core::sc_in< bool > AXI_16_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_AWSIZE;
  sc_core::sc_in< bool > AXI_16_AWVALID;
  sc_core::sc_in< bool > AXI_16_RREADY;
  sc_core::sc_in< bool > AXI_16_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_16_WDATA;
  sc_core::sc_in< bool > AXI_16_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_16_WVALID;
  sc_core::sc_in< bool > AXI_17_ACLK;
  sc_core::sc_in< bool > AXI_17_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_ARSIZE;
  sc_core::sc_in< bool > AXI_17_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_AWSIZE;
  sc_core::sc_in< bool > AXI_17_AWVALID;
  sc_core::sc_in< bool > AXI_17_RREADY;
  sc_core::sc_in< bool > AXI_17_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_17_WDATA;
  sc_core::sc_in< bool > AXI_17_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_17_WVALID;
  sc_core::sc_in< bool > AXI_18_ACLK;
  sc_core::sc_in< bool > AXI_18_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_ARSIZE;
  sc_core::sc_in< bool > AXI_18_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_AWSIZE;
  sc_core::sc_in< bool > AXI_18_AWVALID;
  sc_core::sc_in< bool > AXI_18_RREADY;
  sc_core::sc_in< bool > AXI_18_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_18_WDATA;
  sc_core::sc_in< bool > AXI_18_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_18_WVALID;
  sc_core::sc_in< bool > AXI_19_ACLK;
  sc_core::sc_in< bool > AXI_19_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_ARSIZE;
  sc_core::sc_in< bool > AXI_19_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_AWSIZE;
  sc_core::sc_in< bool > AXI_19_AWVALID;
  sc_core::sc_in< bool > AXI_19_RREADY;
  sc_core::sc_in< bool > AXI_19_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_19_WDATA;
  sc_core::sc_in< bool > AXI_19_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_19_WVALID;
  sc_core::sc_in< bool > APB_0_PCLK;
  sc_core::sc_in< bool > APB_0_PRESET_N;
  sc_core::sc_in< bool > APB_1_PCLK;
  sc_core::sc_in< bool > APB_1_PRESET_N;
  sc_core::sc_out< bool > AXI_00_ARREADY;
  sc_core::sc_out< bool > AXI_00_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_00_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_00_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_RID;
  sc_core::sc_out< bool > AXI_00_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_RRESP;
  sc_core::sc_out< bool > AXI_00_RVALID;
  sc_core::sc_out< bool > AXI_00_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_BRESP;
  sc_core::sc_out< bool > AXI_00_BVALID;
  sc_core::sc_out< bool > AXI_01_ARREADY;
  sc_core::sc_out< bool > AXI_01_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_01_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_01_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_RID;
  sc_core::sc_out< bool > AXI_01_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_RRESP;
  sc_core::sc_out< bool > AXI_01_RVALID;
  sc_core::sc_out< bool > AXI_01_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_BRESP;
  sc_core::sc_out< bool > AXI_01_BVALID;
  sc_core::sc_out< bool > AXI_02_ARREADY;
  sc_core::sc_out< bool > AXI_02_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_02_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_02_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_RID;
  sc_core::sc_out< bool > AXI_02_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_RRESP;
  sc_core::sc_out< bool > AXI_02_RVALID;
  sc_core::sc_out< bool > AXI_02_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_BRESP;
  sc_core::sc_out< bool > AXI_02_BVALID;
  sc_core::sc_out< bool > AXI_03_ARREADY;
  sc_core::sc_out< bool > AXI_03_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_03_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_03_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_RID;
  sc_core::sc_out< bool > AXI_03_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_RRESP;
  sc_core::sc_out< bool > AXI_03_RVALID;
  sc_core::sc_out< bool > AXI_03_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_BRESP;
  sc_core::sc_out< bool > AXI_03_BVALID;
  sc_core::sc_out< bool > AXI_16_ARREADY;
  sc_core::sc_out< bool > AXI_16_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_16_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_16_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_RID;
  sc_core::sc_out< bool > AXI_16_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_RRESP;
  sc_core::sc_out< bool > AXI_16_RVALID;
  sc_core::sc_out< bool > AXI_16_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_BRESP;
  sc_core::sc_out< bool > AXI_16_BVALID;
  sc_core::sc_out< bool > AXI_17_ARREADY;
  sc_core::sc_out< bool > AXI_17_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_17_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_17_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_RID;
  sc_core::sc_out< bool > AXI_17_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_RRESP;
  sc_core::sc_out< bool > AXI_17_RVALID;
  sc_core::sc_out< bool > AXI_17_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_BRESP;
  sc_core::sc_out< bool > AXI_17_BVALID;
  sc_core::sc_out< bool > AXI_18_ARREADY;
  sc_core::sc_out< bool > AXI_18_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_18_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_18_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_RID;
  sc_core::sc_out< bool > AXI_18_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_RRESP;
  sc_core::sc_out< bool > AXI_18_RVALID;
  sc_core::sc_out< bool > AXI_18_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_BRESP;
  sc_core::sc_out< bool > AXI_18_BVALID;
  sc_core::sc_out< bool > AXI_19_ARREADY;
  sc_core::sc_out< bool > AXI_19_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_19_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_19_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_RID;
  sc_core::sc_out< bool > AXI_19_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_RRESP;
  sc_core::sc_out< bool > AXI_19_RVALID;
  sc_core::sc_out< bool > AXI_19_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_BRESP;
  sc_core::sc_out< bool > AXI_19_BVALID;
  sc_core::sc_out< bool > apb_complete_0;
  sc_core::sc_out< bool > apb_complete_1;
  sc_core::sc_out< bool > DRAM_0_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_0_STAT_TEMP;
  sc_core::sc_out< bool > DRAM_1_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_1_STAT_TEMP;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_00_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_00_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_01_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_01_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_02_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_02_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_03_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_03_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_16_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_16_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_17_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_17_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_18_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_18_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_19_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_19_transactor_rst_signal;

};
#endif // RIVIERA




#ifdef VCSSYSTEMC
#include "utils/xtlm_aximm_target_stub.h"

class DllExport u280_xdma_hbm_0_0 : public u280_xdma_hbm_0_0_sc
{
public:

  u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm);
  virtual ~u280_xdma_hbm_0_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< bool > HBM_REF_CLK_0;
  sc_core::sc_in< bool > HBM_REF_CLK_1;
  sc_core::sc_in< bool > AXI_00_ACLK;
  sc_core::sc_in< bool > AXI_00_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_ARSIZE;
  sc_core::sc_in< bool > AXI_00_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_AWSIZE;
  sc_core::sc_in< bool > AXI_00_AWVALID;
  sc_core::sc_in< bool > AXI_00_RREADY;
  sc_core::sc_in< bool > AXI_00_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_00_WDATA;
  sc_core::sc_in< bool > AXI_00_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_00_WVALID;
  sc_core::sc_in< bool > AXI_01_ACLK;
  sc_core::sc_in< bool > AXI_01_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_ARSIZE;
  sc_core::sc_in< bool > AXI_01_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_AWSIZE;
  sc_core::sc_in< bool > AXI_01_AWVALID;
  sc_core::sc_in< bool > AXI_01_RREADY;
  sc_core::sc_in< bool > AXI_01_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_01_WDATA;
  sc_core::sc_in< bool > AXI_01_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_01_WVALID;
  sc_core::sc_in< bool > AXI_02_ACLK;
  sc_core::sc_in< bool > AXI_02_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_ARSIZE;
  sc_core::sc_in< bool > AXI_02_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_AWSIZE;
  sc_core::sc_in< bool > AXI_02_AWVALID;
  sc_core::sc_in< bool > AXI_02_RREADY;
  sc_core::sc_in< bool > AXI_02_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_02_WDATA;
  sc_core::sc_in< bool > AXI_02_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_02_WVALID;
  sc_core::sc_in< bool > AXI_03_ACLK;
  sc_core::sc_in< bool > AXI_03_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_ARSIZE;
  sc_core::sc_in< bool > AXI_03_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_AWSIZE;
  sc_core::sc_in< bool > AXI_03_AWVALID;
  sc_core::sc_in< bool > AXI_03_RREADY;
  sc_core::sc_in< bool > AXI_03_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_03_WDATA;
  sc_core::sc_in< bool > AXI_03_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_03_WVALID;
  sc_core::sc_in< bool > AXI_16_ACLK;
  sc_core::sc_in< bool > AXI_16_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_ARSIZE;
  sc_core::sc_in< bool > AXI_16_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_AWSIZE;
  sc_core::sc_in< bool > AXI_16_AWVALID;
  sc_core::sc_in< bool > AXI_16_RREADY;
  sc_core::sc_in< bool > AXI_16_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_16_WDATA;
  sc_core::sc_in< bool > AXI_16_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_16_WVALID;
  sc_core::sc_in< bool > AXI_17_ACLK;
  sc_core::sc_in< bool > AXI_17_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_ARSIZE;
  sc_core::sc_in< bool > AXI_17_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_AWSIZE;
  sc_core::sc_in< bool > AXI_17_AWVALID;
  sc_core::sc_in< bool > AXI_17_RREADY;
  sc_core::sc_in< bool > AXI_17_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_17_WDATA;
  sc_core::sc_in< bool > AXI_17_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_17_WVALID;
  sc_core::sc_in< bool > AXI_18_ACLK;
  sc_core::sc_in< bool > AXI_18_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_ARSIZE;
  sc_core::sc_in< bool > AXI_18_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_AWSIZE;
  sc_core::sc_in< bool > AXI_18_AWVALID;
  sc_core::sc_in< bool > AXI_18_RREADY;
  sc_core::sc_in< bool > AXI_18_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_18_WDATA;
  sc_core::sc_in< bool > AXI_18_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_18_WVALID;
  sc_core::sc_in< bool > AXI_19_ACLK;
  sc_core::sc_in< bool > AXI_19_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_ARSIZE;
  sc_core::sc_in< bool > AXI_19_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_AWSIZE;
  sc_core::sc_in< bool > AXI_19_AWVALID;
  sc_core::sc_in< bool > AXI_19_RREADY;
  sc_core::sc_in< bool > AXI_19_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_19_WDATA;
  sc_core::sc_in< bool > AXI_19_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_19_WVALID;
  sc_core::sc_in< bool > APB_0_PCLK;
  sc_core::sc_in< bool > APB_0_PRESET_N;
  sc_core::sc_in< bool > APB_1_PCLK;
  sc_core::sc_in< bool > APB_1_PRESET_N;
  sc_core::sc_out< bool > AXI_00_ARREADY;
  sc_core::sc_out< bool > AXI_00_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_00_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_00_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_RID;
  sc_core::sc_out< bool > AXI_00_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_RRESP;
  sc_core::sc_out< bool > AXI_00_RVALID;
  sc_core::sc_out< bool > AXI_00_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_BRESP;
  sc_core::sc_out< bool > AXI_00_BVALID;
  sc_core::sc_out< bool > AXI_01_ARREADY;
  sc_core::sc_out< bool > AXI_01_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_01_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_01_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_RID;
  sc_core::sc_out< bool > AXI_01_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_RRESP;
  sc_core::sc_out< bool > AXI_01_RVALID;
  sc_core::sc_out< bool > AXI_01_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_BRESP;
  sc_core::sc_out< bool > AXI_01_BVALID;
  sc_core::sc_out< bool > AXI_02_ARREADY;
  sc_core::sc_out< bool > AXI_02_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_02_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_02_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_RID;
  sc_core::sc_out< bool > AXI_02_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_RRESP;
  sc_core::sc_out< bool > AXI_02_RVALID;
  sc_core::sc_out< bool > AXI_02_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_BRESP;
  sc_core::sc_out< bool > AXI_02_BVALID;
  sc_core::sc_out< bool > AXI_03_ARREADY;
  sc_core::sc_out< bool > AXI_03_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_03_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_03_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_RID;
  sc_core::sc_out< bool > AXI_03_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_RRESP;
  sc_core::sc_out< bool > AXI_03_RVALID;
  sc_core::sc_out< bool > AXI_03_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_BRESP;
  sc_core::sc_out< bool > AXI_03_BVALID;
  sc_core::sc_out< bool > AXI_16_ARREADY;
  sc_core::sc_out< bool > AXI_16_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_16_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_16_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_RID;
  sc_core::sc_out< bool > AXI_16_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_RRESP;
  sc_core::sc_out< bool > AXI_16_RVALID;
  sc_core::sc_out< bool > AXI_16_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_BRESP;
  sc_core::sc_out< bool > AXI_16_BVALID;
  sc_core::sc_out< bool > AXI_17_ARREADY;
  sc_core::sc_out< bool > AXI_17_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_17_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_17_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_RID;
  sc_core::sc_out< bool > AXI_17_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_RRESP;
  sc_core::sc_out< bool > AXI_17_RVALID;
  sc_core::sc_out< bool > AXI_17_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_BRESP;
  sc_core::sc_out< bool > AXI_17_BVALID;
  sc_core::sc_out< bool > AXI_18_ARREADY;
  sc_core::sc_out< bool > AXI_18_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_18_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_18_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_RID;
  sc_core::sc_out< bool > AXI_18_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_RRESP;
  sc_core::sc_out< bool > AXI_18_RVALID;
  sc_core::sc_out< bool > AXI_18_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_BRESP;
  sc_core::sc_out< bool > AXI_18_BVALID;
  sc_core::sc_out< bool > AXI_19_ARREADY;
  sc_core::sc_out< bool > AXI_19_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_19_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_19_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_RID;
  sc_core::sc_out< bool > AXI_19_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_RRESP;
  sc_core::sc_out< bool > AXI_19_RVALID;
  sc_core::sc_out< bool > AXI_19_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_BRESP;
  sc_core::sc_out< bool > AXI_19_BVALID;
  sc_core::sc_out< bool > apb_complete_0;
  sc_core::sc_out< bool > apb_complete_1;
  sc_core::sc_out< bool > DRAM_0_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_0_STAT_TEMP;
  sc_core::sc_out< bool > DRAM_1_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_1_STAT_TEMP;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_00_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_00_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_01_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_01_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_02_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_02_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_03_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_03_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_16_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_16_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_17_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_17_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_18_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_18_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_19_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_19_transactor_rst_signal;

  // Transactor stubs
  xtlm::xtlm_aximm_target_stub * SAXI_00_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_00_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_01_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_01_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_02_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_02_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_03_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_03_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_16_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_16_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_17_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_17_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_18_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_18_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_19_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_19_transactor_target_wr_socket_stub;

  // Socket stubs

};
#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
#include "utils/xtlm_aximm_target_stub.h"

class DllExport u280_xdma_hbm_0_0 : public u280_xdma_hbm_0_0_sc
{
public:

  u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm);
  virtual ~u280_xdma_hbm_0_0();

  // module pin-to-pin RTL interface

  sc_core::sc_in< bool > HBM_REF_CLK_0;
  sc_core::sc_in< bool > HBM_REF_CLK_1;
  sc_core::sc_in< bool > AXI_00_ACLK;
  sc_core::sc_in< bool > AXI_00_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_ARSIZE;
  sc_core::sc_in< bool > AXI_00_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_00_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_00_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_00_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_00_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_00_AWSIZE;
  sc_core::sc_in< bool > AXI_00_AWVALID;
  sc_core::sc_in< bool > AXI_00_RREADY;
  sc_core::sc_in< bool > AXI_00_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_00_WDATA;
  sc_core::sc_in< bool > AXI_00_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_00_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_00_WVALID;
  sc_core::sc_in< bool > AXI_01_ACLK;
  sc_core::sc_in< bool > AXI_01_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_ARSIZE;
  sc_core::sc_in< bool > AXI_01_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_01_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_01_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_01_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_01_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_01_AWSIZE;
  sc_core::sc_in< bool > AXI_01_AWVALID;
  sc_core::sc_in< bool > AXI_01_RREADY;
  sc_core::sc_in< bool > AXI_01_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_01_WDATA;
  sc_core::sc_in< bool > AXI_01_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_01_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_01_WVALID;
  sc_core::sc_in< bool > AXI_02_ACLK;
  sc_core::sc_in< bool > AXI_02_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_ARSIZE;
  sc_core::sc_in< bool > AXI_02_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_02_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_02_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_02_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_02_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_02_AWSIZE;
  sc_core::sc_in< bool > AXI_02_AWVALID;
  sc_core::sc_in< bool > AXI_02_RREADY;
  sc_core::sc_in< bool > AXI_02_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_02_WDATA;
  sc_core::sc_in< bool > AXI_02_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_02_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_02_WVALID;
  sc_core::sc_in< bool > AXI_03_ACLK;
  sc_core::sc_in< bool > AXI_03_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_ARSIZE;
  sc_core::sc_in< bool > AXI_03_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_03_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_03_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_03_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_03_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_03_AWSIZE;
  sc_core::sc_in< bool > AXI_03_AWVALID;
  sc_core::sc_in< bool > AXI_03_RREADY;
  sc_core::sc_in< bool > AXI_03_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_03_WDATA;
  sc_core::sc_in< bool > AXI_03_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_03_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_03_WVALID;
  sc_core::sc_in< bool > AXI_16_ACLK;
  sc_core::sc_in< bool > AXI_16_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_ARSIZE;
  sc_core::sc_in< bool > AXI_16_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_16_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_16_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_16_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_16_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_16_AWSIZE;
  sc_core::sc_in< bool > AXI_16_AWVALID;
  sc_core::sc_in< bool > AXI_16_RREADY;
  sc_core::sc_in< bool > AXI_16_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_16_WDATA;
  sc_core::sc_in< bool > AXI_16_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_16_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_16_WVALID;
  sc_core::sc_in< bool > AXI_17_ACLK;
  sc_core::sc_in< bool > AXI_17_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_ARSIZE;
  sc_core::sc_in< bool > AXI_17_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_17_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_17_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_17_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_17_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_17_AWSIZE;
  sc_core::sc_in< bool > AXI_17_AWVALID;
  sc_core::sc_in< bool > AXI_17_RREADY;
  sc_core::sc_in< bool > AXI_17_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_17_WDATA;
  sc_core::sc_in< bool > AXI_17_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_17_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_17_WVALID;
  sc_core::sc_in< bool > AXI_18_ACLK;
  sc_core::sc_in< bool > AXI_18_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_ARSIZE;
  sc_core::sc_in< bool > AXI_18_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_18_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_18_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_18_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_18_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_18_AWSIZE;
  sc_core::sc_in< bool > AXI_18_AWVALID;
  sc_core::sc_in< bool > AXI_18_RREADY;
  sc_core::sc_in< bool > AXI_18_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_18_WDATA;
  sc_core::sc_in< bool > AXI_18_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_18_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_18_WVALID;
  sc_core::sc_in< bool > AXI_19_ACLK;
  sc_core::sc_in< bool > AXI_19_ARESET_N;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_ARADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_ARBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_ARID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_ARLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_ARSIZE;
  sc_core::sc_in< bool > AXI_19_ARVALID;
  sc_core::sc_in< sc_dt::sc_bv<33> > AXI_19_AWADDR;
  sc_core::sc_in< sc_dt::sc_bv<2> > AXI_19_AWBURST;
  sc_core::sc_in< sc_dt::sc_bv<6> > AXI_19_AWID;
  sc_core::sc_in< sc_dt::sc_bv<4> > AXI_19_AWLEN;
  sc_core::sc_in< sc_dt::sc_bv<3> > AXI_19_AWSIZE;
  sc_core::sc_in< bool > AXI_19_AWVALID;
  sc_core::sc_in< bool > AXI_19_RREADY;
  sc_core::sc_in< bool > AXI_19_BREADY;
  sc_core::sc_in< sc_dt::sc_bv<256> > AXI_19_WDATA;
  sc_core::sc_in< bool > AXI_19_WLAST;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WSTRB;
  sc_core::sc_in< sc_dt::sc_bv<32> > AXI_19_WDATA_PARITY;
  sc_core::sc_in< bool > AXI_19_WVALID;
  sc_core::sc_in< bool > APB_0_PCLK;
  sc_core::sc_in< bool > APB_0_PRESET_N;
  sc_core::sc_in< bool > APB_1_PCLK;
  sc_core::sc_in< bool > APB_1_PRESET_N;
  sc_core::sc_out< bool > AXI_00_ARREADY;
  sc_core::sc_out< bool > AXI_00_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_00_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_00_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_RID;
  sc_core::sc_out< bool > AXI_00_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_RRESP;
  sc_core::sc_out< bool > AXI_00_RVALID;
  sc_core::sc_out< bool > AXI_00_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_00_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_00_BRESP;
  sc_core::sc_out< bool > AXI_00_BVALID;
  sc_core::sc_out< bool > AXI_01_ARREADY;
  sc_core::sc_out< bool > AXI_01_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_01_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_01_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_RID;
  sc_core::sc_out< bool > AXI_01_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_RRESP;
  sc_core::sc_out< bool > AXI_01_RVALID;
  sc_core::sc_out< bool > AXI_01_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_01_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_01_BRESP;
  sc_core::sc_out< bool > AXI_01_BVALID;
  sc_core::sc_out< bool > AXI_02_ARREADY;
  sc_core::sc_out< bool > AXI_02_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_02_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_02_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_RID;
  sc_core::sc_out< bool > AXI_02_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_RRESP;
  sc_core::sc_out< bool > AXI_02_RVALID;
  sc_core::sc_out< bool > AXI_02_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_02_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_02_BRESP;
  sc_core::sc_out< bool > AXI_02_BVALID;
  sc_core::sc_out< bool > AXI_03_ARREADY;
  sc_core::sc_out< bool > AXI_03_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_03_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_03_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_RID;
  sc_core::sc_out< bool > AXI_03_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_RRESP;
  sc_core::sc_out< bool > AXI_03_RVALID;
  sc_core::sc_out< bool > AXI_03_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_03_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_03_BRESP;
  sc_core::sc_out< bool > AXI_03_BVALID;
  sc_core::sc_out< bool > AXI_16_ARREADY;
  sc_core::sc_out< bool > AXI_16_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_16_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_16_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_RID;
  sc_core::sc_out< bool > AXI_16_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_RRESP;
  sc_core::sc_out< bool > AXI_16_RVALID;
  sc_core::sc_out< bool > AXI_16_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_16_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_16_BRESP;
  sc_core::sc_out< bool > AXI_16_BVALID;
  sc_core::sc_out< bool > AXI_17_ARREADY;
  sc_core::sc_out< bool > AXI_17_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_17_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_17_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_RID;
  sc_core::sc_out< bool > AXI_17_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_RRESP;
  sc_core::sc_out< bool > AXI_17_RVALID;
  sc_core::sc_out< bool > AXI_17_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_17_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_17_BRESP;
  sc_core::sc_out< bool > AXI_17_BVALID;
  sc_core::sc_out< bool > AXI_18_ARREADY;
  sc_core::sc_out< bool > AXI_18_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_18_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_18_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_RID;
  sc_core::sc_out< bool > AXI_18_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_RRESP;
  sc_core::sc_out< bool > AXI_18_RVALID;
  sc_core::sc_out< bool > AXI_18_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_18_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_18_BRESP;
  sc_core::sc_out< bool > AXI_18_BVALID;
  sc_core::sc_out< bool > AXI_19_ARREADY;
  sc_core::sc_out< bool > AXI_19_AWREADY;
  sc_core::sc_out< sc_dt::sc_bv<32> > AXI_19_RDATA_PARITY;
  sc_core::sc_out< sc_dt::sc_bv<256> > AXI_19_RDATA;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_RID;
  sc_core::sc_out< bool > AXI_19_RLAST;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_RRESP;
  sc_core::sc_out< bool > AXI_19_RVALID;
  sc_core::sc_out< bool > AXI_19_WREADY;
  sc_core::sc_out< sc_dt::sc_bv<6> > AXI_19_BID;
  sc_core::sc_out< sc_dt::sc_bv<2> > AXI_19_BRESP;
  sc_core::sc_out< bool > AXI_19_BVALID;
  sc_core::sc_out< bool > apb_complete_0;
  sc_core::sc_out< bool > apb_complete_1;
  sc_core::sc_out< bool > DRAM_0_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_0_STAT_TEMP;
  sc_core::sc_out< bool > DRAM_1_STAT_CATTRIP;
  sc_core::sc_out< sc_dt::sc_bv<7> > DRAM_1_STAT_TEMP;

  // Dummy Signals for IP Ports


protected:

  virtual void before_end_of_elaboration();

private:

  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_00_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_00_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_00_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_00_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_01_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_01_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_01_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_01_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_02_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_02_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_02_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_02_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_03_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_03_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_03_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_03_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_16_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_16_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_16_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_16_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_17_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_17_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_17_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_17_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_18_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_18_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_18_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_18_transactor_rst_signal;
  xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>* mp_SAXI_19_transactor;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_ARLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_ARLEN_converter_signal;
  xsc::common::vector2vector_converter<4,8>* mp_AXI_19_AWLEN_converter;
  sc_signal< sc_bv<8> > m_AXI_19_AWLEN_converter_signal;
  sc_signal< bool > m_SAXI_19_transactor_rst_signal;

  // Transactor stubs
  xtlm::xtlm_aximm_target_stub * SAXI_00_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_00_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_01_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_01_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_02_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_02_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_03_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_03_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_16_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_16_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_17_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_17_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_18_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_18_transactor_target_wr_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_19_transactor_target_rd_socket_stub;
  xtlm::xtlm_aximm_target_stub * SAXI_19_transactor_target_wr_socket_stub;

  // Socket stubs

};
#endif // MTI_SYSTEMC
#endif // IP_U280_XDMA_HBM_0_0_H_
