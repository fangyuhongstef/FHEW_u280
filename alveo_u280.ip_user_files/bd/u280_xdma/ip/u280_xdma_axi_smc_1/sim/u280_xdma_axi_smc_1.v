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


// IP VLNV: xilinx.com:ip:smartconnect:1.0
// IP Revision: 19

`timescale 1ns/1ps

(* DowngradeIPIdentifiedWarnings = "yes" *)
module u280_xdma_axi_smc_1 (
  aclk,
  aclk1,
  aclk2,
  aresetn,
  S00_AXI_awid,
  S00_AXI_awaddr,
  S00_AXI_awlen,
  S00_AXI_awsize,
  S00_AXI_awburst,
  S00_AXI_awlock,
  S00_AXI_awcache,
  S00_AXI_awprot,
  S00_AXI_awqos,
  S00_AXI_awvalid,
  S00_AXI_awready,
  S00_AXI_wdata,
  S00_AXI_wstrb,
  S00_AXI_wlast,
  S00_AXI_wvalid,
  S00_AXI_wready,
  S00_AXI_bid,
  S00_AXI_bresp,
  S00_AXI_bvalid,
  S00_AXI_bready,
  S00_AXI_arid,
  S00_AXI_araddr,
  S00_AXI_arlen,
  S00_AXI_arsize,
  S00_AXI_arburst,
  S00_AXI_arlock,
  S00_AXI_arcache,
  S00_AXI_arprot,
  S00_AXI_arqos,
  S00_AXI_arvalid,
  S00_AXI_arready,
  S00_AXI_rid,
  S00_AXI_rdata,
  S00_AXI_rresp,
  S00_AXI_rlast,
  S00_AXI_rvalid,
  S00_AXI_rready,
  S01_AXI_awid,
  S01_AXI_awaddr,
  S01_AXI_awlen,
  S01_AXI_awsize,
  S01_AXI_awburst,
  S01_AXI_awlock,
  S01_AXI_awcache,
  S01_AXI_awprot,
  S01_AXI_awqos,
  S01_AXI_awvalid,
  S01_AXI_awready,
  S01_AXI_wdata,
  S01_AXI_wstrb,
  S01_AXI_wlast,
  S01_AXI_wvalid,
  S01_AXI_wready,
  S01_AXI_bid,
  S01_AXI_bresp,
  S01_AXI_bvalid,
  S01_AXI_bready,
  S01_AXI_arid,
  S01_AXI_araddr,
  S01_AXI_arlen,
  S01_AXI_arsize,
  S01_AXI_arburst,
  S01_AXI_arlock,
  S01_AXI_arcache,
  S01_AXI_arprot,
  S01_AXI_arqos,
  S01_AXI_arvalid,
  S01_AXI_arready,
  S01_AXI_rid,
  S01_AXI_rdata,
  S01_AXI_rresp,
  S01_AXI_rlast,
  S01_AXI_rvalid,
  S01_AXI_rready,
  M00_AXI_awaddr,
  M00_AXI_awlen,
  M00_AXI_awsize,
  M00_AXI_awburst,
  M00_AXI_awlock,
  M00_AXI_awcache,
  M00_AXI_awprot,
  M00_AXI_awqos,
  M00_AXI_awvalid,
  M00_AXI_awready,
  M00_AXI_wdata,
  M00_AXI_wstrb,
  M00_AXI_wlast,
  M00_AXI_wvalid,
  M00_AXI_wready,
  M00_AXI_bresp,
  M00_AXI_bvalid,
  M00_AXI_bready,
  M00_AXI_araddr,
  M00_AXI_arlen,
  M00_AXI_arsize,
  M00_AXI_arburst,
  M00_AXI_arlock,
  M00_AXI_arcache,
  M00_AXI_arprot,
  M00_AXI_arqos,
  M00_AXI_arvalid,
  M00_AXI_arready,
  M00_AXI_rdata,
  M00_AXI_rresp,
  M00_AXI_rlast,
  M00_AXI_rvalid,
  M00_AXI_rready,
  M01_AXI_awaddr,
  M01_AXI_awprot,
  M01_AXI_awvalid,
  M01_AXI_awready,
  M01_AXI_wdata,
  M01_AXI_wstrb,
  M01_AXI_wvalid,
  M01_AXI_wready,
  M01_AXI_bresp,
  M01_AXI_bvalid,
  M01_AXI_bready,
  M01_AXI_araddr,
  M01_AXI_arprot,
  M01_AXI_arvalid,
  M01_AXI_arready,
  M01_AXI_rdata,
  M01_AXI_rresp,
  M01_AXI_rvalid,
  M01_AXI_rready,
  M02_AXI_awaddr,
  M02_AXI_awlen,
  M02_AXI_awsize,
  M02_AXI_awburst,
  M02_AXI_awlock,
  M02_AXI_awcache,
  M02_AXI_awprot,
  M02_AXI_awqos,
  M02_AXI_awvalid,
  M02_AXI_awready,
  M02_AXI_wdata,
  M02_AXI_wstrb,
  M02_AXI_wlast,
  M02_AXI_wvalid,
  M02_AXI_wready,
  M02_AXI_bresp,
  M02_AXI_bvalid,
  M02_AXI_bready,
  M02_AXI_araddr,
  M02_AXI_arlen,
  M02_AXI_arsize,
  M02_AXI_arburst,
  M02_AXI_arlock,
  M02_AXI_arcache,
  M02_AXI_arprot,
  M02_AXI_arqos,
  M02_AXI_arvalid,
  M02_AXI_arready,
  M02_AXI_rdata,
  M02_AXI_rresp,
  M02_AXI_rlast,
  M02_AXI_rvalid,
  M02_AXI_rready,
  M03_AXI_awaddr,
  M03_AXI_awprot,
  M03_AXI_awvalid,
  M03_AXI_awready,
  M03_AXI_wdata,
  M03_AXI_wstrb,
  M03_AXI_wvalid,
  M03_AXI_wready,
  M03_AXI_bresp,
  M03_AXI_bvalid,
  M03_AXI_bready,
  M03_AXI_araddr,
  M03_AXI_arprot,
  M03_AXI_arvalid,
  M03_AXI_arready,
  M03_AXI_rdata,
  M03_AXI_rresp,
  M03_AXI_rvalid,
  M03_AXI_rready,
  M04_AXI_awaddr,
  M04_AXI_awlen,
  M04_AXI_awsize,
  M04_AXI_awburst,
  M04_AXI_awlock,
  M04_AXI_awcache,
  M04_AXI_awprot,
  M04_AXI_awqos,
  M04_AXI_awvalid,
  M04_AXI_awready,
  M04_AXI_wdata,
  M04_AXI_wstrb,
  M04_AXI_wlast,
  M04_AXI_wvalid,
  M04_AXI_wready,
  M04_AXI_bresp,
  M04_AXI_bvalid,
  M04_AXI_bready,
  M04_AXI_araddr,
  M04_AXI_arlen,
  M04_AXI_arsize,
  M04_AXI_arburst,
  M04_AXI_arlock,
  M04_AXI_arcache,
  M04_AXI_arprot,
  M04_AXI_arqos,
  M04_AXI_arvalid,
  M04_AXI_arready,
  M04_AXI_rdata,
  M04_AXI_rresp,
  M04_AXI_rlast,
  M04_AXI_rvalid,
  M04_AXI_rready,
  M05_AXI_awaddr,
  M05_AXI_awlen,
  M05_AXI_awsize,
  M05_AXI_awburst,
  M05_AXI_awlock,
  M05_AXI_awcache,
  M05_AXI_awprot,
  M05_AXI_awqos,
  M05_AXI_awvalid,
  M05_AXI_awready,
  M05_AXI_wdata,
  M05_AXI_wstrb,
  M05_AXI_wlast,
  M05_AXI_wvalid,
  M05_AXI_wready,
  M05_AXI_bresp,
  M05_AXI_bvalid,
  M05_AXI_bready,
  M05_AXI_araddr,
  M05_AXI_arlen,
  M05_AXI_arsize,
  M05_AXI_arburst,
  M05_AXI_arlock,
  M05_AXI_arcache,
  M05_AXI_arprot,
  M05_AXI_arqos,
  M05_AXI_arvalid,
  M05_AXI_arready,
  M05_AXI_rdata,
  M05_AXI_rresp,
  M05_AXI_rlast,
  M05_AXI_rvalid,
  M05_AXI_rready,
  M06_AXI_awaddr,
  M06_AXI_awlen,
  M06_AXI_awsize,
  M06_AXI_awburst,
  M06_AXI_awlock,
  M06_AXI_awcache,
  M06_AXI_awprot,
  M06_AXI_awqos,
  M06_AXI_awvalid,
  M06_AXI_awready,
  M06_AXI_wdata,
  M06_AXI_wstrb,
  M06_AXI_wlast,
  M06_AXI_wvalid,
  M06_AXI_wready,
  M06_AXI_bresp,
  M06_AXI_bvalid,
  M06_AXI_bready,
  M06_AXI_araddr,
  M06_AXI_arlen,
  M06_AXI_arsize,
  M06_AXI_arburst,
  M06_AXI_arlock,
  M06_AXI_arcache,
  M06_AXI_arprot,
  M06_AXI_arqos,
  M06_AXI_arvalid,
  M06_AXI_arready,
  M06_AXI_rdata,
  M06_AXI_rresp,
  M06_AXI_rlast,
  M06_AXI_rvalid,
  M06_AXI_rready,
  M07_AXI_awaddr,
  M07_AXI_awlen,
  M07_AXI_awsize,
  M07_AXI_awburst,
  M07_AXI_awlock,
  M07_AXI_awcache,
  M07_AXI_awprot,
  M07_AXI_awqos,
  M07_AXI_awvalid,
  M07_AXI_awready,
  M07_AXI_wdata,
  M07_AXI_wstrb,
  M07_AXI_wlast,
  M07_AXI_wvalid,
  M07_AXI_wready,
  M07_AXI_bresp,
  M07_AXI_bvalid,
  M07_AXI_bready,
  M07_AXI_araddr,
  M07_AXI_arlen,
  M07_AXI_arsize,
  M07_AXI_arburst,
  M07_AXI_arlock,
  M07_AXI_arcache,
  M07_AXI_arprot,
  M07_AXI_arqos,
  M07_AXI_arvalid,
  M07_AXI_arready,
  M07_AXI_rdata,
  M07_AXI_rresp,
  M07_AXI_rlast,
  M07_AXI_rvalid,
  M07_AXI_rready,
  M08_AXI_awaddr,
  M08_AXI_awlen,
  M08_AXI_awsize,
  M08_AXI_awburst,
  M08_AXI_awlock,
  M08_AXI_awcache,
  M08_AXI_awprot,
  M08_AXI_awqos,
  M08_AXI_awvalid,
  M08_AXI_awready,
  M08_AXI_wdata,
  M08_AXI_wstrb,
  M08_AXI_wlast,
  M08_AXI_wvalid,
  M08_AXI_wready,
  M08_AXI_bresp,
  M08_AXI_bvalid,
  M08_AXI_bready,
  M08_AXI_araddr,
  M08_AXI_arlen,
  M08_AXI_arsize,
  M08_AXI_arburst,
  M08_AXI_arlock,
  M08_AXI_arcache,
  M08_AXI_arprot,
  M08_AXI_arqos,
  M08_AXI_arvalid,
  M08_AXI_arready,
  M08_AXI_rdata,
  M08_AXI_rresp,
  M08_AXI_rlast,
  M08_AXI_rvalid,
  M08_AXI_rready,
  M09_AXI_awaddr,
  M09_AXI_awlen,
  M09_AXI_awsize,
  M09_AXI_awburst,
  M09_AXI_awlock,
  M09_AXI_awcache,
  M09_AXI_awprot,
  M09_AXI_awqos,
  M09_AXI_awvalid,
  M09_AXI_awready,
  M09_AXI_wdata,
  M09_AXI_wstrb,
  M09_AXI_wlast,
  M09_AXI_wvalid,
  M09_AXI_wready,
  M09_AXI_bresp,
  M09_AXI_bvalid,
  M09_AXI_bready,
  M09_AXI_araddr,
  M09_AXI_arlen,
  M09_AXI_arsize,
  M09_AXI_arburst,
  M09_AXI_arlock,
  M09_AXI_arcache,
  M09_AXI_arprot,
  M09_AXI_arqos,
  M09_AXI_arvalid,
  M09_AXI_arready,
  M09_AXI_rdata,
  M09_AXI_rresp,
  M09_AXI_rlast,
  M09_AXI_rvalid,
  M09_AXI_rready,
  M10_AXI_awaddr,
  M10_AXI_awlen,
  M10_AXI_awsize,
  M10_AXI_awburst,
  M10_AXI_awlock,
  M10_AXI_awcache,
  M10_AXI_awprot,
  M10_AXI_awqos,
  M10_AXI_awvalid,
  M10_AXI_awready,
  M10_AXI_wdata,
  M10_AXI_wstrb,
  M10_AXI_wlast,
  M10_AXI_wvalid,
  M10_AXI_wready,
  M10_AXI_bresp,
  M10_AXI_bvalid,
  M10_AXI_bready,
  M10_AXI_araddr,
  M10_AXI_arlen,
  M10_AXI_arsize,
  M10_AXI_arburst,
  M10_AXI_arlock,
  M10_AXI_arcache,
  M10_AXI_arprot,
  M10_AXI_arqos,
  M10_AXI_arvalid,
  M10_AXI_arready,
  M10_AXI_rdata,
  M10_AXI_rresp,
  M10_AXI_rlast,
  M10_AXI_rvalid,
  M10_AXI_rready,
  M11_AXI_awaddr,
  M11_AXI_awlen,
  M11_AXI_awsize,
  M11_AXI_awburst,
  M11_AXI_awlock,
  M11_AXI_awcache,
  M11_AXI_awprot,
  M11_AXI_awqos,
  M11_AXI_awvalid,
  M11_AXI_awready,
  M11_AXI_wdata,
  M11_AXI_wstrb,
  M11_AXI_wlast,
  M11_AXI_wvalid,
  M11_AXI_wready,
  M11_AXI_bresp,
  M11_AXI_bvalid,
  M11_AXI_bready,
  M11_AXI_araddr,
  M11_AXI_arlen,
  M11_AXI_arsize,
  M11_AXI_arburst,
  M11_AXI_arlock,
  M11_AXI_arcache,
  M11_AXI_arprot,
  M11_AXI_arqos,
  M11_AXI_arvalid,
  M11_AXI_arready,
  M11_AXI_rdata,
  M11_AXI_rresp,
  M11_AXI_rlast,
  M11_AXI_rvalid,
  M11_AXI_rready
);

(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.aclk, FREQ_HZ 250000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, ASSOCIATED_BUSIF M04_AXI:M05_AXI:M06_AXI:M07_AXI:M08_AXI:M09_AXI:M10_AXI:M11_AXI:S00_AXI:S01_AXI, INSERT_VIP 0, ASSOCIATED_CLKEN m_sc_aclken" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.aclk CLK" *)
input wire aclk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.aclk1, FREQ_HZ 300000000, FREQ_TOLERANCE_HZ 0, PHASE 0.00, CLK_DOMAIN u280_xdma_ddr4_0_1_c0_ddr4_ui_clk, ASSOCIATED_BUSIF M00_AXI:M01_AXI, INSERT_VIP 0, ASSOCIATED_CLKEN s_sc_aclken" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.aclk1 CLK" *)
input wire aclk1;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.aclk2, FREQ_HZ 300000000, FREQ_TOLERANCE_HZ 0, PHASE 0.00, CLK_DOMAIN u280_xdma_ddr4_1_0_c0_ddr4_ui_clk, ASSOCIATED_BUSIF M02_AXI:M03_AXI, INSERT_VIP 0, ASSOCIATED_CLKEN s_sc_aclken" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.aclk2 CLK" *)
input wire aclk2;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.aresetn, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.aresetn RST" *)
input wire aresetn;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWID" *)
input wire [3 : 0] S00_AXI_awid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWADDR" *)
input wire [63 : 0] S00_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWLEN" *)
input wire [7 : 0] S00_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWSIZE" *)
input wire [2 : 0] S00_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWBURST" *)
input wire [1 : 0] S00_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWLOCK" *)
input wire [0 : 0] S00_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWCACHE" *)
input wire [3 : 0] S00_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWPROT" *)
input wire [2 : 0] S00_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWQOS" *)
input wire [3 : 0] S00_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWVALID" *)
input wire S00_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI AWREADY" *)
output wire S00_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI WDATA" *)
input wire [511 : 0] S00_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI WSTRB" *)
input wire [63 : 0] S00_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI WLAST" *)
input wire S00_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI WVALID" *)
input wire S00_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI WREADY" *)
output wire S00_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI BID" *)
output wire [3 : 0] S00_AXI_bid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI BRESP" *)
output wire [1 : 0] S00_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI BVALID" *)
output wire S00_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI BREADY" *)
input wire S00_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARID" *)
input wire [3 : 0] S00_AXI_arid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARADDR" *)
input wire [63 : 0] S00_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARLEN" *)
input wire [7 : 0] S00_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARSIZE" *)
input wire [2 : 0] S00_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARBURST" *)
input wire [1 : 0] S00_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARLOCK" *)
input wire [0 : 0] S00_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARCACHE" *)
input wire [3 : 0] S00_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARPROT" *)
input wire [2 : 0] S00_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARQOS" *)
input wire [3 : 0] S00_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARVALID" *)
input wire S00_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI ARREADY" *)
output wire S00_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI RID" *)
output wire [3 : 0] S00_AXI_rid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI RDATA" *)
output wire [511 : 0] S00_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI RRESP" *)
output wire [1 : 0] S00_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI RLAST" *)
output wire S00_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI RVALID" *)
output wire S00_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S00_AXI, DATA_WIDTH 512, PROTOCOL AXI4, FREQ_HZ 250000000, ID_WIDTH 4, ADDR_WIDTH 64, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 256, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRIT\
E_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S00_AXI RREADY" *)
input wire S00_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWID" *)
input wire [3 : 0] S01_AXI_awid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWADDR" *)
input wire [63 : 0] S01_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWLEN" *)
input wire [7 : 0] S01_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWSIZE" *)
input wire [2 : 0] S01_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWBURST" *)
input wire [1 : 0] S01_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWLOCK" *)
input wire [0 : 0] S01_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWCACHE" *)
input wire [3 : 0] S01_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWPROT" *)
input wire [2 : 0] S01_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWQOS" *)
input wire [3 : 0] S01_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWVALID" *)
input wire S01_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI AWREADY" *)
output wire S01_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI WDATA" *)
input wire [511 : 0] S01_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI WSTRB" *)
input wire [63 : 0] S01_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI WLAST" *)
input wire S01_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI WVALID" *)
input wire S01_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI WREADY" *)
output wire S01_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI BID" *)
output wire [3 : 0] S01_AXI_bid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI BRESP" *)
output wire [1 : 0] S01_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI BVALID" *)
output wire S01_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI BREADY" *)
input wire S01_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARID" *)
input wire [3 : 0] S01_AXI_arid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARADDR" *)
input wire [63 : 0] S01_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARLEN" *)
input wire [7 : 0] S01_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARSIZE" *)
input wire [2 : 0] S01_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARBURST" *)
input wire [1 : 0] S01_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARLOCK" *)
input wire [0 : 0] S01_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARCACHE" *)
input wire [3 : 0] S01_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARPROT" *)
input wire [2 : 0] S01_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARQOS" *)
input wire [3 : 0] S01_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARVALID" *)
input wire S01_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI ARREADY" *)
output wire S01_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI RID" *)
output wire [3 : 0] S01_AXI_rid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI RDATA" *)
output wire [511 : 0] S01_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI RRESP" *)
output wire [1 : 0] S01_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI RLAST" *)
output wire S01_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI RVALID" *)
output wire S01_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S01_AXI, DATA_WIDTH 512, PROTOCOL AXI4, FREQ_HZ 250000000, ID_WIDTH 4, ADDR_WIDTH 64, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 256, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRIT\
E_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S01_AXI RREADY" *)
input wire S01_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWADDR" *)
output wire [33 : 0] M00_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWLEN" *)
output wire [7 : 0] M00_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWSIZE" *)
output wire [2 : 0] M00_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWBURST" *)
output wire [1 : 0] M00_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWLOCK" *)
output wire [0 : 0] M00_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWCACHE" *)
output wire [3 : 0] M00_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWPROT" *)
output wire [2 : 0] M00_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWQOS" *)
output wire [3 : 0] M00_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWVALID" *)
output wire M00_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI AWREADY" *)
input wire M00_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI WDATA" *)
output wire [511 : 0] M00_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI WSTRB" *)
output wire [63 : 0] M00_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI WLAST" *)
output wire M00_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI WVALID" *)
output wire M00_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI WREADY" *)
input wire M00_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI BRESP" *)
input wire [1 : 0] M00_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI BVALID" *)
input wire M00_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI BREADY" *)
output wire M00_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARADDR" *)
output wire [33 : 0] M00_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARLEN" *)
output wire [7 : 0] M00_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARSIZE" *)
output wire [2 : 0] M00_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARBURST" *)
output wire [1 : 0] M00_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARLOCK" *)
output wire [0 : 0] M00_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARCACHE" *)
output wire [3 : 0] M00_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARPROT" *)
output wire [2 : 0] M00_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARQOS" *)
output wire [3 : 0] M00_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARVALID" *)
output wire M00_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI ARREADY" *)
input wire M00_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI RDATA" *)
input wire [511 : 0] M00_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI RRESP" *)
input wire [1 : 0] M00_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI RLAST" *)
input wire M00_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI RVALID" *)
input wire M00_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M00_AXI, DATA_WIDTH 512, PROTOCOL AXI4, FREQ_HZ 300000000, ID_WIDTH 0, ADDR_WIDTH 34, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 256, PHASE 0.00, CLK_DOMAIN u280_xdma_ddr4_0_1_c0_ddr4_ui_clk, NUM_READ_THREADS 1, N\
UM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M00_AXI RREADY" *)
output wire M00_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI AWADDR" *)
output wire [31 : 0] M01_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI AWPROT" *)
output wire [2 : 0] M01_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI AWVALID" *)
output wire M01_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI AWREADY" *)
input wire M01_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI WDATA" *)
output wire [31 : 0] M01_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI WSTRB" *)
output wire [3 : 0] M01_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI WVALID" *)
output wire M01_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI WREADY" *)
input wire M01_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI BRESP" *)
input wire [1 : 0] M01_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI BVALID" *)
input wire M01_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI BREADY" *)
output wire M01_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI ARADDR" *)
output wire [31 : 0] M01_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI ARPROT" *)
output wire [2 : 0] M01_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI ARVALID" *)
output wire M01_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI ARREADY" *)
input wire M01_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI RDATA" *)
input wire [31 : 0] M01_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI RRESP" *)
input wire [1 : 0] M01_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI RVALID" *)
input wire M01_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M01_AXI, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 300000000, ID_WIDTH 0, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 1, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 1, PHASE 0.00, CLK_DOMAIN u280_xdma_ddr4_0_1_c0_ddr4_ui_clk, NUM_READ_THREADS 1, \
NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M01_AXI RREADY" *)
output wire M01_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWADDR" *)
output wire [33 : 0] M02_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWLEN" *)
output wire [7 : 0] M02_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWSIZE" *)
output wire [2 : 0] M02_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWBURST" *)
output wire [1 : 0] M02_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWLOCK" *)
output wire [0 : 0] M02_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWCACHE" *)
output wire [3 : 0] M02_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWPROT" *)
output wire [2 : 0] M02_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWQOS" *)
output wire [3 : 0] M02_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWVALID" *)
output wire M02_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI AWREADY" *)
input wire M02_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI WDATA" *)
output wire [511 : 0] M02_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI WSTRB" *)
output wire [63 : 0] M02_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI WLAST" *)
output wire M02_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI WVALID" *)
output wire M02_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI WREADY" *)
input wire M02_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI BRESP" *)
input wire [1 : 0] M02_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI BVALID" *)
input wire M02_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI BREADY" *)
output wire M02_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARADDR" *)
output wire [33 : 0] M02_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARLEN" *)
output wire [7 : 0] M02_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARSIZE" *)
output wire [2 : 0] M02_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARBURST" *)
output wire [1 : 0] M02_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARLOCK" *)
output wire [0 : 0] M02_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARCACHE" *)
output wire [3 : 0] M02_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARPROT" *)
output wire [2 : 0] M02_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARQOS" *)
output wire [3 : 0] M02_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARVALID" *)
output wire M02_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI ARREADY" *)
input wire M02_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI RDATA" *)
input wire [511 : 0] M02_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI RRESP" *)
input wire [1 : 0] M02_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI RLAST" *)
input wire M02_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI RVALID" *)
input wire M02_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M02_AXI, DATA_WIDTH 512, PROTOCOL AXI4, FREQ_HZ 300000000, ID_WIDTH 0, ADDR_WIDTH 34, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 256, PHASE 0.00, CLK_DOMAIN u280_xdma_ddr4_1_0_c0_ddr4_ui_clk, NUM_READ_THREADS 1, N\
UM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M02_AXI RREADY" *)
output wire M02_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI AWADDR" *)
output wire [31 : 0] M03_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI AWPROT" *)
output wire [2 : 0] M03_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI AWVALID" *)
output wire M03_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI AWREADY" *)
input wire M03_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI WDATA" *)
output wire [31 : 0] M03_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI WSTRB" *)
output wire [3 : 0] M03_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI WVALID" *)
output wire M03_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI WREADY" *)
input wire M03_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI BRESP" *)
input wire [1 : 0] M03_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI BVALID" *)
input wire M03_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI BREADY" *)
output wire M03_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI ARADDR" *)
output wire [31 : 0] M03_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI ARPROT" *)
output wire [2 : 0] M03_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI ARVALID" *)
output wire M03_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI ARREADY" *)
input wire M03_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI RDATA" *)
input wire [31 : 0] M03_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI RRESP" *)
input wire [1 : 0] M03_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI RVALID" *)
input wire M03_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M03_AXI, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 300000000, ID_WIDTH 0, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 1, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 1, PHASE 0.00, CLK_DOMAIN u280_xdma_ddr4_1_0_c0_ddr4_ui_clk, NUM_READ_THREADS 1, \
NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M03_AXI RREADY" *)
output wire M03_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWADDR" *)
output wire [32 : 0] M04_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWLEN" *)
output wire [3 : 0] M04_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWSIZE" *)
output wire [2 : 0] M04_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWBURST" *)
output wire [1 : 0] M04_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWLOCK" *)
output wire [1 : 0] M04_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWCACHE" *)
output wire [3 : 0] M04_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWPROT" *)
output wire [2 : 0] M04_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWQOS" *)
output wire [3 : 0] M04_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWVALID" *)
output wire M04_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI AWREADY" *)
input wire M04_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI WDATA" *)
output wire [255 : 0] M04_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI WSTRB" *)
output wire [31 : 0] M04_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI WLAST" *)
output wire M04_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI WVALID" *)
output wire M04_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI WREADY" *)
input wire M04_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI BRESP" *)
input wire [1 : 0] M04_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI BVALID" *)
input wire M04_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI BREADY" *)
output wire M04_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARADDR" *)
output wire [32 : 0] M04_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARLEN" *)
output wire [3 : 0] M04_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARSIZE" *)
output wire [2 : 0] M04_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARBURST" *)
output wire [1 : 0] M04_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARLOCK" *)
output wire [1 : 0] M04_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARCACHE" *)
output wire [3 : 0] M04_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARPROT" *)
output wire [2 : 0] M04_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARQOS" *)
output wire [3 : 0] M04_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARVALID" *)
output wire M04_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI ARREADY" *)
input wire M04_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI RDATA" *)
input wire [255 : 0] M04_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI RRESP" *)
input wire [1 : 0] M04_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI RLAST" *)
input wire M04_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI RVALID" *)
input wire M04_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M04_AXI, DATA_WIDTH 256, PROTOCOL AXI3, FREQ_HZ 250000000, ID_WIDTH 0, ADDR_WIDTH 33, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 16, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRITE\
_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M04_AXI RREADY" *)
output wire M04_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWADDR" *)
output wire [32 : 0] M05_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWLEN" *)
output wire [3 : 0] M05_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWSIZE" *)
output wire [2 : 0] M05_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWBURST" *)
output wire [1 : 0] M05_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWLOCK" *)
output wire [1 : 0] M05_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWCACHE" *)
output wire [3 : 0] M05_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWPROT" *)
output wire [2 : 0] M05_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWQOS" *)
output wire [3 : 0] M05_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWVALID" *)
output wire M05_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI AWREADY" *)
input wire M05_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI WDATA" *)
output wire [255 : 0] M05_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI WSTRB" *)
output wire [31 : 0] M05_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI WLAST" *)
output wire M05_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI WVALID" *)
output wire M05_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI WREADY" *)
input wire M05_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI BRESP" *)
input wire [1 : 0] M05_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI BVALID" *)
input wire M05_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI BREADY" *)
output wire M05_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARADDR" *)
output wire [32 : 0] M05_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARLEN" *)
output wire [3 : 0] M05_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARSIZE" *)
output wire [2 : 0] M05_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARBURST" *)
output wire [1 : 0] M05_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARLOCK" *)
output wire [1 : 0] M05_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARCACHE" *)
output wire [3 : 0] M05_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARPROT" *)
output wire [2 : 0] M05_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARQOS" *)
output wire [3 : 0] M05_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARVALID" *)
output wire M05_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI ARREADY" *)
input wire M05_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI RDATA" *)
input wire [255 : 0] M05_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI RRESP" *)
input wire [1 : 0] M05_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI RLAST" *)
input wire M05_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI RVALID" *)
input wire M05_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M05_AXI, DATA_WIDTH 256, PROTOCOL AXI3, FREQ_HZ 250000000, ID_WIDTH 0, ADDR_WIDTH 33, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 16, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRITE\
_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M05_AXI RREADY" *)
output wire M05_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWADDR" *)
output wire [32 : 0] M06_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWLEN" *)
output wire [3 : 0] M06_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWSIZE" *)
output wire [2 : 0] M06_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWBURST" *)
output wire [1 : 0] M06_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWLOCK" *)
output wire [1 : 0] M06_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWCACHE" *)
output wire [3 : 0] M06_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWPROT" *)
output wire [2 : 0] M06_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWQOS" *)
output wire [3 : 0] M06_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWVALID" *)
output wire M06_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI AWREADY" *)
input wire M06_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI WDATA" *)
output wire [255 : 0] M06_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI WSTRB" *)
output wire [31 : 0] M06_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI WLAST" *)
output wire M06_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI WVALID" *)
output wire M06_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI WREADY" *)
input wire M06_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI BRESP" *)
input wire [1 : 0] M06_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI BVALID" *)
input wire M06_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI BREADY" *)
output wire M06_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARADDR" *)
output wire [32 : 0] M06_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARLEN" *)
output wire [3 : 0] M06_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARSIZE" *)
output wire [2 : 0] M06_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARBURST" *)
output wire [1 : 0] M06_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARLOCK" *)
output wire [1 : 0] M06_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARCACHE" *)
output wire [3 : 0] M06_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARPROT" *)
output wire [2 : 0] M06_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARQOS" *)
output wire [3 : 0] M06_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARVALID" *)
output wire M06_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI ARREADY" *)
input wire M06_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI RDATA" *)
input wire [255 : 0] M06_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI RRESP" *)
input wire [1 : 0] M06_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI RLAST" *)
input wire M06_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI RVALID" *)
input wire M06_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M06_AXI, DATA_WIDTH 256, PROTOCOL AXI3, FREQ_HZ 250000000, ID_WIDTH 0, ADDR_WIDTH 33, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 16, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRITE\
_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M06_AXI RREADY" *)
output wire M06_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWADDR" *)
output wire [32 : 0] M07_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWLEN" *)
output wire [3 : 0] M07_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWSIZE" *)
output wire [2 : 0] M07_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWBURST" *)
output wire [1 : 0] M07_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWLOCK" *)
output wire [1 : 0] M07_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWCACHE" *)
output wire [3 : 0] M07_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWPROT" *)
output wire [2 : 0] M07_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWQOS" *)
output wire [3 : 0] M07_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWVALID" *)
output wire M07_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI AWREADY" *)
input wire M07_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI WDATA" *)
output wire [255 : 0] M07_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI WSTRB" *)
output wire [31 : 0] M07_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI WLAST" *)
output wire M07_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI WVALID" *)
output wire M07_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI WREADY" *)
input wire M07_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI BRESP" *)
input wire [1 : 0] M07_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI BVALID" *)
input wire M07_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI BREADY" *)
output wire M07_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARADDR" *)
output wire [32 : 0] M07_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARLEN" *)
output wire [3 : 0] M07_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARSIZE" *)
output wire [2 : 0] M07_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARBURST" *)
output wire [1 : 0] M07_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARLOCK" *)
output wire [1 : 0] M07_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARCACHE" *)
output wire [3 : 0] M07_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARPROT" *)
output wire [2 : 0] M07_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARQOS" *)
output wire [3 : 0] M07_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARVALID" *)
output wire M07_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI ARREADY" *)
input wire M07_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI RDATA" *)
input wire [255 : 0] M07_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI RRESP" *)
input wire [1 : 0] M07_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI RLAST" *)
input wire M07_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI RVALID" *)
input wire M07_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M07_AXI, DATA_WIDTH 256, PROTOCOL AXI3, FREQ_HZ 250000000, ID_WIDTH 0, ADDR_WIDTH 33, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 16, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRITE\
_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M07_AXI RREADY" *)
output wire M07_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWADDR" *)
output wire [32 : 0] M08_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWLEN" *)
output wire [3 : 0] M08_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWSIZE" *)
output wire [2 : 0] M08_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWBURST" *)
output wire [1 : 0] M08_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWLOCK" *)
output wire [1 : 0] M08_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWCACHE" *)
output wire [3 : 0] M08_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWPROT" *)
output wire [2 : 0] M08_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWQOS" *)
output wire [3 : 0] M08_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWVALID" *)
output wire M08_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI AWREADY" *)
input wire M08_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI WDATA" *)
output wire [255 : 0] M08_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI WSTRB" *)
output wire [31 : 0] M08_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI WLAST" *)
output wire M08_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI WVALID" *)
output wire M08_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI WREADY" *)
input wire M08_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI BRESP" *)
input wire [1 : 0] M08_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI BVALID" *)
input wire M08_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI BREADY" *)
output wire M08_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARADDR" *)
output wire [32 : 0] M08_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARLEN" *)
output wire [3 : 0] M08_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARSIZE" *)
output wire [2 : 0] M08_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARBURST" *)
output wire [1 : 0] M08_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARLOCK" *)
output wire [1 : 0] M08_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARCACHE" *)
output wire [3 : 0] M08_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARPROT" *)
output wire [2 : 0] M08_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARQOS" *)
output wire [3 : 0] M08_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARVALID" *)
output wire M08_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI ARREADY" *)
input wire M08_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI RDATA" *)
input wire [255 : 0] M08_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI RRESP" *)
input wire [1 : 0] M08_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI RLAST" *)
input wire M08_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI RVALID" *)
input wire M08_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M08_AXI, DATA_WIDTH 256, PROTOCOL AXI3, FREQ_HZ 250000000, ID_WIDTH 0, ADDR_WIDTH 33, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 16, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRITE\
_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M08_AXI RREADY" *)
output wire M08_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWADDR" *)
output wire [32 : 0] M09_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWLEN" *)
output wire [3 : 0] M09_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWSIZE" *)
output wire [2 : 0] M09_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWBURST" *)
output wire [1 : 0] M09_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWLOCK" *)
output wire [1 : 0] M09_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWCACHE" *)
output wire [3 : 0] M09_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWPROT" *)
output wire [2 : 0] M09_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWQOS" *)
output wire [3 : 0] M09_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWVALID" *)
output wire M09_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI AWREADY" *)
input wire M09_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI WDATA" *)
output wire [255 : 0] M09_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI WSTRB" *)
output wire [31 : 0] M09_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI WLAST" *)
output wire M09_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI WVALID" *)
output wire M09_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI WREADY" *)
input wire M09_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI BRESP" *)
input wire [1 : 0] M09_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI BVALID" *)
input wire M09_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI BREADY" *)
output wire M09_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARADDR" *)
output wire [32 : 0] M09_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARLEN" *)
output wire [3 : 0] M09_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARSIZE" *)
output wire [2 : 0] M09_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARBURST" *)
output wire [1 : 0] M09_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARLOCK" *)
output wire [1 : 0] M09_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARCACHE" *)
output wire [3 : 0] M09_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARPROT" *)
output wire [2 : 0] M09_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARQOS" *)
output wire [3 : 0] M09_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARVALID" *)
output wire M09_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI ARREADY" *)
input wire M09_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI RDATA" *)
input wire [255 : 0] M09_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI RRESP" *)
input wire [1 : 0] M09_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI RLAST" *)
input wire M09_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI RVALID" *)
input wire M09_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M09_AXI, DATA_WIDTH 256, PROTOCOL AXI3, FREQ_HZ 250000000, ID_WIDTH 0, ADDR_WIDTH 33, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 16, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRITE\
_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M09_AXI RREADY" *)
output wire M09_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWADDR" *)
output wire [32 : 0] M10_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWLEN" *)
output wire [3 : 0] M10_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWSIZE" *)
output wire [2 : 0] M10_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWBURST" *)
output wire [1 : 0] M10_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWLOCK" *)
output wire [1 : 0] M10_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWCACHE" *)
output wire [3 : 0] M10_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWPROT" *)
output wire [2 : 0] M10_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWQOS" *)
output wire [3 : 0] M10_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWVALID" *)
output wire M10_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI AWREADY" *)
input wire M10_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI WDATA" *)
output wire [255 : 0] M10_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI WSTRB" *)
output wire [31 : 0] M10_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI WLAST" *)
output wire M10_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI WVALID" *)
output wire M10_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI WREADY" *)
input wire M10_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI BRESP" *)
input wire [1 : 0] M10_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI BVALID" *)
input wire M10_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI BREADY" *)
output wire M10_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARADDR" *)
output wire [32 : 0] M10_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARLEN" *)
output wire [3 : 0] M10_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARSIZE" *)
output wire [2 : 0] M10_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARBURST" *)
output wire [1 : 0] M10_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARLOCK" *)
output wire [1 : 0] M10_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARCACHE" *)
output wire [3 : 0] M10_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARPROT" *)
output wire [2 : 0] M10_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARQOS" *)
output wire [3 : 0] M10_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARVALID" *)
output wire M10_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI ARREADY" *)
input wire M10_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI RDATA" *)
input wire [255 : 0] M10_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI RRESP" *)
input wire [1 : 0] M10_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI RLAST" *)
input wire M10_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI RVALID" *)
input wire M10_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M10_AXI, DATA_WIDTH 256, PROTOCOL AXI3, FREQ_HZ 250000000, ID_WIDTH 0, ADDR_WIDTH 33, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 16, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRITE\
_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M10_AXI RREADY" *)
output wire M10_AXI_rready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWADDR" *)
output wire [32 : 0] M11_AXI_awaddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWLEN" *)
output wire [3 : 0] M11_AXI_awlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWSIZE" *)
output wire [2 : 0] M11_AXI_awsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWBURST" *)
output wire [1 : 0] M11_AXI_awburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWLOCK" *)
output wire [1 : 0] M11_AXI_awlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWCACHE" *)
output wire [3 : 0] M11_AXI_awcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWPROT" *)
output wire [2 : 0] M11_AXI_awprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWQOS" *)
output wire [3 : 0] M11_AXI_awqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWVALID" *)
output wire M11_AXI_awvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI AWREADY" *)
input wire M11_AXI_awready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI WDATA" *)
output wire [255 : 0] M11_AXI_wdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI WSTRB" *)
output wire [31 : 0] M11_AXI_wstrb;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI WLAST" *)
output wire M11_AXI_wlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI WVALID" *)
output wire M11_AXI_wvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI WREADY" *)
input wire M11_AXI_wready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI BRESP" *)
input wire [1 : 0] M11_AXI_bresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI BVALID" *)
input wire M11_AXI_bvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI BREADY" *)
output wire M11_AXI_bready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARADDR" *)
output wire [32 : 0] M11_AXI_araddr;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARLEN" *)
output wire [3 : 0] M11_AXI_arlen;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARSIZE" *)
output wire [2 : 0] M11_AXI_arsize;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARBURST" *)
output wire [1 : 0] M11_AXI_arburst;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARLOCK" *)
output wire [1 : 0] M11_AXI_arlock;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARCACHE" *)
output wire [3 : 0] M11_AXI_arcache;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARPROT" *)
output wire [2 : 0] M11_AXI_arprot;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARQOS" *)
output wire [3 : 0] M11_AXI_arqos;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARVALID" *)
output wire M11_AXI_arvalid;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI ARREADY" *)
input wire M11_AXI_arready;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI RDATA" *)
input wire [255 : 0] M11_AXI_rdata;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI RRESP" *)
input wire [1 : 0] M11_AXI_rresp;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI RLAST" *)
input wire M11_AXI_rlast;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI RVALID" *)
input wire M11_AXI_rvalid;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M11_AXI, DATA_WIDTH 256, PROTOCOL AXI3, FREQ_HZ 250000000, ID_WIDTH 0, ADDR_WIDTH 33, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 32, NUM_WRITE_OUTSTANDING 16, MAX_BURST_LENGTH 16, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, NUM_READ_THREADS 1, NUM_WRITE\
_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M11_AXI RREADY" *)
output wire M11_AXI_rready;

  bd_36b4 inst (
    .aclk(aclk),
    .aclk1(aclk1),
    .aclk2(aclk2),
    .aresetn(aresetn),
    .S00_AXI_awid(S00_AXI_awid),
    .S00_AXI_awaddr(S00_AXI_awaddr),
    .S00_AXI_awlen(S00_AXI_awlen),
    .S00_AXI_awsize(S00_AXI_awsize),
    .S00_AXI_awburst(S00_AXI_awburst),
    .S00_AXI_awlock(S00_AXI_awlock),
    .S00_AXI_awcache(S00_AXI_awcache),
    .S00_AXI_awprot(S00_AXI_awprot),
    .S00_AXI_awqos(S00_AXI_awqos),
    .S00_AXI_awvalid(S00_AXI_awvalid),
    .S00_AXI_awready(S00_AXI_awready),
    .S00_AXI_wdata(S00_AXI_wdata),
    .S00_AXI_wstrb(S00_AXI_wstrb),
    .S00_AXI_wlast(S00_AXI_wlast),
    .S00_AXI_wvalid(S00_AXI_wvalid),
    .S00_AXI_wready(S00_AXI_wready),
    .S00_AXI_bid(S00_AXI_bid),
    .S00_AXI_bresp(S00_AXI_bresp),
    .S00_AXI_bvalid(S00_AXI_bvalid),
    .S00_AXI_bready(S00_AXI_bready),
    .S00_AXI_arid(S00_AXI_arid),
    .S00_AXI_araddr(S00_AXI_araddr),
    .S00_AXI_arlen(S00_AXI_arlen),
    .S00_AXI_arsize(S00_AXI_arsize),
    .S00_AXI_arburst(S00_AXI_arburst),
    .S00_AXI_arlock(S00_AXI_arlock),
    .S00_AXI_arcache(S00_AXI_arcache),
    .S00_AXI_arprot(S00_AXI_arprot),
    .S00_AXI_arqos(S00_AXI_arqos),
    .S00_AXI_arvalid(S00_AXI_arvalid),
    .S00_AXI_arready(S00_AXI_arready),
    .S00_AXI_rid(S00_AXI_rid),
    .S00_AXI_rdata(S00_AXI_rdata),
    .S00_AXI_rresp(S00_AXI_rresp),
    .S00_AXI_rlast(S00_AXI_rlast),
    .S00_AXI_rvalid(S00_AXI_rvalid),
    .S00_AXI_rready(S00_AXI_rready),
    .S01_AXI_awid(S01_AXI_awid),
    .S01_AXI_awaddr(S01_AXI_awaddr),
    .S01_AXI_awlen(S01_AXI_awlen),
    .S01_AXI_awsize(S01_AXI_awsize),
    .S01_AXI_awburst(S01_AXI_awburst),
    .S01_AXI_awlock(S01_AXI_awlock),
    .S01_AXI_awcache(S01_AXI_awcache),
    .S01_AXI_awprot(S01_AXI_awprot),
    .S01_AXI_awqos(S01_AXI_awqos),
    .S01_AXI_awvalid(S01_AXI_awvalid),
    .S01_AXI_awready(S01_AXI_awready),
    .S01_AXI_wdata(S01_AXI_wdata),
    .S01_AXI_wstrb(S01_AXI_wstrb),
    .S01_AXI_wlast(S01_AXI_wlast),
    .S01_AXI_wvalid(S01_AXI_wvalid),
    .S01_AXI_wready(S01_AXI_wready),
    .S01_AXI_bid(S01_AXI_bid),
    .S01_AXI_bresp(S01_AXI_bresp),
    .S01_AXI_bvalid(S01_AXI_bvalid),
    .S01_AXI_bready(S01_AXI_bready),
    .S01_AXI_arid(S01_AXI_arid),
    .S01_AXI_araddr(S01_AXI_araddr),
    .S01_AXI_arlen(S01_AXI_arlen),
    .S01_AXI_arsize(S01_AXI_arsize),
    .S01_AXI_arburst(S01_AXI_arburst),
    .S01_AXI_arlock(S01_AXI_arlock),
    .S01_AXI_arcache(S01_AXI_arcache),
    .S01_AXI_arprot(S01_AXI_arprot),
    .S01_AXI_arqos(S01_AXI_arqos),
    .S01_AXI_arvalid(S01_AXI_arvalid),
    .S01_AXI_arready(S01_AXI_arready),
    .S01_AXI_rid(S01_AXI_rid),
    .S01_AXI_rdata(S01_AXI_rdata),
    .S01_AXI_rresp(S01_AXI_rresp),
    .S01_AXI_rlast(S01_AXI_rlast),
    .S01_AXI_rvalid(S01_AXI_rvalid),
    .S01_AXI_rready(S01_AXI_rready),
    .M00_AXI_awaddr(M00_AXI_awaddr),
    .M00_AXI_awlen(M00_AXI_awlen),
    .M00_AXI_awsize(M00_AXI_awsize),
    .M00_AXI_awburst(M00_AXI_awburst),
    .M00_AXI_awlock(M00_AXI_awlock),
    .M00_AXI_awcache(M00_AXI_awcache),
    .M00_AXI_awprot(M00_AXI_awprot),
    .M00_AXI_awqos(M00_AXI_awqos),
    .M00_AXI_awvalid(M00_AXI_awvalid),
    .M00_AXI_awready(M00_AXI_awready),
    .M00_AXI_wdata(M00_AXI_wdata),
    .M00_AXI_wstrb(M00_AXI_wstrb),
    .M00_AXI_wlast(M00_AXI_wlast),
    .M00_AXI_wvalid(M00_AXI_wvalid),
    .M00_AXI_wready(M00_AXI_wready),
    .M00_AXI_bresp(M00_AXI_bresp),
    .M00_AXI_bvalid(M00_AXI_bvalid),
    .M00_AXI_bready(M00_AXI_bready),
    .M00_AXI_araddr(M00_AXI_araddr),
    .M00_AXI_arlen(M00_AXI_arlen),
    .M00_AXI_arsize(M00_AXI_arsize),
    .M00_AXI_arburst(M00_AXI_arburst),
    .M00_AXI_arlock(M00_AXI_arlock),
    .M00_AXI_arcache(M00_AXI_arcache),
    .M00_AXI_arprot(M00_AXI_arprot),
    .M00_AXI_arqos(M00_AXI_arqos),
    .M00_AXI_arvalid(M00_AXI_arvalid),
    .M00_AXI_arready(M00_AXI_arready),
    .M00_AXI_rdata(M00_AXI_rdata),
    .M00_AXI_rresp(M00_AXI_rresp),
    .M00_AXI_rlast(M00_AXI_rlast),
    .M00_AXI_rvalid(M00_AXI_rvalid),
    .M00_AXI_rready(M00_AXI_rready),
    .M01_AXI_awaddr(M01_AXI_awaddr),
    .M01_AXI_awprot(M01_AXI_awprot),
    .M01_AXI_awvalid(M01_AXI_awvalid),
    .M01_AXI_awready(M01_AXI_awready),
    .M01_AXI_wdata(M01_AXI_wdata),
    .M01_AXI_wstrb(M01_AXI_wstrb),
    .M01_AXI_wvalid(M01_AXI_wvalid),
    .M01_AXI_wready(M01_AXI_wready),
    .M01_AXI_bresp(M01_AXI_bresp),
    .M01_AXI_bvalid(M01_AXI_bvalid),
    .M01_AXI_bready(M01_AXI_bready),
    .M01_AXI_araddr(M01_AXI_araddr),
    .M01_AXI_arprot(M01_AXI_arprot),
    .M01_AXI_arvalid(M01_AXI_arvalid),
    .M01_AXI_arready(M01_AXI_arready),
    .M01_AXI_rdata(M01_AXI_rdata),
    .M01_AXI_rresp(M01_AXI_rresp),
    .M01_AXI_rvalid(M01_AXI_rvalid),
    .M01_AXI_rready(M01_AXI_rready),
    .M02_AXI_awaddr(M02_AXI_awaddr),
    .M02_AXI_awlen(M02_AXI_awlen),
    .M02_AXI_awsize(M02_AXI_awsize),
    .M02_AXI_awburst(M02_AXI_awburst),
    .M02_AXI_awlock(M02_AXI_awlock),
    .M02_AXI_awcache(M02_AXI_awcache),
    .M02_AXI_awprot(M02_AXI_awprot),
    .M02_AXI_awqos(M02_AXI_awqos),
    .M02_AXI_awvalid(M02_AXI_awvalid),
    .M02_AXI_awready(M02_AXI_awready),
    .M02_AXI_wdata(M02_AXI_wdata),
    .M02_AXI_wstrb(M02_AXI_wstrb),
    .M02_AXI_wlast(M02_AXI_wlast),
    .M02_AXI_wvalid(M02_AXI_wvalid),
    .M02_AXI_wready(M02_AXI_wready),
    .M02_AXI_bresp(M02_AXI_bresp),
    .M02_AXI_bvalid(M02_AXI_bvalid),
    .M02_AXI_bready(M02_AXI_bready),
    .M02_AXI_araddr(M02_AXI_araddr),
    .M02_AXI_arlen(M02_AXI_arlen),
    .M02_AXI_arsize(M02_AXI_arsize),
    .M02_AXI_arburst(M02_AXI_arburst),
    .M02_AXI_arlock(M02_AXI_arlock),
    .M02_AXI_arcache(M02_AXI_arcache),
    .M02_AXI_arprot(M02_AXI_arprot),
    .M02_AXI_arqos(M02_AXI_arqos),
    .M02_AXI_arvalid(M02_AXI_arvalid),
    .M02_AXI_arready(M02_AXI_arready),
    .M02_AXI_rdata(M02_AXI_rdata),
    .M02_AXI_rresp(M02_AXI_rresp),
    .M02_AXI_rlast(M02_AXI_rlast),
    .M02_AXI_rvalid(M02_AXI_rvalid),
    .M02_AXI_rready(M02_AXI_rready),
    .M03_AXI_awaddr(M03_AXI_awaddr),
    .M03_AXI_awprot(M03_AXI_awprot),
    .M03_AXI_awvalid(M03_AXI_awvalid),
    .M03_AXI_awready(M03_AXI_awready),
    .M03_AXI_wdata(M03_AXI_wdata),
    .M03_AXI_wstrb(M03_AXI_wstrb),
    .M03_AXI_wvalid(M03_AXI_wvalid),
    .M03_AXI_wready(M03_AXI_wready),
    .M03_AXI_bresp(M03_AXI_bresp),
    .M03_AXI_bvalid(M03_AXI_bvalid),
    .M03_AXI_bready(M03_AXI_bready),
    .M03_AXI_araddr(M03_AXI_araddr),
    .M03_AXI_arprot(M03_AXI_arprot),
    .M03_AXI_arvalid(M03_AXI_arvalid),
    .M03_AXI_arready(M03_AXI_arready),
    .M03_AXI_rdata(M03_AXI_rdata),
    .M03_AXI_rresp(M03_AXI_rresp),
    .M03_AXI_rvalid(M03_AXI_rvalid),
    .M03_AXI_rready(M03_AXI_rready),
    .M04_AXI_awaddr(M04_AXI_awaddr),
    .M04_AXI_awlen(M04_AXI_awlen),
    .M04_AXI_awsize(M04_AXI_awsize),
    .M04_AXI_awburst(M04_AXI_awburst),
    .M04_AXI_awlock(M04_AXI_awlock),
    .M04_AXI_awcache(M04_AXI_awcache),
    .M04_AXI_awprot(M04_AXI_awprot),
    .M04_AXI_awqos(M04_AXI_awqos),
    .M04_AXI_awvalid(M04_AXI_awvalid),
    .M04_AXI_awready(M04_AXI_awready),
    .M04_AXI_wdata(M04_AXI_wdata),
    .M04_AXI_wstrb(M04_AXI_wstrb),
    .M04_AXI_wlast(M04_AXI_wlast),
    .M04_AXI_wvalid(M04_AXI_wvalid),
    .M04_AXI_wready(M04_AXI_wready),
    .M04_AXI_bresp(M04_AXI_bresp),
    .M04_AXI_bvalid(M04_AXI_bvalid),
    .M04_AXI_bready(M04_AXI_bready),
    .M04_AXI_araddr(M04_AXI_araddr),
    .M04_AXI_arlen(M04_AXI_arlen),
    .M04_AXI_arsize(M04_AXI_arsize),
    .M04_AXI_arburst(M04_AXI_arburst),
    .M04_AXI_arlock(M04_AXI_arlock),
    .M04_AXI_arcache(M04_AXI_arcache),
    .M04_AXI_arprot(M04_AXI_arprot),
    .M04_AXI_arqos(M04_AXI_arqos),
    .M04_AXI_arvalid(M04_AXI_arvalid),
    .M04_AXI_arready(M04_AXI_arready),
    .M04_AXI_rdata(M04_AXI_rdata),
    .M04_AXI_rresp(M04_AXI_rresp),
    .M04_AXI_rlast(M04_AXI_rlast),
    .M04_AXI_rvalid(M04_AXI_rvalid),
    .M04_AXI_rready(M04_AXI_rready),
    .M05_AXI_awaddr(M05_AXI_awaddr),
    .M05_AXI_awlen(M05_AXI_awlen),
    .M05_AXI_awsize(M05_AXI_awsize),
    .M05_AXI_awburst(M05_AXI_awburst),
    .M05_AXI_awlock(M05_AXI_awlock),
    .M05_AXI_awcache(M05_AXI_awcache),
    .M05_AXI_awprot(M05_AXI_awprot),
    .M05_AXI_awqos(M05_AXI_awqos),
    .M05_AXI_awvalid(M05_AXI_awvalid),
    .M05_AXI_awready(M05_AXI_awready),
    .M05_AXI_wdata(M05_AXI_wdata),
    .M05_AXI_wstrb(M05_AXI_wstrb),
    .M05_AXI_wlast(M05_AXI_wlast),
    .M05_AXI_wvalid(M05_AXI_wvalid),
    .M05_AXI_wready(M05_AXI_wready),
    .M05_AXI_bresp(M05_AXI_bresp),
    .M05_AXI_bvalid(M05_AXI_bvalid),
    .M05_AXI_bready(M05_AXI_bready),
    .M05_AXI_araddr(M05_AXI_araddr),
    .M05_AXI_arlen(M05_AXI_arlen),
    .M05_AXI_arsize(M05_AXI_arsize),
    .M05_AXI_arburst(M05_AXI_arburst),
    .M05_AXI_arlock(M05_AXI_arlock),
    .M05_AXI_arcache(M05_AXI_arcache),
    .M05_AXI_arprot(M05_AXI_arprot),
    .M05_AXI_arqos(M05_AXI_arqos),
    .M05_AXI_arvalid(M05_AXI_arvalid),
    .M05_AXI_arready(M05_AXI_arready),
    .M05_AXI_rdata(M05_AXI_rdata),
    .M05_AXI_rresp(M05_AXI_rresp),
    .M05_AXI_rlast(M05_AXI_rlast),
    .M05_AXI_rvalid(M05_AXI_rvalid),
    .M05_AXI_rready(M05_AXI_rready),
    .M06_AXI_awaddr(M06_AXI_awaddr),
    .M06_AXI_awlen(M06_AXI_awlen),
    .M06_AXI_awsize(M06_AXI_awsize),
    .M06_AXI_awburst(M06_AXI_awburst),
    .M06_AXI_awlock(M06_AXI_awlock),
    .M06_AXI_awcache(M06_AXI_awcache),
    .M06_AXI_awprot(M06_AXI_awprot),
    .M06_AXI_awqos(M06_AXI_awqos),
    .M06_AXI_awvalid(M06_AXI_awvalid),
    .M06_AXI_awready(M06_AXI_awready),
    .M06_AXI_wdata(M06_AXI_wdata),
    .M06_AXI_wstrb(M06_AXI_wstrb),
    .M06_AXI_wlast(M06_AXI_wlast),
    .M06_AXI_wvalid(M06_AXI_wvalid),
    .M06_AXI_wready(M06_AXI_wready),
    .M06_AXI_bresp(M06_AXI_bresp),
    .M06_AXI_bvalid(M06_AXI_bvalid),
    .M06_AXI_bready(M06_AXI_bready),
    .M06_AXI_araddr(M06_AXI_araddr),
    .M06_AXI_arlen(M06_AXI_arlen),
    .M06_AXI_arsize(M06_AXI_arsize),
    .M06_AXI_arburst(M06_AXI_arburst),
    .M06_AXI_arlock(M06_AXI_arlock),
    .M06_AXI_arcache(M06_AXI_arcache),
    .M06_AXI_arprot(M06_AXI_arprot),
    .M06_AXI_arqos(M06_AXI_arqos),
    .M06_AXI_arvalid(M06_AXI_arvalid),
    .M06_AXI_arready(M06_AXI_arready),
    .M06_AXI_rdata(M06_AXI_rdata),
    .M06_AXI_rresp(M06_AXI_rresp),
    .M06_AXI_rlast(M06_AXI_rlast),
    .M06_AXI_rvalid(M06_AXI_rvalid),
    .M06_AXI_rready(M06_AXI_rready),
    .M07_AXI_awaddr(M07_AXI_awaddr),
    .M07_AXI_awlen(M07_AXI_awlen),
    .M07_AXI_awsize(M07_AXI_awsize),
    .M07_AXI_awburst(M07_AXI_awburst),
    .M07_AXI_awlock(M07_AXI_awlock),
    .M07_AXI_awcache(M07_AXI_awcache),
    .M07_AXI_awprot(M07_AXI_awprot),
    .M07_AXI_awqos(M07_AXI_awqos),
    .M07_AXI_awvalid(M07_AXI_awvalid),
    .M07_AXI_awready(M07_AXI_awready),
    .M07_AXI_wdata(M07_AXI_wdata),
    .M07_AXI_wstrb(M07_AXI_wstrb),
    .M07_AXI_wlast(M07_AXI_wlast),
    .M07_AXI_wvalid(M07_AXI_wvalid),
    .M07_AXI_wready(M07_AXI_wready),
    .M07_AXI_bresp(M07_AXI_bresp),
    .M07_AXI_bvalid(M07_AXI_bvalid),
    .M07_AXI_bready(M07_AXI_bready),
    .M07_AXI_araddr(M07_AXI_araddr),
    .M07_AXI_arlen(M07_AXI_arlen),
    .M07_AXI_arsize(M07_AXI_arsize),
    .M07_AXI_arburst(M07_AXI_arburst),
    .M07_AXI_arlock(M07_AXI_arlock),
    .M07_AXI_arcache(M07_AXI_arcache),
    .M07_AXI_arprot(M07_AXI_arprot),
    .M07_AXI_arqos(M07_AXI_arqos),
    .M07_AXI_arvalid(M07_AXI_arvalid),
    .M07_AXI_arready(M07_AXI_arready),
    .M07_AXI_rdata(M07_AXI_rdata),
    .M07_AXI_rresp(M07_AXI_rresp),
    .M07_AXI_rlast(M07_AXI_rlast),
    .M07_AXI_rvalid(M07_AXI_rvalid),
    .M07_AXI_rready(M07_AXI_rready),
    .M08_AXI_awaddr(M08_AXI_awaddr),
    .M08_AXI_awlen(M08_AXI_awlen),
    .M08_AXI_awsize(M08_AXI_awsize),
    .M08_AXI_awburst(M08_AXI_awburst),
    .M08_AXI_awlock(M08_AXI_awlock),
    .M08_AXI_awcache(M08_AXI_awcache),
    .M08_AXI_awprot(M08_AXI_awprot),
    .M08_AXI_awqos(M08_AXI_awqos),
    .M08_AXI_awvalid(M08_AXI_awvalid),
    .M08_AXI_awready(M08_AXI_awready),
    .M08_AXI_wdata(M08_AXI_wdata),
    .M08_AXI_wstrb(M08_AXI_wstrb),
    .M08_AXI_wlast(M08_AXI_wlast),
    .M08_AXI_wvalid(M08_AXI_wvalid),
    .M08_AXI_wready(M08_AXI_wready),
    .M08_AXI_bresp(M08_AXI_bresp),
    .M08_AXI_bvalid(M08_AXI_bvalid),
    .M08_AXI_bready(M08_AXI_bready),
    .M08_AXI_araddr(M08_AXI_araddr),
    .M08_AXI_arlen(M08_AXI_arlen),
    .M08_AXI_arsize(M08_AXI_arsize),
    .M08_AXI_arburst(M08_AXI_arburst),
    .M08_AXI_arlock(M08_AXI_arlock),
    .M08_AXI_arcache(M08_AXI_arcache),
    .M08_AXI_arprot(M08_AXI_arprot),
    .M08_AXI_arqos(M08_AXI_arqos),
    .M08_AXI_arvalid(M08_AXI_arvalid),
    .M08_AXI_arready(M08_AXI_arready),
    .M08_AXI_rdata(M08_AXI_rdata),
    .M08_AXI_rresp(M08_AXI_rresp),
    .M08_AXI_rlast(M08_AXI_rlast),
    .M08_AXI_rvalid(M08_AXI_rvalid),
    .M08_AXI_rready(M08_AXI_rready),
    .M09_AXI_awaddr(M09_AXI_awaddr),
    .M09_AXI_awlen(M09_AXI_awlen),
    .M09_AXI_awsize(M09_AXI_awsize),
    .M09_AXI_awburst(M09_AXI_awburst),
    .M09_AXI_awlock(M09_AXI_awlock),
    .M09_AXI_awcache(M09_AXI_awcache),
    .M09_AXI_awprot(M09_AXI_awprot),
    .M09_AXI_awqos(M09_AXI_awqos),
    .M09_AXI_awvalid(M09_AXI_awvalid),
    .M09_AXI_awready(M09_AXI_awready),
    .M09_AXI_wdata(M09_AXI_wdata),
    .M09_AXI_wstrb(M09_AXI_wstrb),
    .M09_AXI_wlast(M09_AXI_wlast),
    .M09_AXI_wvalid(M09_AXI_wvalid),
    .M09_AXI_wready(M09_AXI_wready),
    .M09_AXI_bresp(M09_AXI_bresp),
    .M09_AXI_bvalid(M09_AXI_bvalid),
    .M09_AXI_bready(M09_AXI_bready),
    .M09_AXI_araddr(M09_AXI_araddr),
    .M09_AXI_arlen(M09_AXI_arlen),
    .M09_AXI_arsize(M09_AXI_arsize),
    .M09_AXI_arburst(M09_AXI_arburst),
    .M09_AXI_arlock(M09_AXI_arlock),
    .M09_AXI_arcache(M09_AXI_arcache),
    .M09_AXI_arprot(M09_AXI_arprot),
    .M09_AXI_arqos(M09_AXI_arqos),
    .M09_AXI_arvalid(M09_AXI_arvalid),
    .M09_AXI_arready(M09_AXI_arready),
    .M09_AXI_rdata(M09_AXI_rdata),
    .M09_AXI_rresp(M09_AXI_rresp),
    .M09_AXI_rlast(M09_AXI_rlast),
    .M09_AXI_rvalid(M09_AXI_rvalid),
    .M09_AXI_rready(M09_AXI_rready),
    .M10_AXI_awaddr(M10_AXI_awaddr),
    .M10_AXI_awlen(M10_AXI_awlen),
    .M10_AXI_awsize(M10_AXI_awsize),
    .M10_AXI_awburst(M10_AXI_awburst),
    .M10_AXI_awlock(M10_AXI_awlock),
    .M10_AXI_awcache(M10_AXI_awcache),
    .M10_AXI_awprot(M10_AXI_awprot),
    .M10_AXI_awqos(M10_AXI_awqos),
    .M10_AXI_awvalid(M10_AXI_awvalid),
    .M10_AXI_awready(M10_AXI_awready),
    .M10_AXI_wdata(M10_AXI_wdata),
    .M10_AXI_wstrb(M10_AXI_wstrb),
    .M10_AXI_wlast(M10_AXI_wlast),
    .M10_AXI_wvalid(M10_AXI_wvalid),
    .M10_AXI_wready(M10_AXI_wready),
    .M10_AXI_bresp(M10_AXI_bresp),
    .M10_AXI_bvalid(M10_AXI_bvalid),
    .M10_AXI_bready(M10_AXI_bready),
    .M10_AXI_araddr(M10_AXI_araddr),
    .M10_AXI_arlen(M10_AXI_arlen),
    .M10_AXI_arsize(M10_AXI_arsize),
    .M10_AXI_arburst(M10_AXI_arburst),
    .M10_AXI_arlock(M10_AXI_arlock),
    .M10_AXI_arcache(M10_AXI_arcache),
    .M10_AXI_arprot(M10_AXI_arprot),
    .M10_AXI_arqos(M10_AXI_arqos),
    .M10_AXI_arvalid(M10_AXI_arvalid),
    .M10_AXI_arready(M10_AXI_arready),
    .M10_AXI_rdata(M10_AXI_rdata),
    .M10_AXI_rresp(M10_AXI_rresp),
    .M10_AXI_rlast(M10_AXI_rlast),
    .M10_AXI_rvalid(M10_AXI_rvalid),
    .M10_AXI_rready(M10_AXI_rready),
    .M11_AXI_awaddr(M11_AXI_awaddr),
    .M11_AXI_awlen(M11_AXI_awlen),
    .M11_AXI_awsize(M11_AXI_awsize),
    .M11_AXI_awburst(M11_AXI_awburst),
    .M11_AXI_awlock(M11_AXI_awlock),
    .M11_AXI_awcache(M11_AXI_awcache),
    .M11_AXI_awprot(M11_AXI_awprot),
    .M11_AXI_awqos(M11_AXI_awqos),
    .M11_AXI_awvalid(M11_AXI_awvalid),
    .M11_AXI_awready(M11_AXI_awready),
    .M11_AXI_wdata(M11_AXI_wdata),
    .M11_AXI_wstrb(M11_AXI_wstrb),
    .M11_AXI_wlast(M11_AXI_wlast),
    .M11_AXI_wvalid(M11_AXI_wvalid),
    .M11_AXI_wready(M11_AXI_wready),
    .M11_AXI_bresp(M11_AXI_bresp),
    .M11_AXI_bvalid(M11_AXI_bvalid),
    .M11_AXI_bready(M11_AXI_bready),
    .M11_AXI_araddr(M11_AXI_araddr),
    .M11_AXI_arlen(M11_AXI_arlen),
    .M11_AXI_arsize(M11_AXI_arsize),
    .M11_AXI_arburst(M11_AXI_arburst),
    .M11_AXI_arlock(M11_AXI_arlock),
    .M11_AXI_arcache(M11_AXI_arcache),
    .M11_AXI_arprot(M11_AXI_arprot),
    .M11_AXI_arqos(M11_AXI_arqos),
    .M11_AXI_arvalid(M11_AXI_arvalid),
    .M11_AXI_arready(M11_AXI_arready),
    .M11_AXI_rdata(M11_AXI_rdata),
    .M11_AXI_rresp(M11_AXI_rresp),
    .M11_AXI_rlast(M11_AXI_rlast),
    .M11_AXI_rvalid(M11_AXI_rvalid),
    .M11_AXI_rready(M11_AXI_rready)
  );
endmodule
