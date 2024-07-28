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


#include "u280_xdma_hbm_0_0_sc.h"

#include "u280_xdma_hbm_0_0.h"

#include "hbm_sc.h"

#include <map>
#include <string>





#ifdef XILINX_SIMULATOR
u280_xdma_hbm_0_0::u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm) : u280_xdma_hbm_0_0_sc(nm), HBM_REF_CLK_0("HBM_REF_CLK_0"), HBM_REF_CLK_1("HBM_REF_CLK_1"), AXI_00_ACLK("AXI_00_ACLK"), AXI_00_ARESET_N("AXI_00_ARESET_N"), AXI_00_ARADDR("AXI_00_ARADDR"), AXI_00_ARBURST("AXI_00_ARBURST"), AXI_00_ARID("AXI_00_ARID"), AXI_00_ARLEN("AXI_00_ARLEN"), AXI_00_ARSIZE("AXI_00_ARSIZE"), AXI_00_ARVALID("AXI_00_ARVALID"), AXI_00_AWADDR("AXI_00_AWADDR"), AXI_00_AWBURST("AXI_00_AWBURST"), AXI_00_AWID("AXI_00_AWID"), AXI_00_AWLEN("AXI_00_AWLEN"), AXI_00_AWSIZE("AXI_00_AWSIZE"), AXI_00_AWVALID("AXI_00_AWVALID"), AXI_00_RREADY("AXI_00_RREADY"), AXI_00_BREADY("AXI_00_BREADY"), AXI_00_WDATA("AXI_00_WDATA"), AXI_00_WLAST("AXI_00_WLAST"), AXI_00_WSTRB("AXI_00_WSTRB"), AXI_00_WDATA_PARITY("AXI_00_WDATA_PARITY"), AXI_00_WVALID("AXI_00_WVALID"), AXI_01_ACLK("AXI_01_ACLK"), AXI_01_ARESET_N("AXI_01_ARESET_N"), AXI_01_ARADDR("AXI_01_ARADDR"), AXI_01_ARBURST("AXI_01_ARBURST"), AXI_01_ARID("AXI_01_ARID"), AXI_01_ARLEN("AXI_01_ARLEN"), AXI_01_ARSIZE("AXI_01_ARSIZE"), AXI_01_ARVALID("AXI_01_ARVALID"), AXI_01_AWADDR("AXI_01_AWADDR"), AXI_01_AWBURST("AXI_01_AWBURST"), AXI_01_AWID("AXI_01_AWID"), AXI_01_AWLEN("AXI_01_AWLEN"), AXI_01_AWSIZE("AXI_01_AWSIZE"), AXI_01_AWVALID("AXI_01_AWVALID"), AXI_01_RREADY("AXI_01_RREADY"), AXI_01_BREADY("AXI_01_BREADY"), AXI_01_WDATA("AXI_01_WDATA"), AXI_01_WLAST("AXI_01_WLAST"), AXI_01_WSTRB("AXI_01_WSTRB"), AXI_01_WDATA_PARITY("AXI_01_WDATA_PARITY"), AXI_01_WVALID("AXI_01_WVALID"), AXI_02_ACLK("AXI_02_ACLK"), AXI_02_ARESET_N("AXI_02_ARESET_N"), AXI_02_ARADDR("AXI_02_ARADDR"), AXI_02_ARBURST("AXI_02_ARBURST"), AXI_02_ARID("AXI_02_ARID"), AXI_02_ARLEN("AXI_02_ARLEN"), AXI_02_ARSIZE("AXI_02_ARSIZE"), AXI_02_ARVALID("AXI_02_ARVALID"), AXI_02_AWADDR("AXI_02_AWADDR"), AXI_02_AWBURST("AXI_02_AWBURST"), AXI_02_AWID("AXI_02_AWID"), AXI_02_AWLEN("AXI_02_AWLEN"), AXI_02_AWSIZE("AXI_02_AWSIZE"), AXI_02_AWVALID("AXI_02_AWVALID"), AXI_02_RREADY("AXI_02_RREADY"), AXI_02_BREADY("AXI_02_BREADY"), AXI_02_WDATA("AXI_02_WDATA"), AXI_02_WLAST("AXI_02_WLAST"), AXI_02_WSTRB("AXI_02_WSTRB"), AXI_02_WDATA_PARITY("AXI_02_WDATA_PARITY"), AXI_02_WVALID("AXI_02_WVALID"), AXI_03_ACLK("AXI_03_ACLK"), AXI_03_ARESET_N("AXI_03_ARESET_N"), AXI_03_ARADDR("AXI_03_ARADDR"), AXI_03_ARBURST("AXI_03_ARBURST"), AXI_03_ARID("AXI_03_ARID"), AXI_03_ARLEN("AXI_03_ARLEN"), AXI_03_ARSIZE("AXI_03_ARSIZE"), AXI_03_ARVALID("AXI_03_ARVALID"), AXI_03_AWADDR("AXI_03_AWADDR"), AXI_03_AWBURST("AXI_03_AWBURST"), AXI_03_AWID("AXI_03_AWID"), AXI_03_AWLEN("AXI_03_AWLEN"), AXI_03_AWSIZE("AXI_03_AWSIZE"), AXI_03_AWVALID("AXI_03_AWVALID"), AXI_03_RREADY("AXI_03_RREADY"), AXI_03_BREADY("AXI_03_BREADY"), AXI_03_WDATA("AXI_03_WDATA"), AXI_03_WLAST("AXI_03_WLAST"), AXI_03_WSTRB("AXI_03_WSTRB"), AXI_03_WDATA_PARITY("AXI_03_WDATA_PARITY"), AXI_03_WVALID("AXI_03_WVALID"), AXI_16_ACLK("AXI_16_ACLK"), AXI_16_ARESET_N("AXI_16_ARESET_N"), AXI_16_ARADDR("AXI_16_ARADDR"), AXI_16_ARBURST("AXI_16_ARBURST"), AXI_16_ARID("AXI_16_ARID"), AXI_16_ARLEN("AXI_16_ARLEN"), AXI_16_ARSIZE("AXI_16_ARSIZE"), AXI_16_ARVALID("AXI_16_ARVALID"), AXI_16_AWADDR("AXI_16_AWADDR"), AXI_16_AWBURST("AXI_16_AWBURST"), AXI_16_AWID("AXI_16_AWID"), AXI_16_AWLEN("AXI_16_AWLEN"), AXI_16_AWSIZE("AXI_16_AWSIZE"), AXI_16_AWVALID("AXI_16_AWVALID"), AXI_16_RREADY("AXI_16_RREADY"), AXI_16_BREADY("AXI_16_BREADY"), AXI_16_WDATA("AXI_16_WDATA"), AXI_16_WLAST("AXI_16_WLAST"), AXI_16_WSTRB("AXI_16_WSTRB"), AXI_16_WDATA_PARITY("AXI_16_WDATA_PARITY"), AXI_16_WVALID("AXI_16_WVALID"), AXI_17_ACLK("AXI_17_ACLK"), AXI_17_ARESET_N("AXI_17_ARESET_N"), AXI_17_ARADDR("AXI_17_ARADDR"), AXI_17_ARBURST("AXI_17_ARBURST"), AXI_17_ARID("AXI_17_ARID"), AXI_17_ARLEN("AXI_17_ARLEN"), AXI_17_ARSIZE("AXI_17_ARSIZE"), AXI_17_ARVALID("AXI_17_ARVALID"), AXI_17_AWADDR("AXI_17_AWADDR"), AXI_17_AWBURST("AXI_17_AWBURST"), AXI_17_AWID("AXI_17_AWID"), AXI_17_AWLEN("AXI_17_AWLEN"), AXI_17_AWSIZE("AXI_17_AWSIZE"), AXI_17_AWVALID("AXI_17_AWVALID"), AXI_17_RREADY("AXI_17_RREADY"), AXI_17_BREADY("AXI_17_BREADY"), AXI_17_WDATA("AXI_17_WDATA"), AXI_17_WLAST("AXI_17_WLAST"), AXI_17_WSTRB("AXI_17_WSTRB"), AXI_17_WDATA_PARITY("AXI_17_WDATA_PARITY"), AXI_17_WVALID("AXI_17_WVALID"), AXI_18_ACLK("AXI_18_ACLK"), AXI_18_ARESET_N("AXI_18_ARESET_N"), AXI_18_ARADDR("AXI_18_ARADDR"), AXI_18_ARBURST("AXI_18_ARBURST"), AXI_18_ARID("AXI_18_ARID"), AXI_18_ARLEN("AXI_18_ARLEN"), AXI_18_ARSIZE("AXI_18_ARSIZE"), AXI_18_ARVALID("AXI_18_ARVALID"), AXI_18_AWADDR("AXI_18_AWADDR"), AXI_18_AWBURST("AXI_18_AWBURST"), AXI_18_AWID("AXI_18_AWID"), AXI_18_AWLEN("AXI_18_AWLEN"), AXI_18_AWSIZE("AXI_18_AWSIZE"), AXI_18_AWVALID("AXI_18_AWVALID"), AXI_18_RREADY("AXI_18_RREADY"), AXI_18_BREADY("AXI_18_BREADY"), AXI_18_WDATA("AXI_18_WDATA"), AXI_18_WLAST("AXI_18_WLAST"), AXI_18_WSTRB("AXI_18_WSTRB"), AXI_18_WDATA_PARITY("AXI_18_WDATA_PARITY"), AXI_18_WVALID("AXI_18_WVALID"), AXI_19_ACLK("AXI_19_ACLK"), AXI_19_ARESET_N("AXI_19_ARESET_N"), AXI_19_ARADDR("AXI_19_ARADDR"), AXI_19_ARBURST("AXI_19_ARBURST"), AXI_19_ARID("AXI_19_ARID"), AXI_19_ARLEN("AXI_19_ARLEN"), AXI_19_ARSIZE("AXI_19_ARSIZE"), AXI_19_ARVALID("AXI_19_ARVALID"), AXI_19_AWADDR("AXI_19_AWADDR"), AXI_19_AWBURST("AXI_19_AWBURST"), AXI_19_AWID("AXI_19_AWID"), AXI_19_AWLEN("AXI_19_AWLEN"), AXI_19_AWSIZE("AXI_19_AWSIZE"), AXI_19_AWVALID("AXI_19_AWVALID"), AXI_19_RREADY("AXI_19_RREADY"), AXI_19_BREADY("AXI_19_BREADY"), AXI_19_WDATA("AXI_19_WDATA"), AXI_19_WLAST("AXI_19_WLAST"), AXI_19_WSTRB("AXI_19_WSTRB"), AXI_19_WDATA_PARITY("AXI_19_WDATA_PARITY"), AXI_19_WVALID("AXI_19_WVALID"), APB_0_PCLK("APB_0_PCLK"), APB_0_PRESET_N("APB_0_PRESET_N"), APB_1_PCLK("APB_1_PCLK"), APB_1_PRESET_N("APB_1_PRESET_N"), AXI_00_ARREADY("AXI_00_ARREADY"), AXI_00_AWREADY("AXI_00_AWREADY"), AXI_00_RDATA_PARITY("AXI_00_RDATA_PARITY"), AXI_00_RDATA("AXI_00_RDATA"), AXI_00_RID("AXI_00_RID"), AXI_00_RLAST("AXI_00_RLAST"), AXI_00_RRESP("AXI_00_RRESP"), AXI_00_RVALID("AXI_00_RVALID"), AXI_00_WREADY("AXI_00_WREADY"), AXI_00_BID("AXI_00_BID"), AXI_00_BRESP("AXI_00_BRESP"), AXI_00_BVALID("AXI_00_BVALID"), AXI_01_ARREADY("AXI_01_ARREADY"), AXI_01_AWREADY("AXI_01_AWREADY"), AXI_01_RDATA_PARITY("AXI_01_RDATA_PARITY"), AXI_01_RDATA("AXI_01_RDATA"), AXI_01_RID("AXI_01_RID"), AXI_01_RLAST("AXI_01_RLAST"), AXI_01_RRESP("AXI_01_RRESP"), AXI_01_RVALID("AXI_01_RVALID"), AXI_01_WREADY("AXI_01_WREADY"), AXI_01_BID("AXI_01_BID"), AXI_01_BRESP("AXI_01_BRESP"), AXI_01_BVALID("AXI_01_BVALID"), AXI_02_ARREADY("AXI_02_ARREADY"), AXI_02_AWREADY("AXI_02_AWREADY"), AXI_02_RDATA_PARITY("AXI_02_RDATA_PARITY"), AXI_02_RDATA("AXI_02_RDATA"), AXI_02_RID("AXI_02_RID"), AXI_02_RLAST("AXI_02_RLAST"), AXI_02_RRESP("AXI_02_RRESP"), AXI_02_RVALID("AXI_02_RVALID"), AXI_02_WREADY("AXI_02_WREADY"), AXI_02_BID("AXI_02_BID"), AXI_02_BRESP("AXI_02_BRESP"), AXI_02_BVALID("AXI_02_BVALID"), AXI_03_ARREADY("AXI_03_ARREADY"), AXI_03_AWREADY("AXI_03_AWREADY"), AXI_03_RDATA_PARITY("AXI_03_RDATA_PARITY"), AXI_03_RDATA("AXI_03_RDATA"), AXI_03_RID("AXI_03_RID"), AXI_03_RLAST("AXI_03_RLAST"), AXI_03_RRESP("AXI_03_RRESP"), AXI_03_RVALID("AXI_03_RVALID"), AXI_03_WREADY("AXI_03_WREADY"), AXI_03_BID("AXI_03_BID"), AXI_03_BRESP("AXI_03_BRESP"), AXI_03_BVALID("AXI_03_BVALID"), AXI_16_ARREADY("AXI_16_ARREADY"), AXI_16_AWREADY("AXI_16_AWREADY"), AXI_16_RDATA_PARITY("AXI_16_RDATA_PARITY"), AXI_16_RDATA("AXI_16_RDATA"), AXI_16_RID("AXI_16_RID"), AXI_16_RLAST("AXI_16_RLAST"), AXI_16_RRESP("AXI_16_RRESP"), AXI_16_RVALID("AXI_16_RVALID"), AXI_16_WREADY("AXI_16_WREADY"), AXI_16_BID("AXI_16_BID"), AXI_16_BRESP("AXI_16_BRESP"), AXI_16_BVALID("AXI_16_BVALID"), AXI_17_ARREADY("AXI_17_ARREADY"), AXI_17_AWREADY("AXI_17_AWREADY"), AXI_17_RDATA_PARITY("AXI_17_RDATA_PARITY"), AXI_17_RDATA("AXI_17_RDATA"), AXI_17_RID("AXI_17_RID"), AXI_17_RLAST("AXI_17_RLAST"), AXI_17_RRESP("AXI_17_RRESP"), AXI_17_RVALID("AXI_17_RVALID"), AXI_17_WREADY("AXI_17_WREADY"), AXI_17_BID("AXI_17_BID"), AXI_17_BRESP("AXI_17_BRESP"), AXI_17_BVALID("AXI_17_BVALID"), AXI_18_ARREADY("AXI_18_ARREADY"), AXI_18_AWREADY("AXI_18_AWREADY"), AXI_18_RDATA_PARITY("AXI_18_RDATA_PARITY"), AXI_18_RDATA("AXI_18_RDATA"), AXI_18_RID("AXI_18_RID"), AXI_18_RLAST("AXI_18_RLAST"), AXI_18_RRESP("AXI_18_RRESP"), AXI_18_RVALID("AXI_18_RVALID"), AXI_18_WREADY("AXI_18_WREADY"), AXI_18_BID("AXI_18_BID"), AXI_18_BRESP("AXI_18_BRESP"), AXI_18_BVALID("AXI_18_BVALID"), AXI_19_ARREADY("AXI_19_ARREADY"), AXI_19_AWREADY("AXI_19_AWREADY"), AXI_19_RDATA_PARITY("AXI_19_RDATA_PARITY"), AXI_19_RDATA("AXI_19_RDATA"), AXI_19_RID("AXI_19_RID"), AXI_19_RLAST("AXI_19_RLAST"), AXI_19_RRESP("AXI_19_RRESP"), AXI_19_RVALID("AXI_19_RVALID"), AXI_19_WREADY("AXI_19_WREADY"), AXI_19_BID("AXI_19_BID"), AXI_19_BRESP("AXI_19_BRESP"), AXI_19_BVALID("AXI_19_BVALID"), apb_complete_0("apb_complete_0"), apb_complete_1("apb_complete_1"), DRAM_0_STAT_CATTRIP("DRAM_0_STAT_CATTRIP"), DRAM_0_STAT_TEMP("DRAM_0_STAT_TEMP"), DRAM_1_STAT_CATTRIP("DRAM_1_STAT_CATTRIP"), DRAM_1_STAT_TEMP("DRAM_1_STAT_TEMP")
{

  // initialize pins
  mp_impl->HBM_REF_CLK_0(HBM_REF_CLK_0);
  mp_impl->HBM_REF_CLK_1(HBM_REF_CLK_1);
  mp_impl->AXI_00_ACLK(AXI_00_ACLK);
  mp_impl->AXI_00_ARESET_N(AXI_00_ARESET_N);
  mp_impl->AXI_00_WDATA_PARITY(AXI_00_WDATA_PARITY);
  mp_impl->AXI_01_ACLK(AXI_01_ACLK);
  mp_impl->AXI_01_ARESET_N(AXI_01_ARESET_N);
  mp_impl->AXI_01_WDATA_PARITY(AXI_01_WDATA_PARITY);
  mp_impl->AXI_02_ACLK(AXI_02_ACLK);
  mp_impl->AXI_02_ARESET_N(AXI_02_ARESET_N);
  mp_impl->AXI_02_WDATA_PARITY(AXI_02_WDATA_PARITY);
  mp_impl->AXI_03_ACLK(AXI_03_ACLK);
  mp_impl->AXI_03_ARESET_N(AXI_03_ARESET_N);
  mp_impl->AXI_03_WDATA_PARITY(AXI_03_WDATA_PARITY);
  mp_impl->AXI_16_ACLK(AXI_16_ACLK);
  mp_impl->AXI_16_ARESET_N(AXI_16_ARESET_N);
  mp_impl->AXI_16_WDATA_PARITY(AXI_16_WDATA_PARITY);
  mp_impl->AXI_17_ACLK(AXI_17_ACLK);
  mp_impl->AXI_17_ARESET_N(AXI_17_ARESET_N);
  mp_impl->AXI_17_WDATA_PARITY(AXI_17_WDATA_PARITY);
  mp_impl->AXI_18_ACLK(AXI_18_ACLK);
  mp_impl->AXI_18_ARESET_N(AXI_18_ARESET_N);
  mp_impl->AXI_18_WDATA_PARITY(AXI_18_WDATA_PARITY);
  mp_impl->AXI_19_ACLK(AXI_19_ACLK);
  mp_impl->AXI_19_ARESET_N(AXI_19_ARESET_N);
  mp_impl->AXI_19_WDATA_PARITY(AXI_19_WDATA_PARITY);
  mp_impl->APB_0_PCLK(APB_0_PCLK);
  mp_impl->APB_0_PRESET_N(APB_0_PRESET_N);
  mp_impl->APB_1_PCLK(APB_1_PCLK);
  mp_impl->APB_1_PRESET_N(APB_1_PRESET_N);
  mp_impl->AXI_00_RDATA_PARITY(AXI_00_RDATA_PARITY);
  mp_impl->AXI_01_RDATA_PARITY(AXI_01_RDATA_PARITY);
  mp_impl->AXI_02_RDATA_PARITY(AXI_02_RDATA_PARITY);
  mp_impl->AXI_03_RDATA_PARITY(AXI_03_RDATA_PARITY);
  mp_impl->AXI_16_RDATA_PARITY(AXI_16_RDATA_PARITY);
  mp_impl->AXI_17_RDATA_PARITY(AXI_17_RDATA_PARITY);
  mp_impl->AXI_18_RDATA_PARITY(AXI_18_RDATA_PARITY);
  mp_impl->AXI_19_RDATA_PARITY(AXI_19_RDATA_PARITY);
  mp_impl->apb_complete_0(apb_complete_0);
  mp_impl->apb_complete_1(apb_complete_1);
  mp_impl->DRAM_0_STAT_CATTRIP(DRAM_0_STAT_CATTRIP);
  mp_impl->DRAM_0_STAT_TEMP(DRAM_0_STAT_TEMP);
  mp_impl->DRAM_1_STAT_CATTRIP(DRAM_1_STAT_CATTRIP);
  mp_impl->DRAM_1_STAT_TEMP(DRAM_1_STAT_TEMP);

  // initialize transactors
  mp_SAXI_00_transactor = NULL;
  mp_AXI_00_ARLEN_converter = NULL;
  mp_AXI_00_AWLEN_converter = NULL;
  mp_SAXI_01_transactor = NULL;
  mp_AXI_01_ARLEN_converter = NULL;
  mp_AXI_01_AWLEN_converter = NULL;
  mp_SAXI_02_transactor = NULL;
  mp_AXI_02_ARLEN_converter = NULL;
  mp_AXI_02_AWLEN_converter = NULL;
  mp_SAXI_03_transactor = NULL;
  mp_AXI_03_ARLEN_converter = NULL;
  mp_AXI_03_AWLEN_converter = NULL;
  mp_SAXI_16_transactor = NULL;
  mp_AXI_16_ARLEN_converter = NULL;
  mp_AXI_16_AWLEN_converter = NULL;
  mp_SAXI_17_transactor = NULL;
  mp_AXI_17_ARLEN_converter = NULL;
  mp_AXI_17_AWLEN_converter = NULL;
  mp_SAXI_18_transactor = NULL;
  mp_AXI_18_ARLEN_converter = NULL;
  mp_AXI_18_AWLEN_converter = NULL;
  mp_SAXI_19_transactor = NULL;
  mp_AXI_19_ARLEN_converter = NULL;
  mp_AXI_19_AWLEN_converter = NULL;

  // initialize socket stubs

}

void u280_xdma_hbm_0_0::before_end_of_elaboration()
{
  // configure 'SAXI_00' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_00_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_00' transactor parameters
    xsc::common_cpp::properties SAXI_00_transactor_param_props;
    SAXI_00_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_00_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_00_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_00_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_00_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_00_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_00_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_00_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_00_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_00_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_00_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_00_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_00_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_00_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_00_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_00_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_00_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_00_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_00_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_00_transactor", SAXI_00_transactor_param_props);

    // SAXI_00' transactor ports

    mp_SAXI_00_transactor->ARADDR(AXI_00_ARADDR);
    mp_SAXI_00_transactor->ARBURST(AXI_00_ARBURST);
    mp_SAXI_00_transactor->ARID(AXI_00_ARID);
    mp_AXI_00_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_ARLEN_converter");
    mp_AXI_00_ARLEN_converter->vector_in(AXI_00_ARLEN);
    mp_AXI_00_ARLEN_converter->vector_out(m_AXI_00_ARLEN_converter_signal);
    mp_SAXI_00_transactor->ARLEN(m_AXI_00_ARLEN_converter_signal);
    mp_SAXI_00_transactor->ARREADY(AXI_00_ARREADY);
    mp_SAXI_00_transactor->ARSIZE(AXI_00_ARSIZE);
    mp_SAXI_00_transactor->ARVALID(AXI_00_ARVALID);
    mp_SAXI_00_transactor->AWADDR(AXI_00_AWADDR);
    mp_SAXI_00_transactor->AWBURST(AXI_00_AWBURST);
    mp_SAXI_00_transactor->AWID(AXI_00_AWID);
    mp_AXI_00_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_AWLEN_converter");
    mp_AXI_00_AWLEN_converter->vector_in(AXI_00_AWLEN);
    mp_AXI_00_AWLEN_converter->vector_out(m_AXI_00_AWLEN_converter_signal);
    mp_SAXI_00_transactor->AWLEN(m_AXI_00_AWLEN_converter_signal);
    mp_SAXI_00_transactor->AWREADY(AXI_00_AWREADY);
    mp_SAXI_00_transactor->AWSIZE(AXI_00_AWSIZE);
    mp_SAXI_00_transactor->AWVALID(AXI_00_AWVALID);
    mp_SAXI_00_transactor->BID(AXI_00_BID);
    mp_SAXI_00_transactor->BREADY(AXI_00_BREADY);
    mp_SAXI_00_transactor->BRESP(AXI_00_BRESP);
    mp_SAXI_00_transactor->BVALID(AXI_00_BVALID);
    mp_SAXI_00_transactor->RDATA(AXI_00_RDATA);
    mp_SAXI_00_transactor->RID(AXI_00_RID);
    mp_SAXI_00_transactor->RLAST(AXI_00_RLAST);
    mp_SAXI_00_transactor->RREADY(AXI_00_RREADY);
    mp_SAXI_00_transactor->RRESP(AXI_00_RRESP);
    mp_SAXI_00_transactor->RVALID(AXI_00_RVALID);
    mp_SAXI_00_transactor->WDATA(AXI_00_WDATA);
    mp_SAXI_00_transactor->WLAST(AXI_00_WLAST);
    mp_SAXI_00_transactor->WREADY(AXI_00_WREADY);
    mp_SAXI_00_transactor->WSTRB(AXI_00_WSTRB);
    mp_SAXI_00_transactor->WVALID(AXI_00_WVALID);
    mp_SAXI_00_transactor->CLK(AXI_00_ACLK);
    m_SAXI_00_transactor_rst_signal.write(1);
    mp_SAXI_00_transactor->RST(m_SAXI_00_transactor_rst_signal);

    // SAXI_00' transactor sockets

    mp_impl->SAXI_00_rd_socket->bind(*(mp_SAXI_00_transactor->rd_socket));
    mp_impl->SAXI_00_wr_socket->bind(*(mp_SAXI_00_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_01' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_01_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_01' transactor parameters
    xsc::common_cpp::properties SAXI_01_transactor_param_props;
    SAXI_01_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_01_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_01_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_01_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_01_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_01_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_01_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_01_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_01_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_01_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_01_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_01_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_01_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_01_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_01_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_01_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_01_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_01_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_01_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_01_transactor", SAXI_01_transactor_param_props);

    // SAXI_01' transactor ports

    mp_SAXI_01_transactor->ARADDR(AXI_01_ARADDR);
    mp_SAXI_01_transactor->ARBURST(AXI_01_ARBURST);
    mp_SAXI_01_transactor->ARID(AXI_01_ARID);
    mp_AXI_01_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_ARLEN_converter");
    mp_AXI_01_ARLEN_converter->vector_in(AXI_01_ARLEN);
    mp_AXI_01_ARLEN_converter->vector_out(m_AXI_01_ARLEN_converter_signal);
    mp_SAXI_01_transactor->ARLEN(m_AXI_01_ARLEN_converter_signal);
    mp_SAXI_01_transactor->ARREADY(AXI_01_ARREADY);
    mp_SAXI_01_transactor->ARSIZE(AXI_01_ARSIZE);
    mp_SAXI_01_transactor->ARVALID(AXI_01_ARVALID);
    mp_SAXI_01_transactor->AWADDR(AXI_01_AWADDR);
    mp_SAXI_01_transactor->AWBURST(AXI_01_AWBURST);
    mp_SAXI_01_transactor->AWID(AXI_01_AWID);
    mp_AXI_01_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_AWLEN_converter");
    mp_AXI_01_AWLEN_converter->vector_in(AXI_01_AWLEN);
    mp_AXI_01_AWLEN_converter->vector_out(m_AXI_01_AWLEN_converter_signal);
    mp_SAXI_01_transactor->AWLEN(m_AXI_01_AWLEN_converter_signal);
    mp_SAXI_01_transactor->AWREADY(AXI_01_AWREADY);
    mp_SAXI_01_transactor->AWSIZE(AXI_01_AWSIZE);
    mp_SAXI_01_transactor->AWVALID(AXI_01_AWVALID);
    mp_SAXI_01_transactor->BID(AXI_01_BID);
    mp_SAXI_01_transactor->BREADY(AXI_01_BREADY);
    mp_SAXI_01_transactor->BRESP(AXI_01_BRESP);
    mp_SAXI_01_transactor->BVALID(AXI_01_BVALID);
    mp_SAXI_01_transactor->RDATA(AXI_01_RDATA);
    mp_SAXI_01_transactor->RID(AXI_01_RID);
    mp_SAXI_01_transactor->RLAST(AXI_01_RLAST);
    mp_SAXI_01_transactor->RREADY(AXI_01_RREADY);
    mp_SAXI_01_transactor->RRESP(AXI_01_RRESP);
    mp_SAXI_01_transactor->RVALID(AXI_01_RVALID);
    mp_SAXI_01_transactor->WDATA(AXI_01_WDATA);
    mp_SAXI_01_transactor->WLAST(AXI_01_WLAST);
    mp_SAXI_01_transactor->WREADY(AXI_01_WREADY);
    mp_SAXI_01_transactor->WSTRB(AXI_01_WSTRB);
    mp_SAXI_01_transactor->WVALID(AXI_01_WVALID);
    mp_SAXI_01_transactor->CLK(AXI_01_ACLK);
    m_SAXI_01_transactor_rst_signal.write(1);
    mp_SAXI_01_transactor->RST(m_SAXI_01_transactor_rst_signal);

    // SAXI_01' transactor sockets

    mp_impl->SAXI_01_rd_socket->bind(*(mp_SAXI_01_transactor->rd_socket));
    mp_impl->SAXI_01_wr_socket->bind(*(mp_SAXI_01_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_02' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_02_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_02' transactor parameters
    xsc::common_cpp::properties SAXI_02_transactor_param_props;
    SAXI_02_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_02_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_02_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_02_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_02_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_02_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_02_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_02_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_02_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_02_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_02_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_02_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_02_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_02_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_02_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_02_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_02_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_02_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_02_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_02_transactor", SAXI_02_transactor_param_props);

    // SAXI_02' transactor ports

    mp_SAXI_02_transactor->ARADDR(AXI_02_ARADDR);
    mp_SAXI_02_transactor->ARBURST(AXI_02_ARBURST);
    mp_SAXI_02_transactor->ARID(AXI_02_ARID);
    mp_AXI_02_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_ARLEN_converter");
    mp_AXI_02_ARLEN_converter->vector_in(AXI_02_ARLEN);
    mp_AXI_02_ARLEN_converter->vector_out(m_AXI_02_ARLEN_converter_signal);
    mp_SAXI_02_transactor->ARLEN(m_AXI_02_ARLEN_converter_signal);
    mp_SAXI_02_transactor->ARREADY(AXI_02_ARREADY);
    mp_SAXI_02_transactor->ARSIZE(AXI_02_ARSIZE);
    mp_SAXI_02_transactor->ARVALID(AXI_02_ARVALID);
    mp_SAXI_02_transactor->AWADDR(AXI_02_AWADDR);
    mp_SAXI_02_transactor->AWBURST(AXI_02_AWBURST);
    mp_SAXI_02_transactor->AWID(AXI_02_AWID);
    mp_AXI_02_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_AWLEN_converter");
    mp_AXI_02_AWLEN_converter->vector_in(AXI_02_AWLEN);
    mp_AXI_02_AWLEN_converter->vector_out(m_AXI_02_AWLEN_converter_signal);
    mp_SAXI_02_transactor->AWLEN(m_AXI_02_AWLEN_converter_signal);
    mp_SAXI_02_transactor->AWREADY(AXI_02_AWREADY);
    mp_SAXI_02_transactor->AWSIZE(AXI_02_AWSIZE);
    mp_SAXI_02_transactor->AWVALID(AXI_02_AWVALID);
    mp_SAXI_02_transactor->BID(AXI_02_BID);
    mp_SAXI_02_transactor->BREADY(AXI_02_BREADY);
    mp_SAXI_02_transactor->BRESP(AXI_02_BRESP);
    mp_SAXI_02_transactor->BVALID(AXI_02_BVALID);
    mp_SAXI_02_transactor->RDATA(AXI_02_RDATA);
    mp_SAXI_02_transactor->RID(AXI_02_RID);
    mp_SAXI_02_transactor->RLAST(AXI_02_RLAST);
    mp_SAXI_02_transactor->RREADY(AXI_02_RREADY);
    mp_SAXI_02_transactor->RRESP(AXI_02_RRESP);
    mp_SAXI_02_transactor->RVALID(AXI_02_RVALID);
    mp_SAXI_02_transactor->WDATA(AXI_02_WDATA);
    mp_SAXI_02_transactor->WLAST(AXI_02_WLAST);
    mp_SAXI_02_transactor->WREADY(AXI_02_WREADY);
    mp_SAXI_02_transactor->WSTRB(AXI_02_WSTRB);
    mp_SAXI_02_transactor->WVALID(AXI_02_WVALID);
    mp_SAXI_02_transactor->CLK(AXI_02_ACLK);
    m_SAXI_02_transactor_rst_signal.write(1);
    mp_SAXI_02_transactor->RST(m_SAXI_02_transactor_rst_signal);

    // SAXI_02' transactor sockets

    mp_impl->SAXI_02_rd_socket->bind(*(mp_SAXI_02_transactor->rd_socket));
    mp_impl->SAXI_02_wr_socket->bind(*(mp_SAXI_02_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_03' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_03_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_03' transactor parameters
    xsc::common_cpp::properties SAXI_03_transactor_param_props;
    SAXI_03_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_03_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_03_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_03_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_03_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_03_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_03_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_03_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_03_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_03_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_03_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_03_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_03_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_03_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_03_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_03_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_03_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_03_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_03_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_03_transactor", SAXI_03_transactor_param_props);

    // SAXI_03' transactor ports

    mp_SAXI_03_transactor->ARADDR(AXI_03_ARADDR);
    mp_SAXI_03_transactor->ARBURST(AXI_03_ARBURST);
    mp_SAXI_03_transactor->ARID(AXI_03_ARID);
    mp_AXI_03_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_ARLEN_converter");
    mp_AXI_03_ARLEN_converter->vector_in(AXI_03_ARLEN);
    mp_AXI_03_ARLEN_converter->vector_out(m_AXI_03_ARLEN_converter_signal);
    mp_SAXI_03_transactor->ARLEN(m_AXI_03_ARLEN_converter_signal);
    mp_SAXI_03_transactor->ARREADY(AXI_03_ARREADY);
    mp_SAXI_03_transactor->ARSIZE(AXI_03_ARSIZE);
    mp_SAXI_03_transactor->ARVALID(AXI_03_ARVALID);
    mp_SAXI_03_transactor->AWADDR(AXI_03_AWADDR);
    mp_SAXI_03_transactor->AWBURST(AXI_03_AWBURST);
    mp_SAXI_03_transactor->AWID(AXI_03_AWID);
    mp_AXI_03_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_AWLEN_converter");
    mp_AXI_03_AWLEN_converter->vector_in(AXI_03_AWLEN);
    mp_AXI_03_AWLEN_converter->vector_out(m_AXI_03_AWLEN_converter_signal);
    mp_SAXI_03_transactor->AWLEN(m_AXI_03_AWLEN_converter_signal);
    mp_SAXI_03_transactor->AWREADY(AXI_03_AWREADY);
    mp_SAXI_03_transactor->AWSIZE(AXI_03_AWSIZE);
    mp_SAXI_03_transactor->AWVALID(AXI_03_AWVALID);
    mp_SAXI_03_transactor->BID(AXI_03_BID);
    mp_SAXI_03_transactor->BREADY(AXI_03_BREADY);
    mp_SAXI_03_transactor->BRESP(AXI_03_BRESP);
    mp_SAXI_03_transactor->BVALID(AXI_03_BVALID);
    mp_SAXI_03_transactor->RDATA(AXI_03_RDATA);
    mp_SAXI_03_transactor->RID(AXI_03_RID);
    mp_SAXI_03_transactor->RLAST(AXI_03_RLAST);
    mp_SAXI_03_transactor->RREADY(AXI_03_RREADY);
    mp_SAXI_03_transactor->RRESP(AXI_03_RRESP);
    mp_SAXI_03_transactor->RVALID(AXI_03_RVALID);
    mp_SAXI_03_transactor->WDATA(AXI_03_WDATA);
    mp_SAXI_03_transactor->WLAST(AXI_03_WLAST);
    mp_SAXI_03_transactor->WREADY(AXI_03_WREADY);
    mp_SAXI_03_transactor->WSTRB(AXI_03_WSTRB);
    mp_SAXI_03_transactor->WVALID(AXI_03_WVALID);
    mp_SAXI_03_transactor->CLK(AXI_03_ACLK);
    m_SAXI_03_transactor_rst_signal.write(1);
    mp_SAXI_03_transactor->RST(m_SAXI_03_transactor_rst_signal);

    // SAXI_03' transactor sockets

    mp_impl->SAXI_03_rd_socket->bind(*(mp_SAXI_03_transactor->rd_socket));
    mp_impl->SAXI_03_wr_socket->bind(*(mp_SAXI_03_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_16' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_16_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_16' transactor parameters
    xsc::common_cpp::properties SAXI_16_transactor_param_props;
    SAXI_16_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_16_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_16_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_16_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_16_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_16_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_16_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_16_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_16_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_16_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_16_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_16_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_16_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_16_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_16_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_16_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_16_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_16_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_16_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_16_transactor", SAXI_16_transactor_param_props);

    // SAXI_16' transactor ports

    mp_SAXI_16_transactor->ARADDR(AXI_16_ARADDR);
    mp_SAXI_16_transactor->ARBURST(AXI_16_ARBURST);
    mp_SAXI_16_transactor->ARID(AXI_16_ARID);
    mp_AXI_16_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_ARLEN_converter");
    mp_AXI_16_ARLEN_converter->vector_in(AXI_16_ARLEN);
    mp_AXI_16_ARLEN_converter->vector_out(m_AXI_16_ARLEN_converter_signal);
    mp_SAXI_16_transactor->ARLEN(m_AXI_16_ARLEN_converter_signal);
    mp_SAXI_16_transactor->ARREADY(AXI_16_ARREADY);
    mp_SAXI_16_transactor->ARSIZE(AXI_16_ARSIZE);
    mp_SAXI_16_transactor->ARVALID(AXI_16_ARVALID);
    mp_SAXI_16_transactor->AWADDR(AXI_16_AWADDR);
    mp_SAXI_16_transactor->AWBURST(AXI_16_AWBURST);
    mp_SAXI_16_transactor->AWID(AXI_16_AWID);
    mp_AXI_16_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_AWLEN_converter");
    mp_AXI_16_AWLEN_converter->vector_in(AXI_16_AWLEN);
    mp_AXI_16_AWLEN_converter->vector_out(m_AXI_16_AWLEN_converter_signal);
    mp_SAXI_16_transactor->AWLEN(m_AXI_16_AWLEN_converter_signal);
    mp_SAXI_16_transactor->AWREADY(AXI_16_AWREADY);
    mp_SAXI_16_transactor->AWSIZE(AXI_16_AWSIZE);
    mp_SAXI_16_transactor->AWVALID(AXI_16_AWVALID);
    mp_SAXI_16_transactor->BID(AXI_16_BID);
    mp_SAXI_16_transactor->BREADY(AXI_16_BREADY);
    mp_SAXI_16_transactor->BRESP(AXI_16_BRESP);
    mp_SAXI_16_transactor->BVALID(AXI_16_BVALID);
    mp_SAXI_16_transactor->RDATA(AXI_16_RDATA);
    mp_SAXI_16_transactor->RID(AXI_16_RID);
    mp_SAXI_16_transactor->RLAST(AXI_16_RLAST);
    mp_SAXI_16_transactor->RREADY(AXI_16_RREADY);
    mp_SAXI_16_transactor->RRESP(AXI_16_RRESP);
    mp_SAXI_16_transactor->RVALID(AXI_16_RVALID);
    mp_SAXI_16_transactor->WDATA(AXI_16_WDATA);
    mp_SAXI_16_transactor->WLAST(AXI_16_WLAST);
    mp_SAXI_16_transactor->WREADY(AXI_16_WREADY);
    mp_SAXI_16_transactor->WSTRB(AXI_16_WSTRB);
    mp_SAXI_16_transactor->WVALID(AXI_16_WVALID);
    mp_SAXI_16_transactor->CLK(AXI_16_ACLK);
    m_SAXI_16_transactor_rst_signal.write(1);
    mp_SAXI_16_transactor->RST(m_SAXI_16_transactor_rst_signal);

    // SAXI_16' transactor sockets

    mp_impl->SAXI_16_rd_socket->bind(*(mp_SAXI_16_transactor->rd_socket));
    mp_impl->SAXI_16_wr_socket->bind(*(mp_SAXI_16_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_17' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_17_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_17' transactor parameters
    xsc::common_cpp::properties SAXI_17_transactor_param_props;
    SAXI_17_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_17_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_17_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_17_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_17_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_17_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_17_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_17_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_17_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_17_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_17_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_17_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_17_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_17_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_17_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_17_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_17_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_17_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_17_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_17_transactor", SAXI_17_transactor_param_props);

    // SAXI_17' transactor ports

    mp_SAXI_17_transactor->ARADDR(AXI_17_ARADDR);
    mp_SAXI_17_transactor->ARBURST(AXI_17_ARBURST);
    mp_SAXI_17_transactor->ARID(AXI_17_ARID);
    mp_AXI_17_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_ARLEN_converter");
    mp_AXI_17_ARLEN_converter->vector_in(AXI_17_ARLEN);
    mp_AXI_17_ARLEN_converter->vector_out(m_AXI_17_ARLEN_converter_signal);
    mp_SAXI_17_transactor->ARLEN(m_AXI_17_ARLEN_converter_signal);
    mp_SAXI_17_transactor->ARREADY(AXI_17_ARREADY);
    mp_SAXI_17_transactor->ARSIZE(AXI_17_ARSIZE);
    mp_SAXI_17_transactor->ARVALID(AXI_17_ARVALID);
    mp_SAXI_17_transactor->AWADDR(AXI_17_AWADDR);
    mp_SAXI_17_transactor->AWBURST(AXI_17_AWBURST);
    mp_SAXI_17_transactor->AWID(AXI_17_AWID);
    mp_AXI_17_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_AWLEN_converter");
    mp_AXI_17_AWLEN_converter->vector_in(AXI_17_AWLEN);
    mp_AXI_17_AWLEN_converter->vector_out(m_AXI_17_AWLEN_converter_signal);
    mp_SAXI_17_transactor->AWLEN(m_AXI_17_AWLEN_converter_signal);
    mp_SAXI_17_transactor->AWREADY(AXI_17_AWREADY);
    mp_SAXI_17_transactor->AWSIZE(AXI_17_AWSIZE);
    mp_SAXI_17_transactor->AWVALID(AXI_17_AWVALID);
    mp_SAXI_17_transactor->BID(AXI_17_BID);
    mp_SAXI_17_transactor->BREADY(AXI_17_BREADY);
    mp_SAXI_17_transactor->BRESP(AXI_17_BRESP);
    mp_SAXI_17_transactor->BVALID(AXI_17_BVALID);
    mp_SAXI_17_transactor->RDATA(AXI_17_RDATA);
    mp_SAXI_17_transactor->RID(AXI_17_RID);
    mp_SAXI_17_transactor->RLAST(AXI_17_RLAST);
    mp_SAXI_17_transactor->RREADY(AXI_17_RREADY);
    mp_SAXI_17_transactor->RRESP(AXI_17_RRESP);
    mp_SAXI_17_transactor->RVALID(AXI_17_RVALID);
    mp_SAXI_17_transactor->WDATA(AXI_17_WDATA);
    mp_SAXI_17_transactor->WLAST(AXI_17_WLAST);
    mp_SAXI_17_transactor->WREADY(AXI_17_WREADY);
    mp_SAXI_17_transactor->WSTRB(AXI_17_WSTRB);
    mp_SAXI_17_transactor->WVALID(AXI_17_WVALID);
    mp_SAXI_17_transactor->CLK(AXI_17_ACLK);
    m_SAXI_17_transactor_rst_signal.write(1);
    mp_SAXI_17_transactor->RST(m_SAXI_17_transactor_rst_signal);

    // SAXI_17' transactor sockets

    mp_impl->SAXI_17_rd_socket->bind(*(mp_SAXI_17_transactor->rd_socket));
    mp_impl->SAXI_17_wr_socket->bind(*(mp_SAXI_17_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_18' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_18_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_18' transactor parameters
    xsc::common_cpp::properties SAXI_18_transactor_param_props;
    SAXI_18_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_18_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_18_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_18_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_18_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_18_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_18_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_18_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_18_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_18_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_18_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_18_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_18_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_18_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_18_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_18_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_18_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_18_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_18_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_18_transactor", SAXI_18_transactor_param_props);

    // SAXI_18' transactor ports

    mp_SAXI_18_transactor->ARADDR(AXI_18_ARADDR);
    mp_SAXI_18_transactor->ARBURST(AXI_18_ARBURST);
    mp_SAXI_18_transactor->ARID(AXI_18_ARID);
    mp_AXI_18_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_ARLEN_converter");
    mp_AXI_18_ARLEN_converter->vector_in(AXI_18_ARLEN);
    mp_AXI_18_ARLEN_converter->vector_out(m_AXI_18_ARLEN_converter_signal);
    mp_SAXI_18_transactor->ARLEN(m_AXI_18_ARLEN_converter_signal);
    mp_SAXI_18_transactor->ARREADY(AXI_18_ARREADY);
    mp_SAXI_18_transactor->ARSIZE(AXI_18_ARSIZE);
    mp_SAXI_18_transactor->ARVALID(AXI_18_ARVALID);
    mp_SAXI_18_transactor->AWADDR(AXI_18_AWADDR);
    mp_SAXI_18_transactor->AWBURST(AXI_18_AWBURST);
    mp_SAXI_18_transactor->AWID(AXI_18_AWID);
    mp_AXI_18_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_AWLEN_converter");
    mp_AXI_18_AWLEN_converter->vector_in(AXI_18_AWLEN);
    mp_AXI_18_AWLEN_converter->vector_out(m_AXI_18_AWLEN_converter_signal);
    mp_SAXI_18_transactor->AWLEN(m_AXI_18_AWLEN_converter_signal);
    mp_SAXI_18_transactor->AWREADY(AXI_18_AWREADY);
    mp_SAXI_18_transactor->AWSIZE(AXI_18_AWSIZE);
    mp_SAXI_18_transactor->AWVALID(AXI_18_AWVALID);
    mp_SAXI_18_transactor->BID(AXI_18_BID);
    mp_SAXI_18_transactor->BREADY(AXI_18_BREADY);
    mp_SAXI_18_transactor->BRESP(AXI_18_BRESP);
    mp_SAXI_18_transactor->BVALID(AXI_18_BVALID);
    mp_SAXI_18_transactor->RDATA(AXI_18_RDATA);
    mp_SAXI_18_transactor->RID(AXI_18_RID);
    mp_SAXI_18_transactor->RLAST(AXI_18_RLAST);
    mp_SAXI_18_transactor->RREADY(AXI_18_RREADY);
    mp_SAXI_18_transactor->RRESP(AXI_18_RRESP);
    mp_SAXI_18_transactor->RVALID(AXI_18_RVALID);
    mp_SAXI_18_transactor->WDATA(AXI_18_WDATA);
    mp_SAXI_18_transactor->WLAST(AXI_18_WLAST);
    mp_SAXI_18_transactor->WREADY(AXI_18_WREADY);
    mp_SAXI_18_transactor->WSTRB(AXI_18_WSTRB);
    mp_SAXI_18_transactor->WVALID(AXI_18_WVALID);
    mp_SAXI_18_transactor->CLK(AXI_18_ACLK);
    m_SAXI_18_transactor_rst_signal.write(1);
    mp_SAXI_18_transactor->RST(m_SAXI_18_transactor_rst_signal);

    // SAXI_18' transactor sockets

    mp_impl->SAXI_18_rd_socket->bind(*(mp_SAXI_18_transactor->rd_socket));
    mp_impl->SAXI_18_wr_socket->bind(*(mp_SAXI_18_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_19' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_19_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_19' transactor parameters
    xsc::common_cpp::properties SAXI_19_transactor_param_props;
    SAXI_19_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_19_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_19_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_19_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_19_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_19_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_19_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_19_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_19_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_19_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_19_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_19_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_19_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_19_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_19_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_19_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_19_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_19_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_19_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_19_transactor", SAXI_19_transactor_param_props);

    // SAXI_19' transactor ports

    mp_SAXI_19_transactor->ARADDR(AXI_19_ARADDR);
    mp_SAXI_19_transactor->ARBURST(AXI_19_ARBURST);
    mp_SAXI_19_transactor->ARID(AXI_19_ARID);
    mp_AXI_19_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_ARLEN_converter");
    mp_AXI_19_ARLEN_converter->vector_in(AXI_19_ARLEN);
    mp_AXI_19_ARLEN_converter->vector_out(m_AXI_19_ARLEN_converter_signal);
    mp_SAXI_19_transactor->ARLEN(m_AXI_19_ARLEN_converter_signal);
    mp_SAXI_19_transactor->ARREADY(AXI_19_ARREADY);
    mp_SAXI_19_transactor->ARSIZE(AXI_19_ARSIZE);
    mp_SAXI_19_transactor->ARVALID(AXI_19_ARVALID);
    mp_SAXI_19_transactor->AWADDR(AXI_19_AWADDR);
    mp_SAXI_19_transactor->AWBURST(AXI_19_AWBURST);
    mp_SAXI_19_transactor->AWID(AXI_19_AWID);
    mp_AXI_19_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_AWLEN_converter");
    mp_AXI_19_AWLEN_converter->vector_in(AXI_19_AWLEN);
    mp_AXI_19_AWLEN_converter->vector_out(m_AXI_19_AWLEN_converter_signal);
    mp_SAXI_19_transactor->AWLEN(m_AXI_19_AWLEN_converter_signal);
    mp_SAXI_19_transactor->AWREADY(AXI_19_AWREADY);
    mp_SAXI_19_transactor->AWSIZE(AXI_19_AWSIZE);
    mp_SAXI_19_transactor->AWVALID(AXI_19_AWVALID);
    mp_SAXI_19_transactor->BID(AXI_19_BID);
    mp_SAXI_19_transactor->BREADY(AXI_19_BREADY);
    mp_SAXI_19_transactor->BRESP(AXI_19_BRESP);
    mp_SAXI_19_transactor->BVALID(AXI_19_BVALID);
    mp_SAXI_19_transactor->RDATA(AXI_19_RDATA);
    mp_SAXI_19_transactor->RID(AXI_19_RID);
    mp_SAXI_19_transactor->RLAST(AXI_19_RLAST);
    mp_SAXI_19_transactor->RREADY(AXI_19_RREADY);
    mp_SAXI_19_transactor->RRESP(AXI_19_RRESP);
    mp_SAXI_19_transactor->RVALID(AXI_19_RVALID);
    mp_SAXI_19_transactor->WDATA(AXI_19_WDATA);
    mp_SAXI_19_transactor->WLAST(AXI_19_WLAST);
    mp_SAXI_19_transactor->WREADY(AXI_19_WREADY);
    mp_SAXI_19_transactor->WSTRB(AXI_19_WSTRB);
    mp_SAXI_19_transactor->WVALID(AXI_19_WVALID);
    mp_SAXI_19_transactor->CLK(AXI_19_ACLK);
    m_SAXI_19_transactor_rst_signal.write(1);
    mp_SAXI_19_transactor->RST(m_SAXI_19_transactor_rst_signal);

    // SAXI_19' transactor sockets

    mp_impl->SAXI_19_rd_socket->bind(*(mp_SAXI_19_transactor->rd_socket));
    mp_impl->SAXI_19_wr_socket->bind(*(mp_SAXI_19_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
u280_xdma_hbm_0_0::u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm) : u280_xdma_hbm_0_0_sc(nm), HBM_REF_CLK_0("HBM_REF_CLK_0"), HBM_REF_CLK_1("HBM_REF_CLK_1"), AXI_00_ACLK("AXI_00_ACLK"), AXI_00_ARESET_N("AXI_00_ARESET_N"), AXI_00_ARADDR("AXI_00_ARADDR"), AXI_00_ARBURST("AXI_00_ARBURST"), AXI_00_ARID("AXI_00_ARID"), AXI_00_ARLEN("AXI_00_ARLEN"), AXI_00_ARSIZE("AXI_00_ARSIZE"), AXI_00_ARVALID("AXI_00_ARVALID"), AXI_00_AWADDR("AXI_00_AWADDR"), AXI_00_AWBURST("AXI_00_AWBURST"), AXI_00_AWID("AXI_00_AWID"), AXI_00_AWLEN("AXI_00_AWLEN"), AXI_00_AWSIZE("AXI_00_AWSIZE"), AXI_00_AWVALID("AXI_00_AWVALID"), AXI_00_RREADY("AXI_00_RREADY"), AXI_00_BREADY("AXI_00_BREADY"), AXI_00_WDATA("AXI_00_WDATA"), AXI_00_WLAST("AXI_00_WLAST"), AXI_00_WSTRB("AXI_00_WSTRB"), AXI_00_WDATA_PARITY("AXI_00_WDATA_PARITY"), AXI_00_WVALID("AXI_00_WVALID"), AXI_01_ACLK("AXI_01_ACLK"), AXI_01_ARESET_N("AXI_01_ARESET_N"), AXI_01_ARADDR("AXI_01_ARADDR"), AXI_01_ARBURST("AXI_01_ARBURST"), AXI_01_ARID("AXI_01_ARID"), AXI_01_ARLEN("AXI_01_ARLEN"), AXI_01_ARSIZE("AXI_01_ARSIZE"), AXI_01_ARVALID("AXI_01_ARVALID"), AXI_01_AWADDR("AXI_01_AWADDR"), AXI_01_AWBURST("AXI_01_AWBURST"), AXI_01_AWID("AXI_01_AWID"), AXI_01_AWLEN("AXI_01_AWLEN"), AXI_01_AWSIZE("AXI_01_AWSIZE"), AXI_01_AWVALID("AXI_01_AWVALID"), AXI_01_RREADY("AXI_01_RREADY"), AXI_01_BREADY("AXI_01_BREADY"), AXI_01_WDATA("AXI_01_WDATA"), AXI_01_WLAST("AXI_01_WLAST"), AXI_01_WSTRB("AXI_01_WSTRB"), AXI_01_WDATA_PARITY("AXI_01_WDATA_PARITY"), AXI_01_WVALID("AXI_01_WVALID"), AXI_02_ACLK("AXI_02_ACLK"), AXI_02_ARESET_N("AXI_02_ARESET_N"), AXI_02_ARADDR("AXI_02_ARADDR"), AXI_02_ARBURST("AXI_02_ARBURST"), AXI_02_ARID("AXI_02_ARID"), AXI_02_ARLEN("AXI_02_ARLEN"), AXI_02_ARSIZE("AXI_02_ARSIZE"), AXI_02_ARVALID("AXI_02_ARVALID"), AXI_02_AWADDR("AXI_02_AWADDR"), AXI_02_AWBURST("AXI_02_AWBURST"), AXI_02_AWID("AXI_02_AWID"), AXI_02_AWLEN("AXI_02_AWLEN"), AXI_02_AWSIZE("AXI_02_AWSIZE"), AXI_02_AWVALID("AXI_02_AWVALID"), AXI_02_RREADY("AXI_02_RREADY"), AXI_02_BREADY("AXI_02_BREADY"), AXI_02_WDATA("AXI_02_WDATA"), AXI_02_WLAST("AXI_02_WLAST"), AXI_02_WSTRB("AXI_02_WSTRB"), AXI_02_WDATA_PARITY("AXI_02_WDATA_PARITY"), AXI_02_WVALID("AXI_02_WVALID"), AXI_03_ACLK("AXI_03_ACLK"), AXI_03_ARESET_N("AXI_03_ARESET_N"), AXI_03_ARADDR("AXI_03_ARADDR"), AXI_03_ARBURST("AXI_03_ARBURST"), AXI_03_ARID("AXI_03_ARID"), AXI_03_ARLEN("AXI_03_ARLEN"), AXI_03_ARSIZE("AXI_03_ARSIZE"), AXI_03_ARVALID("AXI_03_ARVALID"), AXI_03_AWADDR("AXI_03_AWADDR"), AXI_03_AWBURST("AXI_03_AWBURST"), AXI_03_AWID("AXI_03_AWID"), AXI_03_AWLEN("AXI_03_AWLEN"), AXI_03_AWSIZE("AXI_03_AWSIZE"), AXI_03_AWVALID("AXI_03_AWVALID"), AXI_03_RREADY("AXI_03_RREADY"), AXI_03_BREADY("AXI_03_BREADY"), AXI_03_WDATA("AXI_03_WDATA"), AXI_03_WLAST("AXI_03_WLAST"), AXI_03_WSTRB("AXI_03_WSTRB"), AXI_03_WDATA_PARITY("AXI_03_WDATA_PARITY"), AXI_03_WVALID("AXI_03_WVALID"), AXI_16_ACLK("AXI_16_ACLK"), AXI_16_ARESET_N("AXI_16_ARESET_N"), AXI_16_ARADDR("AXI_16_ARADDR"), AXI_16_ARBURST("AXI_16_ARBURST"), AXI_16_ARID("AXI_16_ARID"), AXI_16_ARLEN("AXI_16_ARLEN"), AXI_16_ARSIZE("AXI_16_ARSIZE"), AXI_16_ARVALID("AXI_16_ARVALID"), AXI_16_AWADDR("AXI_16_AWADDR"), AXI_16_AWBURST("AXI_16_AWBURST"), AXI_16_AWID("AXI_16_AWID"), AXI_16_AWLEN("AXI_16_AWLEN"), AXI_16_AWSIZE("AXI_16_AWSIZE"), AXI_16_AWVALID("AXI_16_AWVALID"), AXI_16_RREADY("AXI_16_RREADY"), AXI_16_BREADY("AXI_16_BREADY"), AXI_16_WDATA("AXI_16_WDATA"), AXI_16_WLAST("AXI_16_WLAST"), AXI_16_WSTRB("AXI_16_WSTRB"), AXI_16_WDATA_PARITY("AXI_16_WDATA_PARITY"), AXI_16_WVALID("AXI_16_WVALID"), AXI_17_ACLK("AXI_17_ACLK"), AXI_17_ARESET_N("AXI_17_ARESET_N"), AXI_17_ARADDR("AXI_17_ARADDR"), AXI_17_ARBURST("AXI_17_ARBURST"), AXI_17_ARID("AXI_17_ARID"), AXI_17_ARLEN("AXI_17_ARLEN"), AXI_17_ARSIZE("AXI_17_ARSIZE"), AXI_17_ARVALID("AXI_17_ARVALID"), AXI_17_AWADDR("AXI_17_AWADDR"), AXI_17_AWBURST("AXI_17_AWBURST"), AXI_17_AWID("AXI_17_AWID"), AXI_17_AWLEN("AXI_17_AWLEN"), AXI_17_AWSIZE("AXI_17_AWSIZE"), AXI_17_AWVALID("AXI_17_AWVALID"), AXI_17_RREADY("AXI_17_RREADY"), AXI_17_BREADY("AXI_17_BREADY"), AXI_17_WDATA("AXI_17_WDATA"), AXI_17_WLAST("AXI_17_WLAST"), AXI_17_WSTRB("AXI_17_WSTRB"), AXI_17_WDATA_PARITY("AXI_17_WDATA_PARITY"), AXI_17_WVALID("AXI_17_WVALID"), AXI_18_ACLK("AXI_18_ACLK"), AXI_18_ARESET_N("AXI_18_ARESET_N"), AXI_18_ARADDR("AXI_18_ARADDR"), AXI_18_ARBURST("AXI_18_ARBURST"), AXI_18_ARID("AXI_18_ARID"), AXI_18_ARLEN("AXI_18_ARLEN"), AXI_18_ARSIZE("AXI_18_ARSIZE"), AXI_18_ARVALID("AXI_18_ARVALID"), AXI_18_AWADDR("AXI_18_AWADDR"), AXI_18_AWBURST("AXI_18_AWBURST"), AXI_18_AWID("AXI_18_AWID"), AXI_18_AWLEN("AXI_18_AWLEN"), AXI_18_AWSIZE("AXI_18_AWSIZE"), AXI_18_AWVALID("AXI_18_AWVALID"), AXI_18_RREADY("AXI_18_RREADY"), AXI_18_BREADY("AXI_18_BREADY"), AXI_18_WDATA("AXI_18_WDATA"), AXI_18_WLAST("AXI_18_WLAST"), AXI_18_WSTRB("AXI_18_WSTRB"), AXI_18_WDATA_PARITY("AXI_18_WDATA_PARITY"), AXI_18_WVALID("AXI_18_WVALID"), AXI_19_ACLK("AXI_19_ACLK"), AXI_19_ARESET_N("AXI_19_ARESET_N"), AXI_19_ARADDR("AXI_19_ARADDR"), AXI_19_ARBURST("AXI_19_ARBURST"), AXI_19_ARID("AXI_19_ARID"), AXI_19_ARLEN("AXI_19_ARLEN"), AXI_19_ARSIZE("AXI_19_ARSIZE"), AXI_19_ARVALID("AXI_19_ARVALID"), AXI_19_AWADDR("AXI_19_AWADDR"), AXI_19_AWBURST("AXI_19_AWBURST"), AXI_19_AWID("AXI_19_AWID"), AXI_19_AWLEN("AXI_19_AWLEN"), AXI_19_AWSIZE("AXI_19_AWSIZE"), AXI_19_AWVALID("AXI_19_AWVALID"), AXI_19_RREADY("AXI_19_RREADY"), AXI_19_BREADY("AXI_19_BREADY"), AXI_19_WDATA("AXI_19_WDATA"), AXI_19_WLAST("AXI_19_WLAST"), AXI_19_WSTRB("AXI_19_WSTRB"), AXI_19_WDATA_PARITY("AXI_19_WDATA_PARITY"), AXI_19_WVALID("AXI_19_WVALID"), APB_0_PCLK("APB_0_PCLK"), APB_0_PRESET_N("APB_0_PRESET_N"), APB_1_PCLK("APB_1_PCLK"), APB_1_PRESET_N("APB_1_PRESET_N"), AXI_00_ARREADY("AXI_00_ARREADY"), AXI_00_AWREADY("AXI_00_AWREADY"), AXI_00_RDATA_PARITY("AXI_00_RDATA_PARITY"), AXI_00_RDATA("AXI_00_RDATA"), AXI_00_RID("AXI_00_RID"), AXI_00_RLAST("AXI_00_RLAST"), AXI_00_RRESP("AXI_00_RRESP"), AXI_00_RVALID("AXI_00_RVALID"), AXI_00_WREADY("AXI_00_WREADY"), AXI_00_BID("AXI_00_BID"), AXI_00_BRESP("AXI_00_BRESP"), AXI_00_BVALID("AXI_00_BVALID"), AXI_01_ARREADY("AXI_01_ARREADY"), AXI_01_AWREADY("AXI_01_AWREADY"), AXI_01_RDATA_PARITY("AXI_01_RDATA_PARITY"), AXI_01_RDATA("AXI_01_RDATA"), AXI_01_RID("AXI_01_RID"), AXI_01_RLAST("AXI_01_RLAST"), AXI_01_RRESP("AXI_01_RRESP"), AXI_01_RVALID("AXI_01_RVALID"), AXI_01_WREADY("AXI_01_WREADY"), AXI_01_BID("AXI_01_BID"), AXI_01_BRESP("AXI_01_BRESP"), AXI_01_BVALID("AXI_01_BVALID"), AXI_02_ARREADY("AXI_02_ARREADY"), AXI_02_AWREADY("AXI_02_AWREADY"), AXI_02_RDATA_PARITY("AXI_02_RDATA_PARITY"), AXI_02_RDATA("AXI_02_RDATA"), AXI_02_RID("AXI_02_RID"), AXI_02_RLAST("AXI_02_RLAST"), AXI_02_RRESP("AXI_02_RRESP"), AXI_02_RVALID("AXI_02_RVALID"), AXI_02_WREADY("AXI_02_WREADY"), AXI_02_BID("AXI_02_BID"), AXI_02_BRESP("AXI_02_BRESP"), AXI_02_BVALID("AXI_02_BVALID"), AXI_03_ARREADY("AXI_03_ARREADY"), AXI_03_AWREADY("AXI_03_AWREADY"), AXI_03_RDATA_PARITY("AXI_03_RDATA_PARITY"), AXI_03_RDATA("AXI_03_RDATA"), AXI_03_RID("AXI_03_RID"), AXI_03_RLAST("AXI_03_RLAST"), AXI_03_RRESP("AXI_03_RRESP"), AXI_03_RVALID("AXI_03_RVALID"), AXI_03_WREADY("AXI_03_WREADY"), AXI_03_BID("AXI_03_BID"), AXI_03_BRESP("AXI_03_BRESP"), AXI_03_BVALID("AXI_03_BVALID"), AXI_16_ARREADY("AXI_16_ARREADY"), AXI_16_AWREADY("AXI_16_AWREADY"), AXI_16_RDATA_PARITY("AXI_16_RDATA_PARITY"), AXI_16_RDATA("AXI_16_RDATA"), AXI_16_RID("AXI_16_RID"), AXI_16_RLAST("AXI_16_RLAST"), AXI_16_RRESP("AXI_16_RRESP"), AXI_16_RVALID("AXI_16_RVALID"), AXI_16_WREADY("AXI_16_WREADY"), AXI_16_BID("AXI_16_BID"), AXI_16_BRESP("AXI_16_BRESP"), AXI_16_BVALID("AXI_16_BVALID"), AXI_17_ARREADY("AXI_17_ARREADY"), AXI_17_AWREADY("AXI_17_AWREADY"), AXI_17_RDATA_PARITY("AXI_17_RDATA_PARITY"), AXI_17_RDATA("AXI_17_RDATA"), AXI_17_RID("AXI_17_RID"), AXI_17_RLAST("AXI_17_RLAST"), AXI_17_RRESP("AXI_17_RRESP"), AXI_17_RVALID("AXI_17_RVALID"), AXI_17_WREADY("AXI_17_WREADY"), AXI_17_BID("AXI_17_BID"), AXI_17_BRESP("AXI_17_BRESP"), AXI_17_BVALID("AXI_17_BVALID"), AXI_18_ARREADY("AXI_18_ARREADY"), AXI_18_AWREADY("AXI_18_AWREADY"), AXI_18_RDATA_PARITY("AXI_18_RDATA_PARITY"), AXI_18_RDATA("AXI_18_RDATA"), AXI_18_RID("AXI_18_RID"), AXI_18_RLAST("AXI_18_RLAST"), AXI_18_RRESP("AXI_18_RRESP"), AXI_18_RVALID("AXI_18_RVALID"), AXI_18_WREADY("AXI_18_WREADY"), AXI_18_BID("AXI_18_BID"), AXI_18_BRESP("AXI_18_BRESP"), AXI_18_BVALID("AXI_18_BVALID"), AXI_19_ARREADY("AXI_19_ARREADY"), AXI_19_AWREADY("AXI_19_AWREADY"), AXI_19_RDATA_PARITY("AXI_19_RDATA_PARITY"), AXI_19_RDATA("AXI_19_RDATA"), AXI_19_RID("AXI_19_RID"), AXI_19_RLAST("AXI_19_RLAST"), AXI_19_RRESP("AXI_19_RRESP"), AXI_19_RVALID("AXI_19_RVALID"), AXI_19_WREADY("AXI_19_WREADY"), AXI_19_BID("AXI_19_BID"), AXI_19_BRESP("AXI_19_BRESP"), AXI_19_BVALID("AXI_19_BVALID"), apb_complete_0("apb_complete_0"), apb_complete_1("apb_complete_1"), DRAM_0_STAT_CATTRIP("DRAM_0_STAT_CATTRIP"), DRAM_0_STAT_TEMP("DRAM_0_STAT_TEMP"), DRAM_1_STAT_CATTRIP("DRAM_1_STAT_CATTRIP"), DRAM_1_STAT_TEMP("DRAM_1_STAT_TEMP")
{

  // initialize pins
  mp_impl->HBM_REF_CLK_0(HBM_REF_CLK_0);
  mp_impl->HBM_REF_CLK_1(HBM_REF_CLK_1);
  mp_impl->AXI_00_ACLK(AXI_00_ACLK);
  mp_impl->AXI_00_ARESET_N(AXI_00_ARESET_N);
  mp_impl->AXI_00_WDATA_PARITY(AXI_00_WDATA_PARITY);
  mp_impl->AXI_01_ACLK(AXI_01_ACLK);
  mp_impl->AXI_01_ARESET_N(AXI_01_ARESET_N);
  mp_impl->AXI_01_WDATA_PARITY(AXI_01_WDATA_PARITY);
  mp_impl->AXI_02_ACLK(AXI_02_ACLK);
  mp_impl->AXI_02_ARESET_N(AXI_02_ARESET_N);
  mp_impl->AXI_02_WDATA_PARITY(AXI_02_WDATA_PARITY);
  mp_impl->AXI_03_ACLK(AXI_03_ACLK);
  mp_impl->AXI_03_ARESET_N(AXI_03_ARESET_N);
  mp_impl->AXI_03_WDATA_PARITY(AXI_03_WDATA_PARITY);
  mp_impl->AXI_16_ACLK(AXI_16_ACLK);
  mp_impl->AXI_16_ARESET_N(AXI_16_ARESET_N);
  mp_impl->AXI_16_WDATA_PARITY(AXI_16_WDATA_PARITY);
  mp_impl->AXI_17_ACLK(AXI_17_ACLK);
  mp_impl->AXI_17_ARESET_N(AXI_17_ARESET_N);
  mp_impl->AXI_17_WDATA_PARITY(AXI_17_WDATA_PARITY);
  mp_impl->AXI_18_ACLK(AXI_18_ACLK);
  mp_impl->AXI_18_ARESET_N(AXI_18_ARESET_N);
  mp_impl->AXI_18_WDATA_PARITY(AXI_18_WDATA_PARITY);
  mp_impl->AXI_19_ACLK(AXI_19_ACLK);
  mp_impl->AXI_19_ARESET_N(AXI_19_ARESET_N);
  mp_impl->AXI_19_WDATA_PARITY(AXI_19_WDATA_PARITY);
  mp_impl->APB_0_PCLK(APB_0_PCLK);
  mp_impl->APB_0_PRESET_N(APB_0_PRESET_N);
  mp_impl->APB_1_PCLK(APB_1_PCLK);
  mp_impl->APB_1_PRESET_N(APB_1_PRESET_N);
  mp_impl->AXI_00_RDATA_PARITY(AXI_00_RDATA_PARITY);
  mp_impl->AXI_01_RDATA_PARITY(AXI_01_RDATA_PARITY);
  mp_impl->AXI_02_RDATA_PARITY(AXI_02_RDATA_PARITY);
  mp_impl->AXI_03_RDATA_PARITY(AXI_03_RDATA_PARITY);
  mp_impl->AXI_16_RDATA_PARITY(AXI_16_RDATA_PARITY);
  mp_impl->AXI_17_RDATA_PARITY(AXI_17_RDATA_PARITY);
  mp_impl->AXI_18_RDATA_PARITY(AXI_18_RDATA_PARITY);
  mp_impl->AXI_19_RDATA_PARITY(AXI_19_RDATA_PARITY);
  mp_impl->apb_complete_0(apb_complete_0);
  mp_impl->apb_complete_1(apb_complete_1);
  mp_impl->DRAM_0_STAT_CATTRIP(DRAM_0_STAT_CATTRIP);
  mp_impl->DRAM_0_STAT_TEMP(DRAM_0_STAT_TEMP);
  mp_impl->DRAM_1_STAT_CATTRIP(DRAM_1_STAT_CATTRIP);
  mp_impl->DRAM_1_STAT_TEMP(DRAM_1_STAT_TEMP);

  // initialize transactors
  mp_SAXI_00_transactor = NULL;
  mp_AXI_00_ARLEN_converter = NULL;
  mp_AXI_00_AWLEN_converter = NULL;
  mp_SAXI_01_transactor = NULL;
  mp_AXI_01_ARLEN_converter = NULL;
  mp_AXI_01_AWLEN_converter = NULL;
  mp_SAXI_02_transactor = NULL;
  mp_AXI_02_ARLEN_converter = NULL;
  mp_AXI_02_AWLEN_converter = NULL;
  mp_SAXI_03_transactor = NULL;
  mp_AXI_03_ARLEN_converter = NULL;
  mp_AXI_03_AWLEN_converter = NULL;
  mp_SAXI_16_transactor = NULL;
  mp_AXI_16_ARLEN_converter = NULL;
  mp_AXI_16_AWLEN_converter = NULL;
  mp_SAXI_17_transactor = NULL;
  mp_AXI_17_ARLEN_converter = NULL;
  mp_AXI_17_AWLEN_converter = NULL;
  mp_SAXI_18_transactor = NULL;
  mp_AXI_18_ARLEN_converter = NULL;
  mp_AXI_18_AWLEN_converter = NULL;
  mp_SAXI_19_transactor = NULL;
  mp_AXI_19_ARLEN_converter = NULL;
  mp_AXI_19_AWLEN_converter = NULL;

  // initialize socket stubs

}

void u280_xdma_hbm_0_0::before_end_of_elaboration()
{
  // configure 'SAXI_00' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_00_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_00' transactor parameters
    xsc::common_cpp::properties SAXI_00_transactor_param_props;
    SAXI_00_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_00_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_00_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_00_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_00_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_00_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_00_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_00_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_00_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_00_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_00_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_00_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_00_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_00_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_00_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_00_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_00_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_00_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_00_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_00_transactor", SAXI_00_transactor_param_props);

    // SAXI_00' transactor ports

    mp_SAXI_00_transactor->ARADDR(AXI_00_ARADDR);
    mp_SAXI_00_transactor->ARBURST(AXI_00_ARBURST);
    mp_SAXI_00_transactor->ARID(AXI_00_ARID);
    mp_AXI_00_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_ARLEN_converter");
    mp_AXI_00_ARLEN_converter->vector_in(AXI_00_ARLEN);
    mp_AXI_00_ARLEN_converter->vector_out(m_AXI_00_ARLEN_converter_signal);
    mp_SAXI_00_transactor->ARLEN(m_AXI_00_ARLEN_converter_signal);
    mp_SAXI_00_transactor->ARREADY(AXI_00_ARREADY);
    mp_SAXI_00_transactor->ARSIZE(AXI_00_ARSIZE);
    mp_SAXI_00_transactor->ARVALID(AXI_00_ARVALID);
    mp_SAXI_00_transactor->AWADDR(AXI_00_AWADDR);
    mp_SAXI_00_transactor->AWBURST(AXI_00_AWBURST);
    mp_SAXI_00_transactor->AWID(AXI_00_AWID);
    mp_AXI_00_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_AWLEN_converter");
    mp_AXI_00_AWLEN_converter->vector_in(AXI_00_AWLEN);
    mp_AXI_00_AWLEN_converter->vector_out(m_AXI_00_AWLEN_converter_signal);
    mp_SAXI_00_transactor->AWLEN(m_AXI_00_AWLEN_converter_signal);
    mp_SAXI_00_transactor->AWREADY(AXI_00_AWREADY);
    mp_SAXI_00_transactor->AWSIZE(AXI_00_AWSIZE);
    mp_SAXI_00_transactor->AWVALID(AXI_00_AWVALID);
    mp_SAXI_00_transactor->BID(AXI_00_BID);
    mp_SAXI_00_transactor->BREADY(AXI_00_BREADY);
    mp_SAXI_00_transactor->BRESP(AXI_00_BRESP);
    mp_SAXI_00_transactor->BVALID(AXI_00_BVALID);
    mp_SAXI_00_transactor->RDATA(AXI_00_RDATA);
    mp_SAXI_00_transactor->RID(AXI_00_RID);
    mp_SAXI_00_transactor->RLAST(AXI_00_RLAST);
    mp_SAXI_00_transactor->RREADY(AXI_00_RREADY);
    mp_SAXI_00_transactor->RRESP(AXI_00_RRESP);
    mp_SAXI_00_transactor->RVALID(AXI_00_RVALID);
    mp_SAXI_00_transactor->WDATA(AXI_00_WDATA);
    mp_SAXI_00_transactor->WLAST(AXI_00_WLAST);
    mp_SAXI_00_transactor->WREADY(AXI_00_WREADY);
    mp_SAXI_00_transactor->WSTRB(AXI_00_WSTRB);
    mp_SAXI_00_transactor->WVALID(AXI_00_WVALID);
    mp_SAXI_00_transactor->CLK(AXI_00_ACLK);
    m_SAXI_00_transactor_rst_signal.write(1);
    mp_SAXI_00_transactor->RST(m_SAXI_00_transactor_rst_signal);

    // SAXI_00' transactor sockets

    mp_impl->SAXI_00_rd_socket->bind(*(mp_SAXI_00_transactor->rd_socket));
    mp_impl->SAXI_00_wr_socket->bind(*(mp_SAXI_00_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_01' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_01_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_01' transactor parameters
    xsc::common_cpp::properties SAXI_01_transactor_param_props;
    SAXI_01_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_01_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_01_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_01_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_01_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_01_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_01_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_01_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_01_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_01_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_01_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_01_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_01_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_01_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_01_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_01_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_01_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_01_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_01_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_01_transactor", SAXI_01_transactor_param_props);

    // SAXI_01' transactor ports

    mp_SAXI_01_transactor->ARADDR(AXI_01_ARADDR);
    mp_SAXI_01_transactor->ARBURST(AXI_01_ARBURST);
    mp_SAXI_01_transactor->ARID(AXI_01_ARID);
    mp_AXI_01_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_ARLEN_converter");
    mp_AXI_01_ARLEN_converter->vector_in(AXI_01_ARLEN);
    mp_AXI_01_ARLEN_converter->vector_out(m_AXI_01_ARLEN_converter_signal);
    mp_SAXI_01_transactor->ARLEN(m_AXI_01_ARLEN_converter_signal);
    mp_SAXI_01_transactor->ARREADY(AXI_01_ARREADY);
    mp_SAXI_01_transactor->ARSIZE(AXI_01_ARSIZE);
    mp_SAXI_01_transactor->ARVALID(AXI_01_ARVALID);
    mp_SAXI_01_transactor->AWADDR(AXI_01_AWADDR);
    mp_SAXI_01_transactor->AWBURST(AXI_01_AWBURST);
    mp_SAXI_01_transactor->AWID(AXI_01_AWID);
    mp_AXI_01_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_AWLEN_converter");
    mp_AXI_01_AWLEN_converter->vector_in(AXI_01_AWLEN);
    mp_AXI_01_AWLEN_converter->vector_out(m_AXI_01_AWLEN_converter_signal);
    mp_SAXI_01_transactor->AWLEN(m_AXI_01_AWLEN_converter_signal);
    mp_SAXI_01_transactor->AWREADY(AXI_01_AWREADY);
    mp_SAXI_01_transactor->AWSIZE(AXI_01_AWSIZE);
    mp_SAXI_01_transactor->AWVALID(AXI_01_AWVALID);
    mp_SAXI_01_transactor->BID(AXI_01_BID);
    mp_SAXI_01_transactor->BREADY(AXI_01_BREADY);
    mp_SAXI_01_transactor->BRESP(AXI_01_BRESP);
    mp_SAXI_01_transactor->BVALID(AXI_01_BVALID);
    mp_SAXI_01_transactor->RDATA(AXI_01_RDATA);
    mp_SAXI_01_transactor->RID(AXI_01_RID);
    mp_SAXI_01_transactor->RLAST(AXI_01_RLAST);
    mp_SAXI_01_transactor->RREADY(AXI_01_RREADY);
    mp_SAXI_01_transactor->RRESP(AXI_01_RRESP);
    mp_SAXI_01_transactor->RVALID(AXI_01_RVALID);
    mp_SAXI_01_transactor->WDATA(AXI_01_WDATA);
    mp_SAXI_01_transactor->WLAST(AXI_01_WLAST);
    mp_SAXI_01_transactor->WREADY(AXI_01_WREADY);
    mp_SAXI_01_transactor->WSTRB(AXI_01_WSTRB);
    mp_SAXI_01_transactor->WVALID(AXI_01_WVALID);
    mp_SAXI_01_transactor->CLK(AXI_01_ACLK);
    m_SAXI_01_transactor_rst_signal.write(1);
    mp_SAXI_01_transactor->RST(m_SAXI_01_transactor_rst_signal);

    // SAXI_01' transactor sockets

    mp_impl->SAXI_01_rd_socket->bind(*(mp_SAXI_01_transactor->rd_socket));
    mp_impl->SAXI_01_wr_socket->bind(*(mp_SAXI_01_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_02' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_02_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_02' transactor parameters
    xsc::common_cpp::properties SAXI_02_transactor_param_props;
    SAXI_02_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_02_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_02_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_02_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_02_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_02_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_02_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_02_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_02_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_02_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_02_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_02_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_02_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_02_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_02_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_02_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_02_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_02_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_02_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_02_transactor", SAXI_02_transactor_param_props);

    // SAXI_02' transactor ports

    mp_SAXI_02_transactor->ARADDR(AXI_02_ARADDR);
    mp_SAXI_02_transactor->ARBURST(AXI_02_ARBURST);
    mp_SAXI_02_transactor->ARID(AXI_02_ARID);
    mp_AXI_02_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_ARLEN_converter");
    mp_AXI_02_ARLEN_converter->vector_in(AXI_02_ARLEN);
    mp_AXI_02_ARLEN_converter->vector_out(m_AXI_02_ARLEN_converter_signal);
    mp_SAXI_02_transactor->ARLEN(m_AXI_02_ARLEN_converter_signal);
    mp_SAXI_02_transactor->ARREADY(AXI_02_ARREADY);
    mp_SAXI_02_transactor->ARSIZE(AXI_02_ARSIZE);
    mp_SAXI_02_transactor->ARVALID(AXI_02_ARVALID);
    mp_SAXI_02_transactor->AWADDR(AXI_02_AWADDR);
    mp_SAXI_02_transactor->AWBURST(AXI_02_AWBURST);
    mp_SAXI_02_transactor->AWID(AXI_02_AWID);
    mp_AXI_02_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_AWLEN_converter");
    mp_AXI_02_AWLEN_converter->vector_in(AXI_02_AWLEN);
    mp_AXI_02_AWLEN_converter->vector_out(m_AXI_02_AWLEN_converter_signal);
    mp_SAXI_02_transactor->AWLEN(m_AXI_02_AWLEN_converter_signal);
    mp_SAXI_02_transactor->AWREADY(AXI_02_AWREADY);
    mp_SAXI_02_transactor->AWSIZE(AXI_02_AWSIZE);
    mp_SAXI_02_transactor->AWVALID(AXI_02_AWVALID);
    mp_SAXI_02_transactor->BID(AXI_02_BID);
    mp_SAXI_02_transactor->BREADY(AXI_02_BREADY);
    mp_SAXI_02_transactor->BRESP(AXI_02_BRESP);
    mp_SAXI_02_transactor->BVALID(AXI_02_BVALID);
    mp_SAXI_02_transactor->RDATA(AXI_02_RDATA);
    mp_SAXI_02_transactor->RID(AXI_02_RID);
    mp_SAXI_02_transactor->RLAST(AXI_02_RLAST);
    mp_SAXI_02_transactor->RREADY(AXI_02_RREADY);
    mp_SAXI_02_transactor->RRESP(AXI_02_RRESP);
    mp_SAXI_02_transactor->RVALID(AXI_02_RVALID);
    mp_SAXI_02_transactor->WDATA(AXI_02_WDATA);
    mp_SAXI_02_transactor->WLAST(AXI_02_WLAST);
    mp_SAXI_02_transactor->WREADY(AXI_02_WREADY);
    mp_SAXI_02_transactor->WSTRB(AXI_02_WSTRB);
    mp_SAXI_02_transactor->WVALID(AXI_02_WVALID);
    mp_SAXI_02_transactor->CLK(AXI_02_ACLK);
    m_SAXI_02_transactor_rst_signal.write(1);
    mp_SAXI_02_transactor->RST(m_SAXI_02_transactor_rst_signal);

    // SAXI_02' transactor sockets

    mp_impl->SAXI_02_rd_socket->bind(*(mp_SAXI_02_transactor->rd_socket));
    mp_impl->SAXI_02_wr_socket->bind(*(mp_SAXI_02_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_03' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_03_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_03' transactor parameters
    xsc::common_cpp::properties SAXI_03_transactor_param_props;
    SAXI_03_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_03_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_03_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_03_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_03_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_03_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_03_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_03_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_03_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_03_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_03_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_03_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_03_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_03_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_03_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_03_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_03_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_03_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_03_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_03_transactor", SAXI_03_transactor_param_props);

    // SAXI_03' transactor ports

    mp_SAXI_03_transactor->ARADDR(AXI_03_ARADDR);
    mp_SAXI_03_transactor->ARBURST(AXI_03_ARBURST);
    mp_SAXI_03_transactor->ARID(AXI_03_ARID);
    mp_AXI_03_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_ARLEN_converter");
    mp_AXI_03_ARLEN_converter->vector_in(AXI_03_ARLEN);
    mp_AXI_03_ARLEN_converter->vector_out(m_AXI_03_ARLEN_converter_signal);
    mp_SAXI_03_transactor->ARLEN(m_AXI_03_ARLEN_converter_signal);
    mp_SAXI_03_transactor->ARREADY(AXI_03_ARREADY);
    mp_SAXI_03_transactor->ARSIZE(AXI_03_ARSIZE);
    mp_SAXI_03_transactor->ARVALID(AXI_03_ARVALID);
    mp_SAXI_03_transactor->AWADDR(AXI_03_AWADDR);
    mp_SAXI_03_transactor->AWBURST(AXI_03_AWBURST);
    mp_SAXI_03_transactor->AWID(AXI_03_AWID);
    mp_AXI_03_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_AWLEN_converter");
    mp_AXI_03_AWLEN_converter->vector_in(AXI_03_AWLEN);
    mp_AXI_03_AWLEN_converter->vector_out(m_AXI_03_AWLEN_converter_signal);
    mp_SAXI_03_transactor->AWLEN(m_AXI_03_AWLEN_converter_signal);
    mp_SAXI_03_transactor->AWREADY(AXI_03_AWREADY);
    mp_SAXI_03_transactor->AWSIZE(AXI_03_AWSIZE);
    mp_SAXI_03_transactor->AWVALID(AXI_03_AWVALID);
    mp_SAXI_03_transactor->BID(AXI_03_BID);
    mp_SAXI_03_transactor->BREADY(AXI_03_BREADY);
    mp_SAXI_03_transactor->BRESP(AXI_03_BRESP);
    mp_SAXI_03_transactor->BVALID(AXI_03_BVALID);
    mp_SAXI_03_transactor->RDATA(AXI_03_RDATA);
    mp_SAXI_03_transactor->RID(AXI_03_RID);
    mp_SAXI_03_transactor->RLAST(AXI_03_RLAST);
    mp_SAXI_03_transactor->RREADY(AXI_03_RREADY);
    mp_SAXI_03_transactor->RRESP(AXI_03_RRESP);
    mp_SAXI_03_transactor->RVALID(AXI_03_RVALID);
    mp_SAXI_03_transactor->WDATA(AXI_03_WDATA);
    mp_SAXI_03_transactor->WLAST(AXI_03_WLAST);
    mp_SAXI_03_transactor->WREADY(AXI_03_WREADY);
    mp_SAXI_03_transactor->WSTRB(AXI_03_WSTRB);
    mp_SAXI_03_transactor->WVALID(AXI_03_WVALID);
    mp_SAXI_03_transactor->CLK(AXI_03_ACLK);
    m_SAXI_03_transactor_rst_signal.write(1);
    mp_SAXI_03_transactor->RST(m_SAXI_03_transactor_rst_signal);

    // SAXI_03' transactor sockets

    mp_impl->SAXI_03_rd_socket->bind(*(mp_SAXI_03_transactor->rd_socket));
    mp_impl->SAXI_03_wr_socket->bind(*(mp_SAXI_03_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_16' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_16_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_16' transactor parameters
    xsc::common_cpp::properties SAXI_16_transactor_param_props;
    SAXI_16_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_16_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_16_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_16_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_16_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_16_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_16_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_16_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_16_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_16_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_16_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_16_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_16_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_16_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_16_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_16_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_16_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_16_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_16_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_16_transactor", SAXI_16_transactor_param_props);

    // SAXI_16' transactor ports

    mp_SAXI_16_transactor->ARADDR(AXI_16_ARADDR);
    mp_SAXI_16_transactor->ARBURST(AXI_16_ARBURST);
    mp_SAXI_16_transactor->ARID(AXI_16_ARID);
    mp_AXI_16_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_ARLEN_converter");
    mp_AXI_16_ARLEN_converter->vector_in(AXI_16_ARLEN);
    mp_AXI_16_ARLEN_converter->vector_out(m_AXI_16_ARLEN_converter_signal);
    mp_SAXI_16_transactor->ARLEN(m_AXI_16_ARLEN_converter_signal);
    mp_SAXI_16_transactor->ARREADY(AXI_16_ARREADY);
    mp_SAXI_16_transactor->ARSIZE(AXI_16_ARSIZE);
    mp_SAXI_16_transactor->ARVALID(AXI_16_ARVALID);
    mp_SAXI_16_transactor->AWADDR(AXI_16_AWADDR);
    mp_SAXI_16_transactor->AWBURST(AXI_16_AWBURST);
    mp_SAXI_16_transactor->AWID(AXI_16_AWID);
    mp_AXI_16_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_AWLEN_converter");
    mp_AXI_16_AWLEN_converter->vector_in(AXI_16_AWLEN);
    mp_AXI_16_AWLEN_converter->vector_out(m_AXI_16_AWLEN_converter_signal);
    mp_SAXI_16_transactor->AWLEN(m_AXI_16_AWLEN_converter_signal);
    mp_SAXI_16_transactor->AWREADY(AXI_16_AWREADY);
    mp_SAXI_16_transactor->AWSIZE(AXI_16_AWSIZE);
    mp_SAXI_16_transactor->AWVALID(AXI_16_AWVALID);
    mp_SAXI_16_transactor->BID(AXI_16_BID);
    mp_SAXI_16_transactor->BREADY(AXI_16_BREADY);
    mp_SAXI_16_transactor->BRESP(AXI_16_BRESP);
    mp_SAXI_16_transactor->BVALID(AXI_16_BVALID);
    mp_SAXI_16_transactor->RDATA(AXI_16_RDATA);
    mp_SAXI_16_transactor->RID(AXI_16_RID);
    mp_SAXI_16_transactor->RLAST(AXI_16_RLAST);
    mp_SAXI_16_transactor->RREADY(AXI_16_RREADY);
    mp_SAXI_16_transactor->RRESP(AXI_16_RRESP);
    mp_SAXI_16_transactor->RVALID(AXI_16_RVALID);
    mp_SAXI_16_transactor->WDATA(AXI_16_WDATA);
    mp_SAXI_16_transactor->WLAST(AXI_16_WLAST);
    mp_SAXI_16_transactor->WREADY(AXI_16_WREADY);
    mp_SAXI_16_transactor->WSTRB(AXI_16_WSTRB);
    mp_SAXI_16_transactor->WVALID(AXI_16_WVALID);
    mp_SAXI_16_transactor->CLK(AXI_16_ACLK);
    m_SAXI_16_transactor_rst_signal.write(1);
    mp_SAXI_16_transactor->RST(m_SAXI_16_transactor_rst_signal);

    // SAXI_16' transactor sockets

    mp_impl->SAXI_16_rd_socket->bind(*(mp_SAXI_16_transactor->rd_socket));
    mp_impl->SAXI_16_wr_socket->bind(*(mp_SAXI_16_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_17' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_17_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_17' transactor parameters
    xsc::common_cpp::properties SAXI_17_transactor_param_props;
    SAXI_17_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_17_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_17_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_17_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_17_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_17_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_17_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_17_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_17_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_17_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_17_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_17_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_17_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_17_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_17_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_17_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_17_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_17_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_17_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_17_transactor", SAXI_17_transactor_param_props);

    // SAXI_17' transactor ports

    mp_SAXI_17_transactor->ARADDR(AXI_17_ARADDR);
    mp_SAXI_17_transactor->ARBURST(AXI_17_ARBURST);
    mp_SAXI_17_transactor->ARID(AXI_17_ARID);
    mp_AXI_17_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_ARLEN_converter");
    mp_AXI_17_ARLEN_converter->vector_in(AXI_17_ARLEN);
    mp_AXI_17_ARLEN_converter->vector_out(m_AXI_17_ARLEN_converter_signal);
    mp_SAXI_17_transactor->ARLEN(m_AXI_17_ARLEN_converter_signal);
    mp_SAXI_17_transactor->ARREADY(AXI_17_ARREADY);
    mp_SAXI_17_transactor->ARSIZE(AXI_17_ARSIZE);
    mp_SAXI_17_transactor->ARVALID(AXI_17_ARVALID);
    mp_SAXI_17_transactor->AWADDR(AXI_17_AWADDR);
    mp_SAXI_17_transactor->AWBURST(AXI_17_AWBURST);
    mp_SAXI_17_transactor->AWID(AXI_17_AWID);
    mp_AXI_17_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_AWLEN_converter");
    mp_AXI_17_AWLEN_converter->vector_in(AXI_17_AWLEN);
    mp_AXI_17_AWLEN_converter->vector_out(m_AXI_17_AWLEN_converter_signal);
    mp_SAXI_17_transactor->AWLEN(m_AXI_17_AWLEN_converter_signal);
    mp_SAXI_17_transactor->AWREADY(AXI_17_AWREADY);
    mp_SAXI_17_transactor->AWSIZE(AXI_17_AWSIZE);
    mp_SAXI_17_transactor->AWVALID(AXI_17_AWVALID);
    mp_SAXI_17_transactor->BID(AXI_17_BID);
    mp_SAXI_17_transactor->BREADY(AXI_17_BREADY);
    mp_SAXI_17_transactor->BRESP(AXI_17_BRESP);
    mp_SAXI_17_transactor->BVALID(AXI_17_BVALID);
    mp_SAXI_17_transactor->RDATA(AXI_17_RDATA);
    mp_SAXI_17_transactor->RID(AXI_17_RID);
    mp_SAXI_17_transactor->RLAST(AXI_17_RLAST);
    mp_SAXI_17_transactor->RREADY(AXI_17_RREADY);
    mp_SAXI_17_transactor->RRESP(AXI_17_RRESP);
    mp_SAXI_17_transactor->RVALID(AXI_17_RVALID);
    mp_SAXI_17_transactor->WDATA(AXI_17_WDATA);
    mp_SAXI_17_transactor->WLAST(AXI_17_WLAST);
    mp_SAXI_17_transactor->WREADY(AXI_17_WREADY);
    mp_SAXI_17_transactor->WSTRB(AXI_17_WSTRB);
    mp_SAXI_17_transactor->WVALID(AXI_17_WVALID);
    mp_SAXI_17_transactor->CLK(AXI_17_ACLK);
    m_SAXI_17_transactor_rst_signal.write(1);
    mp_SAXI_17_transactor->RST(m_SAXI_17_transactor_rst_signal);

    // SAXI_17' transactor sockets

    mp_impl->SAXI_17_rd_socket->bind(*(mp_SAXI_17_transactor->rd_socket));
    mp_impl->SAXI_17_wr_socket->bind(*(mp_SAXI_17_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_18' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_18_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_18' transactor parameters
    xsc::common_cpp::properties SAXI_18_transactor_param_props;
    SAXI_18_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_18_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_18_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_18_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_18_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_18_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_18_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_18_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_18_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_18_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_18_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_18_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_18_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_18_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_18_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_18_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_18_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_18_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_18_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_18_transactor", SAXI_18_transactor_param_props);

    // SAXI_18' transactor ports

    mp_SAXI_18_transactor->ARADDR(AXI_18_ARADDR);
    mp_SAXI_18_transactor->ARBURST(AXI_18_ARBURST);
    mp_SAXI_18_transactor->ARID(AXI_18_ARID);
    mp_AXI_18_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_ARLEN_converter");
    mp_AXI_18_ARLEN_converter->vector_in(AXI_18_ARLEN);
    mp_AXI_18_ARLEN_converter->vector_out(m_AXI_18_ARLEN_converter_signal);
    mp_SAXI_18_transactor->ARLEN(m_AXI_18_ARLEN_converter_signal);
    mp_SAXI_18_transactor->ARREADY(AXI_18_ARREADY);
    mp_SAXI_18_transactor->ARSIZE(AXI_18_ARSIZE);
    mp_SAXI_18_transactor->ARVALID(AXI_18_ARVALID);
    mp_SAXI_18_transactor->AWADDR(AXI_18_AWADDR);
    mp_SAXI_18_transactor->AWBURST(AXI_18_AWBURST);
    mp_SAXI_18_transactor->AWID(AXI_18_AWID);
    mp_AXI_18_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_AWLEN_converter");
    mp_AXI_18_AWLEN_converter->vector_in(AXI_18_AWLEN);
    mp_AXI_18_AWLEN_converter->vector_out(m_AXI_18_AWLEN_converter_signal);
    mp_SAXI_18_transactor->AWLEN(m_AXI_18_AWLEN_converter_signal);
    mp_SAXI_18_transactor->AWREADY(AXI_18_AWREADY);
    mp_SAXI_18_transactor->AWSIZE(AXI_18_AWSIZE);
    mp_SAXI_18_transactor->AWVALID(AXI_18_AWVALID);
    mp_SAXI_18_transactor->BID(AXI_18_BID);
    mp_SAXI_18_transactor->BREADY(AXI_18_BREADY);
    mp_SAXI_18_transactor->BRESP(AXI_18_BRESP);
    mp_SAXI_18_transactor->BVALID(AXI_18_BVALID);
    mp_SAXI_18_transactor->RDATA(AXI_18_RDATA);
    mp_SAXI_18_transactor->RID(AXI_18_RID);
    mp_SAXI_18_transactor->RLAST(AXI_18_RLAST);
    mp_SAXI_18_transactor->RREADY(AXI_18_RREADY);
    mp_SAXI_18_transactor->RRESP(AXI_18_RRESP);
    mp_SAXI_18_transactor->RVALID(AXI_18_RVALID);
    mp_SAXI_18_transactor->WDATA(AXI_18_WDATA);
    mp_SAXI_18_transactor->WLAST(AXI_18_WLAST);
    mp_SAXI_18_transactor->WREADY(AXI_18_WREADY);
    mp_SAXI_18_transactor->WSTRB(AXI_18_WSTRB);
    mp_SAXI_18_transactor->WVALID(AXI_18_WVALID);
    mp_SAXI_18_transactor->CLK(AXI_18_ACLK);
    m_SAXI_18_transactor_rst_signal.write(1);
    mp_SAXI_18_transactor->RST(m_SAXI_18_transactor_rst_signal);

    // SAXI_18' transactor sockets

    mp_impl->SAXI_18_rd_socket->bind(*(mp_SAXI_18_transactor->rd_socket));
    mp_impl->SAXI_18_wr_socket->bind(*(mp_SAXI_18_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_19' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_19_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_19' transactor parameters
    xsc::common_cpp::properties SAXI_19_transactor_param_props;
    SAXI_19_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_19_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_19_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_19_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_19_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_19_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_19_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_19_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_19_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_19_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_19_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_19_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_19_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_19_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_19_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_19_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_19_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_19_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_19_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_19_transactor", SAXI_19_transactor_param_props);

    // SAXI_19' transactor ports

    mp_SAXI_19_transactor->ARADDR(AXI_19_ARADDR);
    mp_SAXI_19_transactor->ARBURST(AXI_19_ARBURST);
    mp_SAXI_19_transactor->ARID(AXI_19_ARID);
    mp_AXI_19_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_ARLEN_converter");
    mp_AXI_19_ARLEN_converter->vector_in(AXI_19_ARLEN);
    mp_AXI_19_ARLEN_converter->vector_out(m_AXI_19_ARLEN_converter_signal);
    mp_SAXI_19_transactor->ARLEN(m_AXI_19_ARLEN_converter_signal);
    mp_SAXI_19_transactor->ARREADY(AXI_19_ARREADY);
    mp_SAXI_19_transactor->ARSIZE(AXI_19_ARSIZE);
    mp_SAXI_19_transactor->ARVALID(AXI_19_ARVALID);
    mp_SAXI_19_transactor->AWADDR(AXI_19_AWADDR);
    mp_SAXI_19_transactor->AWBURST(AXI_19_AWBURST);
    mp_SAXI_19_transactor->AWID(AXI_19_AWID);
    mp_AXI_19_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_AWLEN_converter");
    mp_AXI_19_AWLEN_converter->vector_in(AXI_19_AWLEN);
    mp_AXI_19_AWLEN_converter->vector_out(m_AXI_19_AWLEN_converter_signal);
    mp_SAXI_19_transactor->AWLEN(m_AXI_19_AWLEN_converter_signal);
    mp_SAXI_19_transactor->AWREADY(AXI_19_AWREADY);
    mp_SAXI_19_transactor->AWSIZE(AXI_19_AWSIZE);
    mp_SAXI_19_transactor->AWVALID(AXI_19_AWVALID);
    mp_SAXI_19_transactor->BID(AXI_19_BID);
    mp_SAXI_19_transactor->BREADY(AXI_19_BREADY);
    mp_SAXI_19_transactor->BRESP(AXI_19_BRESP);
    mp_SAXI_19_transactor->BVALID(AXI_19_BVALID);
    mp_SAXI_19_transactor->RDATA(AXI_19_RDATA);
    mp_SAXI_19_transactor->RID(AXI_19_RID);
    mp_SAXI_19_transactor->RLAST(AXI_19_RLAST);
    mp_SAXI_19_transactor->RREADY(AXI_19_RREADY);
    mp_SAXI_19_transactor->RRESP(AXI_19_RRESP);
    mp_SAXI_19_transactor->RVALID(AXI_19_RVALID);
    mp_SAXI_19_transactor->WDATA(AXI_19_WDATA);
    mp_SAXI_19_transactor->WLAST(AXI_19_WLAST);
    mp_SAXI_19_transactor->WREADY(AXI_19_WREADY);
    mp_SAXI_19_transactor->WSTRB(AXI_19_WSTRB);
    mp_SAXI_19_transactor->WVALID(AXI_19_WVALID);
    mp_SAXI_19_transactor->CLK(AXI_19_ACLK);
    m_SAXI_19_transactor_rst_signal.write(1);
    mp_SAXI_19_transactor->RST(m_SAXI_19_transactor_rst_signal);

    // SAXI_19' transactor sockets

    mp_impl->SAXI_19_rd_socket->bind(*(mp_SAXI_19_transactor->rd_socket));
    mp_impl->SAXI_19_wr_socket->bind(*(mp_SAXI_19_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XM_SYSTEMC




#ifdef RIVIERA
u280_xdma_hbm_0_0::u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm) : u280_xdma_hbm_0_0_sc(nm), HBM_REF_CLK_0("HBM_REF_CLK_0"), HBM_REF_CLK_1("HBM_REF_CLK_1"), AXI_00_ACLK("AXI_00_ACLK"), AXI_00_ARESET_N("AXI_00_ARESET_N"), AXI_00_ARADDR("AXI_00_ARADDR"), AXI_00_ARBURST("AXI_00_ARBURST"), AXI_00_ARID("AXI_00_ARID"), AXI_00_ARLEN("AXI_00_ARLEN"), AXI_00_ARSIZE("AXI_00_ARSIZE"), AXI_00_ARVALID("AXI_00_ARVALID"), AXI_00_AWADDR("AXI_00_AWADDR"), AXI_00_AWBURST("AXI_00_AWBURST"), AXI_00_AWID("AXI_00_AWID"), AXI_00_AWLEN("AXI_00_AWLEN"), AXI_00_AWSIZE("AXI_00_AWSIZE"), AXI_00_AWVALID("AXI_00_AWVALID"), AXI_00_RREADY("AXI_00_RREADY"), AXI_00_BREADY("AXI_00_BREADY"), AXI_00_WDATA("AXI_00_WDATA"), AXI_00_WLAST("AXI_00_WLAST"), AXI_00_WSTRB("AXI_00_WSTRB"), AXI_00_WDATA_PARITY("AXI_00_WDATA_PARITY"), AXI_00_WVALID("AXI_00_WVALID"), AXI_01_ACLK("AXI_01_ACLK"), AXI_01_ARESET_N("AXI_01_ARESET_N"), AXI_01_ARADDR("AXI_01_ARADDR"), AXI_01_ARBURST("AXI_01_ARBURST"), AXI_01_ARID("AXI_01_ARID"), AXI_01_ARLEN("AXI_01_ARLEN"), AXI_01_ARSIZE("AXI_01_ARSIZE"), AXI_01_ARVALID("AXI_01_ARVALID"), AXI_01_AWADDR("AXI_01_AWADDR"), AXI_01_AWBURST("AXI_01_AWBURST"), AXI_01_AWID("AXI_01_AWID"), AXI_01_AWLEN("AXI_01_AWLEN"), AXI_01_AWSIZE("AXI_01_AWSIZE"), AXI_01_AWVALID("AXI_01_AWVALID"), AXI_01_RREADY("AXI_01_RREADY"), AXI_01_BREADY("AXI_01_BREADY"), AXI_01_WDATA("AXI_01_WDATA"), AXI_01_WLAST("AXI_01_WLAST"), AXI_01_WSTRB("AXI_01_WSTRB"), AXI_01_WDATA_PARITY("AXI_01_WDATA_PARITY"), AXI_01_WVALID("AXI_01_WVALID"), AXI_02_ACLK("AXI_02_ACLK"), AXI_02_ARESET_N("AXI_02_ARESET_N"), AXI_02_ARADDR("AXI_02_ARADDR"), AXI_02_ARBURST("AXI_02_ARBURST"), AXI_02_ARID("AXI_02_ARID"), AXI_02_ARLEN("AXI_02_ARLEN"), AXI_02_ARSIZE("AXI_02_ARSIZE"), AXI_02_ARVALID("AXI_02_ARVALID"), AXI_02_AWADDR("AXI_02_AWADDR"), AXI_02_AWBURST("AXI_02_AWBURST"), AXI_02_AWID("AXI_02_AWID"), AXI_02_AWLEN("AXI_02_AWLEN"), AXI_02_AWSIZE("AXI_02_AWSIZE"), AXI_02_AWVALID("AXI_02_AWVALID"), AXI_02_RREADY("AXI_02_RREADY"), AXI_02_BREADY("AXI_02_BREADY"), AXI_02_WDATA("AXI_02_WDATA"), AXI_02_WLAST("AXI_02_WLAST"), AXI_02_WSTRB("AXI_02_WSTRB"), AXI_02_WDATA_PARITY("AXI_02_WDATA_PARITY"), AXI_02_WVALID("AXI_02_WVALID"), AXI_03_ACLK("AXI_03_ACLK"), AXI_03_ARESET_N("AXI_03_ARESET_N"), AXI_03_ARADDR("AXI_03_ARADDR"), AXI_03_ARBURST("AXI_03_ARBURST"), AXI_03_ARID("AXI_03_ARID"), AXI_03_ARLEN("AXI_03_ARLEN"), AXI_03_ARSIZE("AXI_03_ARSIZE"), AXI_03_ARVALID("AXI_03_ARVALID"), AXI_03_AWADDR("AXI_03_AWADDR"), AXI_03_AWBURST("AXI_03_AWBURST"), AXI_03_AWID("AXI_03_AWID"), AXI_03_AWLEN("AXI_03_AWLEN"), AXI_03_AWSIZE("AXI_03_AWSIZE"), AXI_03_AWVALID("AXI_03_AWVALID"), AXI_03_RREADY("AXI_03_RREADY"), AXI_03_BREADY("AXI_03_BREADY"), AXI_03_WDATA("AXI_03_WDATA"), AXI_03_WLAST("AXI_03_WLAST"), AXI_03_WSTRB("AXI_03_WSTRB"), AXI_03_WDATA_PARITY("AXI_03_WDATA_PARITY"), AXI_03_WVALID("AXI_03_WVALID"), AXI_16_ACLK("AXI_16_ACLK"), AXI_16_ARESET_N("AXI_16_ARESET_N"), AXI_16_ARADDR("AXI_16_ARADDR"), AXI_16_ARBURST("AXI_16_ARBURST"), AXI_16_ARID("AXI_16_ARID"), AXI_16_ARLEN("AXI_16_ARLEN"), AXI_16_ARSIZE("AXI_16_ARSIZE"), AXI_16_ARVALID("AXI_16_ARVALID"), AXI_16_AWADDR("AXI_16_AWADDR"), AXI_16_AWBURST("AXI_16_AWBURST"), AXI_16_AWID("AXI_16_AWID"), AXI_16_AWLEN("AXI_16_AWLEN"), AXI_16_AWSIZE("AXI_16_AWSIZE"), AXI_16_AWVALID("AXI_16_AWVALID"), AXI_16_RREADY("AXI_16_RREADY"), AXI_16_BREADY("AXI_16_BREADY"), AXI_16_WDATA("AXI_16_WDATA"), AXI_16_WLAST("AXI_16_WLAST"), AXI_16_WSTRB("AXI_16_WSTRB"), AXI_16_WDATA_PARITY("AXI_16_WDATA_PARITY"), AXI_16_WVALID("AXI_16_WVALID"), AXI_17_ACLK("AXI_17_ACLK"), AXI_17_ARESET_N("AXI_17_ARESET_N"), AXI_17_ARADDR("AXI_17_ARADDR"), AXI_17_ARBURST("AXI_17_ARBURST"), AXI_17_ARID("AXI_17_ARID"), AXI_17_ARLEN("AXI_17_ARLEN"), AXI_17_ARSIZE("AXI_17_ARSIZE"), AXI_17_ARVALID("AXI_17_ARVALID"), AXI_17_AWADDR("AXI_17_AWADDR"), AXI_17_AWBURST("AXI_17_AWBURST"), AXI_17_AWID("AXI_17_AWID"), AXI_17_AWLEN("AXI_17_AWLEN"), AXI_17_AWSIZE("AXI_17_AWSIZE"), AXI_17_AWVALID("AXI_17_AWVALID"), AXI_17_RREADY("AXI_17_RREADY"), AXI_17_BREADY("AXI_17_BREADY"), AXI_17_WDATA("AXI_17_WDATA"), AXI_17_WLAST("AXI_17_WLAST"), AXI_17_WSTRB("AXI_17_WSTRB"), AXI_17_WDATA_PARITY("AXI_17_WDATA_PARITY"), AXI_17_WVALID("AXI_17_WVALID"), AXI_18_ACLK("AXI_18_ACLK"), AXI_18_ARESET_N("AXI_18_ARESET_N"), AXI_18_ARADDR("AXI_18_ARADDR"), AXI_18_ARBURST("AXI_18_ARBURST"), AXI_18_ARID("AXI_18_ARID"), AXI_18_ARLEN("AXI_18_ARLEN"), AXI_18_ARSIZE("AXI_18_ARSIZE"), AXI_18_ARVALID("AXI_18_ARVALID"), AXI_18_AWADDR("AXI_18_AWADDR"), AXI_18_AWBURST("AXI_18_AWBURST"), AXI_18_AWID("AXI_18_AWID"), AXI_18_AWLEN("AXI_18_AWLEN"), AXI_18_AWSIZE("AXI_18_AWSIZE"), AXI_18_AWVALID("AXI_18_AWVALID"), AXI_18_RREADY("AXI_18_RREADY"), AXI_18_BREADY("AXI_18_BREADY"), AXI_18_WDATA("AXI_18_WDATA"), AXI_18_WLAST("AXI_18_WLAST"), AXI_18_WSTRB("AXI_18_WSTRB"), AXI_18_WDATA_PARITY("AXI_18_WDATA_PARITY"), AXI_18_WVALID("AXI_18_WVALID"), AXI_19_ACLK("AXI_19_ACLK"), AXI_19_ARESET_N("AXI_19_ARESET_N"), AXI_19_ARADDR("AXI_19_ARADDR"), AXI_19_ARBURST("AXI_19_ARBURST"), AXI_19_ARID("AXI_19_ARID"), AXI_19_ARLEN("AXI_19_ARLEN"), AXI_19_ARSIZE("AXI_19_ARSIZE"), AXI_19_ARVALID("AXI_19_ARVALID"), AXI_19_AWADDR("AXI_19_AWADDR"), AXI_19_AWBURST("AXI_19_AWBURST"), AXI_19_AWID("AXI_19_AWID"), AXI_19_AWLEN("AXI_19_AWLEN"), AXI_19_AWSIZE("AXI_19_AWSIZE"), AXI_19_AWVALID("AXI_19_AWVALID"), AXI_19_RREADY("AXI_19_RREADY"), AXI_19_BREADY("AXI_19_BREADY"), AXI_19_WDATA("AXI_19_WDATA"), AXI_19_WLAST("AXI_19_WLAST"), AXI_19_WSTRB("AXI_19_WSTRB"), AXI_19_WDATA_PARITY("AXI_19_WDATA_PARITY"), AXI_19_WVALID("AXI_19_WVALID"), APB_0_PCLK("APB_0_PCLK"), APB_0_PRESET_N("APB_0_PRESET_N"), APB_1_PCLK("APB_1_PCLK"), APB_1_PRESET_N("APB_1_PRESET_N"), AXI_00_ARREADY("AXI_00_ARREADY"), AXI_00_AWREADY("AXI_00_AWREADY"), AXI_00_RDATA_PARITY("AXI_00_RDATA_PARITY"), AXI_00_RDATA("AXI_00_RDATA"), AXI_00_RID("AXI_00_RID"), AXI_00_RLAST("AXI_00_RLAST"), AXI_00_RRESP("AXI_00_RRESP"), AXI_00_RVALID("AXI_00_RVALID"), AXI_00_WREADY("AXI_00_WREADY"), AXI_00_BID("AXI_00_BID"), AXI_00_BRESP("AXI_00_BRESP"), AXI_00_BVALID("AXI_00_BVALID"), AXI_01_ARREADY("AXI_01_ARREADY"), AXI_01_AWREADY("AXI_01_AWREADY"), AXI_01_RDATA_PARITY("AXI_01_RDATA_PARITY"), AXI_01_RDATA("AXI_01_RDATA"), AXI_01_RID("AXI_01_RID"), AXI_01_RLAST("AXI_01_RLAST"), AXI_01_RRESP("AXI_01_RRESP"), AXI_01_RVALID("AXI_01_RVALID"), AXI_01_WREADY("AXI_01_WREADY"), AXI_01_BID("AXI_01_BID"), AXI_01_BRESP("AXI_01_BRESP"), AXI_01_BVALID("AXI_01_BVALID"), AXI_02_ARREADY("AXI_02_ARREADY"), AXI_02_AWREADY("AXI_02_AWREADY"), AXI_02_RDATA_PARITY("AXI_02_RDATA_PARITY"), AXI_02_RDATA("AXI_02_RDATA"), AXI_02_RID("AXI_02_RID"), AXI_02_RLAST("AXI_02_RLAST"), AXI_02_RRESP("AXI_02_RRESP"), AXI_02_RVALID("AXI_02_RVALID"), AXI_02_WREADY("AXI_02_WREADY"), AXI_02_BID("AXI_02_BID"), AXI_02_BRESP("AXI_02_BRESP"), AXI_02_BVALID("AXI_02_BVALID"), AXI_03_ARREADY("AXI_03_ARREADY"), AXI_03_AWREADY("AXI_03_AWREADY"), AXI_03_RDATA_PARITY("AXI_03_RDATA_PARITY"), AXI_03_RDATA("AXI_03_RDATA"), AXI_03_RID("AXI_03_RID"), AXI_03_RLAST("AXI_03_RLAST"), AXI_03_RRESP("AXI_03_RRESP"), AXI_03_RVALID("AXI_03_RVALID"), AXI_03_WREADY("AXI_03_WREADY"), AXI_03_BID("AXI_03_BID"), AXI_03_BRESP("AXI_03_BRESP"), AXI_03_BVALID("AXI_03_BVALID"), AXI_16_ARREADY("AXI_16_ARREADY"), AXI_16_AWREADY("AXI_16_AWREADY"), AXI_16_RDATA_PARITY("AXI_16_RDATA_PARITY"), AXI_16_RDATA("AXI_16_RDATA"), AXI_16_RID("AXI_16_RID"), AXI_16_RLAST("AXI_16_RLAST"), AXI_16_RRESP("AXI_16_RRESP"), AXI_16_RVALID("AXI_16_RVALID"), AXI_16_WREADY("AXI_16_WREADY"), AXI_16_BID("AXI_16_BID"), AXI_16_BRESP("AXI_16_BRESP"), AXI_16_BVALID("AXI_16_BVALID"), AXI_17_ARREADY("AXI_17_ARREADY"), AXI_17_AWREADY("AXI_17_AWREADY"), AXI_17_RDATA_PARITY("AXI_17_RDATA_PARITY"), AXI_17_RDATA("AXI_17_RDATA"), AXI_17_RID("AXI_17_RID"), AXI_17_RLAST("AXI_17_RLAST"), AXI_17_RRESP("AXI_17_RRESP"), AXI_17_RVALID("AXI_17_RVALID"), AXI_17_WREADY("AXI_17_WREADY"), AXI_17_BID("AXI_17_BID"), AXI_17_BRESP("AXI_17_BRESP"), AXI_17_BVALID("AXI_17_BVALID"), AXI_18_ARREADY("AXI_18_ARREADY"), AXI_18_AWREADY("AXI_18_AWREADY"), AXI_18_RDATA_PARITY("AXI_18_RDATA_PARITY"), AXI_18_RDATA("AXI_18_RDATA"), AXI_18_RID("AXI_18_RID"), AXI_18_RLAST("AXI_18_RLAST"), AXI_18_RRESP("AXI_18_RRESP"), AXI_18_RVALID("AXI_18_RVALID"), AXI_18_WREADY("AXI_18_WREADY"), AXI_18_BID("AXI_18_BID"), AXI_18_BRESP("AXI_18_BRESP"), AXI_18_BVALID("AXI_18_BVALID"), AXI_19_ARREADY("AXI_19_ARREADY"), AXI_19_AWREADY("AXI_19_AWREADY"), AXI_19_RDATA_PARITY("AXI_19_RDATA_PARITY"), AXI_19_RDATA("AXI_19_RDATA"), AXI_19_RID("AXI_19_RID"), AXI_19_RLAST("AXI_19_RLAST"), AXI_19_RRESP("AXI_19_RRESP"), AXI_19_RVALID("AXI_19_RVALID"), AXI_19_WREADY("AXI_19_WREADY"), AXI_19_BID("AXI_19_BID"), AXI_19_BRESP("AXI_19_BRESP"), AXI_19_BVALID("AXI_19_BVALID"), apb_complete_0("apb_complete_0"), apb_complete_1("apb_complete_1"), DRAM_0_STAT_CATTRIP("DRAM_0_STAT_CATTRIP"), DRAM_0_STAT_TEMP("DRAM_0_STAT_TEMP"), DRAM_1_STAT_CATTRIP("DRAM_1_STAT_CATTRIP"), DRAM_1_STAT_TEMP("DRAM_1_STAT_TEMP")
{

  // initialize pins
  mp_impl->HBM_REF_CLK_0(HBM_REF_CLK_0);
  mp_impl->HBM_REF_CLK_1(HBM_REF_CLK_1);
  mp_impl->AXI_00_ACLK(AXI_00_ACLK);
  mp_impl->AXI_00_ARESET_N(AXI_00_ARESET_N);
  mp_impl->AXI_00_WDATA_PARITY(AXI_00_WDATA_PARITY);
  mp_impl->AXI_01_ACLK(AXI_01_ACLK);
  mp_impl->AXI_01_ARESET_N(AXI_01_ARESET_N);
  mp_impl->AXI_01_WDATA_PARITY(AXI_01_WDATA_PARITY);
  mp_impl->AXI_02_ACLK(AXI_02_ACLK);
  mp_impl->AXI_02_ARESET_N(AXI_02_ARESET_N);
  mp_impl->AXI_02_WDATA_PARITY(AXI_02_WDATA_PARITY);
  mp_impl->AXI_03_ACLK(AXI_03_ACLK);
  mp_impl->AXI_03_ARESET_N(AXI_03_ARESET_N);
  mp_impl->AXI_03_WDATA_PARITY(AXI_03_WDATA_PARITY);
  mp_impl->AXI_16_ACLK(AXI_16_ACLK);
  mp_impl->AXI_16_ARESET_N(AXI_16_ARESET_N);
  mp_impl->AXI_16_WDATA_PARITY(AXI_16_WDATA_PARITY);
  mp_impl->AXI_17_ACLK(AXI_17_ACLK);
  mp_impl->AXI_17_ARESET_N(AXI_17_ARESET_N);
  mp_impl->AXI_17_WDATA_PARITY(AXI_17_WDATA_PARITY);
  mp_impl->AXI_18_ACLK(AXI_18_ACLK);
  mp_impl->AXI_18_ARESET_N(AXI_18_ARESET_N);
  mp_impl->AXI_18_WDATA_PARITY(AXI_18_WDATA_PARITY);
  mp_impl->AXI_19_ACLK(AXI_19_ACLK);
  mp_impl->AXI_19_ARESET_N(AXI_19_ARESET_N);
  mp_impl->AXI_19_WDATA_PARITY(AXI_19_WDATA_PARITY);
  mp_impl->APB_0_PCLK(APB_0_PCLK);
  mp_impl->APB_0_PRESET_N(APB_0_PRESET_N);
  mp_impl->APB_1_PCLK(APB_1_PCLK);
  mp_impl->APB_1_PRESET_N(APB_1_PRESET_N);
  mp_impl->AXI_00_RDATA_PARITY(AXI_00_RDATA_PARITY);
  mp_impl->AXI_01_RDATA_PARITY(AXI_01_RDATA_PARITY);
  mp_impl->AXI_02_RDATA_PARITY(AXI_02_RDATA_PARITY);
  mp_impl->AXI_03_RDATA_PARITY(AXI_03_RDATA_PARITY);
  mp_impl->AXI_16_RDATA_PARITY(AXI_16_RDATA_PARITY);
  mp_impl->AXI_17_RDATA_PARITY(AXI_17_RDATA_PARITY);
  mp_impl->AXI_18_RDATA_PARITY(AXI_18_RDATA_PARITY);
  mp_impl->AXI_19_RDATA_PARITY(AXI_19_RDATA_PARITY);
  mp_impl->apb_complete_0(apb_complete_0);
  mp_impl->apb_complete_1(apb_complete_1);
  mp_impl->DRAM_0_STAT_CATTRIP(DRAM_0_STAT_CATTRIP);
  mp_impl->DRAM_0_STAT_TEMP(DRAM_0_STAT_TEMP);
  mp_impl->DRAM_1_STAT_CATTRIP(DRAM_1_STAT_CATTRIP);
  mp_impl->DRAM_1_STAT_TEMP(DRAM_1_STAT_TEMP);

  // initialize transactors
  mp_SAXI_00_transactor = NULL;
  mp_AXI_00_ARLEN_converter = NULL;
  mp_AXI_00_AWLEN_converter = NULL;
  mp_SAXI_01_transactor = NULL;
  mp_AXI_01_ARLEN_converter = NULL;
  mp_AXI_01_AWLEN_converter = NULL;
  mp_SAXI_02_transactor = NULL;
  mp_AXI_02_ARLEN_converter = NULL;
  mp_AXI_02_AWLEN_converter = NULL;
  mp_SAXI_03_transactor = NULL;
  mp_AXI_03_ARLEN_converter = NULL;
  mp_AXI_03_AWLEN_converter = NULL;
  mp_SAXI_16_transactor = NULL;
  mp_AXI_16_ARLEN_converter = NULL;
  mp_AXI_16_AWLEN_converter = NULL;
  mp_SAXI_17_transactor = NULL;
  mp_AXI_17_ARLEN_converter = NULL;
  mp_AXI_17_AWLEN_converter = NULL;
  mp_SAXI_18_transactor = NULL;
  mp_AXI_18_ARLEN_converter = NULL;
  mp_AXI_18_AWLEN_converter = NULL;
  mp_SAXI_19_transactor = NULL;
  mp_AXI_19_ARLEN_converter = NULL;
  mp_AXI_19_AWLEN_converter = NULL;

  // initialize socket stubs

}

void u280_xdma_hbm_0_0::before_end_of_elaboration()
{
  // configure 'SAXI_00' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_00_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_00' transactor parameters
    xsc::common_cpp::properties SAXI_00_transactor_param_props;
    SAXI_00_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_00_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_00_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_00_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_00_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_00_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_00_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_00_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_00_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_00_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_00_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_00_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_00_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_00_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_00_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_00_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_00_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_00_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_00_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_00_transactor", SAXI_00_transactor_param_props);

    // SAXI_00' transactor ports

    mp_SAXI_00_transactor->ARADDR(AXI_00_ARADDR);
    mp_SAXI_00_transactor->ARBURST(AXI_00_ARBURST);
    mp_SAXI_00_transactor->ARID(AXI_00_ARID);
    mp_AXI_00_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_ARLEN_converter");
    mp_AXI_00_ARLEN_converter->vector_in(AXI_00_ARLEN);
    mp_AXI_00_ARLEN_converter->vector_out(m_AXI_00_ARLEN_converter_signal);
    mp_SAXI_00_transactor->ARLEN(m_AXI_00_ARLEN_converter_signal);
    mp_SAXI_00_transactor->ARREADY(AXI_00_ARREADY);
    mp_SAXI_00_transactor->ARSIZE(AXI_00_ARSIZE);
    mp_SAXI_00_transactor->ARVALID(AXI_00_ARVALID);
    mp_SAXI_00_transactor->AWADDR(AXI_00_AWADDR);
    mp_SAXI_00_transactor->AWBURST(AXI_00_AWBURST);
    mp_SAXI_00_transactor->AWID(AXI_00_AWID);
    mp_AXI_00_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_AWLEN_converter");
    mp_AXI_00_AWLEN_converter->vector_in(AXI_00_AWLEN);
    mp_AXI_00_AWLEN_converter->vector_out(m_AXI_00_AWLEN_converter_signal);
    mp_SAXI_00_transactor->AWLEN(m_AXI_00_AWLEN_converter_signal);
    mp_SAXI_00_transactor->AWREADY(AXI_00_AWREADY);
    mp_SAXI_00_transactor->AWSIZE(AXI_00_AWSIZE);
    mp_SAXI_00_transactor->AWVALID(AXI_00_AWVALID);
    mp_SAXI_00_transactor->BID(AXI_00_BID);
    mp_SAXI_00_transactor->BREADY(AXI_00_BREADY);
    mp_SAXI_00_transactor->BRESP(AXI_00_BRESP);
    mp_SAXI_00_transactor->BVALID(AXI_00_BVALID);
    mp_SAXI_00_transactor->RDATA(AXI_00_RDATA);
    mp_SAXI_00_transactor->RID(AXI_00_RID);
    mp_SAXI_00_transactor->RLAST(AXI_00_RLAST);
    mp_SAXI_00_transactor->RREADY(AXI_00_RREADY);
    mp_SAXI_00_transactor->RRESP(AXI_00_RRESP);
    mp_SAXI_00_transactor->RVALID(AXI_00_RVALID);
    mp_SAXI_00_transactor->WDATA(AXI_00_WDATA);
    mp_SAXI_00_transactor->WLAST(AXI_00_WLAST);
    mp_SAXI_00_transactor->WREADY(AXI_00_WREADY);
    mp_SAXI_00_transactor->WSTRB(AXI_00_WSTRB);
    mp_SAXI_00_transactor->WVALID(AXI_00_WVALID);
    mp_SAXI_00_transactor->CLK(AXI_00_ACLK);
    m_SAXI_00_transactor_rst_signal.write(1);
    mp_SAXI_00_transactor->RST(m_SAXI_00_transactor_rst_signal);

    // SAXI_00' transactor sockets

    mp_impl->SAXI_00_rd_socket->bind(*(mp_SAXI_00_transactor->rd_socket));
    mp_impl->SAXI_00_wr_socket->bind(*(mp_SAXI_00_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_01' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_01_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_01' transactor parameters
    xsc::common_cpp::properties SAXI_01_transactor_param_props;
    SAXI_01_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_01_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_01_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_01_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_01_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_01_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_01_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_01_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_01_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_01_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_01_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_01_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_01_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_01_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_01_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_01_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_01_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_01_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_01_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_01_transactor", SAXI_01_transactor_param_props);

    // SAXI_01' transactor ports

    mp_SAXI_01_transactor->ARADDR(AXI_01_ARADDR);
    mp_SAXI_01_transactor->ARBURST(AXI_01_ARBURST);
    mp_SAXI_01_transactor->ARID(AXI_01_ARID);
    mp_AXI_01_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_ARLEN_converter");
    mp_AXI_01_ARLEN_converter->vector_in(AXI_01_ARLEN);
    mp_AXI_01_ARLEN_converter->vector_out(m_AXI_01_ARLEN_converter_signal);
    mp_SAXI_01_transactor->ARLEN(m_AXI_01_ARLEN_converter_signal);
    mp_SAXI_01_transactor->ARREADY(AXI_01_ARREADY);
    mp_SAXI_01_transactor->ARSIZE(AXI_01_ARSIZE);
    mp_SAXI_01_transactor->ARVALID(AXI_01_ARVALID);
    mp_SAXI_01_transactor->AWADDR(AXI_01_AWADDR);
    mp_SAXI_01_transactor->AWBURST(AXI_01_AWBURST);
    mp_SAXI_01_transactor->AWID(AXI_01_AWID);
    mp_AXI_01_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_AWLEN_converter");
    mp_AXI_01_AWLEN_converter->vector_in(AXI_01_AWLEN);
    mp_AXI_01_AWLEN_converter->vector_out(m_AXI_01_AWLEN_converter_signal);
    mp_SAXI_01_transactor->AWLEN(m_AXI_01_AWLEN_converter_signal);
    mp_SAXI_01_transactor->AWREADY(AXI_01_AWREADY);
    mp_SAXI_01_transactor->AWSIZE(AXI_01_AWSIZE);
    mp_SAXI_01_transactor->AWVALID(AXI_01_AWVALID);
    mp_SAXI_01_transactor->BID(AXI_01_BID);
    mp_SAXI_01_transactor->BREADY(AXI_01_BREADY);
    mp_SAXI_01_transactor->BRESP(AXI_01_BRESP);
    mp_SAXI_01_transactor->BVALID(AXI_01_BVALID);
    mp_SAXI_01_transactor->RDATA(AXI_01_RDATA);
    mp_SAXI_01_transactor->RID(AXI_01_RID);
    mp_SAXI_01_transactor->RLAST(AXI_01_RLAST);
    mp_SAXI_01_transactor->RREADY(AXI_01_RREADY);
    mp_SAXI_01_transactor->RRESP(AXI_01_RRESP);
    mp_SAXI_01_transactor->RVALID(AXI_01_RVALID);
    mp_SAXI_01_transactor->WDATA(AXI_01_WDATA);
    mp_SAXI_01_transactor->WLAST(AXI_01_WLAST);
    mp_SAXI_01_transactor->WREADY(AXI_01_WREADY);
    mp_SAXI_01_transactor->WSTRB(AXI_01_WSTRB);
    mp_SAXI_01_transactor->WVALID(AXI_01_WVALID);
    mp_SAXI_01_transactor->CLK(AXI_01_ACLK);
    m_SAXI_01_transactor_rst_signal.write(1);
    mp_SAXI_01_transactor->RST(m_SAXI_01_transactor_rst_signal);

    // SAXI_01' transactor sockets

    mp_impl->SAXI_01_rd_socket->bind(*(mp_SAXI_01_transactor->rd_socket));
    mp_impl->SAXI_01_wr_socket->bind(*(mp_SAXI_01_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_02' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_02_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_02' transactor parameters
    xsc::common_cpp::properties SAXI_02_transactor_param_props;
    SAXI_02_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_02_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_02_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_02_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_02_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_02_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_02_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_02_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_02_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_02_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_02_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_02_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_02_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_02_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_02_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_02_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_02_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_02_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_02_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_02_transactor", SAXI_02_transactor_param_props);

    // SAXI_02' transactor ports

    mp_SAXI_02_transactor->ARADDR(AXI_02_ARADDR);
    mp_SAXI_02_transactor->ARBURST(AXI_02_ARBURST);
    mp_SAXI_02_transactor->ARID(AXI_02_ARID);
    mp_AXI_02_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_ARLEN_converter");
    mp_AXI_02_ARLEN_converter->vector_in(AXI_02_ARLEN);
    mp_AXI_02_ARLEN_converter->vector_out(m_AXI_02_ARLEN_converter_signal);
    mp_SAXI_02_transactor->ARLEN(m_AXI_02_ARLEN_converter_signal);
    mp_SAXI_02_transactor->ARREADY(AXI_02_ARREADY);
    mp_SAXI_02_transactor->ARSIZE(AXI_02_ARSIZE);
    mp_SAXI_02_transactor->ARVALID(AXI_02_ARVALID);
    mp_SAXI_02_transactor->AWADDR(AXI_02_AWADDR);
    mp_SAXI_02_transactor->AWBURST(AXI_02_AWBURST);
    mp_SAXI_02_transactor->AWID(AXI_02_AWID);
    mp_AXI_02_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_AWLEN_converter");
    mp_AXI_02_AWLEN_converter->vector_in(AXI_02_AWLEN);
    mp_AXI_02_AWLEN_converter->vector_out(m_AXI_02_AWLEN_converter_signal);
    mp_SAXI_02_transactor->AWLEN(m_AXI_02_AWLEN_converter_signal);
    mp_SAXI_02_transactor->AWREADY(AXI_02_AWREADY);
    mp_SAXI_02_transactor->AWSIZE(AXI_02_AWSIZE);
    mp_SAXI_02_transactor->AWVALID(AXI_02_AWVALID);
    mp_SAXI_02_transactor->BID(AXI_02_BID);
    mp_SAXI_02_transactor->BREADY(AXI_02_BREADY);
    mp_SAXI_02_transactor->BRESP(AXI_02_BRESP);
    mp_SAXI_02_transactor->BVALID(AXI_02_BVALID);
    mp_SAXI_02_transactor->RDATA(AXI_02_RDATA);
    mp_SAXI_02_transactor->RID(AXI_02_RID);
    mp_SAXI_02_transactor->RLAST(AXI_02_RLAST);
    mp_SAXI_02_transactor->RREADY(AXI_02_RREADY);
    mp_SAXI_02_transactor->RRESP(AXI_02_RRESP);
    mp_SAXI_02_transactor->RVALID(AXI_02_RVALID);
    mp_SAXI_02_transactor->WDATA(AXI_02_WDATA);
    mp_SAXI_02_transactor->WLAST(AXI_02_WLAST);
    mp_SAXI_02_transactor->WREADY(AXI_02_WREADY);
    mp_SAXI_02_transactor->WSTRB(AXI_02_WSTRB);
    mp_SAXI_02_transactor->WVALID(AXI_02_WVALID);
    mp_SAXI_02_transactor->CLK(AXI_02_ACLK);
    m_SAXI_02_transactor_rst_signal.write(1);
    mp_SAXI_02_transactor->RST(m_SAXI_02_transactor_rst_signal);

    // SAXI_02' transactor sockets

    mp_impl->SAXI_02_rd_socket->bind(*(mp_SAXI_02_transactor->rd_socket));
    mp_impl->SAXI_02_wr_socket->bind(*(mp_SAXI_02_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_03' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_03_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_03' transactor parameters
    xsc::common_cpp::properties SAXI_03_transactor_param_props;
    SAXI_03_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_03_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_03_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_03_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_03_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_03_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_03_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_03_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_03_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_03_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_03_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_03_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_03_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_03_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_03_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_03_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_03_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_03_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_03_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_03_transactor", SAXI_03_transactor_param_props);

    // SAXI_03' transactor ports

    mp_SAXI_03_transactor->ARADDR(AXI_03_ARADDR);
    mp_SAXI_03_transactor->ARBURST(AXI_03_ARBURST);
    mp_SAXI_03_transactor->ARID(AXI_03_ARID);
    mp_AXI_03_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_ARLEN_converter");
    mp_AXI_03_ARLEN_converter->vector_in(AXI_03_ARLEN);
    mp_AXI_03_ARLEN_converter->vector_out(m_AXI_03_ARLEN_converter_signal);
    mp_SAXI_03_transactor->ARLEN(m_AXI_03_ARLEN_converter_signal);
    mp_SAXI_03_transactor->ARREADY(AXI_03_ARREADY);
    mp_SAXI_03_transactor->ARSIZE(AXI_03_ARSIZE);
    mp_SAXI_03_transactor->ARVALID(AXI_03_ARVALID);
    mp_SAXI_03_transactor->AWADDR(AXI_03_AWADDR);
    mp_SAXI_03_transactor->AWBURST(AXI_03_AWBURST);
    mp_SAXI_03_transactor->AWID(AXI_03_AWID);
    mp_AXI_03_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_AWLEN_converter");
    mp_AXI_03_AWLEN_converter->vector_in(AXI_03_AWLEN);
    mp_AXI_03_AWLEN_converter->vector_out(m_AXI_03_AWLEN_converter_signal);
    mp_SAXI_03_transactor->AWLEN(m_AXI_03_AWLEN_converter_signal);
    mp_SAXI_03_transactor->AWREADY(AXI_03_AWREADY);
    mp_SAXI_03_transactor->AWSIZE(AXI_03_AWSIZE);
    mp_SAXI_03_transactor->AWVALID(AXI_03_AWVALID);
    mp_SAXI_03_transactor->BID(AXI_03_BID);
    mp_SAXI_03_transactor->BREADY(AXI_03_BREADY);
    mp_SAXI_03_transactor->BRESP(AXI_03_BRESP);
    mp_SAXI_03_transactor->BVALID(AXI_03_BVALID);
    mp_SAXI_03_transactor->RDATA(AXI_03_RDATA);
    mp_SAXI_03_transactor->RID(AXI_03_RID);
    mp_SAXI_03_transactor->RLAST(AXI_03_RLAST);
    mp_SAXI_03_transactor->RREADY(AXI_03_RREADY);
    mp_SAXI_03_transactor->RRESP(AXI_03_RRESP);
    mp_SAXI_03_transactor->RVALID(AXI_03_RVALID);
    mp_SAXI_03_transactor->WDATA(AXI_03_WDATA);
    mp_SAXI_03_transactor->WLAST(AXI_03_WLAST);
    mp_SAXI_03_transactor->WREADY(AXI_03_WREADY);
    mp_SAXI_03_transactor->WSTRB(AXI_03_WSTRB);
    mp_SAXI_03_transactor->WVALID(AXI_03_WVALID);
    mp_SAXI_03_transactor->CLK(AXI_03_ACLK);
    m_SAXI_03_transactor_rst_signal.write(1);
    mp_SAXI_03_transactor->RST(m_SAXI_03_transactor_rst_signal);

    // SAXI_03' transactor sockets

    mp_impl->SAXI_03_rd_socket->bind(*(mp_SAXI_03_transactor->rd_socket));
    mp_impl->SAXI_03_wr_socket->bind(*(mp_SAXI_03_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_16' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_16_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_16' transactor parameters
    xsc::common_cpp::properties SAXI_16_transactor_param_props;
    SAXI_16_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_16_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_16_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_16_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_16_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_16_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_16_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_16_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_16_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_16_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_16_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_16_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_16_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_16_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_16_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_16_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_16_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_16_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_16_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_16_transactor", SAXI_16_transactor_param_props);

    // SAXI_16' transactor ports

    mp_SAXI_16_transactor->ARADDR(AXI_16_ARADDR);
    mp_SAXI_16_transactor->ARBURST(AXI_16_ARBURST);
    mp_SAXI_16_transactor->ARID(AXI_16_ARID);
    mp_AXI_16_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_ARLEN_converter");
    mp_AXI_16_ARLEN_converter->vector_in(AXI_16_ARLEN);
    mp_AXI_16_ARLEN_converter->vector_out(m_AXI_16_ARLEN_converter_signal);
    mp_SAXI_16_transactor->ARLEN(m_AXI_16_ARLEN_converter_signal);
    mp_SAXI_16_transactor->ARREADY(AXI_16_ARREADY);
    mp_SAXI_16_transactor->ARSIZE(AXI_16_ARSIZE);
    mp_SAXI_16_transactor->ARVALID(AXI_16_ARVALID);
    mp_SAXI_16_transactor->AWADDR(AXI_16_AWADDR);
    mp_SAXI_16_transactor->AWBURST(AXI_16_AWBURST);
    mp_SAXI_16_transactor->AWID(AXI_16_AWID);
    mp_AXI_16_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_AWLEN_converter");
    mp_AXI_16_AWLEN_converter->vector_in(AXI_16_AWLEN);
    mp_AXI_16_AWLEN_converter->vector_out(m_AXI_16_AWLEN_converter_signal);
    mp_SAXI_16_transactor->AWLEN(m_AXI_16_AWLEN_converter_signal);
    mp_SAXI_16_transactor->AWREADY(AXI_16_AWREADY);
    mp_SAXI_16_transactor->AWSIZE(AXI_16_AWSIZE);
    mp_SAXI_16_transactor->AWVALID(AXI_16_AWVALID);
    mp_SAXI_16_transactor->BID(AXI_16_BID);
    mp_SAXI_16_transactor->BREADY(AXI_16_BREADY);
    mp_SAXI_16_transactor->BRESP(AXI_16_BRESP);
    mp_SAXI_16_transactor->BVALID(AXI_16_BVALID);
    mp_SAXI_16_transactor->RDATA(AXI_16_RDATA);
    mp_SAXI_16_transactor->RID(AXI_16_RID);
    mp_SAXI_16_transactor->RLAST(AXI_16_RLAST);
    mp_SAXI_16_transactor->RREADY(AXI_16_RREADY);
    mp_SAXI_16_transactor->RRESP(AXI_16_RRESP);
    mp_SAXI_16_transactor->RVALID(AXI_16_RVALID);
    mp_SAXI_16_transactor->WDATA(AXI_16_WDATA);
    mp_SAXI_16_transactor->WLAST(AXI_16_WLAST);
    mp_SAXI_16_transactor->WREADY(AXI_16_WREADY);
    mp_SAXI_16_transactor->WSTRB(AXI_16_WSTRB);
    mp_SAXI_16_transactor->WVALID(AXI_16_WVALID);
    mp_SAXI_16_transactor->CLK(AXI_16_ACLK);
    m_SAXI_16_transactor_rst_signal.write(1);
    mp_SAXI_16_transactor->RST(m_SAXI_16_transactor_rst_signal);

    // SAXI_16' transactor sockets

    mp_impl->SAXI_16_rd_socket->bind(*(mp_SAXI_16_transactor->rd_socket));
    mp_impl->SAXI_16_wr_socket->bind(*(mp_SAXI_16_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_17' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_17_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_17' transactor parameters
    xsc::common_cpp::properties SAXI_17_transactor_param_props;
    SAXI_17_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_17_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_17_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_17_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_17_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_17_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_17_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_17_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_17_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_17_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_17_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_17_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_17_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_17_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_17_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_17_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_17_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_17_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_17_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_17_transactor", SAXI_17_transactor_param_props);

    // SAXI_17' transactor ports

    mp_SAXI_17_transactor->ARADDR(AXI_17_ARADDR);
    mp_SAXI_17_transactor->ARBURST(AXI_17_ARBURST);
    mp_SAXI_17_transactor->ARID(AXI_17_ARID);
    mp_AXI_17_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_ARLEN_converter");
    mp_AXI_17_ARLEN_converter->vector_in(AXI_17_ARLEN);
    mp_AXI_17_ARLEN_converter->vector_out(m_AXI_17_ARLEN_converter_signal);
    mp_SAXI_17_transactor->ARLEN(m_AXI_17_ARLEN_converter_signal);
    mp_SAXI_17_transactor->ARREADY(AXI_17_ARREADY);
    mp_SAXI_17_transactor->ARSIZE(AXI_17_ARSIZE);
    mp_SAXI_17_transactor->ARVALID(AXI_17_ARVALID);
    mp_SAXI_17_transactor->AWADDR(AXI_17_AWADDR);
    mp_SAXI_17_transactor->AWBURST(AXI_17_AWBURST);
    mp_SAXI_17_transactor->AWID(AXI_17_AWID);
    mp_AXI_17_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_AWLEN_converter");
    mp_AXI_17_AWLEN_converter->vector_in(AXI_17_AWLEN);
    mp_AXI_17_AWLEN_converter->vector_out(m_AXI_17_AWLEN_converter_signal);
    mp_SAXI_17_transactor->AWLEN(m_AXI_17_AWLEN_converter_signal);
    mp_SAXI_17_transactor->AWREADY(AXI_17_AWREADY);
    mp_SAXI_17_transactor->AWSIZE(AXI_17_AWSIZE);
    mp_SAXI_17_transactor->AWVALID(AXI_17_AWVALID);
    mp_SAXI_17_transactor->BID(AXI_17_BID);
    mp_SAXI_17_transactor->BREADY(AXI_17_BREADY);
    mp_SAXI_17_transactor->BRESP(AXI_17_BRESP);
    mp_SAXI_17_transactor->BVALID(AXI_17_BVALID);
    mp_SAXI_17_transactor->RDATA(AXI_17_RDATA);
    mp_SAXI_17_transactor->RID(AXI_17_RID);
    mp_SAXI_17_transactor->RLAST(AXI_17_RLAST);
    mp_SAXI_17_transactor->RREADY(AXI_17_RREADY);
    mp_SAXI_17_transactor->RRESP(AXI_17_RRESP);
    mp_SAXI_17_transactor->RVALID(AXI_17_RVALID);
    mp_SAXI_17_transactor->WDATA(AXI_17_WDATA);
    mp_SAXI_17_transactor->WLAST(AXI_17_WLAST);
    mp_SAXI_17_transactor->WREADY(AXI_17_WREADY);
    mp_SAXI_17_transactor->WSTRB(AXI_17_WSTRB);
    mp_SAXI_17_transactor->WVALID(AXI_17_WVALID);
    mp_SAXI_17_transactor->CLK(AXI_17_ACLK);
    m_SAXI_17_transactor_rst_signal.write(1);
    mp_SAXI_17_transactor->RST(m_SAXI_17_transactor_rst_signal);

    // SAXI_17' transactor sockets

    mp_impl->SAXI_17_rd_socket->bind(*(mp_SAXI_17_transactor->rd_socket));
    mp_impl->SAXI_17_wr_socket->bind(*(mp_SAXI_17_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_18' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_18_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_18' transactor parameters
    xsc::common_cpp::properties SAXI_18_transactor_param_props;
    SAXI_18_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_18_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_18_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_18_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_18_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_18_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_18_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_18_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_18_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_18_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_18_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_18_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_18_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_18_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_18_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_18_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_18_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_18_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_18_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_18_transactor", SAXI_18_transactor_param_props);

    // SAXI_18' transactor ports

    mp_SAXI_18_transactor->ARADDR(AXI_18_ARADDR);
    mp_SAXI_18_transactor->ARBURST(AXI_18_ARBURST);
    mp_SAXI_18_transactor->ARID(AXI_18_ARID);
    mp_AXI_18_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_ARLEN_converter");
    mp_AXI_18_ARLEN_converter->vector_in(AXI_18_ARLEN);
    mp_AXI_18_ARLEN_converter->vector_out(m_AXI_18_ARLEN_converter_signal);
    mp_SAXI_18_transactor->ARLEN(m_AXI_18_ARLEN_converter_signal);
    mp_SAXI_18_transactor->ARREADY(AXI_18_ARREADY);
    mp_SAXI_18_transactor->ARSIZE(AXI_18_ARSIZE);
    mp_SAXI_18_transactor->ARVALID(AXI_18_ARVALID);
    mp_SAXI_18_transactor->AWADDR(AXI_18_AWADDR);
    mp_SAXI_18_transactor->AWBURST(AXI_18_AWBURST);
    mp_SAXI_18_transactor->AWID(AXI_18_AWID);
    mp_AXI_18_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_AWLEN_converter");
    mp_AXI_18_AWLEN_converter->vector_in(AXI_18_AWLEN);
    mp_AXI_18_AWLEN_converter->vector_out(m_AXI_18_AWLEN_converter_signal);
    mp_SAXI_18_transactor->AWLEN(m_AXI_18_AWLEN_converter_signal);
    mp_SAXI_18_transactor->AWREADY(AXI_18_AWREADY);
    mp_SAXI_18_transactor->AWSIZE(AXI_18_AWSIZE);
    mp_SAXI_18_transactor->AWVALID(AXI_18_AWVALID);
    mp_SAXI_18_transactor->BID(AXI_18_BID);
    mp_SAXI_18_transactor->BREADY(AXI_18_BREADY);
    mp_SAXI_18_transactor->BRESP(AXI_18_BRESP);
    mp_SAXI_18_transactor->BVALID(AXI_18_BVALID);
    mp_SAXI_18_transactor->RDATA(AXI_18_RDATA);
    mp_SAXI_18_transactor->RID(AXI_18_RID);
    mp_SAXI_18_transactor->RLAST(AXI_18_RLAST);
    mp_SAXI_18_transactor->RREADY(AXI_18_RREADY);
    mp_SAXI_18_transactor->RRESP(AXI_18_RRESP);
    mp_SAXI_18_transactor->RVALID(AXI_18_RVALID);
    mp_SAXI_18_transactor->WDATA(AXI_18_WDATA);
    mp_SAXI_18_transactor->WLAST(AXI_18_WLAST);
    mp_SAXI_18_transactor->WREADY(AXI_18_WREADY);
    mp_SAXI_18_transactor->WSTRB(AXI_18_WSTRB);
    mp_SAXI_18_transactor->WVALID(AXI_18_WVALID);
    mp_SAXI_18_transactor->CLK(AXI_18_ACLK);
    m_SAXI_18_transactor_rst_signal.write(1);
    mp_SAXI_18_transactor->RST(m_SAXI_18_transactor_rst_signal);

    // SAXI_18' transactor sockets

    mp_impl->SAXI_18_rd_socket->bind(*(mp_SAXI_18_transactor->rd_socket));
    mp_impl->SAXI_18_wr_socket->bind(*(mp_SAXI_18_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'SAXI_19' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_19_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'SAXI_19' transactor parameters
    xsc::common_cpp::properties SAXI_19_transactor_param_props;
    SAXI_19_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_19_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_19_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_19_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_19_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_19_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_19_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_19_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_19_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_19_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_19_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_19_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_19_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_19_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_19_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_19_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_19_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_19_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_19_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_19_transactor", SAXI_19_transactor_param_props);

    // SAXI_19' transactor ports

    mp_SAXI_19_transactor->ARADDR(AXI_19_ARADDR);
    mp_SAXI_19_transactor->ARBURST(AXI_19_ARBURST);
    mp_SAXI_19_transactor->ARID(AXI_19_ARID);
    mp_AXI_19_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_ARLEN_converter");
    mp_AXI_19_ARLEN_converter->vector_in(AXI_19_ARLEN);
    mp_AXI_19_ARLEN_converter->vector_out(m_AXI_19_ARLEN_converter_signal);
    mp_SAXI_19_transactor->ARLEN(m_AXI_19_ARLEN_converter_signal);
    mp_SAXI_19_transactor->ARREADY(AXI_19_ARREADY);
    mp_SAXI_19_transactor->ARSIZE(AXI_19_ARSIZE);
    mp_SAXI_19_transactor->ARVALID(AXI_19_ARVALID);
    mp_SAXI_19_transactor->AWADDR(AXI_19_AWADDR);
    mp_SAXI_19_transactor->AWBURST(AXI_19_AWBURST);
    mp_SAXI_19_transactor->AWID(AXI_19_AWID);
    mp_AXI_19_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_AWLEN_converter");
    mp_AXI_19_AWLEN_converter->vector_in(AXI_19_AWLEN);
    mp_AXI_19_AWLEN_converter->vector_out(m_AXI_19_AWLEN_converter_signal);
    mp_SAXI_19_transactor->AWLEN(m_AXI_19_AWLEN_converter_signal);
    mp_SAXI_19_transactor->AWREADY(AXI_19_AWREADY);
    mp_SAXI_19_transactor->AWSIZE(AXI_19_AWSIZE);
    mp_SAXI_19_transactor->AWVALID(AXI_19_AWVALID);
    mp_SAXI_19_transactor->BID(AXI_19_BID);
    mp_SAXI_19_transactor->BREADY(AXI_19_BREADY);
    mp_SAXI_19_transactor->BRESP(AXI_19_BRESP);
    mp_SAXI_19_transactor->BVALID(AXI_19_BVALID);
    mp_SAXI_19_transactor->RDATA(AXI_19_RDATA);
    mp_SAXI_19_transactor->RID(AXI_19_RID);
    mp_SAXI_19_transactor->RLAST(AXI_19_RLAST);
    mp_SAXI_19_transactor->RREADY(AXI_19_RREADY);
    mp_SAXI_19_transactor->RRESP(AXI_19_RRESP);
    mp_SAXI_19_transactor->RVALID(AXI_19_RVALID);
    mp_SAXI_19_transactor->WDATA(AXI_19_WDATA);
    mp_SAXI_19_transactor->WLAST(AXI_19_WLAST);
    mp_SAXI_19_transactor->WREADY(AXI_19_WREADY);
    mp_SAXI_19_transactor->WSTRB(AXI_19_WSTRB);
    mp_SAXI_19_transactor->WVALID(AXI_19_WVALID);
    mp_SAXI_19_transactor->CLK(AXI_19_ACLK);
    m_SAXI_19_transactor_rst_signal.write(1);
    mp_SAXI_19_transactor->RST(m_SAXI_19_transactor_rst_signal);

    // SAXI_19' transactor sockets

    mp_impl->SAXI_19_rd_socket->bind(*(mp_SAXI_19_transactor->rd_socket));
    mp_impl->SAXI_19_wr_socket->bind(*(mp_SAXI_19_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // RIVIERA




#ifdef VCSSYSTEMC
u280_xdma_hbm_0_0::u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm) : u280_xdma_hbm_0_0_sc(nm),  HBM_REF_CLK_0("HBM_REF_CLK_0"), HBM_REF_CLK_1("HBM_REF_CLK_1"), AXI_00_ACLK("AXI_00_ACLK"), AXI_00_ARESET_N("AXI_00_ARESET_N"), AXI_00_ARADDR("AXI_00_ARADDR"), AXI_00_ARBURST("AXI_00_ARBURST"), AXI_00_ARID("AXI_00_ARID"), AXI_00_ARLEN("AXI_00_ARLEN"), AXI_00_ARSIZE("AXI_00_ARSIZE"), AXI_00_ARVALID("AXI_00_ARVALID"), AXI_00_AWADDR("AXI_00_AWADDR"), AXI_00_AWBURST("AXI_00_AWBURST"), AXI_00_AWID("AXI_00_AWID"), AXI_00_AWLEN("AXI_00_AWLEN"), AXI_00_AWSIZE("AXI_00_AWSIZE"), AXI_00_AWVALID("AXI_00_AWVALID"), AXI_00_RREADY("AXI_00_RREADY"), AXI_00_BREADY("AXI_00_BREADY"), AXI_00_WDATA("AXI_00_WDATA"), AXI_00_WLAST("AXI_00_WLAST"), AXI_00_WSTRB("AXI_00_WSTRB"), AXI_00_WDATA_PARITY("AXI_00_WDATA_PARITY"), AXI_00_WVALID("AXI_00_WVALID"), AXI_01_ACLK("AXI_01_ACLK"), AXI_01_ARESET_N("AXI_01_ARESET_N"), AXI_01_ARADDR("AXI_01_ARADDR"), AXI_01_ARBURST("AXI_01_ARBURST"), AXI_01_ARID("AXI_01_ARID"), AXI_01_ARLEN("AXI_01_ARLEN"), AXI_01_ARSIZE("AXI_01_ARSIZE"), AXI_01_ARVALID("AXI_01_ARVALID"), AXI_01_AWADDR("AXI_01_AWADDR"), AXI_01_AWBURST("AXI_01_AWBURST"), AXI_01_AWID("AXI_01_AWID"), AXI_01_AWLEN("AXI_01_AWLEN"), AXI_01_AWSIZE("AXI_01_AWSIZE"), AXI_01_AWVALID("AXI_01_AWVALID"), AXI_01_RREADY("AXI_01_RREADY"), AXI_01_BREADY("AXI_01_BREADY"), AXI_01_WDATA("AXI_01_WDATA"), AXI_01_WLAST("AXI_01_WLAST"), AXI_01_WSTRB("AXI_01_WSTRB"), AXI_01_WDATA_PARITY("AXI_01_WDATA_PARITY"), AXI_01_WVALID("AXI_01_WVALID"), AXI_02_ACLK("AXI_02_ACLK"), AXI_02_ARESET_N("AXI_02_ARESET_N"), AXI_02_ARADDR("AXI_02_ARADDR"), AXI_02_ARBURST("AXI_02_ARBURST"), AXI_02_ARID("AXI_02_ARID"), AXI_02_ARLEN("AXI_02_ARLEN"), AXI_02_ARSIZE("AXI_02_ARSIZE"), AXI_02_ARVALID("AXI_02_ARVALID"), AXI_02_AWADDR("AXI_02_AWADDR"), AXI_02_AWBURST("AXI_02_AWBURST"), AXI_02_AWID("AXI_02_AWID"), AXI_02_AWLEN("AXI_02_AWLEN"), AXI_02_AWSIZE("AXI_02_AWSIZE"), AXI_02_AWVALID("AXI_02_AWVALID"), AXI_02_RREADY("AXI_02_RREADY"), AXI_02_BREADY("AXI_02_BREADY"), AXI_02_WDATA("AXI_02_WDATA"), AXI_02_WLAST("AXI_02_WLAST"), AXI_02_WSTRB("AXI_02_WSTRB"), AXI_02_WDATA_PARITY("AXI_02_WDATA_PARITY"), AXI_02_WVALID("AXI_02_WVALID"), AXI_03_ACLK("AXI_03_ACLK"), AXI_03_ARESET_N("AXI_03_ARESET_N"), AXI_03_ARADDR("AXI_03_ARADDR"), AXI_03_ARBURST("AXI_03_ARBURST"), AXI_03_ARID("AXI_03_ARID"), AXI_03_ARLEN("AXI_03_ARLEN"), AXI_03_ARSIZE("AXI_03_ARSIZE"), AXI_03_ARVALID("AXI_03_ARVALID"), AXI_03_AWADDR("AXI_03_AWADDR"), AXI_03_AWBURST("AXI_03_AWBURST"), AXI_03_AWID("AXI_03_AWID"), AXI_03_AWLEN("AXI_03_AWLEN"), AXI_03_AWSIZE("AXI_03_AWSIZE"), AXI_03_AWVALID("AXI_03_AWVALID"), AXI_03_RREADY("AXI_03_RREADY"), AXI_03_BREADY("AXI_03_BREADY"), AXI_03_WDATA("AXI_03_WDATA"), AXI_03_WLAST("AXI_03_WLAST"), AXI_03_WSTRB("AXI_03_WSTRB"), AXI_03_WDATA_PARITY("AXI_03_WDATA_PARITY"), AXI_03_WVALID("AXI_03_WVALID"), AXI_16_ACLK("AXI_16_ACLK"), AXI_16_ARESET_N("AXI_16_ARESET_N"), AXI_16_ARADDR("AXI_16_ARADDR"), AXI_16_ARBURST("AXI_16_ARBURST"), AXI_16_ARID("AXI_16_ARID"), AXI_16_ARLEN("AXI_16_ARLEN"), AXI_16_ARSIZE("AXI_16_ARSIZE"), AXI_16_ARVALID("AXI_16_ARVALID"), AXI_16_AWADDR("AXI_16_AWADDR"), AXI_16_AWBURST("AXI_16_AWBURST"), AXI_16_AWID("AXI_16_AWID"), AXI_16_AWLEN("AXI_16_AWLEN"), AXI_16_AWSIZE("AXI_16_AWSIZE"), AXI_16_AWVALID("AXI_16_AWVALID"), AXI_16_RREADY("AXI_16_RREADY"), AXI_16_BREADY("AXI_16_BREADY"), AXI_16_WDATA("AXI_16_WDATA"), AXI_16_WLAST("AXI_16_WLAST"), AXI_16_WSTRB("AXI_16_WSTRB"), AXI_16_WDATA_PARITY("AXI_16_WDATA_PARITY"), AXI_16_WVALID("AXI_16_WVALID"), AXI_17_ACLK("AXI_17_ACLK"), AXI_17_ARESET_N("AXI_17_ARESET_N"), AXI_17_ARADDR("AXI_17_ARADDR"), AXI_17_ARBURST("AXI_17_ARBURST"), AXI_17_ARID("AXI_17_ARID"), AXI_17_ARLEN("AXI_17_ARLEN"), AXI_17_ARSIZE("AXI_17_ARSIZE"), AXI_17_ARVALID("AXI_17_ARVALID"), AXI_17_AWADDR("AXI_17_AWADDR"), AXI_17_AWBURST("AXI_17_AWBURST"), AXI_17_AWID("AXI_17_AWID"), AXI_17_AWLEN("AXI_17_AWLEN"), AXI_17_AWSIZE("AXI_17_AWSIZE"), AXI_17_AWVALID("AXI_17_AWVALID"), AXI_17_RREADY("AXI_17_RREADY"), AXI_17_BREADY("AXI_17_BREADY"), AXI_17_WDATA("AXI_17_WDATA"), AXI_17_WLAST("AXI_17_WLAST"), AXI_17_WSTRB("AXI_17_WSTRB"), AXI_17_WDATA_PARITY("AXI_17_WDATA_PARITY"), AXI_17_WVALID("AXI_17_WVALID"), AXI_18_ACLK("AXI_18_ACLK"), AXI_18_ARESET_N("AXI_18_ARESET_N"), AXI_18_ARADDR("AXI_18_ARADDR"), AXI_18_ARBURST("AXI_18_ARBURST"), AXI_18_ARID("AXI_18_ARID"), AXI_18_ARLEN("AXI_18_ARLEN"), AXI_18_ARSIZE("AXI_18_ARSIZE"), AXI_18_ARVALID("AXI_18_ARVALID"), AXI_18_AWADDR("AXI_18_AWADDR"), AXI_18_AWBURST("AXI_18_AWBURST"), AXI_18_AWID("AXI_18_AWID"), AXI_18_AWLEN("AXI_18_AWLEN"), AXI_18_AWSIZE("AXI_18_AWSIZE"), AXI_18_AWVALID("AXI_18_AWVALID"), AXI_18_RREADY("AXI_18_RREADY"), AXI_18_BREADY("AXI_18_BREADY"), AXI_18_WDATA("AXI_18_WDATA"), AXI_18_WLAST("AXI_18_WLAST"), AXI_18_WSTRB("AXI_18_WSTRB"), AXI_18_WDATA_PARITY("AXI_18_WDATA_PARITY"), AXI_18_WVALID("AXI_18_WVALID"), AXI_19_ACLK("AXI_19_ACLK"), AXI_19_ARESET_N("AXI_19_ARESET_N"), AXI_19_ARADDR("AXI_19_ARADDR"), AXI_19_ARBURST("AXI_19_ARBURST"), AXI_19_ARID("AXI_19_ARID"), AXI_19_ARLEN("AXI_19_ARLEN"), AXI_19_ARSIZE("AXI_19_ARSIZE"), AXI_19_ARVALID("AXI_19_ARVALID"), AXI_19_AWADDR("AXI_19_AWADDR"), AXI_19_AWBURST("AXI_19_AWBURST"), AXI_19_AWID("AXI_19_AWID"), AXI_19_AWLEN("AXI_19_AWLEN"), AXI_19_AWSIZE("AXI_19_AWSIZE"), AXI_19_AWVALID("AXI_19_AWVALID"), AXI_19_RREADY("AXI_19_RREADY"), AXI_19_BREADY("AXI_19_BREADY"), AXI_19_WDATA("AXI_19_WDATA"), AXI_19_WLAST("AXI_19_WLAST"), AXI_19_WSTRB("AXI_19_WSTRB"), AXI_19_WDATA_PARITY("AXI_19_WDATA_PARITY"), AXI_19_WVALID("AXI_19_WVALID"), APB_0_PCLK("APB_0_PCLK"), APB_0_PRESET_N("APB_0_PRESET_N"), APB_1_PCLK("APB_1_PCLK"), APB_1_PRESET_N("APB_1_PRESET_N"), AXI_00_ARREADY("AXI_00_ARREADY"), AXI_00_AWREADY("AXI_00_AWREADY"), AXI_00_RDATA_PARITY("AXI_00_RDATA_PARITY"), AXI_00_RDATA("AXI_00_RDATA"), AXI_00_RID("AXI_00_RID"), AXI_00_RLAST("AXI_00_RLAST"), AXI_00_RRESP("AXI_00_RRESP"), AXI_00_RVALID("AXI_00_RVALID"), AXI_00_WREADY("AXI_00_WREADY"), AXI_00_BID("AXI_00_BID"), AXI_00_BRESP("AXI_00_BRESP"), AXI_00_BVALID("AXI_00_BVALID"), AXI_01_ARREADY("AXI_01_ARREADY"), AXI_01_AWREADY("AXI_01_AWREADY"), AXI_01_RDATA_PARITY("AXI_01_RDATA_PARITY"), AXI_01_RDATA("AXI_01_RDATA"), AXI_01_RID("AXI_01_RID"), AXI_01_RLAST("AXI_01_RLAST"), AXI_01_RRESP("AXI_01_RRESP"), AXI_01_RVALID("AXI_01_RVALID"), AXI_01_WREADY("AXI_01_WREADY"), AXI_01_BID("AXI_01_BID"), AXI_01_BRESP("AXI_01_BRESP"), AXI_01_BVALID("AXI_01_BVALID"), AXI_02_ARREADY("AXI_02_ARREADY"), AXI_02_AWREADY("AXI_02_AWREADY"), AXI_02_RDATA_PARITY("AXI_02_RDATA_PARITY"), AXI_02_RDATA("AXI_02_RDATA"), AXI_02_RID("AXI_02_RID"), AXI_02_RLAST("AXI_02_RLAST"), AXI_02_RRESP("AXI_02_RRESP"), AXI_02_RVALID("AXI_02_RVALID"), AXI_02_WREADY("AXI_02_WREADY"), AXI_02_BID("AXI_02_BID"), AXI_02_BRESP("AXI_02_BRESP"), AXI_02_BVALID("AXI_02_BVALID"), AXI_03_ARREADY("AXI_03_ARREADY"), AXI_03_AWREADY("AXI_03_AWREADY"), AXI_03_RDATA_PARITY("AXI_03_RDATA_PARITY"), AXI_03_RDATA("AXI_03_RDATA"), AXI_03_RID("AXI_03_RID"), AXI_03_RLAST("AXI_03_RLAST"), AXI_03_RRESP("AXI_03_RRESP"), AXI_03_RVALID("AXI_03_RVALID"), AXI_03_WREADY("AXI_03_WREADY"), AXI_03_BID("AXI_03_BID"), AXI_03_BRESP("AXI_03_BRESP"), AXI_03_BVALID("AXI_03_BVALID"), AXI_16_ARREADY("AXI_16_ARREADY"), AXI_16_AWREADY("AXI_16_AWREADY"), AXI_16_RDATA_PARITY("AXI_16_RDATA_PARITY"), AXI_16_RDATA("AXI_16_RDATA"), AXI_16_RID("AXI_16_RID"), AXI_16_RLAST("AXI_16_RLAST"), AXI_16_RRESP("AXI_16_RRESP"), AXI_16_RVALID("AXI_16_RVALID"), AXI_16_WREADY("AXI_16_WREADY"), AXI_16_BID("AXI_16_BID"), AXI_16_BRESP("AXI_16_BRESP"), AXI_16_BVALID("AXI_16_BVALID"), AXI_17_ARREADY("AXI_17_ARREADY"), AXI_17_AWREADY("AXI_17_AWREADY"), AXI_17_RDATA_PARITY("AXI_17_RDATA_PARITY"), AXI_17_RDATA("AXI_17_RDATA"), AXI_17_RID("AXI_17_RID"), AXI_17_RLAST("AXI_17_RLAST"), AXI_17_RRESP("AXI_17_RRESP"), AXI_17_RVALID("AXI_17_RVALID"), AXI_17_WREADY("AXI_17_WREADY"), AXI_17_BID("AXI_17_BID"), AXI_17_BRESP("AXI_17_BRESP"), AXI_17_BVALID("AXI_17_BVALID"), AXI_18_ARREADY("AXI_18_ARREADY"), AXI_18_AWREADY("AXI_18_AWREADY"), AXI_18_RDATA_PARITY("AXI_18_RDATA_PARITY"), AXI_18_RDATA("AXI_18_RDATA"), AXI_18_RID("AXI_18_RID"), AXI_18_RLAST("AXI_18_RLAST"), AXI_18_RRESP("AXI_18_RRESP"), AXI_18_RVALID("AXI_18_RVALID"), AXI_18_WREADY("AXI_18_WREADY"), AXI_18_BID("AXI_18_BID"), AXI_18_BRESP("AXI_18_BRESP"), AXI_18_BVALID("AXI_18_BVALID"), AXI_19_ARREADY("AXI_19_ARREADY"), AXI_19_AWREADY("AXI_19_AWREADY"), AXI_19_RDATA_PARITY("AXI_19_RDATA_PARITY"), AXI_19_RDATA("AXI_19_RDATA"), AXI_19_RID("AXI_19_RID"), AXI_19_RLAST("AXI_19_RLAST"), AXI_19_RRESP("AXI_19_RRESP"), AXI_19_RVALID("AXI_19_RVALID"), AXI_19_WREADY("AXI_19_WREADY"), AXI_19_BID("AXI_19_BID"), AXI_19_BRESP("AXI_19_BRESP"), AXI_19_BVALID("AXI_19_BVALID"), apb_complete_0("apb_complete_0"), apb_complete_1("apb_complete_1"), DRAM_0_STAT_CATTRIP("DRAM_0_STAT_CATTRIP"), DRAM_0_STAT_TEMP("DRAM_0_STAT_TEMP"), DRAM_1_STAT_CATTRIP("DRAM_1_STAT_CATTRIP"), DRAM_1_STAT_TEMP("DRAM_1_STAT_TEMP")
{
  // initialize pins
  mp_impl->HBM_REF_CLK_0(HBM_REF_CLK_0);
  mp_impl->HBM_REF_CLK_1(HBM_REF_CLK_1);
  mp_impl->AXI_00_ACLK(AXI_00_ACLK);
  mp_impl->AXI_00_ARESET_N(AXI_00_ARESET_N);
  mp_impl->AXI_00_WDATA_PARITY(AXI_00_WDATA_PARITY);
  mp_impl->AXI_01_ACLK(AXI_01_ACLK);
  mp_impl->AXI_01_ARESET_N(AXI_01_ARESET_N);
  mp_impl->AXI_01_WDATA_PARITY(AXI_01_WDATA_PARITY);
  mp_impl->AXI_02_ACLK(AXI_02_ACLK);
  mp_impl->AXI_02_ARESET_N(AXI_02_ARESET_N);
  mp_impl->AXI_02_WDATA_PARITY(AXI_02_WDATA_PARITY);
  mp_impl->AXI_03_ACLK(AXI_03_ACLK);
  mp_impl->AXI_03_ARESET_N(AXI_03_ARESET_N);
  mp_impl->AXI_03_WDATA_PARITY(AXI_03_WDATA_PARITY);
  mp_impl->AXI_16_ACLK(AXI_16_ACLK);
  mp_impl->AXI_16_ARESET_N(AXI_16_ARESET_N);
  mp_impl->AXI_16_WDATA_PARITY(AXI_16_WDATA_PARITY);
  mp_impl->AXI_17_ACLK(AXI_17_ACLK);
  mp_impl->AXI_17_ARESET_N(AXI_17_ARESET_N);
  mp_impl->AXI_17_WDATA_PARITY(AXI_17_WDATA_PARITY);
  mp_impl->AXI_18_ACLK(AXI_18_ACLK);
  mp_impl->AXI_18_ARESET_N(AXI_18_ARESET_N);
  mp_impl->AXI_18_WDATA_PARITY(AXI_18_WDATA_PARITY);
  mp_impl->AXI_19_ACLK(AXI_19_ACLK);
  mp_impl->AXI_19_ARESET_N(AXI_19_ARESET_N);
  mp_impl->AXI_19_WDATA_PARITY(AXI_19_WDATA_PARITY);
  mp_impl->APB_0_PCLK(APB_0_PCLK);
  mp_impl->APB_0_PRESET_N(APB_0_PRESET_N);
  mp_impl->APB_1_PCLK(APB_1_PCLK);
  mp_impl->APB_1_PRESET_N(APB_1_PRESET_N);
  mp_impl->AXI_00_RDATA_PARITY(AXI_00_RDATA_PARITY);
  mp_impl->AXI_01_RDATA_PARITY(AXI_01_RDATA_PARITY);
  mp_impl->AXI_02_RDATA_PARITY(AXI_02_RDATA_PARITY);
  mp_impl->AXI_03_RDATA_PARITY(AXI_03_RDATA_PARITY);
  mp_impl->AXI_16_RDATA_PARITY(AXI_16_RDATA_PARITY);
  mp_impl->AXI_17_RDATA_PARITY(AXI_17_RDATA_PARITY);
  mp_impl->AXI_18_RDATA_PARITY(AXI_18_RDATA_PARITY);
  mp_impl->AXI_19_RDATA_PARITY(AXI_19_RDATA_PARITY);
  mp_impl->apb_complete_0(apb_complete_0);
  mp_impl->apb_complete_1(apb_complete_1);
  mp_impl->DRAM_0_STAT_CATTRIP(DRAM_0_STAT_CATTRIP);
  mp_impl->DRAM_0_STAT_TEMP(DRAM_0_STAT_TEMP);
  mp_impl->DRAM_1_STAT_CATTRIP(DRAM_1_STAT_CATTRIP);
  mp_impl->DRAM_1_STAT_TEMP(DRAM_1_STAT_TEMP);

  // initialize transactors
  mp_SAXI_00_transactor = NULL;
  mp_AXI_00_ARLEN_converter = NULL;
  mp_AXI_00_AWLEN_converter = NULL;
  mp_SAXI_01_transactor = NULL;
  mp_AXI_01_ARLEN_converter = NULL;
  mp_AXI_01_AWLEN_converter = NULL;
  mp_SAXI_02_transactor = NULL;
  mp_AXI_02_ARLEN_converter = NULL;
  mp_AXI_02_AWLEN_converter = NULL;
  mp_SAXI_03_transactor = NULL;
  mp_AXI_03_ARLEN_converter = NULL;
  mp_AXI_03_AWLEN_converter = NULL;
  mp_SAXI_16_transactor = NULL;
  mp_AXI_16_ARLEN_converter = NULL;
  mp_AXI_16_AWLEN_converter = NULL;
  mp_SAXI_17_transactor = NULL;
  mp_AXI_17_ARLEN_converter = NULL;
  mp_AXI_17_AWLEN_converter = NULL;
  mp_SAXI_18_transactor = NULL;
  mp_AXI_18_ARLEN_converter = NULL;
  mp_AXI_18_AWLEN_converter = NULL;
  mp_SAXI_19_transactor = NULL;
  mp_AXI_19_ARLEN_converter = NULL;
  mp_AXI_19_AWLEN_converter = NULL;

  // Instantiate Socket Stubs

  // configure SAXI_00_transactor
    xsc::common_cpp::properties SAXI_00_transactor_param_props;
    SAXI_00_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_00_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_00_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_00_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_00_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_00_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_00_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_00_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_00_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_00_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_00_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_00_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_00_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_00_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_00_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_00_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_00_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_00_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_00_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_00_transactor", SAXI_00_transactor_param_props);
  mp_SAXI_00_transactor->ARADDR(AXI_00_ARADDR);
  mp_SAXI_00_transactor->ARBURST(AXI_00_ARBURST);
  mp_SAXI_00_transactor->ARID(AXI_00_ARID);
  mp_AXI_00_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_ARLEN_converter");
  mp_AXI_00_ARLEN_converter->vector_in(AXI_00_ARLEN);
  mp_AXI_00_ARLEN_converter->vector_out(m_AXI_00_ARLEN_converter_signal);
  mp_SAXI_00_transactor->ARLEN(m_AXI_00_ARLEN_converter_signal);
  mp_SAXI_00_transactor->ARREADY(AXI_00_ARREADY);
  mp_SAXI_00_transactor->ARSIZE(AXI_00_ARSIZE);
  mp_SAXI_00_transactor->ARVALID(AXI_00_ARVALID);
  mp_SAXI_00_transactor->AWADDR(AXI_00_AWADDR);
  mp_SAXI_00_transactor->AWBURST(AXI_00_AWBURST);
  mp_SAXI_00_transactor->AWID(AXI_00_AWID);
  mp_AXI_00_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_AWLEN_converter");
  mp_AXI_00_AWLEN_converter->vector_in(AXI_00_AWLEN);
  mp_AXI_00_AWLEN_converter->vector_out(m_AXI_00_AWLEN_converter_signal);
  mp_SAXI_00_transactor->AWLEN(m_AXI_00_AWLEN_converter_signal);
  mp_SAXI_00_transactor->AWREADY(AXI_00_AWREADY);
  mp_SAXI_00_transactor->AWSIZE(AXI_00_AWSIZE);
  mp_SAXI_00_transactor->AWVALID(AXI_00_AWVALID);
  mp_SAXI_00_transactor->BID(AXI_00_BID);
  mp_SAXI_00_transactor->BREADY(AXI_00_BREADY);
  mp_SAXI_00_transactor->BRESP(AXI_00_BRESP);
  mp_SAXI_00_transactor->BVALID(AXI_00_BVALID);
  mp_SAXI_00_transactor->RDATA(AXI_00_RDATA);
  mp_SAXI_00_transactor->RID(AXI_00_RID);
  mp_SAXI_00_transactor->RLAST(AXI_00_RLAST);
  mp_SAXI_00_transactor->RREADY(AXI_00_RREADY);
  mp_SAXI_00_transactor->RRESP(AXI_00_RRESP);
  mp_SAXI_00_transactor->RVALID(AXI_00_RVALID);
  mp_SAXI_00_transactor->WDATA(AXI_00_WDATA);
  mp_SAXI_00_transactor->WLAST(AXI_00_WLAST);
  mp_SAXI_00_transactor->WREADY(AXI_00_WREADY);
  mp_SAXI_00_transactor->WSTRB(AXI_00_WSTRB);
  mp_SAXI_00_transactor->WVALID(AXI_00_WVALID);
  mp_SAXI_00_transactor->CLK(AXI_00_ACLK);
  m_SAXI_00_transactor_rst_signal.write(1);
  mp_SAXI_00_transactor->RST(m_SAXI_00_transactor_rst_signal);
  // configure SAXI_01_transactor
    xsc::common_cpp::properties SAXI_01_transactor_param_props;
    SAXI_01_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_01_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_01_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_01_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_01_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_01_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_01_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_01_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_01_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_01_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_01_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_01_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_01_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_01_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_01_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_01_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_01_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_01_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_01_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_01_transactor", SAXI_01_transactor_param_props);
  mp_SAXI_01_transactor->ARADDR(AXI_01_ARADDR);
  mp_SAXI_01_transactor->ARBURST(AXI_01_ARBURST);
  mp_SAXI_01_transactor->ARID(AXI_01_ARID);
  mp_AXI_01_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_ARLEN_converter");
  mp_AXI_01_ARLEN_converter->vector_in(AXI_01_ARLEN);
  mp_AXI_01_ARLEN_converter->vector_out(m_AXI_01_ARLEN_converter_signal);
  mp_SAXI_01_transactor->ARLEN(m_AXI_01_ARLEN_converter_signal);
  mp_SAXI_01_transactor->ARREADY(AXI_01_ARREADY);
  mp_SAXI_01_transactor->ARSIZE(AXI_01_ARSIZE);
  mp_SAXI_01_transactor->ARVALID(AXI_01_ARVALID);
  mp_SAXI_01_transactor->AWADDR(AXI_01_AWADDR);
  mp_SAXI_01_transactor->AWBURST(AXI_01_AWBURST);
  mp_SAXI_01_transactor->AWID(AXI_01_AWID);
  mp_AXI_01_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_AWLEN_converter");
  mp_AXI_01_AWLEN_converter->vector_in(AXI_01_AWLEN);
  mp_AXI_01_AWLEN_converter->vector_out(m_AXI_01_AWLEN_converter_signal);
  mp_SAXI_01_transactor->AWLEN(m_AXI_01_AWLEN_converter_signal);
  mp_SAXI_01_transactor->AWREADY(AXI_01_AWREADY);
  mp_SAXI_01_transactor->AWSIZE(AXI_01_AWSIZE);
  mp_SAXI_01_transactor->AWVALID(AXI_01_AWVALID);
  mp_SAXI_01_transactor->BID(AXI_01_BID);
  mp_SAXI_01_transactor->BREADY(AXI_01_BREADY);
  mp_SAXI_01_transactor->BRESP(AXI_01_BRESP);
  mp_SAXI_01_transactor->BVALID(AXI_01_BVALID);
  mp_SAXI_01_transactor->RDATA(AXI_01_RDATA);
  mp_SAXI_01_transactor->RID(AXI_01_RID);
  mp_SAXI_01_transactor->RLAST(AXI_01_RLAST);
  mp_SAXI_01_transactor->RREADY(AXI_01_RREADY);
  mp_SAXI_01_transactor->RRESP(AXI_01_RRESP);
  mp_SAXI_01_transactor->RVALID(AXI_01_RVALID);
  mp_SAXI_01_transactor->WDATA(AXI_01_WDATA);
  mp_SAXI_01_transactor->WLAST(AXI_01_WLAST);
  mp_SAXI_01_transactor->WREADY(AXI_01_WREADY);
  mp_SAXI_01_transactor->WSTRB(AXI_01_WSTRB);
  mp_SAXI_01_transactor->WVALID(AXI_01_WVALID);
  mp_SAXI_01_transactor->CLK(AXI_01_ACLK);
  m_SAXI_01_transactor_rst_signal.write(1);
  mp_SAXI_01_transactor->RST(m_SAXI_01_transactor_rst_signal);
  // configure SAXI_02_transactor
    xsc::common_cpp::properties SAXI_02_transactor_param_props;
    SAXI_02_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_02_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_02_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_02_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_02_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_02_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_02_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_02_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_02_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_02_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_02_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_02_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_02_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_02_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_02_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_02_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_02_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_02_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_02_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_02_transactor", SAXI_02_transactor_param_props);
  mp_SAXI_02_transactor->ARADDR(AXI_02_ARADDR);
  mp_SAXI_02_transactor->ARBURST(AXI_02_ARBURST);
  mp_SAXI_02_transactor->ARID(AXI_02_ARID);
  mp_AXI_02_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_ARLEN_converter");
  mp_AXI_02_ARLEN_converter->vector_in(AXI_02_ARLEN);
  mp_AXI_02_ARLEN_converter->vector_out(m_AXI_02_ARLEN_converter_signal);
  mp_SAXI_02_transactor->ARLEN(m_AXI_02_ARLEN_converter_signal);
  mp_SAXI_02_transactor->ARREADY(AXI_02_ARREADY);
  mp_SAXI_02_transactor->ARSIZE(AXI_02_ARSIZE);
  mp_SAXI_02_transactor->ARVALID(AXI_02_ARVALID);
  mp_SAXI_02_transactor->AWADDR(AXI_02_AWADDR);
  mp_SAXI_02_transactor->AWBURST(AXI_02_AWBURST);
  mp_SAXI_02_transactor->AWID(AXI_02_AWID);
  mp_AXI_02_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_AWLEN_converter");
  mp_AXI_02_AWLEN_converter->vector_in(AXI_02_AWLEN);
  mp_AXI_02_AWLEN_converter->vector_out(m_AXI_02_AWLEN_converter_signal);
  mp_SAXI_02_transactor->AWLEN(m_AXI_02_AWLEN_converter_signal);
  mp_SAXI_02_transactor->AWREADY(AXI_02_AWREADY);
  mp_SAXI_02_transactor->AWSIZE(AXI_02_AWSIZE);
  mp_SAXI_02_transactor->AWVALID(AXI_02_AWVALID);
  mp_SAXI_02_transactor->BID(AXI_02_BID);
  mp_SAXI_02_transactor->BREADY(AXI_02_BREADY);
  mp_SAXI_02_transactor->BRESP(AXI_02_BRESP);
  mp_SAXI_02_transactor->BVALID(AXI_02_BVALID);
  mp_SAXI_02_transactor->RDATA(AXI_02_RDATA);
  mp_SAXI_02_transactor->RID(AXI_02_RID);
  mp_SAXI_02_transactor->RLAST(AXI_02_RLAST);
  mp_SAXI_02_transactor->RREADY(AXI_02_RREADY);
  mp_SAXI_02_transactor->RRESP(AXI_02_RRESP);
  mp_SAXI_02_transactor->RVALID(AXI_02_RVALID);
  mp_SAXI_02_transactor->WDATA(AXI_02_WDATA);
  mp_SAXI_02_transactor->WLAST(AXI_02_WLAST);
  mp_SAXI_02_transactor->WREADY(AXI_02_WREADY);
  mp_SAXI_02_transactor->WSTRB(AXI_02_WSTRB);
  mp_SAXI_02_transactor->WVALID(AXI_02_WVALID);
  mp_SAXI_02_transactor->CLK(AXI_02_ACLK);
  m_SAXI_02_transactor_rst_signal.write(1);
  mp_SAXI_02_transactor->RST(m_SAXI_02_transactor_rst_signal);
  // configure SAXI_03_transactor
    xsc::common_cpp::properties SAXI_03_transactor_param_props;
    SAXI_03_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_03_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_03_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_03_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_03_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_03_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_03_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_03_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_03_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_03_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_03_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_03_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_03_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_03_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_03_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_03_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_03_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_03_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_03_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_03_transactor", SAXI_03_transactor_param_props);
  mp_SAXI_03_transactor->ARADDR(AXI_03_ARADDR);
  mp_SAXI_03_transactor->ARBURST(AXI_03_ARBURST);
  mp_SAXI_03_transactor->ARID(AXI_03_ARID);
  mp_AXI_03_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_ARLEN_converter");
  mp_AXI_03_ARLEN_converter->vector_in(AXI_03_ARLEN);
  mp_AXI_03_ARLEN_converter->vector_out(m_AXI_03_ARLEN_converter_signal);
  mp_SAXI_03_transactor->ARLEN(m_AXI_03_ARLEN_converter_signal);
  mp_SAXI_03_transactor->ARREADY(AXI_03_ARREADY);
  mp_SAXI_03_transactor->ARSIZE(AXI_03_ARSIZE);
  mp_SAXI_03_transactor->ARVALID(AXI_03_ARVALID);
  mp_SAXI_03_transactor->AWADDR(AXI_03_AWADDR);
  mp_SAXI_03_transactor->AWBURST(AXI_03_AWBURST);
  mp_SAXI_03_transactor->AWID(AXI_03_AWID);
  mp_AXI_03_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_AWLEN_converter");
  mp_AXI_03_AWLEN_converter->vector_in(AXI_03_AWLEN);
  mp_AXI_03_AWLEN_converter->vector_out(m_AXI_03_AWLEN_converter_signal);
  mp_SAXI_03_transactor->AWLEN(m_AXI_03_AWLEN_converter_signal);
  mp_SAXI_03_transactor->AWREADY(AXI_03_AWREADY);
  mp_SAXI_03_transactor->AWSIZE(AXI_03_AWSIZE);
  mp_SAXI_03_transactor->AWVALID(AXI_03_AWVALID);
  mp_SAXI_03_transactor->BID(AXI_03_BID);
  mp_SAXI_03_transactor->BREADY(AXI_03_BREADY);
  mp_SAXI_03_transactor->BRESP(AXI_03_BRESP);
  mp_SAXI_03_transactor->BVALID(AXI_03_BVALID);
  mp_SAXI_03_transactor->RDATA(AXI_03_RDATA);
  mp_SAXI_03_transactor->RID(AXI_03_RID);
  mp_SAXI_03_transactor->RLAST(AXI_03_RLAST);
  mp_SAXI_03_transactor->RREADY(AXI_03_RREADY);
  mp_SAXI_03_transactor->RRESP(AXI_03_RRESP);
  mp_SAXI_03_transactor->RVALID(AXI_03_RVALID);
  mp_SAXI_03_transactor->WDATA(AXI_03_WDATA);
  mp_SAXI_03_transactor->WLAST(AXI_03_WLAST);
  mp_SAXI_03_transactor->WREADY(AXI_03_WREADY);
  mp_SAXI_03_transactor->WSTRB(AXI_03_WSTRB);
  mp_SAXI_03_transactor->WVALID(AXI_03_WVALID);
  mp_SAXI_03_transactor->CLK(AXI_03_ACLK);
  m_SAXI_03_transactor_rst_signal.write(1);
  mp_SAXI_03_transactor->RST(m_SAXI_03_transactor_rst_signal);
  // configure SAXI_16_transactor
    xsc::common_cpp::properties SAXI_16_transactor_param_props;
    SAXI_16_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_16_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_16_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_16_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_16_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_16_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_16_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_16_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_16_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_16_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_16_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_16_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_16_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_16_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_16_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_16_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_16_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_16_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_16_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_16_transactor", SAXI_16_transactor_param_props);
  mp_SAXI_16_transactor->ARADDR(AXI_16_ARADDR);
  mp_SAXI_16_transactor->ARBURST(AXI_16_ARBURST);
  mp_SAXI_16_transactor->ARID(AXI_16_ARID);
  mp_AXI_16_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_ARLEN_converter");
  mp_AXI_16_ARLEN_converter->vector_in(AXI_16_ARLEN);
  mp_AXI_16_ARLEN_converter->vector_out(m_AXI_16_ARLEN_converter_signal);
  mp_SAXI_16_transactor->ARLEN(m_AXI_16_ARLEN_converter_signal);
  mp_SAXI_16_transactor->ARREADY(AXI_16_ARREADY);
  mp_SAXI_16_transactor->ARSIZE(AXI_16_ARSIZE);
  mp_SAXI_16_transactor->ARVALID(AXI_16_ARVALID);
  mp_SAXI_16_transactor->AWADDR(AXI_16_AWADDR);
  mp_SAXI_16_transactor->AWBURST(AXI_16_AWBURST);
  mp_SAXI_16_transactor->AWID(AXI_16_AWID);
  mp_AXI_16_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_AWLEN_converter");
  mp_AXI_16_AWLEN_converter->vector_in(AXI_16_AWLEN);
  mp_AXI_16_AWLEN_converter->vector_out(m_AXI_16_AWLEN_converter_signal);
  mp_SAXI_16_transactor->AWLEN(m_AXI_16_AWLEN_converter_signal);
  mp_SAXI_16_transactor->AWREADY(AXI_16_AWREADY);
  mp_SAXI_16_transactor->AWSIZE(AXI_16_AWSIZE);
  mp_SAXI_16_transactor->AWVALID(AXI_16_AWVALID);
  mp_SAXI_16_transactor->BID(AXI_16_BID);
  mp_SAXI_16_transactor->BREADY(AXI_16_BREADY);
  mp_SAXI_16_transactor->BRESP(AXI_16_BRESP);
  mp_SAXI_16_transactor->BVALID(AXI_16_BVALID);
  mp_SAXI_16_transactor->RDATA(AXI_16_RDATA);
  mp_SAXI_16_transactor->RID(AXI_16_RID);
  mp_SAXI_16_transactor->RLAST(AXI_16_RLAST);
  mp_SAXI_16_transactor->RREADY(AXI_16_RREADY);
  mp_SAXI_16_transactor->RRESP(AXI_16_RRESP);
  mp_SAXI_16_transactor->RVALID(AXI_16_RVALID);
  mp_SAXI_16_transactor->WDATA(AXI_16_WDATA);
  mp_SAXI_16_transactor->WLAST(AXI_16_WLAST);
  mp_SAXI_16_transactor->WREADY(AXI_16_WREADY);
  mp_SAXI_16_transactor->WSTRB(AXI_16_WSTRB);
  mp_SAXI_16_transactor->WVALID(AXI_16_WVALID);
  mp_SAXI_16_transactor->CLK(AXI_16_ACLK);
  m_SAXI_16_transactor_rst_signal.write(1);
  mp_SAXI_16_transactor->RST(m_SAXI_16_transactor_rst_signal);
  // configure SAXI_17_transactor
    xsc::common_cpp::properties SAXI_17_transactor_param_props;
    SAXI_17_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_17_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_17_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_17_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_17_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_17_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_17_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_17_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_17_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_17_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_17_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_17_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_17_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_17_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_17_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_17_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_17_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_17_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_17_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_17_transactor", SAXI_17_transactor_param_props);
  mp_SAXI_17_transactor->ARADDR(AXI_17_ARADDR);
  mp_SAXI_17_transactor->ARBURST(AXI_17_ARBURST);
  mp_SAXI_17_transactor->ARID(AXI_17_ARID);
  mp_AXI_17_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_ARLEN_converter");
  mp_AXI_17_ARLEN_converter->vector_in(AXI_17_ARLEN);
  mp_AXI_17_ARLEN_converter->vector_out(m_AXI_17_ARLEN_converter_signal);
  mp_SAXI_17_transactor->ARLEN(m_AXI_17_ARLEN_converter_signal);
  mp_SAXI_17_transactor->ARREADY(AXI_17_ARREADY);
  mp_SAXI_17_transactor->ARSIZE(AXI_17_ARSIZE);
  mp_SAXI_17_transactor->ARVALID(AXI_17_ARVALID);
  mp_SAXI_17_transactor->AWADDR(AXI_17_AWADDR);
  mp_SAXI_17_transactor->AWBURST(AXI_17_AWBURST);
  mp_SAXI_17_transactor->AWID(AXI_17_AWID);
  mp_AXI_17_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_AWLEN_converter");
  mp_AXI_17_AWLEN_converter->vector_in(AXI_17_AWLEN);
  mp_AXI_17_AWLEN_converter->vector_out(m_AXI_17_AWLEN_converter_signal);
  mp_SAXI_17_transactor->AWLEN(m_AXI_17_AWLEN_converter_signal);
  mp_SAXI_17_transactor->AWREADY(AXI_17_AWREADY);
  mp_SAXI_17_transactor->AWSIZE(AXI_17_AWSIZE);
  mp_SAXI_17_transactor->AWVALID(AXI_17_AWVALID);
  mp_SAXI_17_transactor->BID(AXI_17_BID);
  mp_SAXI_17_transactor->BREADY(AXI_17_BREADY);
  mp_SAXI_17_transactor->BRESP(AXI_17_BRESP);
  mp_SAXI_17_transactor->BVALID(AXI_17_BVALID);
  mp_SAXI_17_transactor->RDATA(AXI_17_RDATA);
  mp_SAXI_17_transactor->RID(AXI_17_RID);
  mp_SAXI_17_transactor->RLAST(AXI_17_RLAST);
  mp_SAXI_17_transactor->RREADY(AXI_17_RREADY);
  mp_SAXI_17_transactor->RRESP(AXI_17_RRESP);
  mp_SAXI_17_transactor->RVALID(AXI_17_RVALID);
  mp_SAXI_17_transactor->WDATA(AXI_17_WDATA);
  mp_SAXI_17_transactor->WLAST(AXI_17_WLAST);
  mp_SAXI_17_transactor->WREADY(AXI_17_WREADY);
  mp_SAXI_17_transactor->WSTRB(AXI_17_WSTRB);
  mp_SAXI_17_transactor->WVALID(AXI_17_WVALID);
  mp_SAXI_17_transactor->CLK(AXI_17_ACLK);
  m_SAXI_17_transactor_rst_signal.write(1);
  mp_SAXI_17_transactor->RST(m_SAXI_17_transactor_rst_signal);
  // configure SAXI_18_transactor
    xsc::common_cpp::properties SAXI_18_transactor_param_props;
    SAXI_18_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_18_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_18_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_18_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_18_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_18_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_18_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_18_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_18_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_18_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_18_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_18_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_18_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_18_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_18_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_18_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_18_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_18_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_18_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_18_transactor", SAXI_18_transactor_param_props);
  mp_SAXI_18_transactor->ARADDR(AXI_18_ARADDR);
  mp_SAXI_18_transactor->ARBURST(AXI_18_ARBURST);
  mp_SAXI_18_transactor->ARID(AXI_18_ARID);
  mp_AXI_18_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_ARLEN_converter");
  mp_AXI_18_ARLEN_converter->vector_in(AXI_18_ARLEN);
  mp_AXI_18_ARLEN_converter->vector_out(m_AXI_18_ARLEN_converter_signal);
  mp_SAXI_18_transactor->ARLEN(m_AXI_18_ARLEN_converter_signal);
  mp_SAXI_18_transactor->ARREADY(AXI_18_ARREADY);
  mp_SAXI_18_transactor->ARSIZE(AXI_18_ARSIZE);
  mp_SAXI_18_transactor->ARVALID(AXI_18_ARVALID);
  mp_SAXI_18_transactor->AWADDR(AXI_18_AWADDR);
  mp_SAXI_18_transactor->AWBURST(AXI_18_AWBURST);
  mp_SAXI_18_transactor->AWID(AXI_18_AWID);
  mp_AXI_18_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_AWLEN_converter");
  mp_AXI_18_AWLEN_converter->vector_in(AXI_18_AWLEN);
  mp_AXI_18_AWLEN_converter->vector_out(m_AXI_18_AWLEN_converter_signal);
  mp_SAXI_18_transactor->AWLEN(m_AXI_18_AWLEN_converter_signal);
  mp_SAXI_18_transactor->AWREADY(AXI_18_AWREADY);
  mp_SAXI_18_transactor->AWSIZE(AXI_18_AWSIZE);
  mp_SAXI_18_transactor->AWVALID(AXI_18_AWVALID);
  mp_SAXI_18_transactor->BID(AXI_18_BID);
  mp_SAXI_18_transactor->BREADY(AXI_18_BREADY);
  mp_SAXI_18_transactor->BRESP(AXI_18_BRESP);
  mp_SAXI_18_transactor->BVALID(AXI_18_BVALID);
  mp_SAXI_18_transactor->RDATA(AXI_18_RDATA);
  mp_SAXI_18_transactor->RID(AXI_18_RID);
  mp_SAXI_18_transactor->RLAST(AXI_18_RLAST);
  mp_SAXI_18_transactor->RREADY(AXI_18_RREADY);
  mp_SAXI_18_transactor->RRESP(AXI_18_RRESP);
  mp_SAXI_18_transactor->RVALID(AXI_18_RVALID);
  mp_SAXI_18_transactor->WDATA(AXI_18_WDATA);
  mp_SAXI_18_transactor->WLAST(AXI_18_WLAST);
  mp_SAXI_18_transactor->WREADY(AXI_18_WREADY);
  mp_SAXI_18_transactor->WSTRB(AXI_18_WSTRB);
  mp_SAXI_18_transactor->WVALID(AXI_18_WVALID);
  mp_SAXI_18_transactor->CLK(AXI_18_ACLK);
  m_SAXI_18_transactor_rst_signal.write(1);
  mp_SAXI_18_transactor->RST(m_SAXI_18_transactor_rst_signal);
  // configure SAXI_19_transactor
    xsc::common_cpp::properties SAXI_19_transactor_param_props;
    SAXI_19_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_19_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_19_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_19_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_19_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_19_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_19_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_19_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_19_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_19_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_19_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_19_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_19_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_19_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_19_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_19_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_19_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_19_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_19_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_19_transactor", SAXI_19_transactor_param_props);
  mp_SAXI_19_transactor->ARADDR(AXI_19_ARADDR);
  mp_SAXI_19_transactor->ARBURST(AXI_19_ARBURST);
  mp_SAXI_19_transactor->ARID(AXI_19_ARID);
  mp_AXI_19_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_ARLEN_converter");
  mp_AXI_19_ARLEN_converter->vector_in(AXI_19_ARLEN);
  mp_AXI_19_ARLEN_converter->vector_out(m_AXI_19_ARLEN_converter_signal);
  mp_SAXI_19_transactor->ARLEN(m_AXI_19_ARLEN_converter_signal);
  mp_SAXI_19_transactor->ARREADY(AXI_19_ARREADY);
  mp_SAXI_19_transactor->ARSIZE(AXI_19_ARSIZE);
  mp_SAXI_19_transactor->ARVALID(AXI_19_ARVALID);
  mp_SAXI_19_transactor->AWADDR(AXI_19_AWADDR);
  mp_SAXI_19_transactor->AWBURST(AXI_19_AWBURST);
  mp_SAXI_19_transactor->AWID(AXI_19_AWID);
  mp_AXI_19_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_AWLEN_converter");
  mp_AXI_19_AWLEN_converter->vector_in(AXI_19_AWLEN);
  mp_AXI_19_AWLEN_converter->vector_out(m_AXI_19_AWLEN_converter_signal);
  mp_SAXI_19_transactor->AWLEN(m_AXI_19_AWLEN_converter_signal);
  mp_SAXI_19_transactor->AWREADY(AXI_19_AWREADY);
  mp_SAXI_19_transactor->AWSIZE(AXI_19_AWSIZE);
  mp_SAXI_19_transactor->AWVALID(AXI_19_AWVALID);
  mp_SAXI_19_transactor->BID(AXI_19_BID);
  mp_SAXI_19_transactor->BREADY(AXI_19_BREADY);
  mp_SAXI_19_transactor->BRESP(AXI_19_BRESP);
  mp_SAXI_19_transactor->BVALID(AXI_19_BVALID);
  mp_SAXI_19_transactor->RDATA(AXI_19_RDATA);
  mp_SAXI_19_transactor->RID(AXI_19_RID);
  mp_SAXI_19_transactor->RLAST(AXI_19_RLAST);
  mp_SAXI_19_transactor->RREADY(AXI_19_RREADY);
  mp_SAXI_19_transactor->RRESP(AXI_19_RRESP);
  mp_SAXI_19_transactor->RVALID(AXI_19_RVALID);
  mp_SAXI_19_transactor->WDATA(AXI_19_WDATA);
  mp_SAXI_19_transactor->WLAST(AXI_19_WLAST);
  mp_SAXI_19_transactor->WREADY(AXI_19_WREADY);
  mp_SAXI_19_transactor->WSTRB(AXI_19_WSTRB);
  mp_SAXI_19_transactor->WVALID(AXI_19_WVALID);
  mp_SAXI_19_transactor->CLK(AXI_19_ACLK);
  m_SAXI_19_transactor_rst_signal.write(1);
  mp_SAXI_19_transactor->RST(m_SAXI_19_transactor_rst_signal);

  // initialize transactors stubs
  SAXI_00_transactor_target_wr_socket_stub = nullptr;
  SAXI_00_transactor_target_rd_socket_stub = nullptr;
  SAXI_01_transactor_target_wr_socket_stub = nullptr;
  SAXI_01_transactor_target_rd_socket_stub = nullptr;
  SAXI_02_transactor_target_wr_socket_stub = nullptr;
  SAXI_02_transactor_target_rd_socket_stub = nullptr;
  SAXI_03_transactor_target_wr_socket_stub = nullptr;
  SAXI_03_transactor_target_rd_socket_stub = nullptr;
  SAXI_16_transactor_target_wr_socket_stub = nullptr;
  SAXI_16_transactor_target_rd_socket_stub = nullptr;
  SAXI_17_transactor_target_wr_socket_stub = nullptr;
  SAXI_17_transactor_target_rd_socket_stub = nullptr;
  SAXI_18_transactor_target_wr_socket_stub = nullptr;
  SAXI_18_transactor_target_rd_socket_stub = nullptr;
  SAXI_19_transactor_target_wr_socket_stub = nullptr;
  SAXI_19_transactor_target_rd_socket_stub = nullptr;

}

void u280_xdma_hbm_0_0::before_end_of_elaboration()
{
  // configure 'SAXI_00' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_00_TLM_MODE") != 1)
  {
    mp_impl->SAXI_00_rd_socket->bind(*(mp_SAXI_00_transactor->rd_socket));
    mp_impl->SAXI_00_wr_socket->bind(*(mp_SAXI_00_transactor->wr_socket));
  
  }
  else
  {
    SAXI_00_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_00_transactor_target_wr_socket_stub->bind(*(mp_SAXI_00_transactor->wr_socket));
    SAXI_00_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_00_transactor_target_rd_socket_stub->bind(*(mp_SAXI_00_transactor->rd_socket));
    mp_SAXI_00_transactor->disable_transactor();
  }

  // configure 'SAXI_01' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_01_TLM_MODE") != 1)
  {
    mp_impl->SAXI_01_rd_socket->bind(*(mp_SAXI_01_transactor->rd_socket));
    mp_impl->SAXI_01_wr_socket->bind(*(mp_SAXI_01_transactor->wr_socket));
  
  }
  else
  {
    SAXI_01_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_01_transactor_target_wr_socket_stub->bind(*(mp_SAXI_01_transactor->wr_socket));
    SAXI_01_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_01_transactor_target_rd_socket_stub->bind(*(mp_SAXI_01_transactor->rd_socket));
    mp_SAXI_01_transactor->disable_transactor();
  }

  // configure 'SAXI_02' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_02_TLM_MODE") != 1)
  {
    mp_impl->SAXI_02_rd_socket->bind(*(mp_SAXI_02_transactor->rd_socket));
    mp_impl->SAXI_02_wr_socket->bind(*(mp_SAXI_02_transactor->wr_socket));
  
  }
  else
  {
    SAXI_02_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_02_transactor_target_wr_socket_stub->bind(*(mp_SAXI_02_transactor->wr_socket));
    SAXI_02_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_02_transactor_target_rd_socket_stub->bind(*(mp_SAXI_02_transactor->rd_socket));
    mp_SAXI_02_transactor->disable_transactor();
  }

  // configure 'SAXI_03' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_03_TLM_MODE") != 1)
  {
    mp_impl->SAXI_03_rd_socket->bind(*(mp_SAXI_03_transactor->rd_socket));
    mp_impl->SAXI_03_wr_socket->bind(*(mp_SAXI_03_transactor->wr_socket));
  
  }
  else
  {
    SAXI_03_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_03_transactor_target_wr_socket_stub->bind(*(mp_SAXI_03_transactor->wr_socket));
    SAXI_03_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_03_transactor_target_rd_socket_stub->bind(*(mp_SAXI_03_transactor->rd_socket));
    mp_SAXI_03_transactor->disable_transactor();
  }

  // configure 'SAXI_16' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_16_TLM_MODE") != 1)
  {
    mp_impl->SAXI_16_rd_socket->bind(*(mp_SAXI_16_transactor->rd_socket));
    mp_impl->SAXI_16_wr_socket->bind(*(mp_SAXI_16_transactor->wr_socket));
  
  }
  else
  {
    SAXI_16_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_16_transactor_target_wr_socket_stub->bind(*(mp_SAXI_16_transactor->wr_socket));
    SAXI_16_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_16_transactor_target_rd_socket_stub->bind(*(mp_SAXI_16_transactor->rd_socket));
    mp_SAXI_16_transactor->disable_transactor();
  }

  // configure 'SAXI_17' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_17_TLM_MODE") != 1)
  {
    mp_impl->SAXI_17_rd_socket->bind(*(mp_SAXI_17_transactor->rd_socket));
    mp_impl->SAXI_17_wr_socket->bind(*(mp_SAXI_17_transactor->wr_socket));
  
  }
  else
  {
    SAXI_17_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_17_transactor_target_wr_socket_stub->bind(*(mp_SAXI_17_transactor->wr_socket));
    SAXI_17_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_17_transactor_target_rd_socket_stub->bind(*(mp_SAXI_17_transactor->rd_socket));
    mp_SAXI_17_transactor->disable_transactor();
  }

  // configure 'SAXI_18' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_18_TLM_MODE") != 1)
  {
    mp_impl->SAXI_18_rd_socket->bind(*(mp_SAXI_18_transactor->rd_socket));
    mp_impl->SAXI_18_wr_socket->bind(*(mp_SAXI_18_transactor->wr_socket));
  
  }
  else
  {
    SAXI_18_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_18_transactor_target_wr_socket_stub->bind(*(mp_SAXI_18_transactor->wr_socket));
    SAXI_18_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_18_transactor_target_rd_socket_stub->bind(*(mp_SAXI_18_transactor->rd_socket));
    mp_SAXI_18_transactor->disable_transactor();
  }

  // configure 'SAXI_19' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_19_TLM_MODE") != 1)
  {
    mp_impl->SAXI_19_rd_socket->bind(*(mp_SAXI_19_transactor->rd_socket));
    mp_impl->SAXI_19_wr_socket->bind(*(mp_SAXI_19_transactor->wr_socket));
  
  }
  else
  {
    SAXI_19_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_19_transactor_target_wr_socket_stub->bind(*(mp_SAXI_19_transactor->wr_socket));
    SAXI_19_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_19_transactor_target_rd_socket_stub->bind(*(mp_SAXI_19_transactor->rd_socket));
    mp_SAXI_19_transactor->disable_transactor();
  }

}

#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
u280_xdma_hbm_0_0::u280_xdma_hbm_0_0(const sc_core::sc_module_name& nm) : u280_xdma_hbm_0_0_sc(nm),  HBM_REF_CLK_0("HBM_REF_CLK_0"), HBM_REF_CLK_1("HBM_REF_CLK_1"), AXI_00_ACLK("AXI_00_ACLK"), AXI_00_ARESET_N("AXI_00_ARESET_N"), AXI_00_ARADDR("AXI_00_ARADDR"), AXI_00_ARBURST("AXI_00_ARBURST"), AXI_00_ARID("AXI_00_ARID"), AXI_00_ARLEN("AXI_00_ARLEN"), AXI_00_ARSIZE("AXI_00_ARSIZE"), AXI_00_ARVALID("AXI_00_ARVALID"), AXI_00_AWADDR("AXI_00_AWADDR"), AXI_00_AWBURST("AXI_00_AWBURST"), AXI_00_AWID("AXI_00_AWID"), AXI_00_AWLEN("AXI_00_AWLEN"), AXI_00_AWSIZE("AXI_00_AWSIZE"), AXI_00_AWVALID("AXI_00_AWVALID"), AXI_00_RREADY("AXI_00_RREADY"), AXI_00_BREADY("AXI_00_BREADY"), AXI_00_WDATA("AXI_00_WDATA"), AXI_00_WLAST("AXI_00_WLAST"), AXI_00_WSTRB("AXI_00_WSTRB"), AXI_00_WDATA_PARITY("AXI_00_WDATA_PARITY"), AXI_00_WVALID("AXI_00_WVALID"), AXI_01_ACLK("AXI_01_ACLK"), AXI_01_ARESET_N("AXI_01_ARESET_N"), AXI_01_ARADDR("AXI_01_ARADDR"), AXI_01_ARBURST("AXI_01_ARBURST"), AXI_01_ARID("AXI_01_ARID"), AXI_01_ARLEN("AXI_01_ARLEN"), AXI_01_ARSIZE("AXI_01_ARSIZE"), AXI_01_ARVALID("AXI_01_ARVALID"), AXI_01_AWADDR("AXI_01_AWADDR"), AXI_01_AWBURST("AXI_01_AWBURST"), AXI_01_AWID("AXI_01_AWID"), AXI_01_AWLEN("AXI_01_AWLEN"), AXI_01_AWSIZE("AXI_01_AWSIZE"), AXI_01_AWVALID("AXI_01_AWVALID"), AXI_01_RREADY("AXI_01_RREADY"), AXI_01_BREADY("AXI_01_BREADY"), AXI_01_WDATA("AXI_01_WDATA"), AXI_01_WLAST("AXI_01_WLAST"), AXI_01_WSTRB("AXI_01_WSTRB"), AXI_01_WDATA_PARITY("AXI_01_WDATA_PARITY"), AXI_01_WVALID("AXI_01_WVALID"), AXI_02_ACLK("AXI_02_ACLK"), AXI_02_ARESET_N("AXI_02_ARESET_N"), AXI_02_ARADDR("AXI_02_ARADDR"), AXI_02_ARBURST("AXI_02_ARBURST"), AXI_02_ARID("AXI_02_ARID"), AXI_02_ARLEN("AXI_02_ARLEN"), AXI_02_ARSIZE("AXI_02_ARSIZE"), AXI_02_ARVALID("AXI_02_ARVALID"), AXI_02_AWADDR("AXI_02_AWADDR"), AXI_02_AWBURST("AXI_02_AWBURST"), AXI_02_AWID("AXI_02_AWID"), AXI_02_AWLEN("AXI_02_AWLEN"), AXI_02_AWSIZE("AXI_02_AWSIZE"), AXI_02_AWVALID("AXI_02_AWVALID"), AXI_02_RREADY("AXI_02_RREADY"), AXI_02_BREADY("AXI_02_BREADY"), AXI_02_WDATA("AXI_02_WDATA"), AXI_02_WLAST("AXI_02_WLAST"), AXI_02_WSTRB("AXI_02_WSTRB"), AXI_02_WDATA_PARITY("AXI_02_WDATA_PARITY"), AXI_02_WVALID("AXI_02_WVALID"), AXI_03_ACLK("AXI_03_ACLK"), AXI_03_ARESET_N("AXI_03_ARESET_N"), AXI_03_ARADDR("AXI_03_ARADDR"), AXI_03_ARBURST("AXI_03_ARBURST"), AXI_03_ARID("AXI_03_ARID"), AXI_03_ARLEN("AXI_03_ARLEN"), AXI_03_ARSIZE("AXI_03_ARSIZE"), AXI_03_ARVALID("AXI_03_ARVALID"), AXI_03_AWADDR("AXI_03_AWADDR"), AXI_03_AWBURST("AXI_03_AWBURST"), AXI_03_AWID("AXI_03_AWID"), AXI_03_AWLEN("AXI_03_AWLEN"), AXI_03_AWSIZE("AXI_03_AWSIZE"), AXI_03_AWVALID("AXI_03_AWVALID"), AXI_03_RREADY("AXI_03_RREADY"), AXI_03_BREADY("AXI_03_BREADY"), AXI_03_WDATA("AXI_03_WDATA"), AXI_03_WLAST("AXI_03_WLAST"), AXI_03_WSTRB("AXI_03_WSTRB"), AXI_03_WDATA_PARITY("AXI_03_WDATA_PARITY"), AXI_03_WVALID("AXI_03_WVALID"), AXI_16_ACLK("AXI_16_ACLK"), AXI_16_ARESET_N("AXI_16_ARESET_N"), AXI_16_ARADDR("AXI_16_ARADDR"), AXI_16_ARBURST("AXI_16_ARBURST"), AXI_16_ARID("AXI_16_ARID"), AXI_16_ARLEN("AXI_16_ARLEN"), AXI_16_ARSIZE("AXI_16_ARSIZE"), AXI_16_ARVALID("AXI_16_ARVALID"), AXI_16_AWADDR("AXI_16_AWADDR"), AXI_16_AWBURST("AXI_16_AWBURST"), AXI_16_AWID("AXI_16_AWID"), AXI_16_AWLEN("AXI_16_AWLEN"), AXI_16_AWSIZE("AXI_16_AWSIZE"), AXI_16_AWVALID("AXI_16_AWVALID"), AXI_16_RREADY("AXI_16_RREADY"), AXI_16_BREADY("AXI_16_BREADY"), AXI_16_WDATA("AXI_16_WDATA"), AXI_16_WLAST("AXI_16_WLAST"), AXI_16_WSTRB("AXI_16_WSTRB"), AXI_16_WDATA_PARITY("AXI_16_WDATA_PARITY"), AXI_16_WVALID("AXI_16_WVALID"), AXI_17_ACLK("AXI_17_ACLK"), AXI_17_ARESET_N("AXI_17_ARESET_N"), AXI_17_ARADDR("AXI_17_ARADDR"), AXI_17_ARBURST("AXI_17_ARBURST"), AXI_17_ARID("AXI_17_ARID"), AXI_17_ARLEN("AXI_17_ARLEN"), AXI_17_ARSIZE("AXI_17_ARSIZE"), AXI_17_ARVALID("AXI_17_ARVALID"), AXI_17_AWADDR("AXI_17_AWADDR"), AXI_17_AWBURST("AXI_17_AWBURST"), AXI_17_AWID("AXI_17_AWID"), AXI_17_AWLEN("AXI_17_AWLEN"), AXI_17_AWSIZE("AXI_17_AWSIZE"), AXI_17_AWVALID("AXI_17_AWVALID"), AXI_17_RREADY("AXI_17_RREADY"), AXI_17_BREADY("AXI_17_BREADY"), AXI_17_WDATA("AXI_17_WDATA"), AXI_17_WLAST("AXI_17_WLAST"), AXI_17_WSTRB("AXI_17_WSTRB"), AXI_17_WDATA_PARITY("AXI_17_WDATA_PARITY"), AXI_17_WVALID("AXI_17_WVALID"), AXI_18_ACLK("AXI_18_ACLK"), AXI_18_ARESET_N("AXI_18_ARESET_N"), AXI_18_ARADDR("AXI_18_ARADDR"), AXI_18_ARBURST("AXI_18_ARBURST"), AXI_18_ARID("AXI_18_ARID"), AXI_18_ARLEN("AXI_18_ARLEN"), AXI_18_ARSIZE("AXI_18_ARSIZE"), AXI_18_ARVALID("AXI_18_ARVALID"), AXI_18_AWADDR("AXI_18_AWADDR"), AXI_18_AWBURST("AXI_18_AWBURST"), AXI_18_AWID("AXI_18_AWID"), AXI_18_AWLEN("AXI_18_AWLEN"), AXI_18_AWSIZE("AXI_18_AWSIZE"), AXI_18_AWVALID("AXI_18_AWVALID"), AXI_18_RREADY("AXI_18_RREADY"), AXI_18_BREADY("AXI_18_BREADY"), AXI_18_WDATA("AXI_18_WDATA"), AXI_18_WLAST("AXI_18_WLAST"), AXI_18_WSTRB("AXI_18_WSTRB"), AXI_18_WDATA_PARITY("AXI_18_WDATA_PARITY"), AXI_18_WVALID("AXI_18_WVALID"), AXI_19_ACLK("AXI_19_ACLK"), AXI_19_ARESET_N("AXI_19_ARESET_N"), AXI_19_ARADDR("AXI_19_ARADDR"), AXI_19_ARBURST("AXI_19_ARBURST"), AXI_19_ARID("AXI_19_ARID"), AXI_19_ARLEN("AXI_19_ARLEN"), AXI_19_ARSIZE("AXI_19_ARSIZE"), AXI_19_ARVALID("AXI_19_ARVALID"), AXI_19_AWADDR("AXI_19_AWADDR"), AXI_19_AWBURST("AXI_19_AWBURST"), AXI_19_AWID("AXI_19_AWID"), AXI_19_AWLEN("AXI_19_AWLEN"), AXI_19_AWSIZE("AXI_19_AWSIZE"), AXI_19_AWVALID("AXI_19_AWVALID"), AXI_19_RREADY("AXI_19_RREADY"), AXI_19_BREADY("AXI_19_BREADY"), AXI_19_WDATA("AXI_19_WDATA"), AXI_19_WLAST("AXI_19_WLAST"), AXI_19_WSTRB("AXI_19_WSTRB"), AXI_19_WDATA_PARITY("AXI_19_WDATA_PARITY"), AXI_19_WVALID("AXI_19_WVALID"), APB_0_PCLK("APB_0_PCLK"), APB_0_PRESET_N("APB_0_PRESET_N"), APB_1_PCLK("APB_1_PCLK"), APB_1_PRESET_N("APB_1_PRESET_N"), AXI_00_ARREADY("AXI_00_ARREADY"), AXI_00_AWREADY("AXI_00_AWREADY"), AXI_00_RDATA_PARITY("AXI_00_RDATA_PARITY"), AXI_00_RDATA("AXI_00_RDATA"), AXI_00_RID("AXI_00_RID"), AXI_00_RLAST("AXI_00_RLAST"), AXI_00_RRESP("AXI_00_RRESP"), AXI_00_RVALID("AXI_00_RVALID"), AXI_00_WREADY("AXI_00_WREADY"), AXI_00_BID("AXI_00_BID"), AXI_00_BRESP("AXI_00_BRESP"), AXI_00_BVALID("AXI_00_BVALID"), AXI_01_ARREADY("AXI_01_ARREADY"), AXI_01_AWREADY("AXI_01_AWREADY"), AXI_01_RDATA_PARITY("AXI_01_RDATA_PARITY"), AXI_01_RDATA("AXI_01_RDATA"), AXI_01_RID("AXI_01_RID"), AXI_01_RLAST("AXI_01_RLAST"), AXI_01_RRESP("AXI_01_RRESP"), AXI_01_RVALID("AXI_01_RVALID"), AXI_01_WREADY("AXI_01_WREADY"), AXI_01_BID("AXI_01_BID"), AXI_01_BRESP("AXI_01_BRESP"), AXI_01_BVALID("AXI_01_BVALID"), AXI_02_ARREADY("AXI_02_ARREADY"), AXI_02_AWREADY("AXI_02_AWREADY"), AXI_02_RDATA_PARITY("AXI_02_RDATA_PARITY"), AXI_02_RDATA("AXI_02_RDATA"), AXI_02_RID("AXI_02_RID"), AXI_02_RLAST("AXI_02_RLAST"), AXI_02_RRESP("AXI_02_RRESP"), AXI_02_RVALID("AXI_02_RVALID"), AXI_02_WREADY("AXI_02_WREADY"), AXI_02_BID("AXI_02_BID"), AXI_02_BRESP("AXI_02_BRESP"), AXI_02_BVALID("AXI_02_BVALID"), AXI_03_ARREADY("AXI_03_ARREADY"), AXI_03_AWREADY("AXI_03_AWREADY"), AXI_03_RDATA_PARITY("AXI_03_RDATA_PARITY"), AXI_03_RDATA("AXI_03_RDATA"), AXI_03_RID("AXI_03_RID"), AXI_03_RLAST("AXI_03_RLAST"), AXI_03_RRESP("AXI_03_RRESP"), AXI_03_RVALID("AXI_03_RVALID"), AXI_03_WREADY("AXI_03_WREADY"), AXI_03_BID("AXI_03_BID"), AXI_03_BRESP("AXI_03_BRESP"), AXI_03_BVALID("AXI_03_BVALID"), AXI_16_ARREADY("AXI_16_ARREADY"), AXI_16_AWREADY("AXI_16_AWREADY"), AXI_16_RDATA_PARITY("AXI_16_RDATA_PARITY"), AXI_16_RDATA("AXI_16_RDATA"), AXI_16_RID("AXI_16_RID"), AXI_16_RLAST("AXI_16_RLAST"), AXI_16_RRESP("AXI_16_RRESP"), AXI_16_RVALID("AXI_16_RVALID"), AXI_16_WREADY("AXI_16_WREADY"), AXI_16_BID("AXI_16_BID"), AXI_16_BRESP("AXI_16_BRESP"), AXI_16_BVALID("AXI_16_BVALID"), AXI_17_ARREADY("AXI_17_ARREADY"), AXI_17_AWREADY("AXI_17_AWREADY"), AXI_17_RDATA_PARITY("AXI_17_RDATA_PARITY"), AXI_17_RDATA("AXI_17_RDATA"), AXI_17_RID("AXI_17_RID"), AXI_17_RLAST("AXI_17_RLAST"), AXI_17_RRESP("AXI_17_RRESP"), AXI_17_RVALID("AXI_17_RVALID"), AXI_17_WREADY("AXI_17_WREADY"), AXI_17_BID("AXI_17_BID"), AXI_17_BRESP("AXI_17_BRESP"), AXI_17_BVALID("AXI_17_BVALID"), AXI_18_ARREADY("AXI_18_ARREADY"), AXI_18_AWREADY("AXI_18_AWREADY"), AXI_18_RDATA_PARITY("AXI_18_RDATA_PARITY"), AXI_18_RDATA("AXI_18_RDATA"), AXI_18_RID("AXI_18_RID"), AXI_18_RLAST("AXI_18_RLAST"), AXI_18_RRESP("AXI_18_RRESP"), AXI_18_RVALID("AXI_18_RVALID"), AXI_18_WREADY("AXI_18_WREADY"), AXI_18_BID("AXI_18_BID"), AXI_18_BRESP("AXI_18_BRESP"), AXI_18_BVALID("AXI_18_BVALID"), AXI_19_ARREADY("AXI_19_ARREADY"), AXI_19_AWREADY("AXI_19_AWREADY"), AXI_19_RDATA_PARITY("AXI_19_RDATA_PARITY"), AXI_19_RDATA("AXI_19_RDATA"), AXI_19_RID("AXI_19_RID"), AXI_19_RLAST("AXI_19_RLAST"), AXI_19_RRESP("AXI_19_RRESP"), AXI_19_RVALID("AXI_19_RVALID"), AXI_19_WREADY("AXI_19_WREADY"), AXI_19_BID("AXI_19_BID"), AXI_19_BRESP("AXI_19_BRESP"), AXI_19_BVALID("AXI_19_BVALID"), apb_complete_0("apb_complete_0"), apb_complete_1("apb_complete_1"), DRAM_0_STAT_CATTRIP("DRAM_0_STAT_CATTRIP"), DRAM_0_STAT_TEMP("DRAM_0_STAT_TEMP"), DRAM_1_STAT_CATTRIP("DRAM_1_STAT_CATTRIP"), DRAM_1_STAT_TEMP("DRAM_1_STAT_TEMP")
{
  // initialize pins
  mp_impl->HBM_REF_CLK_0(HBM_REF_CLK_0);
  mp_impl->HBM_REF_CLK_1(HBM_REF_CLK_1);
  mp_impl->AXI_00_ACLK(AXI_00_ACLK);
  mp_impl->AXI_00_ARESET_N(AXI_00_ARESET_N);
  mp_impl->AXI_00_WDATA_PARITY(AXI_00_WDATA_PARITY);
  mp_impl->AXI_01_ACLK(AXI_01_ACLK);
  mp_impl->AXI_01_ARESET_N(AXI_01_ARESET_N);
  mp_impl->AXI_01_WDATA_PARITY(AXI_01_WDATA_PARITY);
  mp_impl->AXI_02_ACLK(AXI_02_ACLK);
  mp_impl->AXI_02_ARESET_N(AXI_02_ARESET_N);
  mp_impl->AXI_02_WDATA_PARITY(AXI_02_WDATA_PARITY);
  mp_impl->AXI_03_ACLK(AXI_03_ACLK);
  mp_impl->AXI_03_ARESET_N(AXI_03_ARESET_N);
  mp_impl->AXI_03_WDATA_PARITY(AXI_03_WDATA_PARITY);
  mp_impl->AXI_16_ACLK(AXI_16_ACLK);
  mp_impl->AXI_16_ARESET_N(AXI_16_ARESET_N);
  mp_impl->AXI_16_WDATA_PARITY(AXI_16_WDATA_PARITY);
  mp_impl->AXI_17_ACLK(AXI_17_ACLK);
  mp_impl->AXI_17_ARESET_N(AXI_17_ARESET_N);
  mp_impl->AXI_17_WDATA_PARITY(AXI_17_WDATA_PARITY);
  mp_impl->AXI_18_ACLK(AXI_18_ACLK);
  mp_impl->AXI_18_ARESET_N(AXI_18_ARESET_N);
  mp_impl->AXI_18_WDATA_PARITY(AXI_18_WDATA_PARITY);
  mp_impl->AXI_19_ACLK(AXI_19_ACLK);
  mp_impl->AXI_19_ARESET_N(AXI_19_ARESET_N);
  mp_impl->AXI_19_WDATA_PARITY(AXI_19_WDATA_PARITY);
  mp_impl->APB_0_PCLK(APB_0_PCLK);
  mp_impl->APB_0_PRESET_N(APB_0_PRESET_N);
  mp_impl->APB_1_PCLK(APB_1_PCLK);
  mp_impl->APB_1_PRESET_N(APB_1_PRESET_N);
  mp_impl->AXI_00_RDATA_PARITY(AXI_00_RDATA_PARITY);
  mp_impl->AXI_01_RDATA_PARITY(AXI_01_RDATA_PARITY);
  mp_impl->AXI_02_RDATA_PARITY(AXI_02_RDATA_PARITY);
  mp_impl->AXI_03_RDATA_PARITY(AXI_03_RDATA_PARITY);
  mp_impl->AXI_16_RDATA_PARITY(AXI_16_RDATA_PARITY);
  mp_impl->AXI_17_RDATA_PARITY(AXI_17_RDATA_PARITY);
  mp_impl->AXI_18_RDATA_PARITY(AXI_18_RDATA_PARITY);
  mp_impl->AXI_19_RDATA_PARITY(AXI_19_RDATA_PARITY);
  mp_impl->apb_complete_0(apb_complete_0);
  mp_impl->apb_complete_1(apb_complete_1);
  mp_impl->DRAM_0_STAT_CATTRIP(DRAM_0_STAT_CATTRIP);
  mp_impl->DRAM_0_STAT_TEMP(DRAM_0_STAT_TEMP);
  mp_impl->DRAM_1_STAT_CATTRIP(DRAM_1_STAT_CATTRIP);
  mp_impl->DRAM_1_STAT_TEMP(DRAM_1_STAT_TEMP);

  // initialize transactors
  mp_SAXI_00_transactor = NULL;
  mp_AXI_00_ARLEN_converter = NULL;
  mp_AXI_00_AWLEN_converter = NULL;
  mp_SAXI_01_transactor = NULL;
  mp_AXI_01_ARLEN_converter = NULL;
  mp_AXI_01_AWLEN_converter = NULL;
  mp_SAXI_02_transactor = NULL;
  mp_AXI_02_ARLEN_converter = NULL;
  mp_AXI_02_AWLEN_converter = NULL;
  mp_SAXI_03_transactor = NULL;
  mp_AXI_03_ARLEN_converter = NULL;
  mp_AXI_03_AWLEN_converter = NULL;
  mp_SAXI_16_transactor = NULL;
  mp_AXI_16_ARLEN_converter = NULL;
  mp_AXI_16_AWLEN_converter = NULL;
  mp_SAXI_17_transactor = NULL;
  mp_AXI_17_ARLEN_converter = NULL;
  mp_AXI_17_AWLEN_converter = NULL;
  mp_SAXI_18_transactor = NULL;
  mp_AXI_18_ARLEN_converter = NULL;
  mp_AXI_18_AWLEN_converter = NULL;
  mp_SAXI_19_transactor = NULL;
  mp_AXI_19_ARLEN_converter = NULL;
  mp_AXI_19_AWLEN_converter = NULL;

  // Instantiate Socket Stubs

  // configure SAXI_00_transactor
    xsc::common_cpp::properties SAXI_00_transactor_param_props;
    SAXI_00_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_00_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_00_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_00_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_00_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_00_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_00_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_00_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_00_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_00_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_00_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_00_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_00_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_00_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_00_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_00_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_00_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_00_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_00_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_00_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_00_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_00_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_00_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_00_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_00_transactor", SAXI_00_transactor_param_props);
  mp_SAXI_00_transactor->ARADDR(AXI_00_ARADDR);
  mp_SAXI_00_transactor->ARBURST(AXI_00_ARBURST);
  mp_SAXI_00_transactor->ARID(AXI_00_ARID);
  mp_AXI_00_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_ARLEN_converter");
  mp_AXI_00_ARLEN_converter->vector_in(AXI_00_ARLEN);
  mp_AXI_00_ARLEN_converter->vector_out(m_AXI_00_ARLEN_converter_signal);
  mp_SAXI_00_transactor->ARLEN(m_AXI_00_ARLEN_converter_signal);
  mp_SAXI_00_transactor->ARREADY(AXI_00_ARREADY);
  mp_SAXI_00_transactor->ARSIZE(AXI_00_ARSIZE);
  mp_SAXI_00_transactor->ARVALID(AXI_00_ARVALID);
  mp_SAXI_00_transactor->AWADDR(AXI_00_AWADDR);
  mp_SAXI_00_transactor->AWBURST(AXI_00_AWBURST);
  mp_SAXI_00_transactor->AWID(AXI_00_AWID);
  mp_AXI_00_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_00_AWLEN_converter");
  mp_AXI_00_AWLEN_converter->vector_in(AXI_00_AWLEN);
  mp_AXI_00_AWLEN_converter->vector_out(m_AXI_00_AWLEN_converter_signal);
  mp_SAXI_00_transactor->AWLEN(m_AXI_00_AWLEN_converter_signal);
  mp_SAXI_00_transactor->AWREADY(AXI_00_AWREADY);
  mp_SAXI_00_transactor->AWSIZE(AXI_00_AWSIZE);
  mp_SAXI_00_transactor->AWVALID(AXI_00_AWVALID);
  mp_SAXI_00_transactor->BID(AXI_00_BID);
  mp_SAXI_00_transactor->BREADY(AXI_00_BREADY);
  mp_SAXI_00_transactor->BRESP(AXI_00_BRESP);
  mp_SAXI_00_transactor->BVALID(AXI_00_BVALID);
  mp_SAXI_00_transactor->RDATA(AXI_00_RDATA);
  mp_SAXI_00_transactor->RID(AXI_00_RID);
  mp_SAXI_00_transactor->RLAST(AXI_00_RLAST);
  mp_SAXI_00_transactor->RREADY(AXI_00_RREADY);
  mp_SAXI_00_transactor->RRESP(AXI_00_RRESP);
  mp_SAXI_00_transactor->RVALID(AXI_00_RVALID);
  mp_SAXI_00_transactor->WDATA(AXI_00_WDATA);
  mp_SAXI_00_transactor->WLAST(AXI_00_WLAST);
  mp_SAXI_00_transactor->WREADY(AXI_00_WREADY);
  mp_SAXI_00_transactor->WSTRB(AXI_00_WSTRB);
  mp_SAXI_00_transactor->WVALID(AXI_00_WVALID);
  mp_SAXI_00_transactor->CLK(AXI_00_ACLK);
  m_SAXI_00_transactor_rst_signal.write(1);
  mp_SAXI_00_transactor->RST(m_SAXI_00_transactor_rst_signal);
  // configure SAXI_01_transactor
    xsc::common_cpp::properties SAXI_01_transactor_param_props;
    SAXI_01_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_01_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_01_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_01_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_01_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_01_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_01_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_01_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_01_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_01_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_01_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_01_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_01_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_01_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_01_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_01_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_01_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_01_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_01_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_01_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_01_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_01_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_01_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_01_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_01_transactor", SAXI_01_transactor_param_props);
  mp_SAXI_01_transactor->ARADDR(AXI_01_ARADDR);
  mp_SAXI_01_transactor->ARBURST(AXI_01_ARBURST);
  mp_SAXI_01_transactor->ARID(AXI_01_ARID);
  mp_AXI_01_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_ARLEN_converter");
  mp_AXI_01_ARLEN_converter->vector_in(AXI_01_ARLEN);
  mp_AXI_01_ARLEN_converter->vector_out(m_AXI_01_ARLEN_converter_signal);
  mp_SAXI_01_transactor->ARLEN(m_AXI_01_ARLEN_converter_signal);
  mp_SAXI_01_transactor->ARREADY(AXI_01_ARREADY);
  mp_SAXI_01_transactor->ARSIZE(AXI_01_ARSIZE);
  mp_SAXI_01_transactor->ARVALID(AXI_01_ARVALID);
  mp_SAXI_01_transactor->AWADDR(AXI_01_AWADDR);
  mp_SAXI_01_transactor->AWBURST(AXI_01_AWBURST);
  mp_SAXI_01_transactor->AWID(AXI_01_AWID);
  mp_AXI_01_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_01_AWLEN_converter");
  mp_AXI_01_AWLEN_converter->vector_in(AXI_01_AWLEN);
  mp_AXI_01_AWLEN_converter->vector_out(m_AXI_01_AWLEN_converter_signal);
  mp_SAXI_01_transactor->AWLEN(m_AXI_01_AWLEN_converter_signal);
  mp_SAXI_01_transactor->AWREADY(AXI_01_AWREADY);
  mp_SAXI_01_transactor->AWSIZE(AXI_01_AWSIZE);
  mp_SAXI_01_transactor->AWVALID(AXI_01_AWVALID);
  mp_SAXI_01_transactor->BID(AXI_01_BID);
  mp_SAXI_01_transactor->BREADY(AXI_01_BREADY);
  mp_SAXI_01_transactor->BRESP(AXI_01_BRESP);
  mp_SAXI_01_transactor->BVALID(AXI_01_BVALID);
  mp_SAXI_01_transactor->RDATA(AXI_01_RDATA);
  mp_SAXI_01_transactor->RID(AXI_01_RID);
  mp_SAXI_01_transactor->RLAST(AXI_01_RLAST);
  mp_SAXI_01_transactor->RREADY(AXI_01_RREADY);
  mp_SAXI_01_transactor->RRESP(AXI_01_RRESP);
  mp_SAXI_01_transactor->RVALID(AXI_01_RVALID);
  mp_SAXI_01_transactor->WDATA(AXI_01_WDATA);
  mp_SAXI_01_transactor->WLAST(AXI_01_WLAST);
  mp_SAXI_01_transactor->WREADY(AXI_01_WREADY);
  mp_SAXI_01_transactor->WSTRB(AXI_01_WSTRB);
  mp_SAXI_01_transactor->WVALID(AXI_01_WVALID);
  mp_SAXI_01_transactor->CLK(AXI_01_ACLK);
  m_SAXI_01_transactor_rst_signal.write(1);
  mp_SAXI_01_transactor->RST(m_SAXI_01_transactor_rst_signal);
  // configure SAXI_02_transactor
    xsc::common_cpp::properties SAXI_02_transactor_param_props;
    SAXI_02_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_02_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_02_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_02_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_02_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_02_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_02_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_02_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_02_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_02_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_02_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_02_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_02_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_02_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_02_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_02_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_02_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_02_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_02_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_02_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_02_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_02_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_02_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_02_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_02_transactor", SAXI_02_transactor_param_props);
  mp_SAXI_02_transactor->ARADDR(AXI_02_ARADDR);
  mp_SAXI_02_transactor->ARBURST(AXI_02_ARBURST);
  mp_SAXI_02_transactor->ARID(AXI_02_ARID);
  mp_AXI_02_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_ARLEN_converter");
  mp_AXI_02_ARLEN_converter->vector_in(AXI_02_ARLEN);
  mp_AXI_02_ARLEN_converter->vector_out(m_AXI_02_ARLEN_converter_signal);
  mp_SAXI_02_transactor->ARLEN(m_AXI_02_ARLEN_converter_signal);
  mp_SAXI_02_transactor->ARREADY(AXI_02_ARREADY);
  mp_SAXI_02_transactor->ARSIZE(AXI_02_ARSIZE);
  mp_SAXI_02_transactor->ARVALID(AXI_02_ARVALID);
  mp_SAXI_02_transactor->AWADDR(AXI_02_AWADDR);
  mp_SAXI_02_transactor->AWBURST(AXI_02_AWBURST);
  mp_SAXI_02_transactor->AWID(AXI_02_AWID);
  mp_AXI_02_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_02_AWLEN_converter");
  mp_AXI_02_AWLEN_converter->vector_in(AXI_02_AWLEN);
  mp_AXI_02_AWLEN_converter->vector_out(m_AXI_02_AWLEN_converter_signal);
  mp_SAXI_02_transactor->AWLEN(m_AXI_02_AWLEN_converter_signal);
  mp_SAXI_02_transactor->AWREADY(AXI_02_AWREADY);
  mp_SAXI_02_transactor->AWSIZE(AXI_02_AWSIZE);
  mp_SAXI_02_transactor->AWVALID(AXI_02_AWVALID);
  mp_SAXI_02_transactor->BID(AXI_02_BID);
  mp_SAXI_02_transactor->BREADY(AXI_02_BREADY);
  mp_SAXI_02_transactor->BRESP(AXI_02_BRESP);
  mp_SAXI_02_transactor->BVALID(AXI_02_BVALID);
  mp_SAXI_02_transactor->RDATA(AXI_02_RDATA);
  mp_SAXI_02_transactor->RID(AXI_02_RID);
  mp_SAXI_02_transactor->RLAST(AXI_02_RLAST);
  mp_SAXI_02_transactor->RREADY(AXI_02_RREADY);
  mp_SAXI_02_transactor->RRESP(AXI_02_RRESP);
  mp_SAXI_02_transactor->RVALID(AXI_02_RVALID);
  mp_SAXI_02_transactor->WDATA(AXI_02_WDATA);
  mp_SAXI_02_transactor->WLAST(AXI_02_WLAST);
  mp_SAXI_02_transactor->WREADY(AXI_02_WREADY);
  mp_SAXI_02_transactor->WSTRB(AXI_02_WSTRB);
  mp_SAXI_02_transactor->WVALID(AXI_02_WVALID);
  mp_SAXI_02_transactor->CLK(AXI_02_ACLK);
  m_SAXI_02_transactor_rst_signal.write(1);
  mp_SAXI_02_transactor->RST(m_SAXI_02_transactor_rst_signal);
  // configure SAXI_03_transactor
    xsc::common_cpp::properties SAXI_03_transactor_param_props;
    SAXI_03_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_03_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_03_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_03_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_03_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_03_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_03_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_03_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_03_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_03_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_03_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_03_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_03_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_03_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_03_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_03_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_03_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_03_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_03_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_03_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_03_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_03_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_03_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_03_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_03_transactor", SAXI_03_transactor_param_props);
  mp_SAXI_03_transactor->ARADDR(AXI_03_ARADDR);
  mp_SAXI_03_transactor->ARBURST(AXI_03_ARBURST);
  mp_SAXI_03_transactor->ARID(AXI_03_ARID);
  mp_AXI_03_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_ARLEN_converter");
  mp_AXI_03_ARLEN_converter->vector_in(AXI_03_ARLEN);
  mp_AXI_03_ARLEN_converter->vector_out(m_AXI_03_ARLEN_converter_signal);
  mp_SAXI_03_transactor->ARLEN(m_AXI_03_ARLEN_converter_signal);
  mp_SAXI_03_transactor->ARREADY(AXI_03_ARREADY);
  mp_SAXI_03_transactor->ARSIZE(AXI_03_ARSIZE);
  mp_SAXI_03_transactor->ARVALID(AXI_03_ARVALID);
  mp_SAXI_03_transactor->AWADDR(AXI_03_AWADDR);
  mp_SAXI_03_transactor->AWBURST(AXI_03_AWBURST);
  mp_SAXI_03_transactor->AWID(AXI_03_AWID);
  mp_AXI_03_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_03_AWLEN_converter");
  mp_AXI_03_AWLEN_converter->vector_in(AXI_03_AWLEN);
  mp_AXI_03_AWLEN_converter->vector_out(m_AXI_03_AWLEN_converter_signal);
  mp_SAXI_03_transactor->AWLEN(m_AXI_03_AWLEN_converter_signal);
  mp_SAXI_03_transactor->AWREADY(AXI_03_AWREADY);
  mp_SAXI_03_transactor->AWSIZE(AXI_03_AWSIZE);
  mp_SAXI_03_transactor->AWVALID(AXI_03_AWVALID);
  mp_SAXI_03_transactor->BID(AXI_03_BID);
  mp_SAXI_03_transactor->BREADY(AXI_03_BREADY);
  mp_SAXI_03_transactor->BRESP(AXI_03_BRESP);
  mp_SAXI_03_transactor->BVALID(AXI_03_BVALID);
  mp_SAXI_03_transactor->RDATA(AXI_03_RDATA);
  mp_SAXI_03_transactor->RID(AXI_03_RID);
  mp_SAXI_03_transactor->RLAST(AXI_03_RLAST);
  mp_SAXI_03_transactor->RREADY(AXI_03_RREADY);
  mp_SAXI_03_transactor->RRESP(AXI_03_RRESP);
  mp_SAXI_03_transactor->RVALID(AXI_03_RVALID);
  mp_SAXI_03_transactor->WDATA(AXI_03_WDATA);
  mp_SAXI_03_transactor->WLAST(AXI_03_WLAST);
  mp_SAXI_03_transactor->WREADY(AXI_03_WREADY);
  mp_SAXI_03_transactor->WSTRB(AXI_03_WSTRB);
  mp_SAXI_03_transactor->WVALID(AXI_03_WVALID);
  mp_SAXI_03_transactor->CLK(AXI_03_ACLK);
  m_SAXI_03_transactor_rst_signal.write(1);
  mp_SAXI_03_transactor->RST(m_SAXI_03_transactor_rst_signal);
  // configure SAXI_16_transactor
    xsc::common_cpp::properties SAXI_16_transactor_param_props;
    SAXI_16_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_16_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_16_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_16_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_16_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_16_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_16_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_16_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_16_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_16_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_16_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_16_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_16_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_16_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_16_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_16_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_16_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_16_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_16_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_16_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_16_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_16_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_16_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_16_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_16_transactor", SAXI_16_transactor_param_props);
  mp_SAXI_16_transactor->ARADDR(AXI_16_ARADDR);
  mp_SAXI_16_transactor->ARBURST(AXI_16_ARBURST);
  mp_SAXI_16_transactor->ARID(AXI_16_ARID);
  mp_AXI_16_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_ARLEN_converter");
  mp_AXI_16_ARLEN_converter->vector_in(AXI_16_ARLEN);
  mp_AXI_16_ARLEN_converter->vector_out(m_AXI_16_ARLEN_converter_signal);
  mp_SAXI_16_transactor->ARLEN(m_AXI_16_ARLEN_converter_signal);
  mp_SAXI_16_transactor->ARREADY(AXI_16_ARREADY);
  mp_SAXI_16_transactor->ARSIZE(AXI_16_ARSIZE);
  mp_SAXI_16_transactor->ARVALID(AXI_16_ARVALID);
  mp_SAXI_16_transactor->AWADDR(AXI_16_AWADDR);
  mp_SAXI_16_transactor->AWBURST(AXI_16_AWBURST);
  mp_SAXI_16_transactor->AWID(AXI_16_AWID);
  mp_AXI_16_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_16_AWLEN_converter");
  mp_AXI_16_AWLEN_converter->vector_in(AXI_16_AWLEN);
  mp_AXI_16_AWLEN_converter->vector_out(m_AXI_16_AWLEN_converter_signal);
  mp_SAXI_16_transactor->AWLEN(m_AXI_16_AWLEN_converter_signal);
  mp_SAXI_16_transactor->AWREADY(AXI_16_AWREADY);
  mp_SAXI_16_transactor->AWSIZE(AXI_16_AWSIZE);
  mp_SAXI_16_transactor->AWVALID(AXI_16_AWVALID);
  mp_SAXI_16_transactor->BID(AXI_16_BID);
  mp_SAXI_16_transactor->BREADY(AXI_16_BREADY);
  mp_SAXI_16_transactor->BRESP(AXI_16_BRESP);
  mp_SAXI_16_transactor->BVALID(AXI_16_BVALID);
  mp_SAXI_16_transactor->RDATA(AXI_16_RDATA);
  mp_SAXI_16_transactor->RID(AXI_16_RID);
  mp_SAXI_16_transactor->RLAST(AXI_16_RLAST);
  mp_SAXI_16_transactor->RREADY(AXI_16_RREADY);
  mp_SAXI_16_transactor->RRESP(AXI_16_RRESP);
  mp_SAXI_16_transactor->RVALID(AXI_16_RVALID);
  mp_SAXI_16_transactor->WDATA(AXI_16_WDATA);
  mp_SAXI_16_transactor->WLAST(AXI_16_WLAST);
  mp_SAXI_16_transactor->WREADY(AXI_16_WREADY);
  mp_SAXI_16_transactor->WSTRB(AXI_16_WSTRB);
  mp_SAXI_16_transactor->WVALID(AXI_16_WVALID);
  mp_SAXI_16_transactor->CLK(AXI_16_ACLK);
  m_SAXI_16_transactor_rst_signal.write(1);
  mp_SAXI_16_transactor->RST(m_SAXI_16_transactor_rst_signal);
  // configure SAXI_17_transactor
    xsc::common_cpp::properties SAXI_17_transactor_param_props;
    SAXI_17_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_17_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_17_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_17_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_17_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_17_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_17_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_17_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_17_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_17_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_17_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_17_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_17_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_17_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_17_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_17_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_17_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_17_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_17_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_17_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_17_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_17_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_17_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_17_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_17_transactor", SAXI_17_transactor_param_props);
  mp_SAXI_17_transactor->ARADDR(AXI_17_ARADDR);
  mp_SAXI_17_transactor->ARBURST(AXI_17_ARBURST);
  mp_SAXI_17_transactor->ARID(AXI_17_ARID);
  mp_AXI_17_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_ARLEN_converter");
  mp_AXI_17_ARLEN_converter->vector_in(AXI_17_ARLEN);
  mp_AXI_17_ARLEN_converter->vector_out(m_AXI_17_ARLEN_converter_signal);
  mp_SAXI_17_transactor->ARLEN(m_AXI_17_ARLEN_converter_signal);
  mp_SAXI_17_transactor->ARREADY(AXI_17_ARREADY);
  mp_SAXI_17_transactor->ARSIZE(AXI_17_ARSIZE);
  mp_SAXI_17_transactor->ARVALID(AXI_17_ARVALID);
  mp_SAXI_17_transactor->AWADDR(AXI_17_AWADDR);
  mp_SAXI_17_transactor->AWBURST(AXI_17_AWBURST);
  mp_SAXI_17_transactor->AWID(AXI_17_AWID);
  mp_AXI_17_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_17_AWLEN_converter");
  mp_AXI_17_AWLEN_converter->vector_in(AXI_17_AWLEN);
  mp_AXI_17_AWLEN_converter->vector_out(m_AXI_17_AWLEN_converter_signal);
  mp_SAXI_17_transactor->AWLEN(m_AXI_17_AWLEN_converter_signal);
  mp_SAXI_17_transactor->AWREADY(AXI_17_AWREADY);
  mp_SAXI_17_transactor->AWSIZE(AXI_17_AWSIZE);
  mp_SAXI_17_transactor->AWVALID(AXI_17_AWVALID);
  mp_SAXI_17_transactor->BID(AXI_17_BID);
  mp_SAXI_17_transactor->BREADY(AXI_17_BREADY);
  mp_SAXI_17_transactor->BRESP(AXI_17_BRESP);
  mp_SAXI_17_transactor->BVALID(AXI_17_BVALID);
  mp_SAXI_17_transactor->RDATA(AXI_17_RDATA);
  mp_SAXI_17_transactor->RID(AXI_17_RID);
  mp_SAXI_17_transactor->RLAST(AXI_17_RLAST);
  mp_SAXI_17_transactor->RREADY(AXI_17_RREADY);
  mp_SAXI_17_transactor->RRESP(AXI_17_RRESP);
  mp_SAXI_17_transactor->RVALID(AXI_17_RVALID);
  mp_SAXI_17_transactor->WDATA(AXI_17_WDATA);
  mp_SAXI_17_transactor->WLAST(AXI_17_WLAST);
  mp_SAXI_17_transactor->WREADY(AXI_17_WREADY);
  mp_SAXI_17_transactor->WSTRB(AXI_17_WSTRB);
  mp_SAXI_17_transactor->WVALID(AXI_17_WVALID);
  mp_SAXI_17_transactor->CLK(AXI_17_ACLK);
  m_SAXI_17_transactor_rst_signal.write(1);
  mp_SAXI_17_transactor->RST(m_SAXI_17_transactor_rst_signal);
  // configure SAXI_18_transactor
    xsc::common_cpp::properties SAXI_18_transactor_param_props;
    SAXI_18_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_18_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_18_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_18_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_18_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_18_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_18_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_18_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_18_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_18_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_18_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_18_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_18_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_18_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_18_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_18_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_18_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_18_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_18_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_18_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_18_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_18_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_18_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_18_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_18_transactor", SAXI_18_transactor_param_props);
  mp_SAXI_18_transactor->ARADDR(AXI_18_ARADDR);
  mp_SAXI_18_transactor->ARBURST(AXI_18_ARBURST);
  mp_SAXI_18_transactor->ARID(AXI_18_ARID);
  mp_AXI_18_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_ARLEN_converter");
  mp_AXI_18_ARLEN_converter->vector_in(AXI_18_ARLEN);
  mp_AXI_18_ARLEN_converter->vector_out(m_AXI_18_ARLEN_converter_signal);
  mp_SAXI_18_transactor->ARLEN(m_AXI_18_ARLEN_converter_signal);
  mp_SAXI_18_transactor->ARREADY(AXI_18_ARREADY);
  mp_SAXI_18_transactor->ARSIZE(AXI_18_ARSIZE);
  mp_SAXI_18_transactor->ARVALID(AXI_18_ARVALID);
  mp_SAXI_18_transactor->AWADDR(AXI_18_AWADDR);
  mp_SAXI_18_transactor->AWBURST(AXI_18_AWBURST);
  mp_SAXI_18_transactor->AWID(AXI_18_AWID);
  mp_AXI_18_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_18_AWLEN_converter");
  mp_AXI_18_AWLEN_converter->vector_in(AXI_18_AWLEN);
  mp_AXI_18_AWLEN_converter->vector_out(m_AXI_18_AWLEN_converter_signal);
  mp_SAXI_18_transactor->AWLEN(m_AXI_18_AWLEN_converter_signal);
  mp_SAXI_18_transactor->AWREADY(AXI_18_AWREADY);
  mp_SAXI_18_transactor->AWSIZE(AXI_18_AWSIZE);
  mp_SAXI_18_transactor->AWVALID(AXI_18_AWVALID);
  mp_SAXI_18_transactor->BID(AXI_18_BID);
  mp_SAXI_18_transactor->BREADY(AXI_18_BREADY);
  mp_SAXI_18_transactor->BRESP(AXI_18_BRESP);
  mp_SAXI_18_transactor->BVALID(AXI_18_BVALID);
  mp_SAXI_18_transactor->RDATA(AXI_18_RDATA);
  mp_SAXI_18_transactor->RID(AXI_18_RID);
  mp_SAXI_18_transactor->RLAST(AXI_18_RLAST);
  mp_SAXI_18_transactor->RREADY(AXI_18_RREADY);
  mp_SAXI_18_transactor->RRESP(AXI_18_RRESP);
  mp_SAXI_18_transactor->RVALID(AXI_18_RVALID);
  mp_SAXI_18_transactor->WDATA(AXI_18_WDATA);
  mp_SAXI_18_transactor->WLAST(AXI_18_WLAST);
  mp_SAXI_18_transactor->WREADY(AXI_18_WREADY);
  mp_SAXI_18_transactor->WSTRB(AXI_18_WSTRB);
  mp_SAXI_18_transactor->WVALID(AXI_18_WVALID);
  mp_SAXI_18_transactor->CLK(AXI_18_ACLK);
  m_SAXI_18_transactor_rst_signal.write(1);
  mp_SAXI_18_transactor->RST(m_SAXI_18_transactor_rst_signal);
  // configure SAXI_19_transactor
    xsc::common_cpp::properties SAXI_19_transactor_param_props;
    SAXI_19_transactor_param_props.addLong("DATA_WIDTH", "256");
    SAXI_19_transactor_param_props.addLong("FREQ_HZ", "250000000");
    SAXI_19_transactor_param_props.addLong("ID_WIDTH", "6");
    SAXI_19_transactor_param_props.addLong("ADDR_WIDTH", "33");
    SAXI_19_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("RUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("BUSER_WIDTH", "0");
    SAXI_19_transactor_param_props.addLong("HAS_BURST", "1");
    SAXI_19_transactor_param_props.addLong("HAS_LOCK", "0");
    SAXI_19_transactor_param_props.addLong("HAS_PROT", "0");
    SAXI_19_transactor_param_props.addLong("HAS_CACHE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_QOS", "0");
    SAXI_19_transactor_param_props.addLong("HAS_REGION", "0");
    SAXI_19_transactor_param_props.addLong("HAS_WSTRB", "1");
    SAXI_19_transactor_param_props.addLong("HAS_BRESP", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RRESP", "1");
    SAXI_19_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "1");
    SAXI_19_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    SAXI_19_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    SAXI_19_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    SAXI_19_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    SAXI_19_transactor_param_props.addLong("HAS_SIZE", "1");
    SAXI_19_transactor_param_props.addLong("HAS_RESET", "0");
    SAXI_19_transactor_param_props.addFloat("PHASE", "0.0");
    SAXI_19_transactor_param_props.addString("PROTOCOL", "AXI3");
    SAXI_19_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    SAXI_19_transactor_param_props.addString("CLK_DOMAIN", "u280_xdma_xdma_0_1_axi_aclk");

    mp_SAXI_19_transactor = new xtlm::xaximm_pin2xtlm_t<256,33,6,1,1,1,1,1>("SAXI_19_transactor", SAXI_19_transactor_param_props);
  mp_SAXI_19_transactor->ARADDR(AXI_19_ARADDR);
  mp_SAXI_19_transactor->ARBURST(AXI_19_ARBURST);
  mp_SAXI_19_transactor->ARID(AXI_19_ARID);
  mp_AXI_19_ARLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_ARLEN_converter");
  mp_AXI_19_ARLEN_converter->vector_in(AXI_19_ARLEN);
  mp_AXI_19_ARLEN_converter->vector_out(m_AXI_19_ARLEN_converter_signal);
  mp_SAXI_19_transactor->ARLEN(m_AXI_19_ARLEN_converter_signal);
  mp_SAXI_19_transactor->ARREADY(AXI_19_ARREADY);
  mp_SAXI_19_transactor->ARSIZE(AXI_19_ARSIZE);
  mp_SAXI_19_transactor->ARVALID(AXI_19_ARVALID);
  mp_SAXI_19_transactor->AWADDR(AXI_19_AWADDR);
  mp_SAXI_19_transactor->AWBURST(AXI_19_AWBURST);
  mp_SAXI_19_transactor->AWID(AXI_19_AWID);
  mp_AXI_19_AWLEN_converter = new xsc::common::vector2vector_converter<4,8>("AXI_19_AWLEN_converter");
  mp_AXI_19_AWLEN_converter->vector_in(AXI_19_AWLEN);
  mp_AXI_19_AWLEN_converter->vector_out(m_AXI_19_AWLEN_converter_signal);
  mp_SAXI_19_transactor->AWLEN(m_AXI_19_AWLEN_converter_signal);
  mp_SAXI_19_transactor->AWREADY(AXI_19_AWREADY);
  mp_SAXI_19_transactor->AWSIZE(AXI_19_AWSIZE);
  mp_SAXI_19_transactor->AWVALID(AXI_19_AWVALID);
  mp_SAXI_19_transactor->BID(AXI_19_BID);
  mp_SAXI_19_transactor->BREADY(AXI_19_BREADY);
  mp_SAXI_19_transactor->BRESP(AXI_19_BRESP);
  mp_SAXI_19_transactor->BVALID(AXI_19_BVALID);
  mp_SAXI_19_transactor->RDATA(AXI_19_RDATA);
  mp_SAXI_19_transactor->RID(AXI_19_RID);
  mp_SAXI_19_transactor->RLAST(AXI_19_RLAST);
  mp_SAXI_19_transactor->RREADY(AXI_19_RREADY);
  mp_SAXI_19_transactor->RRESP(AXI_19_RRESP);
  mp_SAXI_19_transactor->RVALID(AXI_19_RVALID);
  mp_SAXI_19_transactor->WDATA(AXI_19_WDATA);
  mp_SAXI_19_transactor->WLAST(AXI_19_WLAST);
  mp_SAXI_19_transactor->WREADY(AXI_19_WREADY);
  mp_SAXI_19_transactor->WSTRB(AXI_19_WSTRB);
  mp_SAXI_19_transactor->WVALID(AXI_19_WVALID);
  mp_SAXI_19_transactor->CLK(AXI_19_ACLK);
  m_SAXI_19_transactor_rst_signal.write(1);
  mp_SAXI_19_transactor->RST(m_SAXI_19_transactor_rst_signal);

  // initialize transactors stubs
  SAXI_00_transactor_target_wr_socket_stub = nullptr;
  SAXI_00_transactor_target_rd_socket_stub = nullptr;
  SAXI_01_transactor_target_wr_socket_stub = nullptr;
  SAXI_01_transactor_target_rd_socket_stub = nullptr;
  SAXI_02_transactor_target_wr_socket_stub = nullptr;
  SAXI_02_transactor_target_rd_socket_stub = nullptr;
  SAXI_03_transactor_target_wr_socket_stub = nullptr;
  SAXI_03_transactor_target_rd_socket_stub = nullptr;
  SAXI_16_transactor_target_wr_socket_stub = nullptr;
  SAXI_16_transactor_target_rd_socket_stub = nullptr;
  SAXI_17_transactor_target_wr_socket_stub = nullptr;
  SAXI_17_transactor_target_rd_socket_stub = nullptr;
  SAXI_18_transactor_target_wr_socket_stub = nullptr;
  SAXI_18_transactor_target_rd_socket_stub = nullptr;
  SAXI_19_transactor_target_wr_socket_stub = nullptr;
  SAXI_19_transactor_target_rd_socket_stub = nullptr;

}

void u280_xdma_hbm_0_0::before_end_of_elaboration()
{
  // configure 'SAXI_00' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_00_TLM_MODE") != 1)
  {
    mp_impl->SAXI_00_rd_socket->bind(*(mp_SAXI_00_transactor->rd_socket));
    mp_impl->SAXI_00_wr_socket->bind(*(mp_SAXI_00_transactor->wr_socket));
  
  }
  else
  {
    SAXI_00_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_00_transactor_target_wr_socket_stub->bind(*(mp_SAXI_00_transactor->wr_socket));
    SAXI_00_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_00_transactor_target_rd_socket_stub->bind(*(mp_SAXI_00_transactor->rd_socket));
    mp_SAXI_00_transactor->disable_transactor();
  }

  // configure 'SAXI_01' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_01_TLM_MODE") != 1)
  {
    mp_impl->SAXI_01_rd_socket->bind(*(mp_SAXI_01_transactor->rd_socket));
    mp_impl->SAXI_01_wr_socket->bind(*(mp_SAXI_01_transactor->wr_socket));
  
  }
  else
  {
    SAXI_01_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_01_transactor_target_wr_socket_stub->bind(*(mp_SAXI_01_transactor->wr_socket));
    SAXI_01_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_01_transactor_target_rd_socket_stub->bind(*(mp_SAXI_01_transactor->rd_socket));
    mp_SAXI_01_transactor->disable_transactor();
  }

  // configure 'SAXI_02' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_02_TLM_MODE") != 1)
  {
    mp_impl->SAXI_02_rd_socket->bind(*(mp_SAXI_02_transactor->rd_socket));
    mp_impl->SAXI_02_wr_socket->bind(*(mp_SAXI_02_transactor->wr_socket));
  
  }
  else
  {
    SAXI_02_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_02_transactor_target_wr_socket_stub->bind(*(mp_SAXI_02_transactor->wr_socket));
    SAXI_02_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_02_transactor_target_rd_socket_stub->bind(*(mp_SAXI_02_transactor->rd_socket));
    mp_SAXI_02_transactor->disable_transactor();
  }

  // configure 'SAXI_03' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_03_TLM_MODE") != 1)
  {
    mp_impl->SAXI_03_rd_socket->bind(*(mp_SAXI_03_transactor->rd_socket));
    mp_impl->SAXI_03_wr_socket->bind(*(mp_SAXI_03_transactor->wr_socket));
  
  }
  else
  {
    SAXI_03_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_03_transactor_target_wr_socket_stub->bind(*(mp_SAXI_03_transactor->wr_socket));
    SAXI_03_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_03_transactor_target_rd_socket_stub->bind(*(mp_SAXI_03_transactor->rd_socket));
    mp_SAXI_03_transactor->disable_transactor();
  }

  // configure 'SAXI_16' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_16_TLM_MODE") != 1)
  {
    mp_impl->SAXI_16_rd_socket->bind(*(mp_SAXI_16_transactor->rd_socket));
    mp_impl->SAXI_16_wr_socket->bind(*(mp_SAXI_16_transactor->wr_socket));
  
  }
  else
  {
    SAXI_16_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_16_transactor_target_wr_socket_stub->bind(*(mp_SAXI_16_transactor->wr_socket));
    SAXI_16_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_16_transactor_target_rd_socket_stub->bind(*(mp_SAXI_16_transactor->rd_socket));
    mp_SAXI_16_transactor->disable_transactor();
  }

  // configure 'SAXI_17' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_17_TLM_MODE") != 1)
  {
    mp_impl->SAXI_17_rd_socket->bind(*(mp_SAXI_17_transactor->rd_socket));
    mp_impl->SAXI_17_wr_socket->bind(*(mp_SAXI_17_transactor->wr_socket));
  
  }
  else
  {
    SAXI_17_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_17_transactor_target_wr_socket_stub->bind(*(mp_SAXI_17_transactor->wr_socket));
    SAXI_17_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_17_transactor_target_rd_socket_stub->bind(*(mp_SAXI_17_transactor->rd_socket));
    mp_SAXI_17_transactor->disable_transactor();
  }

  // configure 'SAXI_18' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_18_TLM_MODE") != 1)
  {
    mp_impl->SAXI_18_rd_socket->bind(*(mp_SAXI_18_transactor->rd_socket));
    mp_impl->SAXI_18_wr_socket->bind(*(mp_SAXI_18_transactor->wr_socket));
  
  }
  else
  {
    SAXI_18_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_18_transactor_target_wr_socket_stub->bind(*(mp_SAXI_18_transactor->wr_socket));
    SAXI_18_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_18_transactor_target_rd_socket_stub->bind(*(mp_SAXI_18_transactor->rd_socket));
    mp_SAXI_18_transactor->disable_transactor();
  }

  // configure 'SAXI_19' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("u280_xdma_hbm_0_0", "SAXI_19_TLM_MODE") != 1)
  {
    mp_impl->SAXI_19_rd_socket->bind(*(mp_SAXI_19_transactor->rd_socket));
    mp_impl->SAXI_19_wr_socket->bind(*(mp_SAXI_19_transactor->wr_socket));
  
  }
  else
  {
    SAXI_19_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    SAXI_19_transactor_target_wr_socket_stub->bind(*(mp_SAXI_19_transactor->wr_socket));
    SAXI_19_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    SAXI_19_transactor_target_rd_socket_stub->bind(*(mp_SAXI_19_transactor->rd_socket));
    mp_SAXI_19_transactor->disable_transactor();
  }

}

#endif // MTI_SYSTEMC




u280_xdma_hbm_0_0::~u280_xdma_hbm_0_0()
{
  delete mp_SAXI_00_transactor;
  delete mp_AXI_00_ARLEN_converter;
  delete mp_AXI_00_AWLEN_converter;

  delete mp_SAXI_01_transactor;
  delete mp_AXI_01_ARLEN_converter;
  delete mp_AXI_01_AWLEN_converter;

  delete mp_SAXI_02_transactor;
  delete mp_AXI_02_ARLEN_converter;
  delete mp_AXI_02_AWLEN_converter;

  delete mp_SAXI_03_transactor;
  delete mp_AXI_03_ARLEN_converter;
  delete mp_AXI_03_AWLEN_converter;

  delete mp_SAXI_16_transactor;
  delete mp_AXI_16_ARLEN_converter;
  delete mp_AXI_16_AWLEN_converter;

  delete mp_SAXI_17_transactor;
  delete mp_AXI_17_ARLEN_converter;
  delete mp_AXI_17_AWLEN_converter;

  delete mp_SAXI_18_transactor;
  delete mp_AXI_18_ARLEN_converter;
  delete mp_AXI_18_AWLEN_converter;

  delete mp_SAXI_19_transactor;
  delete mp_AXI_19_ARLEN_converter;
  delete mp_AXI_19_AWLEN_converter;

}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(u280_xdma_hbm_0_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(u280_xdma_hbm_0_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(u280_xdma_hbm_0_0);
SC_REGISTER_BV(256);
#endif

