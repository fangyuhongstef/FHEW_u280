//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2022.2 (lin64) Build 3671981 Fri Oct 14 04:59:54 MDT 2022
//Date        : Wed Sep 27 16:37:07 2023
//Host        : tic-crypto-fpga running 64-bit Ubuntu 22.04.2 LTS
//Command     : generate_target u280_xdma.bd
//Design      : u280_xdma
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "u280_xdma,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=u280_xdma,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=13,numReposBlks=13,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,da_axi4_cnt=36,da_board_cnt=7,da_bram_cntlr_cnt=3,da_clkrst_cnt=2,da_xdma_cnt=1,synth_mode=Global}" *) (* HW_HANDOFF = "u280_xdma.hwdef" *) 
module u280_xdma
   (HBM_CLK_IN_clk_n,
    HBM_CLK_IN_clk_p,
    M_AXI_ACLK_0,
    M_AXI_ARESETN_0,
    M_AXI_LITE_0_araddr,
    M_AXI_LITE_0_arprot,
    M_AXI_LITE_0_arready,
    M_AXI_LITE_0_arvalid,
    M_AXI_LITE_0_awaddr,
    M_AXI_LITE_0_awprot,
    M_AXI_LITE_0_awready,
    M_AXI_LITE_0_awvalid,
    M_AXI_LITE_0_bready,
    M_AXI_LITE_0_bresp,
    M_AXI_LITE_0_bvalid,
    M_AXI_LITE_0_rdata,
    M_AXI_LITE_0_rready,
    M_AXI_LITE_0_rresp,
    M_AXI_LITE_0_rvalid,
    M_AXI_LITE_0_wdata,
    M_AXI_LITE_0_wready,
    M_AXI_LITE_0_wstrb,
    M_AXI_LITE_0_wvalid,
    USR_AXI_M_araddr,
    USR_AXI_M_arburst,
    USR_AXI_M_arcache,
    USR_AXI_M_arid,
    USR_AXI_M_arlen,
    USR_AXI_M_arlock,
    USR_AXI_M_arprot,
    USR_AXI_M_arqos,
    USR_AXI_M_arready,
    USR_AXI_M_arsize,
    USR_AXI_M_arvalid,
    USR_AXI_M_awaddr,
    USR_AXI_M_awburst,
    USR_AXI_M_awcache,
    USR_AXI_M_awid,
    USR_AXI_M_awlen,
    USR_AXI_M_awlock,
    USR_AXI_M_awprot,
    USR_AXI_M_awqos,
    USR_AXI_M_awready,
    USR_AXI_M_awsize,
    USR_AXI_M_awvalid,
    USR_AXI_M_bid,
    USR_AXI_M_bready,
    USR_AXI_M_bresp,
    USR_AXI_M_bvalid,
    USR_AXI_M_rdata,
    USR_AXI_M_rid,
    USR_AXI_M_rlast,
    USR_AXI_M_rready,
    USR_AXI_M_rresp,
    USR_AXI_M_rvalid,
    USR_AXI_M_wdata,
    USR_AXI_M_wlast,
    USR_AXI_M_wready,
    USR_AXI_M_wstrb,
    USR_AXI_M_wvalid,
    ddr4_c0_act_n,
    ddr4_c0_adr,
    ddr4_c0_ba,
    ddr4_c0_bg,
    ddr4_c0_ck_c,
    ddr4_c0_ck_t,
    ddr4_c0_cke,
    ddr4_c0_cs_n,
    ddr4_c0_dq,
    ddr4_c0_dqs_c,
    ddr4_c0_dqs_t,
    ddr4_c0_odt,
    ddr4_c0_par,
    ddr4_c0_reset_n,
    ddr4_c0_resetn,
    ddr4_c0_sysclk_clk_n,
    ddr4_c0_sysclk_clk_p,
    ddr4_c1_act_n,
    ddr4_c1_adr,
    ddr4_c1_ba,
    ddr4_c1_bg,
    ddr4_c1_ck_c,
    ddr4_c1_ck_t,
    ddr4_c1_cke,
    ddr4_c1_cs_n,
    ddr4_c1_dq,
    ddr4_c1_dqs_c,
    ddr4_c1_dqs_t,
    ddr4_c1_odt,
    ddr4_c1_par,
    ddr4_c1_reset_n,
    ddr4_c1_resetn,
    ddr4_c1_sysclk_clk_n,
    ddr4_c1_sysclk_clk_p,
    pci_express_rxn,
    pci_express_rxp,
    pci_express_txn,
    pci_express_txp,
    pcie_perstn,
    pcie_refclk_clk_n,
    pcie_refclk_clk_p,
    user_lnk_up_0,
    usr_irq_ack_0,
    usr_irq_req_0);
  (* X_INTERFACE_INFO = "xilinx.com:interface:diff_clock:1.0 HBM_CLK_IN CLK_N" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME HBM_CLK_IN, CAN_DEBUG false, FREQ_HZ 100000000" *) input [0:0]HBM_CLK_IN_clk_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:diff_clock:1.0 HBM_CLK_IN CLK_P" *) input [0:0]HBM_CLK_IN_clk_p;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.M_AXI_ACLK_0 CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.M_AXI_ACLK_0, ASSOCIATED_BUSIF M_AXI_LITE_0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, FREQ_HZ 250000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) output M_AXI_ACLK_0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.M_AXI_ARESETN_0 RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.M_AXI_ARESETN_0, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) output M_AXI_ARESETN_0;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 ARADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME M_AXI_LITE_0, ADDR_WIDTH 32, ARUSER_WIDTH 0, AWUSER_WIDTH 0, BUSER_WIDTH 0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, DATA_WIDTH 32, FREQ_HZ 250000000, HAS_BRESP 1, HAS_BURST 0, HAS_CACHE 0, HAS_LOCK 0, HAS_PROT 1, HAS_QOS 0, HAS_REGION 0, HAS_RRESP 1, HAS_WSTRB 1, ID_WIDTH 0, INSERT_VIP 0, MAX_BURST_LENGTH 1, NUM_READ_OUTSTANDING 1, NUM_READ_THREADS 1, NUM_WRITE_OUTSTANDING 1, NUM_WRITE_THREADS 1, PHASE 0.0, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, RUSER_BITS_PER_BYTE 0, RUSER_WIDTH 0, SUPPORTS_NARROW_BURST 0, WUSER_BITS_PER_BYTE 0, WUSER_WIDTH 0" *) output [31:0]M_AXI_LITE_0_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 ARPROT" *) output [2:0]M_AXI_LITE_0_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 ARREADY" *) input M_AXI_LITE_0_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 ARVALID" *) output M_AXI_LITE_0_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 AWADDR" *) output [31:0]M_AXI_LITE_0_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 AWPROT" *) output [2:0]M_AXI_LITE_0_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 AWREADY" *) input M_AXI_LITE_0_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 AWVALID" *) output M_AXI_LITE_0_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 BREADY" *) output M_AXI_LITE_0_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 BRESP" *) input [1:0]M_AXI_LITE_0_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 BVALID" *) input M_AXI_LITE_0_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 RDATA" *) input [31:0]M_AXI_LITE_0_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 RREADY" *) output M_AXI_LITE_0_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 RRESP" *) input [1:0]M_AXI_LITE_0_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 RVALID" *) input M_AXI_LITE_0_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 WDATA" *) output [31:0]M_AXI_LITE_0_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 WREADY" *) input M_AXI_LITE_0_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 WSTRB" *) output [3:0]M_AXI_LITE_0_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 M_AXI_LITE_0 WVALID" *) output M_AXI_LITE_0_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME USR_AXI_M, ADDR_WIDTH 64, ARUSER_WIDTH 0, AWUSER_WIDTH 0, BUSER_WIDTH 0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, DATA_WIDTH 512, FREQ_HZ 250000000, HAS_BRESP 1, HAS_BURST 1, HAS_CACHE 1, HAS_LOCK 1, HAS_PROT 1, HAS_QOS 1, HAS_REGION 1, HAS_RRESP 1, HAS_WSTRB 1, ID_WIDTH 4, INSERT_VIP 0, MAX_BURST_LENGTH 256, NUM_READ_OUTSTANDING 32, NUM_READ_THREADS 1, NUM_WRITE_OUTSTANDING 16, NUM_WRITE_THREADS 1, PHASE 0.0, PROTOCOL AXI4, READ_WRITE_MODE READ_WRITE, RUSER_BITS_PER_BYTE 0, RUSER_WIDTH 0, SUPPORTS_NARROW_BURST 0, WUSER_BITS_PER_BYTE 0, WUSER_WIDTH 0" *) input [63:0]USR_AXI_M_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARBURST" *) input [1:0]USR_AXI_M_arburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARCACHE" *) input [3:0]USR_AXI_M_arcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARID" *) input [3:0]USR_AXI_M_arid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARLEN" *) input [7:0]USR_AXI_M_arlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARLOCK" *) input [0:0]USR_AXI_M_arlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARPROT" *) input [2:0]USR_AXI_M_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARQOS" *) input [3:0]USR_AXI_M_arqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARREADY" *) output USR_AXI_M_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARSIZE" *) input [2:0]USR_AXI_M_arsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M ARVALID" *) input USR_AXI_M_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWADDR" *) input [63:0]USR_AXI_M_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWBURST" *) input [1:0]USR_AXI_M_awburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWCACHE" *) input [3:0]USR_AXI_M_awcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWID" *) input [3:0]USR_AXI_M_awid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWLEN" *) input [7:0]USR_AXI_M_awlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWLOCK" *) input [0:0]USR_AXI_M_awlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWPROT" *) input [2:0]USR_AXI_M_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWQOS" *) input [3:0]USR_AXI_M_awqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWREADY" *) output USR_AXI_M_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWSIZE" *) input [2:0]USR_AXI_M_awsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M AWVALID" *) input USR_AXI_M_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M BID" *) output [3:0]USR_AXI_M_bid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M BREADY" *) input USR_AXI_M_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M BRESP" *) output [1:0]USR_AXI_M_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M BVALID" *) output USR_AXI_M_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M RDATA" *) output [511:0]USR_AXI_M_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M RID" *) output [3:0]USR_AXI_M_rid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M RLAST" *) output USR_AXI_M_rlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M RREADY" *) input USR_AXI_M_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M RRESP" *) output [1:0]USR_AXI_M_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M RVALID" *) output USR_AXI_M_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M WDATA" *) input [511:0]USR_AXI_M_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M WLAST" *) input USR_AXI_M_wlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M WREADY" *) output USR_AXI_M_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M WSTRB" *) input [63:0]USR_AXI_M_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 USR_AXI_M WVALID" *) input USR_AXI_M_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 ACT_N" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ddr4_c0, AXI_ARBITRATION_SCHEME RD_PRI_REG, BURST_LENGTH 8, CAN_DEBUG false, CAS_LATENCY 17, CAS_WRITE_LATENCY 12, CS_ENABLED true, CUSTOM_PARTS no_file_loaded, DATA_MASK_ENABLED NONE, DATA_WIDTH 72, MEMORY_PART MTA18ASF2G72PZ-2G3, MEMORY_TYPE RDIMMs, MEM_ADDR_MAP ROW_COLUMN_BANK_INTLV, SLOT Single, TIMEPERIOD_PS 833" *) output ddr4_c0_act_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 ADR" *) output [16:0]ddr4_c0_adr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 BA" *) output [1:0]ddr4_c0_ba;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 BG" *) output [1:0]ddr4_c0_bg;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 CK_C" *) output ddr4_c0_ck_c;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 CK_T" *) output ddr4_c0_ck_t;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 CKE" *) output ddr4_c0_cke;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 CS_N" *) output ddr4_c0_cs_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 DQ" *) inout [71:0]ddr4_c0_dq;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 DQS_C" *) inout [17:0]ddr4_c0_dqs_c;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 DQS_T" *) inout [17:0]ddr4_c0_dqs_t;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 ODT" *) output ddr4_c0_odt;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 PAR" *) output ddr4_c0_par;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c0 RESET_N" *) output ddr4_c0_reset_n;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.DDR4_C0_RESETN RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.DDR4_C0_RESETN, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input ddr4_c0_resetn;
  (* X_INTERFACE_INFO = "xilinx.com:interface:diff_clock:1.0 ddr4_c0_sysclk CLK_N" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ddr4_c0_sysclk, CAN_DEBUG false, FREQ_HZ 100000000" *) input ddr4_c0_sysclk_clk_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:diff_clock:1.0 ddr4_c0_sysclk CLK_P" *) input ddr4_c0_sysclk_clk_p;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 ACT_N" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ddr4_c1, AXI_ARBITRATION_SCHEME RD_PRI_REG, BURST_LENGTH 8, CAN_DEBUG false, CAS_LATENCY 17, CAS_WRITE_LATENCY 12, CS_ENABLED true, CUSTOM_PARTS no_file_loaded, DATA_MASK_ENABLED NONE, DATA_WIDTH 72, MEMORY_PART MTA18ASF2G72PZ-2G3, MEMORY_TYPE RDIMMs, MEM_ADDR_MAP ROW_COLUMN_BANK_INTLV, SLOT Single, TIMEPERIOD_PS 833" *) output ddr4_c1_act_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 ADR" *) output [16:0]ddr4_c1_adr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 BA" *) output [1:0]ddr4_c1_ba;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 BG" *) output [1:0]ddr4_c1_bg;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 CK_C" *) output ddr4_c1_ck_c;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 CK_T" *) output ddr4_c1_ck_t;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 CKE" *) output ddr4_c1_cke;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 CS_N" *) output ddr4_c1_cs_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 DQ" *) inout [71:0]ddr4_c1_dq;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 DQS_C" *) inout [17:0]ddr4_c1_dqs_c;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 DQS_T" *) inout [17:0]ddr4_c1_dqs_t;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 ODT" *) output ddr4_c1_odt;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 PAR" *) output ddr4_c1_par;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddr4:1.0 ddr4_c1 RESET_N" *) output ddr4_c1_reset_n;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.DDR4_C1_RESETN RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.DDR4_C1_RESETN, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input ddr4_c1_resetn;
  (* X_INTERFACE_INFO = "xilinx.com:interface:diff_clock:1.0 ddr4_c1_sysclk CLK_N" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ddr4_c1_sysclk, CAN_DEBUG false, FREQ_HZ 100000000" *) input ddr4_c1_sysclk_clk_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:diff_clock:1.0 ddr4_c1_sysclk CLK_P" *) input ddr4_c1_sysclk_clk_p;
  (* X_INTERFACE_INFO = "xilinx.com:interface:pcie_7x_mgt:1.0 pci_express rxn" *) input [15:0]pci_express_rxn;
  (* X_INTERFACE_INFO = "xilinx.com:interface:pcie_7x_mgt:1.0 pci_express rxp" *) input [15:0]pci_express_rxp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:pcie_7x_mgt:1.0 pci_express txn" *) output [15:0]pci_express_txn;
  (* X_INTERFACE_INFO = "xilinx.com:interface:pcie_7x_mgt:1.0 pci_express txp" *) output [15:0]pci_express_txp;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.PCIE_PERSTN RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.PCIE_PERSTN, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input pcie_perstn;
  (* X_INTERFACE_INFO = "xilinx.com:interface:diff_clock:1.0 pcie_refclk CLK_N" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME pcie_refclk, CAN_DEBUG false, FREQ_HZ 100000000" *) input pcie_refclk_clk_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:diff_clock:1.0 pcie_refclk CLK_P" *) input pcie_refclk_clk_p;
  output user_lnk_up_0;
  output [7:0]usr_irq_ack_0;
  input [7:0]usr_irq_req_0;

  wire [0:0]CLK_IN_D_0_1_CLK_N;
  wire [0:0]CLK_IN_D_0_1_CLK_P;
  wire [63:0]USR_AXI_M_1_ARADDR;
  wire [1:0]USR_AXI_M_1_ARBURST;
  wire [3:0]USR_AXI_M_1_ARCACHE;
  wire [3:0]USR_AXI_M_1_ARID;
  wire [7:0]USR_AXI_M_1_ARLEN;
  wire [0:0]USR_AXI_M_1_ARLOCK;
  wire [2:0]USR_AXI_M_1_ARPROT;
  wire [3:0]USR_AXI_M_1_ARQOS;
  wire USR_AXI_M_1_ARREADY;
  wire [2:0]USR_AXI_M_1_ARSIZE;
  wire USR_AXI_M_1_ARVALID;
  wire [63:0]USR_AXI_M_1_AWADDR;
  wire [1:0]USR_AXI_M_1_AWBURST;
  wire [3:0]USR_AXI_M_1_AWCACHE;
  wire [3:0]USR_AXI_M_1_AWID;
  wire [7:0]USR_AXI_M_1_AWLEN;
  wire [0:0]USR_AXI_M_1_AWLOCK;
  wire [2:0]USR_AXI_M_1_AWPROT;
  wire [3:0]USR_AXI_M_1_AWQOS;
  wire USR_AXI_M_1_AWREADY;
  wire [2:0]USR_AXI_M_1_AWSIZE;
  wire USR_AXI_M_1_AWVALID;
  wire [3:0]USR_AXI_M_1_BID;
  wire USR_AXI_M_1_BREADY;
  wire [1:0]USR_AXI_M_1_BRESP;
  wire USR_AXI_M_1_BVALID;
  wire [511:0]USR_AXI_M_1_RDATA;
  wire [3:0]USR_AXI_M_1_RID;
  wire USR_AXI_M_1_RLAST;
  wire USR_AXI_M_1_RREADY;
  wire [1:0]USR_AXI_M_1_RRESP;
  wire USR_AXI_M_1_RVALID;
  wire [511:0]USR_AXI_M_1_WDATA;
  wire USR_AXI_M_1_WLAST;
  wire USR_AXI_M_1_WREADY;
  wire [63:0]USR_AXI_M_1_WSTRB;
  wire USR_AXI_M_1_WVALID;
  wire [33:0]axi_smc_M00_AXI_ARADDR;
  wire [1:0]axi_smc_M00_AXI_ARBURST;
  wire [3:0]axi_smc_M00_AXI_ARCACHE;
  wire [7:0]axi_smc_M00_AXI_ARLEN;
  wire [0:0]axi_smc_M00_AXI_ARLOCK;
  wire [2:0]axi_smc_M00_AXI_ARPROT;
  wire [3:0]axi_smc_M00_AXI_ARQOS;
  wire axi_smc_M00_AXI_ARREADY;
  wire [2:0]axi_smc_M00_AXI_ARSIZE;
  wire axi_smc_M00_AXI_ARVALID;
  wire [33:0]axi_smc_M00_AXI_AWADDR;
  wire [1:0]axi_smc_M00_AXI_AWBURST;
  wire [3:0]axi_smc_M00_AXI_AWCACHE;
  wire [7:0]axi_smc_M00_AXI_AWLEN;
  wire [0:0]axi_smc_M00_AXI_AWLOCK;
  wire [2:0]axi_smc_M00_AXI_AWPROT;
  wire [3:0]axi_smc_M00_AXI_AWQOS;
  wire axi_smc_M00_AXI_AWREADY;
  wire [2:0]axi_smc_M00_AXI_AWSIZE;
  wire axi_smc_M00_AXI_AWVALID;
  wire axi_smc_M00_AXI_BREADY;
  wire [1:0]axi_smc_M00_AXI_BRESP;
  wire axi_smc_M00_AXI_BVALID;
  wire [511:0]axi_smc_M00_AXI_RDATA;
  wire axi_smc_M00_AXI_RLAST;
  wire axi_smc_M00_AXI_RREADY;
  wire [1:0]axi_smc_M00_AXI_RRESP;
  wire axi_smc_M00_AXI_RVALID;
  wire [511:0]axi_smc_M00_AXI_WDATA;
  wire axi_smc_M00_AXI_WLAST;
  wire axi_smc_M00_AXI_WREADY;
  wire [63:0]axi_smc_M00_AXI_WSTRB;
  wire axi_smc_M00_AXI_WVALID;
  wire [31:0]axi_smc_M01_AXI_ARADDR;
  wire axi_smc_M01_AXI_ARREADY;
  wire axi_smc_M01_AXI_ARVALID;
  wire [31:0]axi_smc_M01_AXI_AWADDR;
  wire axi_smc_M01_AXI_AWREADY;
  wire axi_smc_M01_AXI_AWVALID;
  wire axi_smc_M01_AXI_BREADY;
  wire [1:0]axi_smc_M01_AXI_BRESP;
  wire axi_smc_M01_AXI_BVALID;
  wire [31:0]axi_smc_M01_AXI_RDATA;
  wire axi_smc_M01_AXI_RREADY;
  wire [1:0]axi_smc_M01_AXI_RRESP;
  wire axi_smc_M01_AXI_RVALID;
  wire [31:0]axi_smc_M01_AXI_WDATA;
  wire axi_smc_M01_AXI_WREADY;
  wire axi_smc_M01_AXI_WVALID;
  wire [33:0]axi_smc_M02_AXI_ARADDR;
  wire [1:0]axi_smc_M02_AXI_ARBURST;
  wire [3:0]axi_smc_M02_AXI_ARCACHE;
  wire [7:0]axi_smc_M02_AXI_ARLEN;
  wire [0:0]axi_smc_M02_AXI_ARLOCK;
  wire [2:0]axi_smc_M02_AXI_ARPROT;
  wire [3:0]axi_smc_M02_AXI_ARQOS;
  wire axi_smc_M02_AXI_ARREADY;
  wire [2:0]axi_smc_M02_AXI_ARSIZE;
  wire axi_smc_M02_AXI_ARVALID;
  wire [33:0]axi_smc_M02_AXI_AWADDR;
  wire [1:0]axi_smc_M02_AXI_AWBURST;
  wire [3:0]axi_smc_M02_AXI_AWCACHE;
  wire [7:0]axi_smc_M02_AXI_AWLEN;
  wire [0:0]axi_smc_M02_AXI_AWLOCK;
  wire [2:0]axi_smc_M02_AXI_AWPROT;
  wire [3:0]axi_smc_M02_AXI_AWQOS;
  wire axi_smc_M02_AXI_AWREADY;
  wire [2:0]axi_smc_M02_AXI_AWSIZE;
  wire axi_smc_M02_AXI_AWVALID;
  wire axi_smc_M02_AXI_BREADY;
  wire [1:0]axi_smc_M02_AXI_BRESP;
  wire axi_smc_M02_AXI_BVALID;
  wire [511:0]axi_smc_M02_AXI_RDATA;
  wire axi_smc_M02_AXI_RLAST;
  wire axi_smc_M02_AXI_RREADY;
  wire [1:0]axi_smc_M02_AXI_RRESP;
  wire axi_smc_M02_AXI_RVALID;
  wire [511:0]axi_smc_M02_AXI_WDATA;
  wire axi_smc_M02_AXI_WLAST;
  wire axi_smc_M02_AXI_WREADY;
  wire [63:0]axi_smc_M02_AXI_WSTRB;
  wire axi_smc_M02_AXI_WVALID;
  wire [31:0]axi_smc_M03_AXI_ARADDR;
  wire axi_smc_M03_AXI_ARREADY;
  wire axi_smc_M03_AXI_ARVALID;
  wire [31:0]axi_smc_M03_AXI_AWADDR;
  wire axi_smc_M03_AXI_AWREADY;
  wire axi_smc_M03_AXI_AWVALID;
  wire axi_smc_M03_AXI_BREADY;
  wire [1:0]axi_smc_M03_AXI_BRESP;
  wire axi_smc_M03_AXI_BVALID;
  wire [31:0]axi_smc_M03_AXI_RDATA;
  wire axi_smc_M03_AXI_RREADY;
  wire [1:0]axi_smc_M03_AXI_RRESP;
  wire axi_smc_M03_AXI_RVALID;
  wire [31:0]axi_smc_M03_AXI_WDATA;
  wire axi_smc_M03_AXI_WREADY;
  wire axi_smc_M03_AXI_WVALID;
  wire [32:0]axi_smc_M04_AXI_ARADDR;
  wire [1:0]axi_smc_M04_AXI_ARBURST;
  wire [3:0]axi_smc_M04_AXI_ARLEN;
  wire axi_smc_M04_AXI_ARREADY;
  wire [2:0]axi_smc_M04_AXI_ARSIZE;
  wire axi_smc_M04_AXI_ARVALID;
  wire [32:0]axi_smc_M04_AXI_AWADDR;
  wire [1:0]axi_smc_M04_AXI_AWBURST;
  wire [3:0]axi_smc_M04_AXI_AWLEN;
  wire axi_smc_M04_AXI_AWREADY;
  wire [2:0]axi_smc_M04_AXI_AWSIZE;
  wire axi_smc_M04_AXI_AWVALID;
  wire axi_smc_M04_AXI_BREADY;
  wire [1:0]axi_smc_M04_AXI_BRESP;
  wire axi_smc_M04_AXI_BVALID;
  wire [255:0]axi_smc_M04_AXI_RDATA;
  wire axi_smc_M04_AXI_RLAST;
  wire axi_smc_M04_AXI_RREADY;
  wire [1:0]axi_smc_M04_AXI_RRESP;
  wire axi_smc_M04_AXI_RVALID;
  wire [255:0]axi_smc_M04_AXI_WDATA;
  wire axi_smc_M04_AXI_WLAST;
  wire axi_smc_M04_AXI_WREADY;
  wire [31:0]axi_smc_M04_AXI_WSTRB;
  wire axi_smc_M04_AXI_WVALID;
  wire [32:0]axi_smc_M05_AXI_ARADDR;
  wire [1:0]axi_smc_M05_AXI_ARBURST;
  wire [3:0]axi_smc_M05_AXI_ARLEN;
  wire axi_smc_M05_AXI_ARREADY;
  wire [2:0]axi_smc_M05_AXI_ARSIZE;
  wire axi_smc_M05_AXI_ARVALID;
  wire [32:0]axi_smc_M05_AXI_AWADDR;
  wire [1:0]axi_smc_M05_AXI_AWBURST;
  wire [3:0]axi_smc_M05_AXI_AWLEN;
  wire axi_smc_M05_AXI_AWREADY;
  wire [2:0]axi_smc_M05_AXI_AWSIZE;
  wire axi_smc_M05_AXI_AWVALID;
  wire axi_smc_M05_AXI_BREADY;
  wire [1:0]axi_smc_M05_AXI_BRESP;
  wire axi_smc_M05_AXI_BVALID;
  wire [255:0]axi_smc_M05_AXI_RDATA;
  wire axi_smc_M05_AXI_RLAST;
  wire axi_smc_M05_AXI_RREADY;
  wire [1:0]axi_smc_M05_AXI_RRESP;
  wire axi_smc_M05_AXI_RVALID;
  wire [255:0]axi_smc_M05_AXI_WDATA;
  wire axi_smc_M05_AXI_WLAST;
  wire axi_smc_M05_AXI_WREADY;
  wire [31:0]axi_smc_M05_AXI_WSTRB;
  wire axi_smc_M05_AXI_WVALID;
  wire [32:0]axi_smc_M06_AXI_ARADDR;
  wire [1:0]axi_smc_M06_AXI_ARBURST;
  wire [3:0]axi_smc_M06_AXI_ARLEN;
  wire axi_smc_M06_AXI_ARREADY;
  wire [2:0]axi_smc_M06_AXI_ARSIZE;
  wire axi_smc_M06_AXI_ARVALID;
  wire [32:0]axi_smc_M06_AXI_AWADDR;
  wire [1:0]axi_smc_M06_AXI_AWBURST;
  wire [3:0]axi_smc_M06_AXI_AWLEN;
  wire axi_smc_M06_AXI_AWREADY;
  wire [2:0]axi_smc_M06_AXI_AWSIZE;
  wire axi_smc_M06_AXI_AWVALID;
  wire axi_smc_M06_AXI_BREADY;
  wire [1:0]axi_smc_M06_AXI_BRESP;
  wire axi_smc_M06_AXI_BVALID;
  wire [255:0]axi_smc_M06_AXI_RDATA;
  wire axi_smc_M06_AXI_RLAST;
  wire axi_smc_M06_AXI_RREADY;
  wire [1:0]axi_smc_M06_AXI_RRESP;
  wire axi_smc_M06_AXI_RVALID;
  wire [255:0]axi_smc_M06_AXI_WDATA;
  wire axi_smc_M06_AXI_WLAST;
  wire axi_smc_M06_AXI_WREADY;
  wire [31:0]axi_smc_M06_AXI_WSTRB;
  wire axi_smc_M06_AXI_WVALID;
  wire [32:0]axi_smc_M07_AXI_ARADDR;
  wire [1:0]axi_smc_M07_AXI_ARBURST;
  wire [3:0]axi_smc_M07_AXI_ARLEN;
  wire axi_smc_M07_AXI_ARREADY;
  wire [2:0]axi_smc_M07_AXI_ARSIZE;
  wire axi_smc_M07_AXI_ARVALID;
  wire [32:0]axi_smc_M07_AXI_AWADDR;
  wire [1:0]axi_smc_M07_AXI_AWBURST;
  wire [3:0]axi_smc_M07_AXI_AWLEN;
  wire axi_smc_M07_AXI_AWREADY;
  wire [2:0]axi_smc_M07_AXI_AWSIZE;
  wire axi_smc_M07_AXI_AWVALID;
  wire axi_smc_M07_AXI_BREADY;
  wire [1:0]axi_smc_M07_AXI_BRESP;
  wire axi_smc_M07_AXI_BVALID;
  wire [255:0]axi_smc_M07_AXI_RDATA;
  wire axi_smc_M07_AXI_RLAST;
  wire axi_smc_M07_AXI_RREADY;
  wire [1:0]axi_smc_M07_AXI_RRESP;
  wire axi_smc_M07_AXI_RVALID;
  wire [255:0]axi_smc_M07_AXI_WDATA;
  wire axi_smc_M07_AXI_WLAST;
  wire axi_smc_M07_AXI_WREADY;
  wire [31:0]axi_smc_M07_AXI_WSTRB;
  wire axi_smc_M07_AXI_WVALID;
  wire [32:0]axi_smc_M08_AXI_ARADDR;
  wire [1:0]axi_smc_M08_AXI_ARBURST;
  wire [3:0]axi_smc_M08_AXI_ARLEN;
  wire axi_smc_M08_AXI_ARREADY;
  wire [2:0]axi_smc_M08_AXI_ARSIZE;
  wire axi_smc_M08_AXI_ARVALID;
  wire [32:0]axi_smc_M08_AXI_AWADDR;
  wire [1:0]axi_smc_M08_AXI_AWBURST;
  wire [3:0]axi_smc_M08_AXI_AWLEN;
  wire axi_smc_M08_AXI_AWREADY;
  wire [2:0]axi_smc_M08_AXI_AWSIZE;
  wire axi_smc_M08_AXI_AWVALID;
  wire axi_smc_M08_AXI_BREADY;
  wire [1:0]axi_smc_M08_AXI_BRESP;
  wire axi_smc_M08_AXI_BVALID;
  wire [255:0]axi_smc_M08_AXI_RDATA;
  wire axi_smc_M08_AXI_RLAST;
  wire axi_smc_M08_AXI_RREADY;
  wire [1:0]axi_smc_M08_AXI_RRESP;
  wire axi_smc_M08_AXI_RVALID;
  wire [255:0]axi_smc_M08_AXI_WDATA;
  wire axi_smc_M08_AXI_WLAST;
  wire axi_smc_M08_AXI_WREADY;
  wire [31:0]axi_smc_M08_AXI_WSTRB;
  wire axi_smc_M08_AXI_WVALID;
  wire [32:0]axi_smc_M09_AXI_ARADDR;
  wire [1:0]axi_smc_M09_AXI_ARBURST;
  wire [3:0]axi_smc_M09_AXI_ARLEN;
  wire axi_smc_M09_AXI_ARREADY;
  wire [2:0]axi_smc_M09_AXI_ARSIZE;
  wire axi_smc_M09_AXI_ARVALID;
  wire [32:0]axi_smc_M09_AXI_AWADDR;
  wire [1:0]axi_smc_M09_AXI_AWBURST;
  wire [3:0]axi_smc_M09_AXI_AWLEN;
  wire axi_smc_M09_AXI_AWREADY;
  wire [2:0]axi_smc_M09_AXI_AWSIZE;
  wire axi_smc_M09_AXI_AWVALID;
  wire axi_smc_M09_AXI_BREADY;
  wire [1:0]axi_smc_M09_AXI_BRESP;
  wire axi_smc_M09_AXI_BVALID;
  wire [255:0]axi_smc_M09_AXI_RDATA;
  wire axi_smc_M09_AXI_RLAST;
  wire axi_smc_M09_AXI_RREADY;
  wire [1:0]axi_smc_M09_AXI_RRESP;
  wire axi_smc_M09_AXI_RVALID;
  wire [255:0]axi_smc_M09_AXI_WDATA;
  wire axi_smc_M09_AXI_WLAST;
  wire axi_smc_M09_AXI_WREADY;
  wire [31:0]axi_smc_M09_AXI_WSTRB;
  wire axi_smc_M09_AXI_WVALID;
  wire [32:0]axi_smc_M10_AXI_ARADDR;
  wire [1:0]axi_smc_M10_AXI_ARBURST;
  wire [3:0]axi_smc_M10_AXI_ARLEN;
  wire axi_smc_M10_AXI_ARREADY;
  wire [2:0]axi_smc_M10_AXI_ARSIZE;
  wire axi_smc_M10_AXI_ARVALID;
  wire [32:0]axi_smc_M10_AXI_AWADDR;
  wire [1:0]axi_smc_M10_AXI_AWBURST;
  wire [3:0]axi_smc_M10_AXI_AWLEN;
  wire axi_smc_M10_AXI_AWREADY;
  wire [2:0]axi_smc_M10_AXI_AWSIZE;
  wire axi_smc_M10_AXI_AWVALID;
  wire axi_smc_M10_AXI_BREADY;
  wire [1:0]axi_smc_M10_AXI_BRESP;
  wire axi_smc_M10_AXI_BVALID;
  wire [255:0]axi_smc_M10_AXI_RDATA;
  wire axi_smc_M10_AXI_RLAST;
  wire axi_smc_M10_AXI_RREADY;
  wire [1:0]axi_smc_M10_AXI_RRESP;
  wire axi_smc_M10_AXI_RVALID;
  wire [255:0]axi_smc_M10_AXI_WDATA;
  wire axi_smc_M10_AXI_WLAST;
  wire axi_smc_M10_AXI_WREADY;
  wire [31:0]axi_smc_M10_AXI_WSTRB;
  wire axi_smc_M10_AXI_WVALID;
  wire [32:0]axi_smc_M11_AXI_ARADDR;
  wire [1:0]axi_smc_M11_AXI_ARBURST;
  wire [3:0]axi_smc_M11_AXI_ARLEN;
  wire axi_smc_M11_AXI_ARREADY;
  wire [2:0]axi_smc_M11_AXI_ARSIZE;
  wire axi_smc_M11_AXI_ARVALID;
  wire [32:0]axi_smc_M11_AXI_AWADDR;
  wire [1:0]axi_smc_M11_AXI_AWBURST;
  wire [3:0]axi_smc_M11_AXI_AWLEN;
  wire axi_smc_M11_AXI_AWREADY;
  wire [2:0]axi_smc_M11_AXI_AWSIZE;
  wire axi_smc_M11_AXI_AWVALID;
  wire axi_smc_M11_AXI_BREADY;
  wire [1:0]axi_smc_M11_AXI_BRESP;
  wire axi_smc_M11_AXI_BVALID;
  wire [255:0]axi_smc_M11_AXI_RDATA;
  wire axi_smc_M11_AXI_RLAST;
  wire axi_smc_M11_AXI_RREADY;
  wire [1:0]axi_smc_M11_AXI_RRESP;
  wire axi_smc_M11_AXI_RVALID;
  wire [255:0]axi_smc_M11_AXI_WDATA;
  wire axi_smc_M11_AXI_WLAST;
  wire axi_smc_M11_AXI_WREADY;
  wire [31:0]axi_smc_M11_AXI_WSTRB;
  wire axi_smc_M11_AXI_WVALID;
  wire [0:0]clk_100MHz_1;
  wire ddr4_0_C0_DDR4_ACT_N;
  wire [16:0]ddr4_0_C0_DDR4_ADR;
  wire [1:0]ddr4_0_C0_DDR4_BA;
  wire [1:0]ddr4_0_C0_DDR4_BG;
  wire [0:0]ddr4_0_C0_DDR4_CKE;
  wire [0:0]ddr4_0_C0_DDR4_CK_C;
  wire [0:0]ddr4_0_C0_DDR4_CK_T;
  wire [0:0]ddr4_0_C0_DDR4_CS_N;
  wire [71:0]ddr4_0_C0_DDR4_DQ;
  wire [17:0]ddr4_0_C0_DDR4_DQS_C;
  wire [17:0]ddr4_0_C0_DDR4_DQS_T;
  wire [0:0]ddr4_0_C0_DDR4_ODT;
  wire ddr4_0_C0_DDR4_PAR;
  wire ddr4_0_C0_DDR4_RESET_N;
  wire ddr4_0_c0_ddr4_ui_clk;
  wire ddr4_0_c0_ddr4_ui_clk_sync_rst;
  wire ddr4_1_C0_DDR4_ACT_N;
  wire [16:0]ddr4_1_C0_DDR4_ADR;
  wire [1:0]ddr4_1_C0_DDR4_BA;
  wire [1:0]ddr4_1_C0_DDR4_BG;
  wire [0:0]ddr4_1_C0_DDR4_CKE;
  wire [0:0]ddr4_1_C0_DDR4_CK_C;
  wire [0:0]ddr4_1_C0_DDR4_CK_T;
  wire [0:0]ddr4_1_C0_DDR4_CS_N;
  wire [71:0]ddr4_1_C0_DDR4_DQ;
  wire [17:0]ddr4_1_C0_DDR4_DQS_C;
  wire [17:0]ddr4_1_C0_DDR4_DQS_T;
  wire [0:0]ddr4_1_C0_DDR4_ODT;
  wire ddr4_1_C0_DDR4_PAR;
  wire ddr4_1_C0_DDR4_RESET_N;
  wire ddr4_1_c0_ddr4_ui_clk;
  wire ddr4_1_c0_ddr4_ui_clk_sync_rst;
  wire pcie_perstn_1;
  wire pcie_refclk_1_CLK_N;
  wire pcie_refclk_1_CLK_P;
  wire resetn_1;
  wire resetn_2;
  wire [0:0]resetn_inv_0_Res;
  wire [0:0]resetn_inv_1_Res;
  wire [0:0]rst_ddr4_0_300M_peripheral_aresetn;
  wire [0:0]rst_ddr4_1_300M_peripheral_aresetn;
  wire sysclk0_1_CLK_N;
  wire sysclk0_1_CLK_P;
  wire sysclk1_1_CLK_N;
  wire sysclk1_1_CLK_P;
  wire [7:0]usr_irq_req_0_1;
  wire [0:0]util_ds_buf_IBUF_DS_ODIV2;
  wire [0:0]util_ds_buf_IBUF_OUT;
  wire [63:0]xdma_0_M_AXI_ARADDR;
  wire [1:0]xdma_0_M_AXI_ARBURST;
  wire [3:0]xdma_0_M_AXI_ARCACHE;
  wire [3:0]xdma_0_M_AXI_ARID;
  wire [7:0]xdma_0_M_AXI_ARLEN;
  wire xdma_0_M_AXI_ARLOCK;
  wire [2:0]xdma_0_M_AXI_ARPROT;
  wire xdma_0_M_AXI_ARREADY;
  wire [2:0]xdma_0_M_AXI_ARSIZE;
  wire xdma_0_M_AXI_ARVALID;
  wire [63:0]xdma_0_M_AXI_AWADDR;
  wire [1:0]xdma_0_M_AXI_AWBURST;
  wire [3:0]xdma_0_M_AXI_AWCACHE;
  wire [3:0]xdma_0_M_AXI_AWID;
  wire [7:0]xdma_0_M_AXI_AWLEN;
  wire xdma_0_M_AXI_AWLOCK;
  wire [2:0]xdma_0_M_AXI_AWPROT;
  wire xdma_0_M_AXI_AWREADY;
  wire [2:0]xdma_0_M_AXI_AWSIZE;
  wire xdma_0_M_AXI_AWVALID;
  wire [3:0]xdma_0_M_AXI_BID;
  wire xdma_0_M_AXI_BREADY;
  wire [1:0]xdma_0_M_AXI_BRESP;
  wire xdma_0_M_AXI_BVALID;
  wire [31:0]xdma_0_M_AXI_LITE_ARADDR;
  wire [2:0]xdma_0_M_AXI_LITE_ARPROT;
  wire xdma_0_M_AXI_LITE_ARREADY;
  wire xdma_0_M_AXI_LITE_ARVALID;
  wire [31:0]xdma_0_M_AXI_LITE_AWADDR;
  wire [2:0]xdma_0_M_AXI_LITE_AWPROT;
  wire xdma_0_M_AXI_LITE_AWREADY;
  wire xdma_0_M_AXI_LITE_AWVALID;
  wire xdma_0_M_AXI_LITE_BREADY;
  wire [1:0]xdma_0_M_AXI_LITE_BRESP;
  wire xdma_0_M_AXI_LITE_BVALID;
  wire [31:0]xdma_0_M_AXI_LITE_RDATA;
  wire xdma_0_M_AXI_LITE_RREADY;
  wire [1:0]xdma_0_M_AXI_LITE_RRESP;
  wire xdma_0_M_AXI_LITE_RVALID;
  wire [31:0]xdma_0_M_AXI_LITE_WDATA;
  wire xdma_0_M_AXI_LITE_WREADY;
  wire [3:0]xdma_0_M_AXI_LITE_WSTRB;
  wire xdma_0_M_AXI_LITE_WVALID;
  wire [511:0]xdma_0_M_AXI_RDATA;
  wire [3:0]xdma_0_M_AXI_RID;
  wire xdma_0_M_AXI_RLAST;
  wire xdma_0_M_AXI_RREADY;
  wire [1:0]xdma_0_M_AXI_RRESP;
  wire xdma_0_M_AXI_RVALID;
  wire [511:0]xdma_0_M_AXI_WDATA;
  wire xdma_0_M_AXI_WLAST;
  wire xdma_0_M_AXI_WREADY;
  wire [63:0]xdma_0_M_AXI_WSTRB;
  wire xdma_0_M_AXI_WVALID;
  wire xdma_0_axi_aclk;
  wire xdma_0_axi_aresetn;
  wire [15:0]xdma_0_pcie_mgt_rxn;
  wire [15:0]xdma_0_pcie_mgt_rxp;
  wire [15:0]xdma_0_pcie_mgt_txn;
  wire [15:0]xdma_0_pcie_mgt_txp;
  wire xdma_0_user_lnk_up;
  wire [7:0]xdma_0_usr_irq_ack;
  wire [0:0]xlconstant_0_dout;

  assign CLK_IN_D_0_1_CLK_N = HBM_CLK_IN_clk_n[0];
  assign CLK_IN_D_0_1_CLK_P = HBM_CLK_IN_clk_p[0];
  assign M_AXI_ACLK_0 = xdma_0_axi_aclk;
  assign M_AXI_ARESETN_0 = xdma_0_axi_aresetn;
  assign M_AXI_LITE_0_araddr[31:0] = xdma_0_M_AXI_LITE_ARADDR;
  assign M_AXI_LITE_0_arprot[2:0] = xdma_0_M_AXI_LITE_ARPROT;
  assign M_AXI_LITE_0_arvalid = xdma_0_M_AXI_LITE_ARVALID;
  assign M_AXI_LITE_0_awaddr[31:0] = xdma_0_M_AXI_LITE_AWADDR;
  assign M_AXI_LITE_0_awprot[2:0] = xdma_0_M_AXI_LITE_AWPROT;
  assign M_AXI_LITE_0_awvalid = xdma_0_M_AXI_LITE_AWVALID;
  assign M_AXI_LITE_0_bready = xdma_0_M_AXI_LITE_BREADY;
  assign M_AXI_LITE_0_rready = xdma_0_M_AXI_LITE_RREADY;
  assign M_AXI_LITE_0_wdata[31:0] = xdma_0_M_AXI_LITE_WDATA;
  assign M_AXI_LITE_0_wstrb[3:0] = xdma_0_M_AXI_LITE_WSTRB;
  assign M_AXI_LITE_0_wvalid = xdma_0_M_AXI_LITE_WVALID;
  assign USR_AXI_M_1_ARADDR = USR_AXI_M_araddr[63:0];
  assign USR_AXI_M_1_ARBURST = USR_AXI_M_arburst[1:0];
  assign USR_AXI_M_1_ARCACHE = USR_AXI_M_arcache[3:0];
  assign USR_AXI_M_1_ARID = USR_AXI_M_arid[3:0];
  assign USR_AXI_M_1_ARLEN = USR_AXI_M_arlen[7:0];
  assign USR_AXI_M_1_ARLOCK = USR_AXI_M_arlock[0];
  assign USR_AXI_M_1_ARPROT = USR_AXI_M_arprot[2:0];
  assign USR_AXI_M_1_ARQOS = USR_AXI_M_arqos[3:0];
  assign USR_AXI_M_1_ARSIZE = USR_AXI_M_arsize[2:0];
  assign USR_AXI_M_1_ARVALID = USR_AXI_M_arvalid;
  assign USR_AXI_M_1_AWADDR = USR_AXI_M_awaddr[63:0];
  assign USR_AXI_M_1_AWBURST = USR_AXI_M_awburst[1:0];
  assign USR_AXI_M_1_AWCACHE = USR_AXI_M_awcache[3:0];
  assign USR_AXI_M_1_AWID = USR_AXI_M_awid[3:0];
  assign USR_AXI_M_1_AWLEN = USR_AXI_M_awlen[7:0];
  assign USR_AXI_M_1_AWLOCK = USR_AXI_M_awlock[0];
  assign USR_AXI_M_1_AWPROT = USR_AXI_M_awprot[2:0];
  assign USR_AXI_M_1_AWQOS = USR_AXI_M_awqos[3:0];
  assign USR_AXI_M_1_AWSIZE = USR_AXI_M_awsize[2:0];
  assign USR_AXI_M_1_AWVALID = USR_AXI_M_awvalid;
  assign USR_AXI_M_1_BREADY = USR_AXI_M_bready;
  assign USR_AXI_M_1_RREADY = USR_AXI_M_rready;
  assign USR_AXI_M_1_WDATA = USR_AXI_M_wdata[511:0];
  assign USR_AXI_M_1_WLAST = USR_AXI_M_wlast;
  assign USR_AXI_M_1_WSTRB = USR_AXI_M_wstrb[63:0];
  assign USR_AXI_M_1_WVALID = USR_AXI_M_wvalid;
  assign USR_AXI_M_arready = USR_AXI_M_1_ARREADY;
  assign USR_AXI_M_awready = USR_AXI_M_1_AWREADY;
  assign USR_AXI_M_bid[3:0] = USR_AXI_M_1_BID;
  assign USR_AXI_M_bresp[1:0] = USR_AXI_M_1_BRESP;
  assign USR_AXI_M_bvalid = USR_AXI_M_1_BVALID;
  assign USR_AXI_M_rdata[511:0] = USR_AXI_M_1_RDATA;
  assign USR_AXI_M_rid[3:0] = USR_AXI_M_1_RID;
  assign USR_AXI_M_rlast = USR_AXI_M_1_RLAST;
  assign USR_AXI_M_rresp[1:0] = USR_AXI_M_1_RRESP;
  assign USR_AXI_M_rvalid = USR_AXI_M_1_RVALID;
  assign USR_AXI_M_wready = USR_AXI_M_1_WREADY;
  assign ddr4_c0_act_n = ddr4_0_C0_DDR4_ACT_N;
  assign ddr4_c0_adr[16:0] = ddr4_0_C0_DDR4_ADR;
  assign ddr4_c0_ba[1:0] = ddr4_0_C0_DDR4_BA;
  assign ddr4_c0_bg[1:0] = ddr4_0_C0_DDR4_BG;
  assign ddr4_c0_ck_c = ddr4_0_C0_DDR4_CK_C;
  assign ddr4_c0_ck_t = ddr4_0_C0_DDR4_CK_T;
  assign ddr4_c0_cke = ddr4_0_C0_DDR4_CKE;
  assign ddr4_c0_cs_n = ddr4_0_C0_DDR4_CS_N;
  assign ddr4_c0_odt = ddr4_0_C0_DDR4_ODT;
  assign ddr4_c0_par = ddr4_0_C0_DDR4_PAR;
  assign ddr4_c0_reset_n = ddr4_0_C0_DDR4_RESET_N;
  assign ddr4_c1_act_n = ddr4_1_C0_DDR4_ACT_N;
  assign ddr4_c1_adr[16:0] = ddr4_1_C0_DDR4_ADR;
  assign ddr4_c1_ba[1:0] = ddr4_1_C0_DDR4_BA;
  assign ddr4_c1_bg[1:0] = ddr4_1_C0_DDR4_BG;
  assign ddr4_c1_ck_c = ddr4_1_C0_DDR4_CK_C;
  assign ddr4_c1_ck_t = ddr4_1_C0_DDR4_CK_T;
  assign ddr4_c1_cke = ddr4_1_C0_DDR4_CKE;
  assign ddr4_c1_cs_n = ddr4_1_C0_DDR4_CS_N;
  assign ddr4_c1_odt = ddr4_1_C0_DDR4_ODT;
  assign ddr4_c1_par = ddr4_1_C0_DDR4_PAR;
  assign ddr4_c1_reset_n = ddr4_1_C0_DDR4_RESET_N;
  assign pci_express_txn[15:0] = xdma_0_pcie_mgt_txn;
  assign pci_express_txp[15:0] = xdma_0_pcie_mgt_txp;
  assign pcie_perstn_1 = pcie_perstn;
  assign pcie_refclk_1_CLK_N = pcie_refclk_clk_n;
  assign pcie_refclk_1_CLK_P = pcie_refclk_clk_p;
  assign resetn_1 = ddr4_c0_resetn;
  assign resetn_2 = ddr4_c1_resetn;
  assign sysclk0_1_CLK_N = ddr4_c0_sysclk_clk_n;
  assign sysclk0_1_CLK_P = ddr4_c0_sysclk_clk_p;
  assign sysclk1_1_CLK_N = ddr4_c1_sysclk_clk_n;
  assign sysclk1_1_CLK_P = ddr4_c1_sysclk_clk_p;
  assign user_lnk_up_0 = xdma_0_user_lnk_up;
  assign usr_irq_ack_0[7:0] = xdma_0_usr_irq_ack;
  assign usr_irq_req_0_1 = usr_irq_req_0[7:0];
  assign xdma_0_M_AXI_LITE_ARREADY = M_AXI_LITE_0_arready;
  assign xdma_0_M_AXI_LITE_AWREADY = M_AXI_LITE_0_awready;
  assign xdma_0_M_AXI_LITE_BRESP = M_AXI_LITE_0_bresp[1:0];
  assign xdma_0_M_AXI_LITE_BVALID = M_AXI_LITE_0_bvalid;
  assign xdma_0_M_AXI_LITE_RDATA = M_AXI_LITE_0_rdata[31:0];
  assign xdma_0_M_AXI_LITE_RRESP = M_AXI_LITE_0_rresp[1:0];
  assign xdma_0_M_AXI_LITE_RVALID = M_AXI_LITE_0_rvalid;
  assign xdma_0_M_AXI_LITE_WREADY = M_AXI_LITE_0_wready;
  assign xdma_0_pcie_mgt_rxn = pci_express_rxn[15:0];
  assign xdma_0_pcie_mgt_rxp = pci_express_rxp[15:0];
  u280_xdma_axi_smc_1 axi_smc
       (.M00_AXI_araddr(axi_smc_M00_AXI_ARADDR),
        .M00_AXI_arburst(axi_smc_M00_AXI_ARBURST),
        .M00_AXI_arcache(axi_smc_M00_AXI_ARCACHE),
        .M00_AXI_arlen(axi_smc_M00_AXI_ARLEN),
        .M00_AXI_arlock(axi_smc_M00_AXI_ARLOCK),
        .M00_AXI_arprot(axi_smc_M00_AXI_ARPROT),
        .M00_AXI_arqos(axi_smc_M00_AXI_ARQOS),
        .M00_AXI_arready(axi_smc_M00_AXI_ARREADY),
        .M00_AXI_arsize(axi_smc_M00_AXI_ARSIZE),
        .M00_AXI_arvalid(axi_smc_M00_AXI_ARVALID),
        .M00_AXI_awaddr(axi_smc_M00_AXI_AWADDR),
        .M00_AXI_awburst(axi_smc_M00_AXI_AWBURST),
        .M00_AXI_awcache(axi_smc_M00_AXI_AWCACHE),
        .M00_AXI_awlen(axi_smc_M00_AXI_AWLEN),
        .M00_AXI_awlock(axi_smc_M00_AXI_AWLOCK),
        .M00_AXI_awprot(axi_smc_M00_AXI_AWPROT),
        .M00_AXI_awqos(axi_smc_M00_AXI_AWQOS),
        .M00_AXI_awready(axi_smc_M00_AXI_AWREADY),
        .M00_AXI_awsize(axi_smc_M00_AXI_AWSIZE),
        .M00_AXI_awvalid(axi_smc_M00_AXI_AWVALID),
        .M00_AXI_bready(axi_smc_M00_AXI_BREADY),
        .M00_AXI_bresp(axi_smc_M00_AXI_BRESP),
        .M00_AXI_bvalid(axi_smc_M00_AXI_BVALID),
        .M00_AXI_rdata(axi_smc_M00_AXI_RDATA),
        .M00_AXI_rlast(axi_smc_M00_AXI_RLAST),
        .M00_AXI_rready(axi_smc_M00_AXI_RREADY),
        .M00_AXI_rresp(axi_smc_M00_AXI_RRESP),
        .M00_AXI_rvalid(axi_smc_M00_AXI_RVALID),
        .M00_AXI_wdata(axi_smc_M00_AXI_WDATA),
        .M00_AXI_wlast(axi_smc_M00_AXI_WLAST),
        .M00_AXI_wready(axi_smc_M00_AXI_WREADY),
        .M00_AXI_wstrb(axi_smc_M00_AXI_WSTRB),
        .M00_AXI_wvalid(axi_smc_M00_AXI_WVALID),
        .M01_AXI_araddr(axi_smc_M01_AXI_ARADDR),
        .M01_AXI_arready(axi_smc_M01_AXI_ARREADY),
        .M01_AXI_arvalid(axi_smc_M01_AXI_ARVALID),
        .M01_AXI_awaddr(axi_smc_M01_AXI_AWADDR),
        .M01_AXI_awready(axi_smc_M01_AXI_AWREADY),
        .M01_AXI_awvalid(axi_smc_M01_AXI_AWVALID),
        .M01_AXI_bready(axi_smc_M01_AXI_BREADY),
        .M01_AXI_bresp(axi_smc_M01_AXI_BRESP),
        .M01_AXI_bvalid(axi_smc_M01_AXI_BVALID),
        .M01_AXI_rdata(axi_smc_M01_AXI_RDATA),
        .M01_AXI_rready(axi_smc_M01_AXI_RREADY),
        .M01_AXI_rresp(axi_smc_M01_AXI_RRESP),
        .M01_AXI_rvalid(axi_smc_M01_AXI_RVALID),
        .M01_AXI_wdata(axi_smc_M01_AXI_WDATA),
        .M01_AXI_wready(axi_smc_M01_AXI_WREADY),
        .M01_AXI_wvalid(axi_smc_M01_AXI_WVALID),
        .M02_AXI_araddr(axi_smc_M02_AXI_ARADDR),
        .M02_AXI_arburst(axi_smc_M02_AXI_ARBURST),
        .M02_AXI_arcache(axi_smc_M02_AXI_ARCACHE),
        .M02_AXI_arlen(axi_smc_M02_AXI_ARLEN),
        .M02_AXI_arlock(axi_smc_M02_AXI_ARLOCK),
        .M02_AXI_arprot(axi_smc_M02_AXI_ARPROT),
        .M02_AXI_arqos(axi_smc_M02_AXI_ARQOS),
        .M02_AXI_arready(axi_smc_M02_AXI_ARREADY),
        .M02_AXI_arsize(axi_smc_M02_AXI_ARSIZE),
        .M02_AXI_arvalid(axi_smc_M02_AXI_ARVALID),
        .M02_AXI_awaddr(axi_smc_M02_AXI_AWADDR),
        .M02_AXI_awburst(axi_smc_M02_AXI_AWBURST),
        .M02_AXI_awcache(axi_smc_M02_AXI_AWCACHE),
        .M02_AXI_awlen(axi_smc_M02_AXI_AWLEN),
        .M02_AXI_awlock(axi_smc_M02_AXI_AWLOCK),
        .M02_AXI_awprot(axi_smc_M02_AXI_AWPROT),
        .M02_AXI_awqos(axi_smc_M02_AXI_AWQOS),
        .M02_AXI_awready(axi_smc_M02_AXI_AWREADY),
        .M02_AXI_awsize(axi_smc_M02_AXI_AWSIZE),
        .M02_AXI_awvalid(axi_smc_M02_AXI_AWVALID),
        .M02_AXI_bready(axi_smc_M02_AXI_BREADY),
        .M02_AXI_bresp(axi_smc_M02_AXI_BRESP),
        .M02_AXI_bvalid(axi_smc_M02_AXI_BVALID),
        .M02_AXI_rdata(axi_smc_M02_AXI_RDATA),
        .M02_AXI_rlast(axi_smc_M02_AXI_RLAST),
        .M02_AXI_rready(axi_smc_M02_AXI_RREADY),
        .M02_AXI_rresp(axi_smc_M02_AXI_RRESP),
        .M02_AXI_rvalid(axi_smc_M02_AXI_RVALID),
        .M02_AXI_wdata(axi_smc_M02_AXI_WDATA),
        .M02_AXI_wlast(axi_smc_M02_AXI_WLAST),
        .M02_AXI_wready(axi_smc_M02_AXI_WREADY),
        .M02_AXI_wstrb(axi_smc_M02_AXI_WSTRB),
        .M02_AXI_wvalid(axi_smc_M02_AXI_WVALID),
        .M03_AXI_araddr(axi_smc_M03_AXI_ARADDR),
        .M03_AXI_arready(axi_smc_M03_AXI_ARREADY),
        .M03_AXI_arvalid(axi_smc_M03_AXI_ARVALID),
        .M03_AXI_awaddr(axi_smc_M03_AXI_AWADDR),
        .M03_AXI_awready(axi_smc_M03_AXI_AWREADY),
        .M03_AXI_awvalid(axi_smc_M03_AXI_AWVALID),
        .M03_AXI_bready(axi_smc_M03_AXI_BREADY),
        .M03_AXI_bresp(axi_smc_M03_AXI_BRESP),
        .M03_AXI_bvalid(axi_smc_M03_AXI_BVALID),
        .M03_AXI_rdata(axi_smc_M03_AXI_RDATA),
        .M03_AXI_rready(axi_smc_M03_AXI_RREADY),
        .M03_AXI_rresp(axi_smc_M03_AXI_RRESP),
        .M03_AXI_rvalid(axi_smc_M03_AXI_RVALID),
        .M03_AXI_wdata(axi_smc_M03_AXI_WDATA),
        .M03_AXI_wready(axi_smc_M03_AXI_WREADY),
        .M03_AXI_wvalid(axi_smc_M03_AXI_WVALID),
        .M04_AXI_araddr(axi_smc_M04_AXI_ARADDR),
        .M04_AXI_arburst(axi_smc_M04_AXI_ARBURST),
        .M04_AXI_arlen(axi_smc_M04_AXI_ARLEN),
        .M04_AXI_arready(axi_smc_M04_AXI_ARREADY),
        .M04_AXI_arsize(axi_smc_M04_AXI_ARSIZE),
        .M04_AXI_arvalid(axi_smc_M04_AXI_ARVALID),
        .M04_AXI_awaddr(axi_smc_M04_AXI_AWADDR),
        .M04_AXI_awburst(axi_smc_M04_AXI_AWBURST),
        .M04_AXI_awlen(axi_smc_M04_AXI_AWLEN),
        .M04_AXI_awready(axi_smc_M04_AXI_AWREADY),
        .M04_AXI_awsize(axi_smc_M04_AXI_AWSIZE),
        .M04_AXI_awvalid(axi_smc_M04_AXI_AWVALID),
        .M04_AXI_bready(axi_smc_M04_AXI_BREADY),
        .M04_AXI_bresp(axi_smc_M04_AXI_BRESP),
        .M04_AXI_bvalid(axi_smc_M04_AXI_BVALID),
        .M04_AXI_rdata(axi_smc_M04_AXI_RDATA),
        .M04_AXI_rlast(axi_smc_M04_AXI_RLAST),
        .M04_AXI_rready(axi_smc_M04_AXI_RREADY),
        .M04_AXI_rresp(axi_smc_M04_AXI_RRESP),
        .M04_AXI_rvalid(axi_smc_M04_AXI_RVALID),
        .M04_AXI_wdata(axi_smc_M04_AXI_WDATA),
        .M04_AXI_wlast(axi_smc_M04_AXI_WLAST),
        .M04_AXI_wready(axi_smc_M04_AXI_WREADY),
        .M04_AXI_wstrb(axi_smc_M04_AXI_WSTRB),
        .M04_AXI_wvalid(axi_smc_M04_AXI_WVALID),
        .M05_AXI_araddr(axi_smc_M05_AXI_ARADDR),
        .M05_AXI_arburst(axi_smc_M05_AXI_ARBURST),
        .M05_AXI_arlen(axi_smc_M05_AXI_ARLEN),
        .M05_AXI_arready(axi_smc_M05_AXI_ARREADY),
        .M05_AXI_arsize(axi_smc_M05_AXI_ARSIZE),
        .M05_AXI_arvalid(axi_smc_M05_AXI_ARVALID),
        .M05_AXI_awaddr(axi_smc_M05_AXI_AWADDR),
        .M05_AXI_awburst(axi_smc_M05_AXI_AWBURST),
        .M05_AXI_awlen(axi_smc_M05_AXI_AWLEN),
        .M05_AXI_awready(axi_smc_M05_AXI_AWREADY),
        .M05_AXI_awsize(axi_smc_M05_AXI_AWSIZE),
        .M05_AXI_awvalid(axi_smc_M05_AXI_AWVALID),
        .M05_AXI_bready(axi_smc_M05_AXI_BREADY),
        .M05_AXI_bresp(axi_smc_M05_AXI_BRESP),
        .M05_AXI_bvalid(axi_smc_M05_AXI_BVALID),
        .M05_AXI_rdata(axi_smc_M05_AXI_RDATA),
        .M05_AXI_rlast(axi_smc_M05_AXI_RLAST),
        .M05_AXI_rready(axi_smc_M05_AXI_RREADY),
        .M05_AXI_rresp(axi_smc_M05_AXI_RRESP),
        .M05_AXI_rvalid(axi_smc_M05_AXI_RVALID),
        .M05_AXI_wdata(axi_smc_M05_AXI_WDATA),
        .M05_AXI_wlast(axi_smc_M05_AXI_WLAST),
        .M05_AXI_wready(axi_smc_M05_AXI_WREADY),
        .M05_AXI_wstrb(axi_smc_M05_AXI_WSTRB),
        .M05_AXI_wvalid(axi_smc_M05_AXI_WVALID),
        .M06_AXI_araddr(axi_smc_M06_AXI_ARADDR),
        .M06_AXI_arburst(axi_smc_M06_AXI_ARBURST),
        .M06_AXI_arlen(axi_smc_M06_AXI_ARLEN),
        .M06_AXI_arready(axi_smc_M06_AXI_ARREADY),
        .M06_AXI_arsize(axi_smc_M06_AXI_ARSIZE),
        .M06_AXI_arvalid(axi_smc_M06_AXI_ARVALID),
        .M06_AXI_awaddr(axi_smc_M06_AXI_AWADDR),
        .M06_AXI_awburst(axi_smc_M06_AXI_AWBURST),
        .M06_AXI_awlen(axi_smc_M06_AXI_AWLEN),
        .M06_AXI_awready(axi_smc_M06_AXI_AWREADY),
        .M06_AXI_awsize(axi_smc_M06_AXI_AWSIZE),
        .M06_AXI_awvalid(axi_smc_M06_AXI_AWVALID),
        .M06_AXI_bready(axi_smc_M06_AXI_BREADY),
        .M06_AXI_bresp(axi_smc_M06_AXI_BRESP),
        .M06_AXI_bvalid(axi_smc_M06_AXI_BVALID),
        .M06_AXI_rdata(axi_smc_M06_AXI_RDATA),
        .M06_AXI_rlast(axi_smc_M06_AXI_RLAST),
        .M06_AXI_rready(axi_smc_M06_AXI_RREADY),
        .M06_AXI_rresp(axi_smc_M06_AXI_RRESP),
        .M06_AXI_rvalid(axi_smc_M06_AXI_RVALID),
        .M06_AXI_wdata(axi_smc_M06_AXI_WDATA),
        .M06_AXI_wlast(axi_smc_M06_AXI_WLAST),
        .M06_AXI_wready(axi_smc_M06_AXI_WREADY),
        .M06_AXI_wstrb(axi_smc_M06_AXI_WSTRB),
        .M06_AXI_wvalid(axi_smc_M06_AXI_WVALID),
        .M07_AXI_araddr(axi_smc_M07_AXI_ARADDR),
        .M07_AXI_arburst(axi_smc_M07_AXI_ARBURST),
        .M07_AXI_arlen(axi_smc_M07_AXI_ARLEN),
        .M07_AXI_arready(axi_smc_M07_AXI_ARREADY),
        .M07_AXI_arsize(axi_smc_M07_AXI_ARSIZE),
        .M07_AXI_arvalid(axi_smc_M07_AXI_ARVALID),
        .M07_AXI_awaddr(axi_smc_M07_AXI_AWADDR),
        .M07_AXI_awburst(axi_smc_M07_AXI_AWBURST),
        .M07_AXI_awlen(axi_smc_M07_AXI_AWLEN),
        .M07_AXI_awready(axi_smc_M07_AXI_AWREADY),
        .M07_AXI_awsize(axi_smc_M07_AXI_AWSIZE),
        .M07_AXI_awvalid(axi_smc_M07_AXI_AWVALID),
        .M07_AXI_bready(axi_smc_M07_AXI_BREADY),
        .M07_AXI_bresp(axi_smc_M07_AXI_BRESP),
        .M07_AXI_bvalid(axi_smc_M07_AXI_BVALID),
        .M07_AXI_rdata(axi_smc_M07_AXI_RDATA),
        .M07_AXI_rlast(axi_smc_M07_AXI_RLAST),
        .M07_AXI_rready(axi_smc_M07_AXI_RREADY),
        .M07_AXI_rresp(axi_smc_M07_AXI_RRESP),
        .M07_AXI_rvalid(axi_smc_M07_AXI_RVALID),
        .M07_AXI_wdata(axi_smc_M07_AXI_WDATA),
        .M07_AXI_wlast(axi_smc_M07_AXI_WLAST),
        .M07_AXI_wready(axi_smc_M07_AXI_WREADY),
        .M07_AXI_wstrb(axi_smc_M07_AXI_WSTRB),
        .M07_AXI_wvalid(axi_smc_M07_AXI_WVALID),
        .M08_AXI_araddr(axi_smc_M08_AXI_ARADDR),
        .M08_AXI_arburst(axi_smc_M08_AXI_ARBURST),
        .M08_AXI_arlen(axi_smc_M08_AXI_ARLEN),
        .M08_AXI_arready(axi_smc_M08_AXI_ARREADY),
        .M08_AXI_arsize(axi_smc_M08_AXI_ARSIZE),
        .M08_AXI_arvalid(axi_smc_M08_AXI_ARVALID),
        .M08_AXI_awaddr(axi_smc_M08_AXI_AWADDR),
        .M08_AXI_awburst(axi_smc_M08_AXI_AWBURST),
        .M08_AXI_awlen(axi_smc_M08_AXI_AWLEN),
        .M08_AXI_awready(axi_smc_M08_AXI_AWREADY),
        .M08_AXI_awsize(axi_smc_M08_AXI_AWSIZE),
        .M08_AXI_awvalid(axi_smc_M08_AXI_AWVALID),
        .M08_AXI_bready(axi_smc_M08_AXI_BREADY),
        .M08_AXI_bresp(axi_smc_M08_AXI_BRESP),
        .M08_AXI_bvalid(axi_smc_M08_AXI_BVALID),
        .M08_AXI_rdata(axi_smc_M08_AXI_RDATA),
        .M08_AXI_rlast(axi_smc_M08_AXI_RLAST),
        .M08_AXI_rready(axi_smc_M08_AXI_RREADY),
        .M08_AXI_rresp(axi_smc_M08_AXI_RRESP),
        .M08_AXI_rvalid(axi_smc_M08_AXI_RVALID),
        .M08_AXI_wdata(axi_smc_M08_AXI_WDATA),
        .M08_AXI_wlast(axi_smc_M08_AXI_WLAST),
        .M08_AXI_wready(axi_smc_M08_AXI_WREADY),
        .M08_AXI_wstrb(axi_smc_M08_AXI_WSTRB),
        .M08_AXI_wvalid(axi_smc_M08_AXI_WVALID),
        .M09_AXI_araddr(axi_smc_M09_AXI_ARADDR),
        .M09_AXI_arburst(axi_smc_M09_AXI_ARBURST),
        .M09_AXI_arlen(axi_smc_M09_AXI_ARLEN),
        .M09_AXI_arready(axi_smc_M09_AXI_ARREADY),
        .M09_AXI_arsize(axi_smc_M09_AXI_ARSIZE),
        .M09_AXI_arvalid(axi_smc_M09_AXI_ARVALID),
        .M09_AXI_awaddr(axi_smc_M09_AXI_AWADDR),
        .M09_AXI_awburst(axi_smc_M09_AXI_AWBURST),
        .M09_AXI_awlen(axi_smc_M09_AXI_AWLEN),
        .M09_AXI_awready(axi_smc_M09_AXI_AWREADY),
        .M09_AXI_awsize(axi_smc_M09_AXI_AWSIZE),
        .M09_AXI_awvalid(axi_smc_M09_AXI_AWVALID),
        .M09_AXI_bready(axi_smc_M09_AXI_BREADY),
        .M09_AXI_bresp(axi_smc_M09_AXI_BRESP),
        .M09_AXI_bvalid(axi_smc_M09_AXI_BVALID),
        .M09_AXI_rdata(axi_smc_M09_AXI_RDATA),
        .M09_AXI_rlast(axi_smc_M09_AXI_RLAST),
        .M09_AXI_rready(axi_smc_M09_AXI_RREADY),
        .M09_AXI_rresp(axi_smc_M09_AXI_RRESP),
        .M09_AXI_rvalid(axi_smc_M09_AXI_RVALID),
        .M09_AXI_wdata(axi_smc_M09_AXI_WDATA),
        .M09_AXI_wlast(axi_smc_M09_AXI_WLAST),
        .M09_AXI_wready(axi_smc_M09_AXI_WREADY),
        .M09_AXI_wstrb(axi_smc_M09_AXI_WSTRB),
        .M09_AXI_wvalid(axi_smc_M09_AXI_WVALID),
        .M10_AXI_araddr(axi_smc_M10_AXI_ARADDR),
        .M10_AXI_arburst(axi_smc_M10_AXI_ARBURST),
        .M10_AXI_arlen(axi_smc_M10_AXI_ARLEN),
        .M10_AXI_arready(axi_smc_M10_AXI_ARREADY),
        .M10_AXI_arsize(axi_smc_M10_AXI_ARSIZE),
        .M10_AXI_arvalid(axi_smc_M10_AXI_ARVALID),
        .M10_AXI_awaddr(axi_smc_M10_AXI_AWADDR),
        .M10_AXI_awburst(axi_smc_M10_AXI_AWBURST),
        .M10_AXI_awlen(axi_smc_M10_AXI_AWLEN),
        .M10_AXI_awready(axi_smc_M10_AXI_AWREADY),
        .M10_AXI_awsize(axi_smc_M10_AXI_AWSIZE),
        .M10_AXI_awvalid(axi_smc_M10_AXI_AWVALID),
        .M10_AXI_bready(axi_smc_M10_AXI_BREADY),
        .M10_AXI_bresp(axi_smc_M10_AXI_BRESP),
        .M10_AXI_bvalid(axi_smc_M10_AXI_BVALID),
        .M10_AXI_rdata(axi_smc_M10_AXI_RDATA),
        .M10_AXI_rlast(axi_smc_M10_AXI_RLAST),
        .M10_AXI_rready(axi_smc_M10_AXI_RREADY),
        .M10_AXI_rresp(axi_smc_M10_AXI_RRESP),
        .M10_AXI_rvalid(axi_smc_M10_AXI_RVALID),
        .M10_AXI_wdata(axi_smc_M10_AXI_WDATA),
        .M10_AXI_wlast(axi_smc_M10_AXI_WLAST),
        .M10_AXI_wready(axi_smc_M10_AXI_WREADY),
        .M10_AXI_wstrb(axi_smc_M10_AXI_WSTRB),
        .M10_AXI_wvalid(axi_smc_M10_AXI_WVALID),
        .M11_AXI_araddr(axi_smc_M11_AXI_ARADDR),
        .M11_AXI_arburst(axi_smc_M11_AXI_ARBURST),
        .M11_AXI_arlen(axi_smc_M11_AXI_ARLEN),
        .M11_AXI_arready(axi_smc_M11_AXI_ARREADY),
        .M11_AXI_arsize(axi_smc_M11_AXI_ARSIZE),
        .M11_AXI_arvalid(axi_smc_M11_AXI_ARVALID),
        .M11_AXI_awaddr(axi_smc_M11_AXI_AWADDR),
        .M11_AXI_awburst(axi_smc_M11_AXI_AWBURST),
        .M11_AXI_awlen(axi_smc_M11_AXI_AWLEN),
        .M11_AXI_awready(axi_smc_M11_AXI_AWREADY),
        .M11_AXI_awsize(axi_smc_M11_AXI_AWSIZE),
        .M11_AXI_awvalid(axi_smc_M11_AXI_AWVALID),
        .M11_AXI_bready(axi_smc_M11_AXI_BREADY),
        .M11_AXI_bresp(axi_smc_M11_AXI_BRESP),
        .M11_AXI_bvalid(axi_smc_M11_AXI_BVALID),
        .M11_AXI_rdata(axi_smc_M11_AXI_RDATA),
        .M11_AXI_rlast(axi_smc_M11_AXI_RLAST),
        .M11_AXI_rready(axi_smc_M11_AXI_RREADY),
        .M11_AXI_rresp(axi_smc_M11_AXI_RRESP),
        .M11_AXI_rvalid(axi_smc_M11_AXI_RVALID),
        .M11_AXI_wdata(axi_smc_M11_AXI_WDATA),
        .M11_AXI_wlast(axi_smc_M11_AXI_WLAST),
        .M11_AXI_wready(axi_smc_M11_AXI_WREADY),
        .M11_AXI_wstrb(axi_smc_M11_AXI_WSTRB),
        .M11_AXI_wvalid(axi_smc_M11_AXI_WVALID),
        .S00_AXI_araddr(xdma_0_M_AXI_ARADDR),
        .S00_AXI_arburst(xdma_0_M_AXI_ARBURST),
        .S00_AXI_arcache(xdma_0_M_AXI_ARCACHE),
        .S00_AXI_arid(xdma_0_M_AXI_ARID),
        .S00_AXI_arlen(xdma_0_M_AXI_ARLEN),
        .S00_AXI_arlock(xdma_0_M_AXI_ARLOCK),
        .S00_AXI_arprot(xdma_0_M_AXI_ARPROT),
        .S00_AXI_arqos({1'b0,1'b0,1'b0,1'b0}),
        .S00_AXI_arready(xdma_0_M_AXI_ARREADY),
        .S00_AXI_arsize(xdma_0_M_AXI_ARSIZE),
        .S00_AXI_arvalid(xdma_0_M_AXI_ARVALID),
        .S00_AXI_awaddr(xdma_0_M_AXI_AWADDR),
        .S00_AXI_awburst(xdma_0_M_AXI_AWBURST),
        .S00_AXI_awcache(xdma_0_M_AXI_AWCACHE),
        .S00_AXI_awid(xdma_0_M_AXI_AWID),
        .S00_AXI_awlen(xdma_0_M_AXI_AWLEN),
        .S00_AXI_awlock(xdma_0_M_AXI_AWLOCK),
        .S00_AXI_awprot(xdma_0_M_AXI_AWPROT),
        .S00_AXI_awqos({1'b0,1'b0,1'b0,1'b0}),
        .S00_AXI_awready(xdma_0_M_AXI_AWREADY),
        .S00_AXI_awsize(xdma_0_M_AXI_AWSIZE),
        .S00_AXI_awvalid(xdma_0_M_AXI_AWVALID),
        .S00_AXI_bid(xdma_0_M_AXI_BID),
        .S00_AXI_bready(xdma_0_M_AXI_BREADY),
        .S00_AXI_bresp(xdma_0_M_AXI_BRESP),
        .S00_AXI_bvalid(xdma_0_M_AXI_BVALID),
        .S00_AXI_rdata(xdma_0_M_AXI_RDATA),
        .S00_AXI_rid(xdma_0_M_AXI_RID),
        .S00_AXI_rlast(xdma_0_M_AXI_RLAST),
        .S00_AXI_rready(xdma_0_M_AXI_RREADY),
        .S00_AXI_rresp(xdma_0_M_AXI_RRESP),
        .S00_AXI_rvalid(xdma_0_M_AXI_RVALID),
        .S00_AXI_wdata(xdma_0_M_AXI_WDATA),
        .S00_AXI_wlast(xdma_0_M_AXI_WLAST),
        .S00_AXI_wready(xdma_0_M_AXI_WREADY),
        .S00_AXI_wstrb(xdma_0_M_AXI_WSTRB),
        .S00_AXI_wvalid(xdma_0_M_AXI_WVALID),
        .S01_AXI_araddr(USR_AXI_M_1_ARADDR),
        .S01_AXI_arburst(USR_AXI_M_1_ARBURST),
        .S01_AXI_arcache(USR_AXI_M_1_ARCACHE),
        .S01_AXI_arid(USR_AXI_M_1_ARID),
        .S01_AXI_arlen(USR_AXI_M_1_ARLEN),
        .S01_AXI_arlock(USR_AXI_M_1_ARLOCK),
        .S01_AXI_arprot(USR_AXI_M_1_ARPROT),
        .S01_AXI_arqos(USR_AXI_M_1_ARQOS),
        .S01_AXI_arready(USR_AXI_M_1_ARREADY),
        .S01_AXI_arsize(USR_AXI_M_1_ARSIZE),
        .S01_AXI_arvalid(USR_AXI_M_1_ARVALID),
        .S01_AXI_awaddr(USR_AXI_M_1_AWADDR),
        .S01_AXI_awburst(USR_AXI_M_1_AWBURST),
        .S01_AXI_awcache(USR_AXI_M_1_AWCACHE),
        .S01_AXI_awid(USR_AXI_M_1_AWID),
        .S01_AXI_awlen(USR_AXI_M_1_AWLEN),
        .S01_AXI_awlock(USR_AXI_M_1_AWLOCK),
        .S01_AXI_awprot(USR_AXI_M_1_AWPROT),
        .S01_AXI_awqos(USR_AXI_M_1_AWQOS),
        .S01_AXI_awready(USR_AXI_M_1_AWREADY),
        .S01_AXI_awsize(USR_AXI_M_1_AWSIZE),
        .S01_AXI_awvalid(USR_AXI_M_1_AWVALID),
        .S01_AXI_bid(USR_AXI_M_1_BID),
        .S01_AXI_bready(USR_AXI_M_1_BREADY),
        .S01_AXI_bresp(USR_AXI_M_1_BRESP),
        .S01_AXI_bvalid(USR_AXI_M_1_BVALID),
        .S01_AXI_rdata(USR_AXI_M_1_RDATA),
        .S01_AXI_rid(USR_AXI_M_1_RID),
        .S01_AXI_rlast(USR_AXI_M_1_RLAST),
        .S01_AXI_rready(USR_AXI_M_1_RREADY),
        .S01_AXI_rresp(USR_AXI_M_1_RRESP),
        .S01_AXI_rvalid(USR_AXI_M_1_RVALID),
        .S01_AXI_wdata(USR_AXI_M_1_WDATA),
        .S01_AXI_wlast(USR_AXI_M_1_WLAST),
        .S01_AXI_wready(USR_AXI_M_1_WREADY),
        .S01_AXI_wstrb(USR_AXI_M_1_WSTRB),
        .S01_AXI_wvalid(USR_AXI_M_1_WVALID),
        .aclk(xdma_0_axi_aclk),
        .aclk1(ddr4_0_c0_ddr4_ui_clk),
        .aclk2(ddr4_1_c0_ddr4_ui_clk),
        .aresetn(xdma_0_axi_aresetn));
  u280_xdma_ddr4_0_1 ddr4_0
       (.c0_ddr4_act_n(ddr4_0_C0_DDR4_ACT_N),
        .c0_ddr4_adr(ddr4_0_C0_DDR4_ADR),
        .c0_ddr4_aresetn(rst_ddr4_0_300M_peripheral_aresetn),
        .c0_ddr4_ba(ddr4_0_C0_DDR4_BA),
        .c0_ddr4_bg(ddr4_0_C0_DDR4_BG),
        .c0_ddr4_ck_c(ddr4_0_C0_DDR4_CK_C),
        .c0_ddr4_ck_t(ddr4_0_C0_DDR4_CK_T),
        .c0_ddr4_cke(ddr4_0_C0_DDR4_CKE),
        .c0_ddr4_cs_n(ddr4_0_C0_DDR4_CS_N),
        .c0_ddr4_dq(ddr4_c0_dq[71:0]),
        .c0_ddr4_dqs_c(ddr4_c0_dqs_c[17:0]),
        .c0_ddr4_dqs_t(ddr4_c0_dqs_t[17:0]),
        .c0_ddr4_odt(ddr4_0_C0_DDR4_ODT),
        .c0_ddr4_parity(ddr4_0_C0_DDR4_PAR),
        .c0_ddr4_reset_n(ddr4_0_C0_DDR4_RESET_N),
        .c0_ddr4_s_axi_araddr(axi_smc_M00_AXI_ARADDR),
        .c0_ddr4_s_axi_arburst(axi_smc_M00_AXI_ARBURST),
        .c0_ddr4_s_axi_arcache(axi_smc_M00_AXI_ARCACHE),
        .c0_ddr4_s_axi_arid(1'b0),
        .c0_ddr4_s_axi_arlen(axi_smc_M00_AXI_ARLEN),
        .c0_ddr4_s_axi_arlock(axi_smc_M00_AXI_ARLOCK),
        .c0_ddr4_s_axi_arprot(axi_smc_M00_AXI_ARPROT),
        .c0_ddr4_s_axi_arqos(axi_smc_M00_AXI_ARQOS),
        .c0_ddr4_s_axi_arready(axi_smc_M00_AXI_ARREADY),
        .c0_ddr4_s_axi_arsize(axi_smc_M00_AXI_ARSIZE),
        .c0_ddr4_s_axi_arvalid(axi_smc_M00_AXI_ARVALID),
        .c0_ddr4_s_axi_awaddr(axi_smc_M00_AXI_AWADDR),
        .c0_ddr4_s_axi_awburst(axi_smc_M00_AXI_AWBURST),
        .c0_ddr4_s_axi_awcache(axi_smc_M00_AXI_AWCACHE),
        .c0_ddr4_s_axi_awid(1'b0),
        .c0_ddr4_s_axi_awlen(axi_smc_M00_AXI_AWLEN),
        .c0_ddr4_s_axi_awlock(axi_smc_M00_AXI_AWLOCK),
        .c0_ddr4_s_axi_awprot(axi_smc_M00_AXI_AWPROT),
        .c0_ddr4_s_axi_awqos(axi_smc_M00_AXI_AWQOS),
        .c0_ddr4_s_axi_awready(axi_smc_M00_AXI_AWREADY),
        .c0_ddr4_s_axi_awsize(axi_smc_M00_AXI_AWSIZE),
        .c0_ddr4_s_axi_awvalid(axi_smc_M00_AXI_AWVALID),
        .c0_ddr4_s_axi_bready(axi_smc_M00_AXI_BREADY),
        .c0_ddr4_s_axi_bresp(axi_smc_M00_AXI_BRESP),
        .c0_ddr4_s_axi_bvalid(axi_smc_M00_AXI_BVALID),
        .c0_ddr4_s_axi_ctrl_araddr(axi_smc_M01_AXI_ARADDR),
        .c0_ddr4_s_axi_ctrl_arready(axi_smc_M01_AXI_ARREADY),
        .c0_ddr4_s_axi_ctrl_arvalid(axi_smc_M01_AXI_ARVALID),
        .c0_ddr4_s_axi_ctrl_awaddr(axi_smc_M01_AXI_AWADDR),
        .c0_ddr4_s_axi_ctrl_awready(axi_smc_M01_AXI_AWREADY),
        .c0_ddr4_s_axi_ctrl_awvalid(axi_smc_M01_AXI_AWVALID),
        .c0_ddr4_s_axi_ctrl_bready(axi_smc_M01_AXI_BREADY),
        .c0_ddr4_s_axi_ctrl_bresp(axi_smc_M01_AXI_BRESP),
        .c0_ddr4_s_axi_ctrl_bvalid(axi_smc_M01_AXI_BVALID),
        .c0_ddr4_s_axi_ctrl_rdata(axi_smc_M01_AXI_RDATA),
        .c0_ddr4_s_axi_ctrl_rready(axi_smc_M01_AXI_RREADY),
        .c0_ddr4_s_axi_ctrl_rresp(axi_smc_M01_AXI_RRESP),
        .c0_ddr4_s_axi_ctrl_rvalid(axi_smc_M01_AXI_RVALID),
        .c0_ddr4_s_axi_ctrl_wdata(axi_smc_M01_AXI_WDATA),
        .c0_ddr4_s_axi_ctrl_wready(axi_smc_M01_AXI_WREADY),
        .c0_ddr4_s_axi_ctrl_wvalid(axi_smc_M01_AXI_WVALID),
        .c0_ddr4_s_axi_rdata(axi_smc_M00_AXI_RDATA),
        .c0_ddr4_s_axi_rlast(axi_smc_M00_AXI_RLAST),
        .c0_ddr4_s_axi_rready(axi_smc_M00_AXI_RREADY),
        .c0_ddr4_s_axi_rresp(axi_smc_M00_AXI_RRESP),
        .c0_ddr4_s_axi_rvalid(axi_smc_M00_AXI_RVALID),
        .c0_ddr4_s_axi_wdata(axi_smc_M00_AXI_WDATA),
        .c0_ddr4_s_axi_wlast(axi_smc_M00_AXI_WLAST),
        .c0_ddr4_s_axi_wready(axi_smc_M00_AXI_WREADY),
        .c0_ddr4_s_axi_wstrb(axi_smc_M00_AXI_WSTRB),
        .c0_ddr4_s_axi_wvalid(axi_smc_M00_AXI_WVALID),
        .c0_ddr4_ui_clk(ddr4_0_c0_ddr4_ui_clk),
        .c0_ddr4_ui_clk_sync_rst(ddr4_0_c0_ddr4_ui_clk_sync_rst),
        .c0_sys_clk_n(sysclk0_1_CLK_N),
        .c0_sys_clk_p(sysclk0_1_CLK_P),
        .sys_rst(resetn_inv_0_Res));
  u280_xdma_ddr4_1_0 ddr4_1
       (.c0_ddr4_act_n(ddr4_1_C0_DDR4_ACT_N),
        .c0_ddr4_adr(ddr4_1_C0_DDR4_ADR),
        .c0_ddr4_aresetn(rst_ddr4_1_300M_peripheral_aresetn),
        .c0_ddr4_ba(ddr4_1_C0_DDR4_BA),
        .c0_ddr4_bg(ddr4_1_C0_DDR4_BG),
        .c0_ddr4_ck_c(ddr4_1_C0_DDR4_CK_C),
        .c0_ddr4_ck_t(ddr4_1_C0_DDR4_CK_T),
        .c0_ddr4_cke(ddr4_1_C0_DDR4_CKE),
        .c0_ddr4_cs_n(ddr4_1_C0_DDR4_CS_N),
        .c0_ddr4_dq(ddr4_c1_dq[71:0]),
        .c0_ddr4_dqs_c(ddr4_c1_dqs_c[17:0]),
        .c0_ddr4_dqs_t(ddr4_c1_dqs_t[17:0]),
        .c0_ddr4_odt(ddr4_1_C0_DDR4_ODT),
        .c0_ddr4_parity(ddr4_1_C0_DDR4_PAR),
        .c0_ddr4_reset_n(ddr4_1_C0_DDR4_RESET_N),
        .c0_ddr4_s_axi_araddr(axi_smc_M02_AXI_ARADDR),
        .c0_ddr4_s_axi_arburst(axi_smc_M02_AXI_ARBURST),
        .c0_ddr4_s_axi_arcache(axi_smc_M02_AXI_ARCACHE),
        .c0_ddr4_s_axi_arid(1'b0),
        .c0_ddr4_s_axi_arlen(axi_smc_M02_AXI_ARLEN),
        .c0_ddr4_s_axi_arlock(axi_smc_M02_AXI_ARLOCK),
        .c0_ddr4_s_axi_arprot(axi_smc_M02_AXI_ARPROT),
        .c0_ddr4_s_axi_arqos(axi_smc_M02_AXI_ARQOS),
        .c0_ddr4_s_axi_arready(axi_smc_M02_AXI_ARREADY),
        .c0_ddr4_s_axi_arsize(axi_smc_M02_AXI_ARSIZE),
        .c0_ddr4_s_axi_arvalid(axi_smc_M02_AXI_ARVALID),
        .c0_ddr4_s_axi_awaddr(axi_smc_M02_AXI_AWADDR),
        .c0_ddr4_s_axi_awburst(axi_smc_M02_AXI_AWBURST),
        .c0_ddr4_s_axi_awcache(axi_smc_M02_AXI_AWCACHE),
        .c0_ddr4_s_axi_awid(1'b0),
        .c0_ddr4_s_axi_awlen(axi_smc_M02_AXI_AWLEN),
        .c0_ddr4_s_axi_awlock(axi_smc_M02_AXI_AWLOCK),
        .c0_ddr4_s_axi_awprot(axi_smc_M02_AXI_AWPROT),
        .c0_ddr4_s_axi_awqos(axi_smc_M02_AXI_AWQOS),
        .c0_ddr4_s_axi_awready(axi_smc_M02_AXI_AWREADY),
        .c0_ddr4_s_axi_awsize(axi_smc_M02_AXI_AWSIZE),
        .c0_ddr4_s_axi_awvalid(axi_smc_M02_AXI_AWVALID),
        .c0_ddr4_s_axi_bready(axi_smc_M02_AXI_BREADY),
        .c0_ddr4_s_axi_bresp(axi_smc_M02_AXI_BRESP),
        .c0_ddr4_s_axi_bvalid(axi_smc_M02_AXI_BVALID),
        .c0_ddr4_s_axi_ctrl_araddr(axi_smc_M03_AXI_ARADDR),
        .c0_ddr4_s_axi_ctrl_arready(axi_smc_M03_AXI_ARREADY),
        .c0_ddr4_s_axi_ctrl_arvalid(axi_smc_M03_AXI_ARVALID),
        .c0_ddr4_s_axi_ctrl_awaddr(axi_smc_M03_AXI_AWADDR),
        .c0_ddr4_s_axi_ctrl_awready(axi_smc_M03_AXI_AWREADY),
        .c0_ddr4_s_axi_ctrl_awvalid(axi_smc_M03_AXI_AWVALID),
        .c0_ddr4_s_axi_ctrl_bready(axi_smc_M03_AXI_BREADY),
        .c0_ddr4_s_axi_ctrl_bresp(axi_smc_M03_AXI_BRESP),
        .c0_ddr4_s_axi_ctrl_bvalid(axi_smc_M03_AXI_BVALID),
        .c0_ddr4_s_axi_ctrl_rdata(axi_smc_M03_AXI_RDATA),
        .c0_ddr4_s_axi_ctrl_rready(axi_smc_M03_AXI_RREADY),
        .c0_ddr4_s_axi_ctrl_rresp(axi_smc_M03_AXI_RRESP),
        .c0_ddr4_s_axi_ctrl_rvalid(axi_smc_M03_AXI_RVALID),
        .c0_ddr4_s_axi_ctrl_wdata(axi_smc_M03_AXI_WDATA),
        .c0_ddr4_s_axi_ctrl_wready(axi_smc_M03_AXI_WREADY),
        .c0_ddr4_s_axi_ctrl_wvalid(axi_smc_M03_AXI_WVALID),
        .c0_ddr4_s_axi_rdata(axi_smc_M02_AXI_RDATA),
        .c0_ddr4_s_axi_rlast(axi_smc_M02_AXI_RLAST),
        .c0_ddr4_s_axi_rready(axi_smc_M02_AXI_RREADY),
        .c0_ddr4_s_axi_rresp(axi_smc_M02_AXI_RRESP),
        .c0_ddr4_s_axi_rvalid(axi_smc_M02_AXI_RVALID),
        .c0_ddr4_s_axi_wdata(axi_smc_M02_AXI_WDATA),
        .c0_ddr4_s_axi_wlast(axi_smc_M02_AXI_WLAST),
        .c0_ddr4_s_axi_wready(axi_smc_M02_AXI_WREADY),
        .c0_ddr4_s_axi_wstrb(axi_smc_M02_AXI_WSTRB),
        .c0_ddr4_s_axi_wvalid(axi_smc_M02_AXI_WVALID),
        .c0_ddr4_ui_clk(ddr4_1_c0_ddr4_ui_clk),
        .c0_ddr4_ui_clk_sync_rst(ddr4_1_c0_ddr4_ui_clk_sync_rst),
        .c0_sys_clk_n(sysclk1_1_CLK_N),
        .c0_sys_clk_p(sysclk1_1_CLK_P),
        .sys_rst(resetn_inv_1_Res));
  u280_xdma_hbm_0_0 hbm_0
       (.APB_0_PCLK(clk_100MHz_1),
        .APB_0_PRESET_N(xlconstant_0_dout),
        .APB_1_PCLK(clk_100MHz_1),
        .APB_1_PRESET_N(xlconstant_0_dout),
        .AXI_00_ACLK(xdma_0_axi_aclk),
        .AXI_00_ARADDR(axi_smc_M04_AXI_ARADDR),
        .AXI_00_ARBURST(axi_smc_M04_AXI_ARBURST),
        .AXI_00_ARESET_N(xdma_0_axi_aresetn),
        .AXI_00_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_00_ARLEN(axi_smc_M04_AXI_ARLEN),
        .AXI_00_ARREADY(axi_smc_M04_AXI_ARREADY),
        .AXI_00_ARSIZE(axi_smc_M04_AXI_ARSIZE),
        .AXI_00_ARVALID(axi_smc_M04_AXI_ARVALID),
        .AXI_00_AWADDR(axi_smc_M04_AXI_AWADDR),
        .AXI_00_AWBURST(axi_smc_M04_AXI_AWBURST),
        .AXI_00_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_00_AWLEN(axi_smc_M04_AXI_AWLEN),
        .AXI_00_AWREADY(axi_smc_M04_AXI_AWREADY),
        .AXI_00_AWSIZE(axi_smc_M04_AXI_AWSIZE),
        .AXI_00_AWVALID(axi_smc_M04_AXI_AWVALID),
        .AXI_00_BREADY(axi_smc_M04_AXI_BREADY),
        .AXI_00_BRESP(axi_smc_M04_AXI_BRESP),
        .AXI_00_BVALID(axi_smc_M04_AXI_BVALID),
        .AXI_00_RDATA(axi_smc_M04_AXI_RDATA),
        .AXI_00_RLAST(axi_smc_M04_AXI_RLAST),
        .AXI_00_RREADY(axi_smc_M04_AXI_RREADY),
        .AXI_00_RRESP(axi_smc_M04_AXI_RRESP),
        .AXI_00_RVALID(axi_smc_M04_AXI_RVALID),
        .AXI_00_WDATA(axi_smc_M04_AXI_WDATA),
        .AXI_00_WDATA_PARITY({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_00_WLAST(axi_smc_M04_AXI_WLAST),
        .AXI_00_WREADY(axi_smc_M04_AXI_WREADY),
        .AXI_00_WSTRB(axi_smc_M04_AXI_WSTRB),
        .AXI_00_WVALID(axi_smc_M04_AXI_WVALID),
        .AXI_01_ACLK(xdma_0_axi_aclk),
        .AXI_01_ARADDR(axi_smc_M05_AXI_ARADDR),
        .AXI_01_ARBURST(axi_smc_M05_AXI_ARBURST),
        .AXI_01_ARESET_N(xdma_0_axi_aresetn),
        .AXI_01_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_01_ARLEN(axi_smc_M05_AXI_ARLEN),
        .AXI_01_ARREADY(axi_smc_M05_AXI_ARREADY),
        .AXI_01_ARSIZE(axi_smc_M05_AXI_ARSIZE),
        .AXI_01_ARVALID(axi_smc_M05_AXI_ARVALID),
        .AXI_01_AWADDR(axi_smc_M05_AXI_AWADDR),
        .AXI_01_AWBURST(axi_smc_M05_AXI_AWBURST),
        .AXI_01_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_01_AWLEN(axi_smc_M05_AXI_AWLEN),
        .AXI_01_AWREADY(axi_smc_M05_AXI_AWREADY),
        .AXI_01_AWSIZE(axi_smc_M05_AXI_AWSIZE),
        .AXI_01_AWVALID(axi_smc_M05_AXI_AWVALID),
        .AXI_01_BREADY(axi_smc_M05_AXI_BREADY),
        .AXI_01_BRESP(axi_smc_M05_AXI_BRESP),
        .AXI_01_BVALID(axi_smc_M05_AXI_BVALID),
        .AXI_01_RDATA(axi_smc_M05_AXI_RDATA),
        .AXI_01_RLAST(axi_smc_M05_AXI_RLAST),
        .AXI_01_RREADY(axi_smc_M05_AXI_RREADY),
        .AXI_01_RRESP(axi_smc_M05_AXI_RRESP),
        .AXI_01_RVALID(axi_smc_M05_AXI_RVALID),
        .AXI_01_WDATA(axi_smc_M05_AXI_WDATA),
        .AXI_01_WDATA_PARITY({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_01_WLAST(axi_smc_M05_AXI_WLAST),
        .AXI_01_WREADY(axi_smc_M05_AXI_WREADY),
        .AXI_01_WSTRB(axi_smc_M05_AXI_WSTRB),
        .AXI_01_WVALID(axi_smc_M05_AXI_WVALID),
        .AXI_02_ACLK(xdma_0_axi_aclk),
        .AXI_02_ARADDR(axi_smc_M06_AXI_ARADDR),
        .AXI_02_ARBURST(axi_smc_M06_AXI_ARBURST),
        .AXI_02_ARESET_N(xdma_0_axi_aresetn),
        .AXI_02_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_02_ARLEN(axi_smc_M06_AXI_ARLEN),
        .AXI_02_ARREADY(axi_smc_M06_AXI_ARREADY),
        .AXI_02_ARSIZE(axi_smc_M06_AXI_ARSIZE),
        .AXI_02_ARVALID(axi_smc_M06_AXI_ARVALID),
        .AXI_02_AWADDR(axi_smc_M06_AXI_AWADDR),
        .AXI_02_AWBURST(axi_smc_M06_AXI_AWBURST),
        .AXI_02_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_02_AWLEN(axi_smc_M06_AXI_AWLEN),
        .AXI_02_AWREADY(axi_smc_M06_AXI_AWREADY),
        .AXI_02_AWSIZE(axi_smc_M06_AXI_AWSIZE),
        .AXI_02_AWVALID(axi_smc_M06_AXI_AWVALID),
        .AXI_02_BREADY(axi_smc_M06_AXI_BREADY),
        .AXI_02_BRESP(axi_smc_M06_AXI_BRESP),
        .AXI_02_BVALID(axi_smc_M06_AXI_BVALID),
        .AXI_02_RDATA(axi_smc_M06_AXI_RDATA),
        .AXI_02_RLAST(axi_smc_M06_AXI_RLAST),
        .AXI_02_RREADY(axi_smc_M06_AXI_RREADY),
        .AXI_02_RRESP(axi_smc_M06_AXI_RRESP),
        .AXI_02_RVALID(axi_smc_M06_AXI_RVALID),
        .AXI_02_WDATA(axi_smc_M06_AXI_WDATA),
        .AXI_02_WDATA_PARITY({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_02_WLAST(axi_smc_M06_AXI_WLAST),
        .AXI_02_WREADY(axi_smc_M06_AXI_WREADY),
        .AXI_02_WSTRB(axi_smc_M06_AXI_WSTRB),
        .AXI_02_WVALID(axi_smc_M06_AXI_WVALID),
        .AXI_03_ACLK(xdma_0_axi_aclk),
        .AXI_03_ARADDR(axi_smc_M07_AXI_ARADDR),
        .AXI_03_ARBURST(axi_smc_M07_AXI_ARBURST),
        .AXI_03_ARESET_N(xdma_0_axi_aresetn),
        .AXI_03_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_03_ARLEN(axi_smc_M07_AXI_ARLEN),
        .AXI_03_ARREADY(axi_smc_M07_AXI_ARREADY),
        .AXI_03_ARSIZE(axi_smc_M07_AXI_ARSIZE),
        .AXI_03_ARVALID(axi_smc_M07_AXI_ARVALID),
        .AXI_03_AWADDR(axi_smc_M07_AXI_AWADDR),
        .AXI_03_AWBURST(axi_smc_M07_AXI_AWBURST),
        .AXI_03_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_03_AWLEN(axi_smc_M07_AXI_AWLEN),
        .AXI_03_AWREADY(axi_smc_M07_AXI_AWREADY),
        .AXI_03_AWSIZE(axi_smc_M07_AXI_AWSIZE),
        .AXI_03_AWVALID(axi_smc_M07_AXI_AWVALID),
        .AXI_03_BREADY(axi_smc_M07_AXI_BREADY),
        .AXI_03_BRESP(axi_smc_M07_AXI_BRESP),
        .AXI_03_BVALID(axi_smc_M07_AXI_BVALID),
        .AXI_03_RDATA(axi_smc_M07_AXI_RDATA),
        .AXI_03_RLAST(axi_smc_M07_AXI_RLAST),
        .AXI_03_RREADY(axi_smc_M07_AXI_RREADY),
        .AXI_03_RRESP(axi_smc_M07_AXI_RRESP),
        .AXI_03_RVALID(axi_smc_M07_AXI_RVALID),
        .AXI_03_WDATA(axi_smc_M07_AXI_WDATA),
        .AXI_03_WDATA_PARITY({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_03_WLAST(axi_smc_M07_AXI_WLAST),
        .AXI_03_WREADY(axi_smc_M07_AXI_WREADY),
        .AXI_03_WSTRB(axi_smc_M07_AXI_WSTRB),
        .AXI_03_WVALID(axi_smc_M07_AXI_WVALID),
        .AXI_16_ACLK(xdma_0_axi_aclk),
        .AXI_16_ARADDR(axi_smc_M08_AXI_ARADDR),
        .AXI_16_ARBURST(axi_smc_M08_AXI_ARBURST),
        .AXI_16_ARESET_N(xdma_0_axi_aresetn),
        .AXI_16_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_16_ARLEN(axi_smc_M08_AXI_ARLEN),
        .AXI_16_ARREADY(axi_smc_M08_AXI_ARREADY),
        .AXI_16_ARSIZE(axi_smc_M08_AXI_ARSIZE),
        .AXI_16_ARVALID(axi_smc_M08_AXI_ARVALID),
        .AXI_16_AWADDR(axi_smc_M08_AXI_AWADDR),
        .AXI_16_AWBURST(axi_smc_M08_AXI_AWBURST),
        .AXI_16_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_16_AWLEN(axi_smc_M08_AXI_AWLEN),
        .AXI_16_AWREADY(axi_smc_M08_AXI_AWREADY),
        .AXI_16_AWSIZE(axi_smc_M08_AXI_AWSIZE),
        .AXI_16_AWVALID(axi_smc_M08_AXI_AWVALID),
        .AXI_16_BREADY(axi_smc_M08_AXI_BREADY),
        .AXI_16_BRESP(axi_smc_M08_AXI_BRESP),
        .AXI_16_BVALID(axi_smc_M08_AXI_BVALID),
        .AXI_16_RDATA(axi_smc_M08_AXI_RDATA),
        .AXI_16_RLAST(axi_smc_M08_AXI_RLAST),
        .AXI_16_RREADY(axi_smc_M08_AXI_RREADY),
        .AXI_16_RRESP(axi_smc_M08_AXI_RRESP),
        .AXI_16_RVALID(axi_smc_M08_AXI_RVALID),
        .AXI_16_WDATA(axi_smc_M08_AXI_WDATA),
        .AXI_16_WDATA_PARITY({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_16_WLAST(axi_smc_M08_AXI_WLAST),
        .AXI_16_WREADY(axi_smc_M08_AXI_WREADY),
        .AXI_16_WSTRB(axi_smc_M08_AXI_WSTRB),
        .AXI_16_WVALID(axi_smc_M08_AXI_WVALID),
        .AXI_17_ACLK(xdma_0_axi_aclk),
        .AXI_17_ARADDR(axi_smc_M09_AXI_ARADDR),
        .AXI_17_ARBURST(axi_smc_M09_AXI_ARBURST),
        .AXI_17_ARESET_N(xdma_0_axi_aresetn),
        .AXI_17_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_17_ARLEN(axi_smc_M09_AXI_ARLEN),
        .AXI_17_ARREADY(axi_smc_M09_AXI_ARREADY),
        .AXI_17_ARSIZE(axi_smc_M09_AXI_ARSIZE),
        .AXI_17_ARVALID(axi_smc_M09_AXI_ARVALID),
        .AXI_17_AWADDR(axi_smc_M09_AXI_AWADDR),
        .AXI_17_AWBURST(axi_smc_M09_AXI_AWBURST),
        .AXI_17_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_17_AWLEN(axi_smc_M09_AXI_AWLEN),
        .AXI_17_AWREADY(axi_smc_M09_AXI_AWREADY),
        .AXI_17_AWSIZE(axi_smc_M09_AXI_AWSIZE),
        .AXI_17_AWVALID(axi_smc_M09_AXI_AWVALID),
        .AXI_17_BREADY(axi_smc_M09_AXI_BREADY),
        .AXI_17_BRESP(axi_smc_M09_AXI_BRESP),
        .AXI_17_BVALID(axi_smc_M09_AXI_BVALID),
        .AXI_17_RDATA(axi_smc_M09_AXI_RDATA),
        .AXI_17_RLAST(axi_smc_M09_AXI_RLAST),
        .AXI_17_RREADY(axi_smc_M09_AXI_RREADY),
        .AXI_17_RRESP(axi_smc_M09_AXI_RRESP),
        .AXI_17_RVALID(axi_smc_M09_AXI_RVALID),
        .AXI_17_WDATA(axi_smc_M09_AXI_WDATA),
        .AXI_17_WDATA_PARITY({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_17_WLAST(axi_smc_M09_AXI_WLAST),
        .AXI_17_WREADY(axi_smc_M09_AXI_WREADY),
        .AXI_17_WSTRB(axi_smc_M09_AXI_WSTRB),
        .AXI_17_WVALID(axi_smc_M09_AXI_WVALID),
        .AXI_18_ACLK(xdma_0_axi_aclk),
        .AXI_18_ARADDR(axi_smc_M10_AXI_ARADDR),
        .AXI_18_ARBURST(axi_smc_M10_AXI_ARBURST),
        .AXI_18_ARESET_N(xdma_0_axi_aresetn),
        .AXI_18_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_18_ARLEN(axi_smc_M10_AXI_ARLEN),
        .AXI_18_ARREADY(axi_smc_M10_AXI_ARREADY),
        .AXI_18_ARSIZE(axi_smc_M10_AXI_ARSIZE),
        .AXI_18_ARVALID(axi_smc_M10_AXI_ARVALID),
        .AXI_18_AWADDR(axi_smc_M10_AXI_AWADDR),
        .AXI_18_AWBURST(axi_smc_M10_AXI_AWBURST),
        .AXI_18_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_18_AWLEN(axi_smc_M10_AXI_AWLEN),
        .AXI_18_AWREADY(axi_smc_M10_AXI_AWREADY),
        .AXI_18_AWSIZE(axi_smc_M10_AXI_AWSIZE),
        .AXI_18_AWVALID(axi_smc_M10_AXI_AWVALID),
        .AXI_18_BREADY(axi_smc_M10_AXI_BREADY),
        .AXI_18_BRESP(axi_smc_M10_AXI_BRESP),
        .AXI_18_BVALID(axi_smc_M10_AXI_BVALID),
        .AXI_18_RDATA(axi_smc_M10_AXI_RDATA),
        .AXI_18_RLAST(axi_smc_M10_AXI_RLAST),
        .AXI_18_RREADY(axi_smc_M10_AXI_RREADY),
        .AXI_18_RRESP(axi_smc_M10_AXI_RRESP),
        .AXI_18_RVALID(axi_smc_M10_AXI_RVALID),
        .AXI_18_WDATA(axi_smc_M10_AXI_WDATA),
        .AXI_18_WDATA_PARITY({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_18_WLAST(axi_smc_M10_AXI_WLAST),
        .AXI_18_WREADY(axi_smc_M10_AXI_WREADY),
        .AXI_18_WSTRB(axi_smc_M10_AXI_WSTRB),
        .AXI_18_WVALID(axi_smc_M10_AXI_WVALID),
        .AXI_19_ACLK(xdma_0_axi_aclk),
        .AXI_19_ARADDR(axi_smc_M11_AXI_ARADDR),
        .AXI_19_ARBURST(axi_smc_M11_AXI_ARBURST),
        .AXI_19_ARESET_N(xdma_0_axi_aresetn),
        .AXI_19_ARID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_19_ARLEN(axi_smc_M11_AXI_ARLEN),
        .AXI_19_ARREADY(axi_smc_M11_AXI_ARREADY),
        .AXI_19_ARSIZE(axi_smc_M11_AXI_ARSIZE),
        .AXI_19_ARVALID(axi_smc_M11_AXI_ARVALID),
        .AXI_19_AWADDR(axi_smc_M11_AXI_AWADDR),
        .AXI_19_AWBURST(axi_smc_M11_AXI_AWBURST),
        .AXI_19_AWID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_19_AWLEN(axi_smc_M11_AXI_AWLEN),
        .AXI_19_AWREADY(axi_smc_M11_AXI_AWREADY),
        .AXI_19_AWSIZE(axi_smc_M11_AXI_AWSIZE),
        .AXI_19_AWVALID(axi_smc_M11_AXI_AWVALID),
        .AXI_19_BREADY(axi_smc_M11_AXI_BREADY),
        .AXI_19_BRESP(axi_smc_M11_AXI_BRESP),
        .AXI_19_BVALID(axi_smc_M11_AXI_BVALID),
        .AXI_19_RDATA(axi_smc_M11_AXI_RDATA),
        .AXI_19_RLAST(axi_smc_M11_AXI_RLAST),
        .AXI_19_RREADY(axi_smc_M11_AXI_RREADY),
        .AXI_19_RRESP(axi_smc_M11_AXI_RRESP),
        .AXI_19_RVALID(axi_smc_M11_AXI_RVALID),
        .AXI_19_WDATA(axi_smc_M11_AXI_WDATA),
        .AXI_19_WDATA_PARITY({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .AXI_19_WLAST(axi_smc_M11_AXI_WLAST),
        .AXI_19_WREADY(axi_smc_M11_AXI_WREADY),
        .AXI_19_WSTRB(axi_smc_M11_AXI_WSTRB),
        .AXI_19_WVALID(axi_smc_M11_AXI_WVALID),
        .HBM_REF_CLK_0(clk_100MHz_1),
        .HBM_REF_CLK_1(clk_100MHz_1));
  u280_xdma_ila_0_0 ila_0
       (.clk(xdma_0_axi_aclk),
        .probe0(xdma_0_M_AXI_WREADY),
        .probe1(xdma_0_M_AXI_AWADDR),
        .probe10(xdma_0_M_AXI_RDATA),
        .probe11(xdma_0_M_AXI_AWVALID),
        .probe12(xdma_0_M_AXI_AWREADY),
        .probe13(xdma_0_M_AXI_RRESP),
        .probe14(xdma_0_M_AXI_WDATA),
        .probe15(xdma_0_M_AXI_WSTRB),
        .probe16(xdma_0_M_AXI_RVALID),
        .probe17(xdma_0_M_AXI_ARPROT),
        .probe18(xdma_0_M_AXI_AWPROT),
        .probe19(xdma_0_M_AXI_AWID),
        .probe2(xdma_0_M_AXI_BRESP),
        .probe20(xdma_0_M_AXI_BID),
        .probe21(xdma_0_M_AXI_AWLEN),
        .probe22(1'b0),
        .probe23(xdma_0_M_AXI_AWSIZE),
        .probe24(xdma_0_M_AXI_AWBURST),
        .probe25(xdma_0_M_AXI_ARID),
        .probe26(xdma_0_M_AXI_AWLOCK),
        .probe27(xdma_0_M_AXI_ARLEN),
        .probe28(xdma_0_M_AXI_ARSIZE),
        .probe29(xdma_0_M_AXI_ARBURST),
        .probe3(xdma_0_M_AXI_BVALID),
        .probe30(xdma_0_M_AXI_ARLOCK),
        .probe31(xdma_0_M_AXI_ARCACHE),
        .probe32(xdma_0_M_AXI_AWCACHE),
        .probe33({1'b0,1'b0,1'b0,1'b0}),
        .probe34({1'b0,1'b0,1'b0,1'b0}),
        .probe35(1'b0),
        .probe36({1'b0,1'b0,1'b0,1'b0}),
        .probe37({1'b0,1'b0,1'b0,1'b0}),
        .probe38(xdma_0_M_AXI_RID),
        .probe39(1'b0),
        .probe4(xdma_0_M_AXI_BREADY),
        .probe40(xdma_0_M_AXI_RLAST),
        .probe41(1'b0),
        .probe42(xdma_0_M_AXI_WLAST),
        .probe43(1'b0),
        .probe5(xdma_0_M_AXI_ARADDR),
        .probe6(xdma_0_M_AXI_RREADY),
        .probe7(xdma_0_M_AXI_WVALID),
        .probe8(xdma_0_M_AXI_ARVALID),
        .probe9(xdma_0_M_AXI_ARREADY));
  u280_xdma_resetn_inv_0_1 resetn_inv_0
       (.Op1(resetn_1),
        .Res(resetn_inv_0_Res));
  u280_xdma_resetn_inv_1_0 resetn_inv_1
       (.Op1(resetn_2),
        .Res(resetn_inv_1_Res));
  u280_xdma_rst_ddr4_0_300M_1 rst_ddr4_0_300M
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(ddr4_0_c0_ddr4_ui_clk_sync_rst),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(rst_ddr4_0_300M_peripheral_aresetn),
        .slowest_sync_clk(ddr4_0_c0_ddr4_ui_clk));
  u280_xdma_rst_ddr4_0_300M_2 rst_ddr4_1_300M
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(ddr4_1_c0_ddr4_ui_clk_sync_rst),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(rst_ddr4_1_300M_peripheral_aresetn),
        .slowest_sync_clk(ddr4_1_c0_ddr4_ui_clk));
  u280_xdma_util_ds_buf_0 util_ds_buf
       (.IBUF_DS_N(pcie_refclk_1_CLK_N),
        .IBUF_DS_ODIV2(util_ds_buf_IBUF_DS_ODIV2),
        .IBUF_DS_P(pcie_refclk_1_CLK_P),
        .IBUF_OUT(util_ds_buf_IBUF_OUT));
  u280_xdma_util_ds_buf_0_0 util_ds_buf_0
       (.IBUF_DS_N(CLK_IN_D_0_1_CLK_N),
        .IBUF_DS_P(CLK_IN_D_0_1_CLK_P),
        .IBUF_OUT(clk_100MHz_1));
  u280_xdma_xdma_0_1 xdma_0
       (.axi_aclk(xdma_0_axi_aclk),
        .axi_aresetn(xdma_0_axi_aresetn),
        .m_axi_araddr(xdma_0_M_AXI_ARADDR),
        .m_axi_arburst(xdma_0_M_AXI_ARBURST),
        .m_axi_arcache(xdma_0_M_AXI_ARCACHE),
        .m_axi_arid(xdma_0_M_AXI_ARID),
        .m_axi_arlen(xdma_0_M_AXI_ARLEN),
        .m_axi_arlock(xdma_0_M_AXI_ARLOCK),
        .m_axi_arprot(xdma_0_M_AXI_ARPROT),
        .m_axi_arready(xdma_0_M_AXI_ARREADY),
        .m_axi_arsize(xdma_0_M_AXI_ARSIZE),
        .m_axi_arvalid(xdma_0_M_AXI_ARVALID),
        .m_axi_awaddr(xdma_0_M_AXI_AWADDR),
        .m_axi_awburst(xdma_0_M_AXI_AWBURST),
        .m_axi_awcache(xdma_0_M_AXI_AWCACHE),
        .m_axi_awid(xdma_0_M_AXI_AWID),
        .m_axi_awlen(xdma_0_M_AXI_AWLEN),
        .m_axi_awlock(xdma_0_M_AXI_AWLOCK),
        .m_axi_awprot(xdma_0_M_AXI_AWPROT),
        .m_axi_awready(xdma_0_M_AXI_AWREADY),
        .m_axi_awsize(xdma_0_M_AXI_AWSIZE),
        .m_axi_awvalid(xdma_0_M_AXI_AWVALID),
        .m_axi_bid(xdma_0_M_AXI_BID),
        .m_axi_bready(xdma_0_M_AXI_BREADY),
        .m_axi_bresp(xdma_0_M_AXI_BRESP),
        .m_axi_bvalid(xdma_0_M_AXI_BVALID),
        .m_axi_rdata(xdma_0_M_AXI_RDATA),
        .m_axi_rid(xdma_0_M_AXI_RID),
        .m_axi_rlast(xdma_0_M_AXI_RLAST),
        .m_axi_rready(xdma_0_M_AXI_RREADY),
        .m_axi_rresp(xdma_0_M_AXI_RRESP),
        .m_axi_rvalid(xdma_0_M_AXI_RVALID),
        .m_axi_wdata(xdma_0_M_AXI_WDATA),
        .m_axi_wlast(xdma_0_M_AXI_WLAST),
        .m_axi_wready(xdma_0_M_AXI_WREADY),
        .m_axi_wstrb(xdma_0_M_AXI_WSTRB),
        .m_axi_wvalid(xdma_0_M_AXI_WVALID),
        .m_axil_araddr(xdma_0_M_AXI_LITE_ARADDR),
        .m_axil_arprot(xdma_0_M_AXI_LITE_ARPROT),
        .m_axil_arready(xdma_0_M_AXI_LITE_ARREADY),
        .m_axil_arvalid(xdma_0_M_AXI_LITE_ARVALID),
        .m_axil_awaddr(xdma_0_M_AXI_LITE_AWADDR),
        .m_axil_awprot(xdma_0_M_AXI_LITE_AWPROT),
        .m_axil_awready(xdma_0_M_AXI_LITE_AWREADY),
        .m_axil_awvalid(xdma_0_M_AXI_LITE_AWVALID),
        .m_axil_bready(xdma_0_M_AXI_LITE_BREADY),
        .m_axil_bresp(xdma_0_M_AXI_LITE_BRESP),
        .m_axil_bvalid(xdma_0_M_AXI_LITE_BVALID),
        .m_axil_rdata(xdma_0_M_AXI_LITE_RDATA),
        .m_axil_rready(xdma_0_M_AXI_LITE_RREADY),
        .m_axil_rresp(xdma_0_M_AXI_LITE_RRESP),
        .m_axil_rvalid(xdma_0_M_AXI_LITE_RVALID),
        .m_axil_wdata(xdma_0_M_AXI_LITE_WDATA),
        .m_axil_wready(xdma_0_M_AXI_LITE_WREADY),
        .m_axil_wstrb(xdma_0_M_AXI_LITE_WSTRB),
        .m_axil_wvalid(xdma_0_M_AXI_LITE_WVALID),
        .pci_exp_rxn(xdma_0_pcie_mgt_rxn),
        .pci_exp_rxp(xdma_0_pcie_mgt_rxp),
        .pci_exp_txn(xdma_0_pcie_mgt_txn),
        .pci_exp_txp(xdma_0_pcie_mgt_txp),
        .sys_clk(util_ds_buf_IBUF_DS_ODIV2),
        .sys_clk_gt(util_ds_buf_IBUF_OUT),
        .sys_rst_n(pcie_perstn_1),
        .user_lnk_up(xdma_0_user_lnk_up),
        .usr_irq_ack(xdma_0_usr_irq_ack),
        .usr_irq_req(usr_irq_req_0_1));
  u280_xdma_xlconstant_0_0 xlconstant_0
       (.dout(xlconstant_0_dout));
endmodule
