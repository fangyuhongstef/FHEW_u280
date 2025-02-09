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


//------------------------------------------------------------------------------------
// Filename:    u280_xdma_hbm_0_0_stub.sv
// Description: This HDL file is intended to be used with following simulators only:
//
//   Vivado Simulator (XSim)
//   Cadence Xcelium Simulator
//
//------------------------------------------------------------------------------------
`timescale 1ps/1ps

`ifdef XILINX_SIMULATOR

`ifndef XILINX_SIMULATOR_BITASBOOL
`define XILINX_SIMULATOR_BITASBOOL
typedef bit bit_as_bool;
`endif

(* SC_MODULE_EXPORT *)
module u280_xdma_hbm_0_0 (
  input bit_as_bool HBM_REF_CLK_0,
  input bit_as_bool HBM_REF_CLK_1,
  input bit_as_bool AXI_00_ACLK,
  input bit_as_bool AXI_00_ARESET_N,
  input bit [32 : 0] AXI_00_ARADDR,
  input bit [1 : 0] AXI_00_ARBURST,
  input bit [5 : 0] AXI_00_ARID,
  input bit [3 : 0] AXI_00_ARLEN,
  input bit [2 : 0] AXI_00_ARSIZE,
  input bit_as_bool AXI_00_ARVALID,
  input bit [32 : 0] AXI_00_AWADDR,
  input bit [1 : 0] AXI_00_AWBURST,
  input bit [5 : 0] AXI_00_AWID,
  input bit [3 : 0] AXI_00_AWLEN,
  input bit [2 : 0] AXI_00_AWSIZE,
  input bit_as_bool AXI_00_AWVALID,
  input bit_as_bool AXI_00_RREADY,
  input bit_as_bool AXI_00_BREADY,
  input bit [255 : 0] AXI_00_WDATA,
  input bit_as_bool AXI_00_WLAST,
  input bit [31 : 0] AXI_00_WSTRB,
  input bit [31 : 0] AXI_00_WDATA_PARITY,
  input bit_as_bool AXI_00_WVALID,
  input bit_as_bool AXI_01_ACLK,
  input bit_as_bool AXI_01_ARESET_N,
  input bit [32 : 0] AXI_01_ARADDR,
  input bit [1 : 0] AXI_01_ARBURST,
  input bit [5 : 0] AXI_01_ARID,
  input bit [3 : 0] AXI_01_ARLEN,
  input bit [2 : 0] AXI_01_ARSIZE,
  input bit_as_bool AXI_01_ARVALID,
  input bit [32 : 0] AXI_01_AWADDR,
  input bit [1 : 0] AXI_01_AWBURST,
  input bit [5 : 0] AXI_01_AWID,
  input bit [3 : 0] AXI_01_AWLEN,
  input bit [2 : 0] AXI_01_AWSIZE,
  input bit_as_bool AXI_01_AWVALID,
  input bit_as_bool AXI_01_RREADY,
  input bit_as_bool AXI_01_BREADY,
  input bit [255 : 0] AXI_01_WDATA,
  input bit_as_bool AXI_01_WLAST,
  input bit [31 : 0] AXI_01_WSTRB,
  input bit [31 : 0] AXI_01_WDATA_PARITY,
  input bit_as_bool AXI_01_WVALID,
  input bit_as_bool AXI_02_ACLK,
  input bit_as_bool AXI_02_ARESET_N,
  input bit [32 : 0] AXI_02_ARADDR,
  input bit [1 : 0] AXI_02_ARBURST,
  input bit [5 : 0] AXI_02_ARID,
  input bit [3 : 0] AXI_02_ARLEN,
  input bit [2 : 0] AXI_02_ARSIZE,
  input bit_as_bool AXI_02_ARVALID,
  input bit [32 : 0] AXI_02_AWADDR,
  input bit [1 : 0] AXI_02_AWBURST,
  input bit [5 : 0] AXI_02_AWID,
  input bit [3 : 0] AXI_02_AWLEN,
  input bit [2 : 0] AXI_02_AWSIZE,
  input bit_as_bool AXI_02_AWVALID,
  input bit_as_bool AXI_02_RREADY,
  input bit_as_bool AXI_02_BREADY,
  input bit [255 : 0] AXI_02_WDATA,
  input bit_as_bool AXI_02_WLAST,
  input bit [31 : 0] AXI_02_WSTRB,
  input bit [31 : 0] AXI_02_WDATA_PARITY,
  input bit_as_bool AXI_02_WVALID,
  input bit_as_bool AXI_03_ACLK,
  input bit_as_bool AXI_03_ARESET_N,
  input bit [32 : 0] AXI_03_ARADDR,
  input bit [1 : 0] AXI_03_ARBURST,
  input bit [5 : 0] AXI_03_ARID,
  input bit [3 : 0] AXI_03_ARLEN,
  input bit [2 : 0] AXI_03_ARSIZE,
  input bit_as_bool AXI_03_ARVALID,
  input bit [32 : 0] AXI_03_AWADDR,
  input bit [1 : 0] AXI_03_AWBURST,
  input bit [5 : 0] AXI_03_AWID,
  input bit [3 : 0] AXI_03_AWLEN,
  input bit [2 : 0] AXI_03_AWSIZE,
  input bit_as_bool AXI_03_AWVALID,
  input bit_as_bool AXI_03_RREADY,
  input bit_as_bool AXI_03_BREADY,
  input bit [255 : 0] AXI_03_WDATA,
  input bit_as_bool AXI_03_WLAST,
  input bit [31 : 0] AXI_03_WSTRB,
  input bit [31 : 0] AXI_03_WDATA_PARITY,
  input bit_as_bool AXI_03_WVALID,
  input bit_as_bool AXI_16_ACLK,
  input bit_as_bool AXI_16_ARESET_N,
  input bit [32 : 0] AXI_16_ARADDR,
  input bit [1 : 0] AXI_16_ARBURST,
  input bit [5 : 0] AXI_16_ARID,
  input bit [3 : 0] AXI_16_ARLEN,
  input bit [2 : 0] AXI_16_ARSIZE,
  input bit_as_bool AXI_16_ARVALID,
  input bit [32 : 0] AXI_16_AWADDR,
  input bit [1 : 0] AXI_16_AWBURST,
  input bit [5 : 0] AXI_16_AWID,
  input bit [3 : 0] AXI_16_AWLEN,
  input bit [2 : 0] AXI_16_AWSIZE,
  input bit_as_bool AXI_16_AWVALID,
  input bit_as_bool AXI_16_RREADY,
  input bit_as_bool AXI_16_BREADY,
  input bit [255 : 0] AXI_16_WDATA,
  input bit_as_bool AXI_16_WLAST,
  input bit [31 : 0] AXI_16_WSTRB,
  input bit [31 : 0] AXI_16_WDATA_PARITY,
  input bit_as_bool AXI_16_WVALID,
  input bit_as_bool AXI_17_ACLK,
  input bit_as_bool AXI_17_ARESET_N,
  input bit [32 : 0] AXI_17_ARADDR,
  input bit [1 : 0] AXI_17_ARBURST,
  input bit [5 : 0] AXI_17_ARID,
  input bit [3 : 0] AXI_17_ARLEN,
  input bit [2 : 0] AXI_17_ARSIZE,
  input bit_as_bool AXI_17_ARVALID,
  input bit [32 : 0] AXI_17_AWADDR,
  input bit [1 : 0] AXI_17_AWBURST,
  input bit [5 : 0] AXI_17_AWID,
  input bit [3 : 0] AXI_17_AWLEN,
  input bit [2 : 0] AXI_17_AWSIZE,
  input bit_as_bool AXI_17_AWVALID,
  input bit_as_bool AXI_17_RREADY,
  input bit_as_bool AXI_17_BREADY,
  input bit [255 : 0] AXI_17_WDATA,
  input bit_as_bool AXI_17_WLAST,
  input bit [31 : 0] AXI_17_WSTRB,
  input bit [31 : 0] AXI_17_WDATA_PARITY,
  input bit_as_bool AXI_17_WVALID,
  input bit_as_bool AXI_18_ACLK,
  input bit_as_bool AXI_18_ARESET_N,
  input bit [32 : 0] AXI_18_ARADDR,
  input bit [1 : 0] AXI_18_ARBURST,
  input bit [5 : 0] AXI_18_ARID,
  input bit [3 : 0] AXI_18_ARLEN,
  input bit [2 : 0] AXI_18_ARSIZE,
  input bit_as_bool AXI_18_ARVALID,
  input bit [32 : 0] AXI_18_AWADDR,
  input bit [1 : 0] AXI_18_AWBURST,
  input bit [5 : 0] AXI_18_AWID,
  input bit [3 : 0] AXI_18_AWLEN,
  input bit [2 : 0] AXI_18_AWSIZE,
  input bit_as_bool AXI_18_AWVALID,
  input bit_as_bool AXI_18_RREADY,
  input bit_as_bool AXI_18_BREADY,
  input bit [255 : 0] AXI_18_WDATA,
  input bit_as_bool AXI_18_WLAST,
  input bit [31 : 0] AXI_18_WSTRB,
  input bit [31 : 0] AXI_18_WDATA_PARITY,
  input bit_as_bool AXI_18_WVALID,
  input bit_as_bool AXI_19_ACLK,
  input bit_as_bool AXI_19_ARESET_N,
  input bit [32 : 0] AXI_19_ARADDR,
  input bit [1 : 0] AXI_19_ARBURST,
  input bit [5 : 0] AXI_19_ARID,
  input bit [3 : 0] AXI_19_ARLEN,
  input bit [2 : 0] AXI_19_ARSIZE,
  input bit_as_bool AXI_19_ARVALID,
  input bit [32 : 0] AXI_19_AWADDR,
  input bit [1 : 0] AXI_19_AWBURST,
  input bit [5 : 0] AXI_19_AWID,
  input bit [3 : 0] AXI_19_AWLEN,
  input bit [2 : 0] AXI_19_AWSIZE,
  input bit_as_bool AXI_19_AWVALID,
  input bit_as_bool AXI_19_RREADY,
  input bit_as_bool AXI_19_BREADY,
  input bit [255 : 0] AXI_19_WDATA,
  input bit_as_bool AXI_19_WLAST,
  input bit [31 : 0] AXI_19_WSTRB,
  input bit [31 : 0] AXI_19_WDATA_PARITY,
  input bit_as_bool AXI_19_WVALID,
  input bit_as_bool APB_0_PCLK,
  input bit_as_bool APB_0_PRESET_N,
  input bit_as_bool APB_1_PCLK,
  input bit_as_bool APB_1_PRESET_N,
  output bit_as_bool AXI_00_ARREADY,
  output bit_as_bool AXI_00_AWREADY,
  output bit [31 : 0] AXI_00_RDATA_PARITY,
  output bit [255 : 0] AXI_00_RDATA,
  output bit [5 : 0] AXI_00_RID,
  output bit_as_bool AXI_00_RLAST,
  output bit [1 : 0] AXI_00_RRESP,
  output bit_as_bool AXI_00_RVALID,
  output bit_as_bool AXI_00_WREADY,
  output bit [5 : 0] AXI_00_BID,
  output bit [1 : 0] AXI_00_BRESP,
  output bit_as_bool AXI_00_BVALID,
  output bit_as_bool AXI_01_ARREADY,
  output bit_as_bool AXI_01_AWREADY,
  output bit [31 : 0] AXI_01_RDATA_PARITY,
  output bit [255 : 0] AXI_01_RDATA,
  output bit [5 : 0] AXI_01_RID,
  output bit_as_bool AXI_01_RLAST,
  output bit [1 : 0] AXI_01_RRESP,
  output bit_as_bool AXI_01_RVALID,
  output bit_as_bool AXI_01_WREADY,
  output bit [5 : 0] AXI_01_BID,
  output bit [1 : 0] AXI_01_BRESP,
  output bit_as_bool AXI_01_BVALID,
  output bit_as_bool AXI_02_ARREADY,
  output bit_as_bool AXI_02_AWREADY,
  output bit [31 : 0] AXI_02_RDATA_PARITY,
  output bit [255 : 0] AXI_02_RDATA,
  output bit [5 : 0] AXI_02_RID,
  output bit_as_bool AXI_02_RLAST,
  output bit [1 : 0] AXI_02_RRESP,
  output bit_as_bool AXI_02_RVALID,
  output bit_as_bool AXI_02_WREADY,
  output bit [5 : 0] AXI_02_BID,
  output bit [1 : 0] AXI_02_BRESP,
  output bit_as_bool AXI_02_BVALID,
  output bit_as_bool AXI_03_ARREADY,
  output bit_as_bool AXI_03_AWREADY,
  output bit [31 : 0] AXI_03_RDATA_PARITY,
  output bit [255 : 0] AXI_03_RDATA,
  output bit [5 : 0] AXI_03_RID,
  output bit_as_bool AXI_03_RLAST,
  output bit [1 : 0] AXI_03_RRESP,
  output bit_as_bool AXI_03_RVALID,
  output bit_as_bool AXI_03_WREADY,
  output bit [5 : 0] AXI_03_BID,
  output bit [1 : 0] AXI_03_BRESP,
  output bit_as_bool AXI_03_BVALID,
  output bit_as_bool AXI_16_ARREADY,
  output bit_as_bool AXI_16_AWREADY,
  output bit [31 : 0] AXI_16_RDATA_PARITY,
  output bit [255 : 0] AXI_16_RDATA,
  output bit [5 : 0] AXI_16_RID,
  output bit_as_bool AXI_16_RLAST,
  output bit [1 : 0] AXI_16_RRESP,
  output bit_as_bool AXI_16_RVALID,
  output bit_as_bool AXI_16_WREADY,
  output bit [5 : 0] AXI_16_BID,
  output bit [1 : 0] AXI_16_BRESP,
  output bit_as_bool AXI_16_BVALID,
  output bit_as_bool AXI_17_ARREADY,
  output bit_as_bool AXI_17_AWREADY,
  output bit [31 : 0] AXI_17_RDATA_PARITY,
  output bit [255 : 0] AXI_17_RDATA,
  output bit [5 : 0] AXI_17_RID,
  output bit_as_bool AXI_17_RLAST,
  output bit [1 : 0] AXI_17_RRESP,
  output bit_as_bool AXI_17_RVALID,
  output bit_as_bool AXI_17_WREADY,
  output bit [5 : 0] AXI_17_BID,
  output bit [1 : 0] AXI_17_BRESP,
  output bit_as_bool AXI_17_BVALID,
  output bit_as_bool AXI_18_ARREADY,
  output bit_as_bool AXI_18_AWREADY,
  output bit [31 : 0] AXI_18_RDATA_PARITY,
  output bit [255 : 0] AXI_18_RDATA,
  output bit [5 : 0] AXI_18_RID,
  output bit_as_bool AXI_18_RLAST,
  output bit [1 : 0] AXI_18_RRESP,
  output bit_as_bool AXI_18_RVALID,
  output bit_as_bool AXI_18_WREADY,
  output bit [5 : 0] AXI_18_BID,
  output bit [1 : 0] AXI_18_BRESP,
  output bit_as_bool AXI_18_BVALID,
  output bit_as_bool AXI_19_ARREADY,
  output bit_as_bool AXI_19_AWREADY,
  output bit [31 : 0] AXI_19_RDATA_PARITY,
  output bit [255 : 0] AXI_19_RDATA,
  output bit [5 : 0] AXI_19_RID,
  output bit_as_bool AXI_19_RLAST,
  output bit [1 : 0] AXI_19_RRESP,
  output bit_as_bool AXI_19_RVALID,
  output bit_as_bool AXI_19_WREADY,
  output bit [5 : 0] AXI_19_BID,
  output bit [1 : 0] AXI_19_BRESP,
  output bit_as_bool AXI_19_BVALID,
  output bit_as_bool apb_complete_0,
  output bit_as_bool apb_complete_1,
  output bit_as_bool DRAM_0_STAT_CATTRIP,
  output bit [6 : 0] DRAM_0_STAT_TEMP,
  output bit_as_bool DRAM_1_STAT_CATTRIP,
  output bit [6 : 0] DRAM_1_STAT_TEMP
);
endmodule
`endif

`ifdef XCELIUM
(* XMSC_MODULE_EXPORT *)
module u280_xdma_hbm_0_0 (HBM_REF_CLK_0,HBM_REF_CLK_1,AXI_00_ACLK,AXI_00_ARESET_N,AXI_00_ARADDR,AXI_00_ARBURST,AXI_00_ARID,AXI_00_ARLEN,AXI_00_ARSIZE,AXI_00_ARVALID,AXI_00_AWADDR,AXI_00_AWBURST,AXI_00_AWID,AXI_00_AWLEN,AXI_00_AWSIZE,AXI_00_AWVALID,AXI_00_RREADY,AXI_00_BREADY,AXI_00_WDATA,AXI_00_WLAST,AXI_00_WSTRB,AXI_00_WDATA_PARITY,AXI_00_WVALID,AXI_01_ACLK,AXI_01_ARESET_N,AXI_01_ARADDR,AXI_01_ARBURST,AXI_01_ARID,AXI_01_ARLEN,AXI_01_ARSIZE,AXI_01_ARVALID,AXI_01_AWADDR,AXI_01_AWBURST,AXI_01_AWID,AXI_01_AWLEN,AXI_01_AWSIZE,AXI_01_AWVALID,AXI_01_RREADY,AXI_01_BREADY,AXI_01_WDATA,AXI_01_WLAST,AXI_01_WSTRB,AXI_01_WDATA_PARITY,AXI_01_WVALID,AXI_02_ACLK,AXI_02_ARESET_N,AXI_02_ARADDR,AXI_02_ARBURST,AXI_02_ARID,AXI_02_ARLEN,AXI_02_ARSIZE,AXI_02_ARVALID,AXI_02_AWADDR,AXI_02_AWBURST,AXI_02_AWID,AXI_02_AWLEN,AXI_02_AWSIZE,AXI_02_AWVALID,AXI_02_RREADY,AXI_02_BREADY,AXI_02_WDATA,AXI_02_WLAST,AXI_02_WSTRB,AXI_02_WDATA_PARITY,AXI_02_WVALID,AXI_03_ACLK,AXI_03_ARESET_N,AXI_03_ARADDR,AXI_03_ARBURST,AXI_03_ARID,AXI_03_ARLEN,AXI_03_ARSIZE,AXI_03_ARVALID,AXI_03_AWADDR,AXI_03_AWBURST,AXI_03_AWID,AXI_03_AWLEN,AXI_03_AWSIZE,AXI_03_AWVALID,AXI_03_RREADY,AXI_03_BREADY,AXI_03_WDATA,AXI_03_WLAST,AXI_03_WSTRB,AXI_03_WDATA_PARITY,AXI_03_WVALID,AXI_16_ACLK,AXI_16_ARESET_N,AXI_16_ARADDR,AXI_16_ARBURST,AXI_16_ARID,AXI_16_ARLEN,AXI_16_ARSIZE,AXI_16_ARVALID,AXI_16_AWADDR,AXI_16_AWBURST,AXI_16_AWID,AXI_16_AWLEN,AXI_16_AWSIZE,AXI_16_AWVALID,AXI_16_RREADY,AXI_16_BREADY,AXI_16_WDATA,AXI_16_WLAST,AXI_16_WSTRB,AXI_16_WDATA_PARITY,AXI_16_WVALID,AXI_17_ACLK,AXI_17_ARESET_N,AXI_17_ARADDR,AXI_17_ARBURST,AXI_17_ARID,AXI_17_ARLEN,AXI_17_ARSIZE,AXI_17_ARVALID,AXI_17_AWADDR,AXI_17_AWBURST,AXI_17_AWID,AXI_17_AWLEN,AXI_17_AWSIZE,AXI_17_AWVALID,AXI_17_RREADY,AXI_17_BREADY,AXI_17_WDATA,AXI_17_WLAST,AXI_17_WSTRB,AXI_17_WDATA_PARITY,AXI_17_WVALID,AXI_18_ACLK,AXI_18_ARESET_N,AXI_18_ARADDR,AXI_18_ARBURST,AXI_18_ARID,AXI_18_ARLEN,AXI_18_ARSIZE,AXI_18_ARVALID,AXI_18_AWADDR,AXI_18_AWBURST,AXI_18_AWID,AXI_18_AWLEN,AXI_18_AWSIZE,AXI_18_AWVALID,AXI_18_RREADY,AXI_18_BREADY,AXI_18_WDATA,AXI_18_WLAST,AXI_18_WSTRB,AXI_18_WDATA_PARITY,AXI_18_WVALID,AXI_19_ACLK,AXI_19_ARESET_N,AXI_19_ARADDR,AXI_19_ARBURST,AXI_19_ARID,AXI_19_ARLEN,AXI_19_ARSIZE,AXI_19_ARVALID,AXI_19_AWADDR,AXI_19_AWBURST,AXI_19_AWID,AXI_19_AWLEN,AXI_19_AWSIZE,AXI_19_AWVALID,AXI_19_RREADY,AXI_19_BREADY,AXI_19_WDATA,AXI_19_WLAST,AXI_19_WSTRB,AXI_19_WDATA_PARITY,AXI_19_WVALID,APB_0_PCLK,APB_0_PRESET_N,APB_1_PCLK,APB_1_PRESET_N,AXI_00_ARREADY,AXI_00_AWREADY,AXI_00_RDATA_PARITY,AXI_00_RDATA,AXI_00_RID,AXI_00_RLAST,AXI_00_RRESP,AXI_00_RVALID,AXI_00_WREADY,AXI_00_BID,AXI_00_BRESP,AXI_00_BVALID,AXI_01_ARREADY,AXI_01_AWREADY,AXI_01_RDATA_PARITY,AXI_01_RDATA,AXI_01_RID,AXI_01_RLAST,AXI_01_RRESP,AXI_01_RVALID,AXI_01_WREADY,AXI_01_BID,AXI_01_BRESP,AXI_01_BVALID,AXI_02_ARREADY,AXI_02_AWREADY,AXI_02_RDATA_PARITY,AXI_02_RDATA,AXI_02_RID,AXI_02_RLAST,AXI_02_RRESP,AXI_02_RVALID,AXI_02_WREADY,AXI_02_BID,AXI_02_BRESP,AXI_02_BVALID,AXI_03_ARREADY,AXI_03_AWREADY,AXI_03_RDATA_PARITY,AXI_03_RDATA,AXI_03_RID,AXI_03_RLAST,AXI_03_RRESP,AXI_03_RVALID,AXI_03_WREADY,AXI_03_BID,AXI_03_BRESP,AXI_03_BVALID,AXI_16_ARREADY,AXI_16_AWREADY,AXI_16_RDATA_PARITY,AXI_16_RDATA,AXI_16_RID,AXI_16_RLAST,AXI_16_RRESP,AXI_16_RVALID,AXI_16_WREADY,AXI_16_BID,AXI_16_BRESP,AXI_16_BVALID,AXI_17_ARREADY,AXI_17_AWREADY,AXI_17_RDATA_PARITY,AXI_17_RDATA,AXI_17_RID,AXI_17_RLAST,AXI_17_RRESP,AXI_17_RVALID,AXI_17_WREADY,AXI_17_BID,AXI_17_BRESP,AXI_17_BVALID,AXI_18_ARREADY,AXI_18_AWREADY,AXI_18_RDATA_PARITY,AXI_18_RDATA,AXI_18_RID,AXI_18_RLAST,AXI_18_RRESP,AXI_18_RVALID,AXI_18_WREADY,AXI_18_BID,AXI_18_BRESP,AXI_18_BVALID,AXI_19_ARREADY,AXI_19_AWREADY,AXI_19_RDATA_PARITY,AXI_19_RDATA,AXI_19_RID,AXI_19_RLAST,AXI_19_RRESP,AXI_19_RVALID,AXI_19_WREADY,AXI_19_BID,AXI_19_BRESP,AXI_19_BVALID,apb_complete_0,apb_complete_1,DRAM_0_STAT_CATTRIP,DRAM_0_STAT_TEMP,DRAM_1_STAT_CATTRIP,DRAM_1_STAT_TEMP)
(* integer foreign = "SystemC";
*);
  input bit HBM_REF_CLK_0;
  input bit HBM_REF_CLK_1;
  input bit AXI_00_ACLK;
  input bit AXI_00_ARESET_N;
  input bit [32 : 0] AXI_00_ARADDR;
  input bit [1 : 0] AXI_00_ARBURST;
  input bit [5 : 0] AXI_00_ARID;
  input bit [3 : 0] AXI_00_ARLEN;
  input bit [2 : 0] AXI_00_ARSIZE;
  input bit AXI_00_ARVALID;
  input bit [32 : 0] AXI_00_AWADDR;
  input bit [1 : 0] AXI_00_AWBURST;
  input bit [5 : 0] AXI_00_AWID;
  input bit [3 : 0] AXI_00_AWLEN;
  input bit [2 : 0] AXI_00_AWSIZE;
  input bit AXI_00_AWVALID;
  input bit AXI_00_RREADY;
  input bit AXI_00_BREADY;
  input bit [255 : 0] AXI_00_WDATA;
  input bit AXI_00_WLAST;
  input bit [31 : 0] AXI_00_WSTRB;
  input bit [31 : 0] AXI_00_WDATA_PARITY;
  input bit AXI_00_WVALID;
  input bit AXI_01_ACLK;
  input bit AXI_01_ARESET_N;
  input bit [32 : 0] AXI_01_ARADDR;
  input bit [1 : 0] AXI_01_ARBURST;
  input bit [5 : 0] AXI_01_ARID;
  input bit [3 : 0] AXI_01_ARLEN;
  input bit [2 : 0] AXI_01_ARSIZE;
  input bit AXI_01_ARVALID;
  input bit [32 : 0] AXI_01_AWADDR;
  input bit [1 : 0] AXI_01_AWBURST;
  input bit [5 : 0] AXI_01_AWID;
  input bit [3 : 0] AXI_01_AWLEN;
  input bit [2 : 0] AXI_01_AWSIZE;
  input bit AXI_01_AWVALID;
  input bit AXI_01_RREADY;
  input bit AXI_01_BREADY;
  input bit [255 : 0] AXI_01_WDATA;
  input bit AXI_01_WLAST;
  input bit [31 : 0] AXI_01_WSTRB;
  input bit [31 : 0] AXI_01_WDATA_PARITY;
  input bit AXI_01_WVALID;
  input bit AXI_02_ACLK;
  input bit AXI_02_ARESET_N;
  input bit [32 : 0] AXI_02_ARADDR;
  input bit [1 : 0] AXI_02_ARBURST;
  input bit [5 : 0] AXI_02_ARID;
  input bit [3 : 0] AXI_02_ARLEN;
  input bit [2 : 0] AXI_02_ARSIZE;
  input bit AXI_02_ARVALID;
  input bit [32 : 0] AXI_02_AWADDR;
  input bit [1 : 0] AXI_02_AWBURST;
  input bit [5 : 0] AXI_02_AWID;
  input bit [3 : 0] AXI_02_AWLEN;
  input bit [2 : 0] AXI_02_AWSIZE;
  input bit AXI_02_AWVALID;
  input bit AXI_02_RREADY;
  input bit AXI_02_BREADY;
  input bit [255 : 0] AXI_02_WDATA;
  input bit AXI_02_WLAST;
  input bit [31 : 0] AXI_02_WSTRB;
  input bit [31 : 0] AXI_02_WDATA_PARITY;
  input bit AXI_02_WVALID;
  input bit AXI_03_ACLK;
  input bit AXI_03_ARESET_N;
  input bit [32 : 0] AXI_03_ARADDR;
  input bit [1 : 0] AXI_03_ARBURST;
  input bit [5 : 0] AXI_03_ARID;
  input bit [3 : 0] AXI_03_ARLEN;
  input bit [2 : 0] AXI_03_ARSIZE;
  input bit AXI_03_ARVALID;
  input bit [32 : 0] AXI_03_AWADDR;
  input bit [1 : 0] AXI_03_AWBURST;
  input bit [5 : 0] AXI_03_AWID;
  input bit [3 : 0] AXI_03_AWLEN;
  input bit [2 : 0] AXI_03_AWSIZE;
  input bit AXI_03_AWVALID;
  input bit AXI_03_RREADY;
  input bit AXI_03_BREADY;
  input bit [255 : 0] AXI_03_WDATA;
  input bit AXI_03_WLAST;
  input bit [31 : 0] AXI_03_WSTRB;
  input bit [31 : 0] AXI_03_WDATA_PARITY;
  input bit AXI_03_WVALID;
  input bit AXI_16_ACLK;
  input bit AXI_16_ARESET_N;
  input bit [32 : 0] AXI_16_ARADDR;
  input bit [1 : 0] AXI_16_ARBURST;
  input bit [5 : 0] AXI_16_ARID;
  input bit [3 : 0] AXI_16_ARLEN;
  input bit [2 : 0] AXI_16_ARSIZE;
  input bit AXI_16_ARVALID;
  input bit [32 : 0] AXI_16_AWADDR;
  input bit [1 : 0] AXI_16_AWBURST;
  input bit [5 : 0] AXI_16_AWID;
  input bit [3 : 0] AXI_16_AWLEN;
  input bit [2 : 0] AXI_16_AWSIZE;
  input bit AXI_16_AWVALID;
  input bit AXI_16_RREADY;
  input bit AXI_16_BREADY;
  input bit [255 : 0] AXI_16_WDATA;
  input bit AXI_16_WLAST;
  input bit [31 : 0] AXI_16_WSTRB;
  input bit [31 : 0] AXI_16_WDATA_PARITY;
  input bit AXI_16_WVALID;
  input bit AXI_17_ACLK;
  input bit AXI_17_ARESET_N;
  input bit [32 : 0] AXI_17_ARADDR;
  input bit [1 : 0] AXI_17_ARBURST;
  input bit [5 : 0] AXI_17_ARID;
  input bit [3 : 0] AXI_17_ARLEN;
  input bit [2 : 0] AXI_17_ARSIZE;
  input bit AXI_17_ARVALID;
  input bit [32 : 0] AXI_17_AWADDR;
  input bit [1 : 0] AXI_17_AWBURST;
  input bit [5 : 0] AXI_17_AWID;
  input bit [3 : 0] AXI_17_AWLEN;
  input bit [2 : 0] AXI_17_AWSIZE;
  input bit AXI_17_AWVALID;
  input bit AXI_17_RREADY;
  input bit AXI_17_BREADY;
  input bit [255 : 0] AXI_17_WDATA;
  input bit AXI_17_WLAST;
  input bit [31 : 0] AXI_17_WSTRB;
  input bit [31 : 0] AXI_17_WDATA_PARITY;
  input bit AXI_17_WVALID;
  input bit AXI_18_ACLK;
  input bit AXI_18_ARESET_N;
  input bit [32 : 0] AXI_18_ARADDR;
  input bit [1 : 0] AXI_18_ARBURST;
  input bit [5 : 0] AXI_18_ARID;
  input bit [3 : 0] AXI_18_ARLEN;
  input bit [2 : 0] AXI_18_ARSIZE;
  input bit AXI_18_ARVALID;
  input bit [32 : 0] AXI_18_AWADDR;
  input bit [1 : 0] AXI_18_AWBURST;
  input bit [5 : 0] AXI_18_AWID;
  input bit [3 : 0] AXI_18_AWLEN;
  input bit [2 : 0] AXI_18_AWSIZE;
  input bit AXI_18_AWVALID;
  input bit AXI_18_RREADY;
  input bit AXI_18_BREADY;
  input bit [255 : 0] AXI_18_WDATA;
  input bit AXI_18_WLAST;
  input bit [31 : 0] AXI_18_WSTRB;
  input bit [31 : 0] AXI_18_WDATA_PARITY;
  input bit AXI_18_WVALID;
  input bit AXI_19_ACLK;
  input bit AXI_19_ARESET_N;
  input bit [32 : 0] AXI_19_ARADDR;
  input bit [1 : 0] AXI_19_ARBURST;
  input bit [5 : 0] AXI_19_ARID;
  input bit [3 : 0] AXI_19_ARLEN;
  input bit [2 : 0] AXI_19_ARSIZE;
  input bit AXI_19_ARVALID;
  input bit [32 : 0] AXI_19_AWADDR;
  input bit [1 : 0] AXI_19_AWBURST;
  input bit [5 : 0] AXI_19_AWID;
  input bit [3 : 0] AXI_19_AWLEN;
  input bit [2 : 0] AXI_19_AWSIZE;
  input bit AXI_19_AWVALID;
  input bit AXI_19_RREADY;
  input bit AXI_19_BREADY;
  input bit [255 : 0] AXI_19_WDATA;
  input bit AXI_19_WLAST;
  input bit [31 : 0] AXI_19_WSTRB;
  input bit [31 : 0] AXI_19_WDATA_PARITY;
  input bit AXI_19_WVALID;
  input bit APB_0_PCLK;
  input bit APB_0_PRESET_N;
  input bit APB_1_PCLK;
  input bit APB_1_PRESET_N;
  output wire AXI_00_ARREADY;
  output wire AXI_00_AWREADY;
  output wire [31 : 0] AXI_00_RDATA_PARITY;
  output wire [255 : 0] AXI_00_RDATA;
  output wire [5 : 0] AXI_00_RID;
  output wire AXI_00_RLAST;
  output wire [1 : 0] AXI_00_RRESP;
  output wire AXI_00_RVALID;
  output wire AXI_00_WREADY;
  output wire [5 : 0] AXI_00_BID;
  output wire [1 : 0] AXI_00_BRESP;
  output wire AXI_00_BVALID;
  output wire AXI_01_ARREADY;
  output wire AXI_01_AWREADY;
  output wire [31 : 0] AXI_01_RDATA_PARITY;
  output wire [255 : 0] AXI_01_RDATA;
  output wire [5 : 0] AXI_01_RID;
  output wire AXI_01_RLAST;
  output wire [1 : 0] AXI_01_RRESP;
  output wire AXI_01_RVALID;
  output wire AXI_01_WREADY;
  output wire [5 : 0] AXI_01_BID;
  output wire [1 : 0] AXI_01_BRESP;
  output wire AXI_01_BVALID;
  output wire AXI_02_ARREADY;
  output wire AXI_02_AWREADY;
  output wire [31 : 0] AXI_02_RDATA_PARITY;
  output wire [255 : 0] AXI_02_RDATA;
  output wire [5 : 0] AXI_02_RID;
  output wire AXI_02_RLAST;
  output wire [1 : 0] AXI_02_RRESP;
  output wire AXI_02_RVALID;
  output wire AXI_02_WREADY;
  output wire [5 : 0] AXI_02_BID;
  output wire [1 : 0] AXI_02_BRESP;
  output wire AXI_02_BVALID;
  output wire AXI_03_ARREADY;
  output wire AXI_03_AWREADY;
  output wire [31 : 0] AXI_03_RDATA_PARITY;
  output wire [255 : 0] AXI_03_RDATA;
  output wire [5 : 0] AXI_03_RID;
  output wire AXI_03_RLAST;
  output wire [1 : 0] AXI_03_RRESP;
  output wire AXI_03_RVALID;
  output wire AXI_03_WREADY;
  output wire [5 : 0] AXI_03_BID;
  output wire [1 : 0] AXI_03_BRESP;
  output wire AXI_03_BVALID;
  output wire AXI_16_ARREADY;
  output wire AXI_16_AWREADY;
  output wire [31 : 0] AXI_16_RDATA_PARITY;
  output wire [255 : 0] AXI_16_RDATA;
  output wire [5 : 0] AXI_16_RID;
  output wire AXI_16_RLAST;
  output wire [1 : 0] AXI_16_RRESP;
  output wire AXI_16_RVALID;
  output wire AXI_16_WREADY;
  output wire [5 : 0] AXI_16_BID;
  output wire [1 : 0] AXI_16_BRESP;
  output wire AXI_16_BVALID;
  output wire AXI_17_ARREADY;
  output wire AXI_17_AWREADY;
  output wire [31 : 0] AXI_17_RDATA_PARITY;
  output wire [255 : 0] AXI_17_RDATA;
  output wire [5 : 0] AXI_17_RID;
  output wire AXI_17_RLAST;
  output wire [1 : 0] AXI_17_RRESP;
  output wire AXI_17_RVALID;
  output wire AXI_17_WREADY;
  output wire [5 : 0] AXI_17_BID;
  output wire [1 : 0] AXI_17_BRESP;
  output wire AXI_17_BVALID;
  output wire AXI_18_ARREADY;
  output wire AXI_18_AWREADY;
  output wire [31 : 0] AXI_18_RDATA_PARITY;
  output wire [255 : 0] AXI_18_RDATA;
  output wire [5 : 0] AXI_18_RID;
  output wire AXI_18_RLAST;
  output wire [1 : 0] AXI_18_RRESP;
  output wire AXI_18_RVALID;
  output wire AXI_18_WREADY;
  output wire [5 : 0] AXI_18_BID;
  output wire [1 : 0] AXI_18_BRESP;
  output wire AXI_18_BVALID;
  output wire AXI_19_ARREADY;
  output wire AXI_19_AWREADY;
  output wire [31 : 0] AXI_19_RDATA_PARITY;
  output wire [255 : 0] AXI_19_RDATA;
  output wire [5 : 0] AXI_19_RID;
  output wire AXI_19_RLAST;
  output wire [1 : 0] AXI_19_RRESP;
  output wire AXI_19_RVALID;
  output wire AXI_19_WREADY;
  output wire [5 : 0] AXI_19_BID;
  output wire [1 : 0] AXI_19_BRESP;
  output wire AXI_19_BVALID;
  output wire apb_complete_0;
  output wire apb_complete_1;
  output wire DRAM_0_STAT_CATTRIP;
  output wire [6 : 0] DRAM_0_STAT_TEMP;
  output wire DRAM_1_STAT_CATTRIP;
  output wire [6 : 0] DRAM_1_STAT_TEMP;
endmodule
`endif
