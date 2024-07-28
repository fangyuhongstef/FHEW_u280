//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2022.2 (lin64) Build 3671981 Fri Oct 14 04:59:54 MDT 2022
//Date        : Wed Oct 11 14:38:38 2023
//Host        : tic-crypto-fpga running 64-bit Ubuntu 22.04.2 LTS
//Command     : generate_target u280_xdma_wrapper.bd
//Design      : u280_xdma_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module u280_xdma_wrapper
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
  input [0:0]HBM_CLK_IN_clk_n;
  input [0:0]HBM_CLK_IN_clk_p;
  output M_AXI_ACLK_0;
  output M_AXI_ARESETN_0;
  output [31:0]M_AXI_LITE_0_araddr;
  output [2:0]M_AXI_LITE_0_arprot;
  input M_AXI_LITE_0_arready;
  output M_AXI_LITE_0_arvalid;
  output [31:0]M_AXI_LITE_0_awaddr;
  output [2:0]M_AXI_LITE_0_awprot;
  input M_AXI_LITE_0_awready;
  output M_AXI_LITE_0_awvalid;
  output M_AXI_LITE_0_bready;
  input [1:0]M_AXI_LITE_0_bresp;
  input M_AXI_LITE_0_bvalid;
  input [31:0]M_AXI_LITE_0_rdata;
  output M_AXI_LITE_0_rready;
  input [1:0]M_AXI_LITE_0_rresp;
  input M_AXI_LITE_0_rvalid;
  output [31:0]M_AXI_LITE_0_wdata;
  input M_AXI_LITE_0_wready;
  output [3:0]M_AXI_LITE_0_wstrb;
  output M_AXI_LITE_0_wvalid;
  input [63:0]USR_AXI_M_araddr;
  input [1:0]USR_AXI_M_arburst;
  input [3:0]USR_AXI_M_arcache;
  input [3:0]USR_AXI_M_arid;
  input [7:0]USR_AXI_M_arlen;
  input [0:0]USR_AXI_M_arlock;
  input [2:0]USR_AXI_M_arprot;
  input [3:0]USR_AXI_M_arqos;
  output USR_AXI_M_arready;
  input [2:0]USR_AXI_M_arsize;
  input USR_AXI_M_arvalid;
  input [63:0]USR_AXI_M_awaddr;
  input [1:0]USR_AXI_M_awburst;
  input [3:0]USR_AXI_M_awcache;
  input [3:0]USR_AXI_M_awid;
  input [7:0]USR_AXI_M_awlen;
  input [0:0]USR_AXI_M_awlock;
  input [2:0]USR_AXI_M_awprot;
  input [3:0]USR_AXI_M_awqos;
  output USR_AXI_M_awready;
  input [2:0]USR_AXI_M_awsize;
  input USR_AXI_M_awvalid;
  output [3:0]USR_AXI_M_bid;
  input USR_AXI_M_bready;
  output [1:0]USR_AXI_M_bresp;
  output USR_AXI_M_bvalid;
  output [511:0]USR_AXI_M_rdata;
  output [3:0]USR_AXI_M_rid;
  output USR_AXI_M_rlast;
  input USR_AXI_M_rready;
  output [1:0]USR_AXI_M_rresp;
  output USR_AXI_M_rvalid;
  input [511:0]USR_AXI_M_wdata;
  input USR_AXI_M_wlast;
  output USR_AXI_M_wready;
  input [63:0]USR_AXI_M_wstrb;
  input USR_AXI_M_wvalid;
  output ddr4_c0_act_n;
  output [16:0]ddr4_c0_adr;
  output [1:0]ddr4_c0_ba;
  output [1:0]ddr4_c0_bg;
  output ddr4_c0_ck_c;
  output ddr4_c0_ck_t;
  output ddr4_c0_cke;
  output ddr4_c0_cs_n;
  inout [71:0]ddr4_c0_dq;
  inout [17:0]ddr4_c0_dqs_c;
  inout [17:0]ddr4_c0_dqs_t;
  output ddr4_c0_odt;
  output ddr4_c0_par;
  output ddr4_c0_reset_n;
  input ddr4_c0_resetn;
  input ddr4_c0_sysclk_clk_n;
  input ddr4_c0_sysclk_clk_p;
  output ddr4_c1_act_n;
  output [16:0]ddr4_c1_adr;
  output [1:0]ddr4_c1_ba;
  output [1:0]ddr4_c1_bg;
  output ddr4_c1_ck_c;
  output ddr4_c1_ck_t;
  output ddr4_c1_cke;
  output ddr4_c1_cs_n;
  inout [71:0]ddr4_c1_dq;
  inout [17:0]ddr4_c1_dqs_c;
  inout [17:0]ddr4_c1_dqs_t;
  output ddr4_c1_odt;
  output ddr4_c1_par;
  output ddr4_c1_reset_n;
  input ddr4_c1_resetn;
  input ddr4_c1_sysclk_clk_n;
  input ddr4_c1_sysclk_clk_p;
  input [15:0]pci_express_rxn;
  input [15:0]pci_express_rxp;
  output [15:0]pci_express_txn;
  output [15:0]pci_express_txp;
  input pcie_perstn;
  input pcie_refclk_clk_n;
  input pcie_refclk_clk_p;
  output user_lnk_up_0;
  output [7:0]usr_irq_ack_0;
  input [7:0]usr_irq_req_0;

  wire [0:0]HBM_CLK_IN_clk_n;
  wire [0:0]HBM_CLK_IN_clk_p;
  wire M_AXI_ACLK_0;
  wire M_AXI_ARESETN_0;
  wire [31:0]M_AXI_LITE_0_araddr;
  wire [2:0]M_AXI_LITE_0_arprot;
  wire M_AXI_LITE_0_arready;
  wire M_AXI_LITE_0_arvalid;
  wire [31:0]M_AXI_LITE_0_awaddr;
  wire [2:0]M_AXI_LITE_0_awprot;
  wire M_AXI_LITE_0_awready;
  wire M_AXI_LITE_0_awvalid;
  wire M_AXI_LITE_0_bready;
  wire [1:0]M_AXI_LITE_0_bresp;
  wire M_AXI_LITE_0_bvalid;
  wire [31:0]M_AXI_LITE_0_rdata;
  wire M_AXI_LITE_0_rready;
  wire [1:0]M_AXI_LITE_0_rresp;
  wire M_AXI_LITE_0_rvalid;
  wire [31:0]M_AXI_LITE_0_wdata;
  wire M_AXI_LITE_0_wready;
  wire [3:0]M_AXI_LITE_0_wstrb;
  wire M_AXI_LITE_0_wvalid;
  wire [63:0]USR_AXI_M_araddr;
  wire [1:0]USR_AXI_M_arburst;
  wire [3:0]USR_AXI_M_arcache;
  wire [3:0]USR_AXI_M_arid;
  wire [7:0]USR_AXI_M_arlen;
  wire [0:0]USR_AXI_M_arlock;
  wire [2:0]USR_AXI_M_arprot;
  wire [3:0]USR_AXI_M_arqos;
  wire USR_AXI_M_arready;
  wire [2:0]USR_AXI_M_arsize;
  wire USR_AXI_M_arvalid;
  wire [63:0]USR_AXI_M_awaddr;
  wire [1:0]USR_AXI_M_awburst;
  wire [3:0]USR_AXI_M_awcache;
  wire [3:0]USR_AXI_M_awid;
  wire [7:0]USR_AXI_M_awlen;
  wire [0:0]USR_AXI_M_awlock;
  wire [2:0]USR_AXI_M_awprot;
  wire [3:0]USR_AXI_M_awqos;
  wire USR_AXI_M_awready;
  wire [2:0]USR_AXI_M_awsize;
  wire USR_AXI_M_awvalid;
  wire [3:0]USR_AXI_M_bid;
  wire USR_AXI_M_bready;
  wire [1:0]USR_AXI_M_bresp;
  wire USR_AXI_M_bvalid;
  wire [511:0]USR_AXI_M_rdata;
  wire [3:0]USR_AXI_M_rid;
  wire USR_AXI_M_rlast;
  wire USR_AXI_M_rready;
  wire [1:0]USR_AXI_M_rresp;
  wire USR_AXI_M_rvalid;
  wire [511:0]USR_AXI_M_wdata;
  wire USR_AXI_M_wlast;
  wire USR_AXI_M_wready;
  wire [63:0]USR_AXI_M_wstrb;
  wire USR_AXI_M_wvalid;
  wire ddr4_c0_act_n;
  wire [16:0]ddr4_c0_adr;
  wire [1:0]ddr4_c0_ba;
  wire [1:0]ddr4_c0_bg;
  wire ddr4_c0_ck_c;
  wire ddr4_c0_ck_t;
  wire ddr4_c0_cke;
  wire ddr4_c0_cs_n;
  wire [71:0]ddr4_c0_dq;
  wire [17:0]ddr4_c0_dqs_c;
  wire [17:0]ddr4_c0_dqs_t;
  wire ddr4_c0_odt;
  wire ddr4_c0_par;
  wire ddr4_c0_reset_n;
  wire ddr4_c0_resetn;
  wire ddr4_c0_sysclk_clk_n;
  wire ddr4_c0_sysclk_clk_p;
  wire ddr4_c1_act_n;
  wire [16:0]ddr4_c1_adr;
  wire [1:0]ddr4_c1_ba;
  wire [1:0]ddr4_c1_bg;
  wire ddr4_c1_ck_c;
  wire ddr4_c1_ck_t;
  wire ddr4_c1_cke;
  wire ddr4_c1_cs_n;
  wire [71:0]ddr4_c1_dq;
  wire [17:0]ddr4_c1_dqs_c;
  wire [17:0]ddr4_c1_dqs_t;
  wire ddr4_c1_odt;
  wire ddr4_c1_par;
  wire ddr4_c1_reset_n;
  wire ddr4_c1_resetn;
  wire ddr4_c1_sysclk_clk_n;
  wire ddr4_c1_sysclk_clk_p;
  wire [15:0]pci_express_rxn;
  wire [15:0]pci_express_rxp;
  wire [15:0]pci_express_txn;
  wire [15:0]pci_express_txp;
  wire pcie_perstn;
  wire pcie_refclk_clk_n;
  wire pcie_refclk_clk_p;
  wire user_lnk_up_0;
  wire [7:0]usr_irq_ack_0;
  wire [7:0]usr_irq_req_0;

  u280_xdma u280_xdma_i
       (.HBM_CLK_IN_clk_n(HBM_CLK_IN_clk_n),
        .HBM_CLK_IN_clk_p(HBM_CLK_IN_clk_p),
        .M_AXI_ACLK_0(M_AXI_ACLK_0),
        .M_AXI_ARESETN_0(M_AXI_ARESETN_0),
        .M_AXI_LITE_0_araddr(M_AXI_LITE_0_araddr),
        .M_AXI_LITE_0_arprot(M_AXI_LITE_0_arprot),
        .M_AXI_LITE_0_arready(M_AXI_LITE_0_arready),
        .M_AXI_LITE_0_arvalid(M_AXI_LITE_0_arvalid),
        .M_AXI_LITE_0_awaddr(M_AXI_LITE_0_awaddr),
        .M_AXI_LITE_0_awprot(M_AXI_LITE_0_awprot),
        .M_AXI_LITE_0_awready(M_AXI_LITE_0_awready),
        .M_AXI_LITE_0_awvalid(M_AXI_LITE_0_awvalid),
        .M_AXI_LITE_0_bready(M_AXI_LITE_0_bready),
        .M_AXI_LITE_0_bresp(M_AXI_LITE_0_bresp),
        .M_AXI_LITE_0_bvalid(M_AXI_LITE_0_bvalid),
        .M_AXI_LITE_0_rdata(M_AXI_LITE_0_rdata),
        .M_AXI_LITE_0_rready(M_AXI_LITE_0_rready),
        .M_AXI_LITE_0_rresp(M_AXI_LITE_0_rresp),
        .M_AXI_LITE_0_rvalid(M_AXI_LITE_0_rvalid),
        .M_AXI_LITE_0_wdata(M_AXI_LITE_0_wdata),
        .M_AXI_LITE_0_wready(M_AXI_LITE_0_wready),
        .M_AXI_LITE_0_wstrb(M_AXI_LITE_0_wstrb),
        .M_AXI_LITE_0_wvalid(M_AXI_LITE_0_wvalid),
        .USR_AXI_M_araddr(USR_AXI_M_araddr),
        .USR_AXI_M_arburst(USR_AXI_M_arburst),
        .USR_AXI_M_arcache(USR_AXI_M_arcache),
        .USR_AXI_M_arid(USR_AXI_M_arid),
        .USR_AXI_M_arlen(USR_AXI_M_arlen),
        .USR_AXI_M_arlock(USR_AXI_M_arlock),
        .USR_AXI_M_arprot(USR_AXI_M_arprot),
        .USR_AXI_M_arqos(USR_AXI_M_arqos),
        .USR_AXI_M_arready(USR_AXI_M_arready),
        .USR_AXI_M_arsize(USR_AXI_M_arsize),
        .USR_AXI_M_arvalid(USR_AXI_M_arvalid),
        .USR_AXI_M_awaddr(USR_AXI_M_awaddr),
        .USR_AXI_M_awburst(USR_AXI_M_awburst),
        .USR_AXI_M_awcache(USR_AXI_M_awcache),
        .USR_AXI_M_awid(USR_AXI_M_awid),
        .USR_AXI_M_awlen(USR_AXI_M_awlen),
        .USR_AXI_M_awlock(USR_AXI_M_awlock),
        .USR_AXI_M_awprot(USR_AXI_M_awprot),
        .USR_AXI_M_awqos(USR_AXI_M_awqos),
        .USR_AXI_M_awready(USR_AXI_M_awready),
        .USR_AXI_M_awsize(USR_AXI_M_awsize),
        .USR_AXI_M_awvalid(USR_AXI_M_awvalid),
        .USR_AXI_M_bid(USR_AXI_M_bid),
        .USR_AXI_M_bready(USR_AXI_M_bready),
        .USR_AXI_M_bresp(USR_AXI_M_bresp),
        .USR_AXI_M_bvalid(USR_AXI_M_bvalid),
        .USR_AXI_M_rdata(USR_AXI_M_rdata),
        .USR_AXI_M_rid(USR_AXI_M_rid),
        .USR_AXI_M_rlast(USR_AXI_M_rlast),
        .USR_AXI_M_rready(USR_AXI_M_rready),
        .USR_AXI_M_rresp(USR_AXI_M_rresp),
        .USR_AXI_M_rvalid(USR_AXI_M_rvalid),
        .USR_AXI_M_wdata(USR_AXI_M_wdata),
        .USR_AXI_M_wlast(USR_AXI_M_wlast),
        .USR_AXI_M_wready(USR_AXI_M_wready),
        .USR_AXI_M_wstrb(USR_AXI_M_wstrb),
        .USR_AXI_M_wvalid(USR_AXI_M_wvalid),
        .ddr4_c0_act_n(ddr4_c0_act_n),
        .ddr4_c0_adr(ddr4_c0_adr),
        .ddr4_c0_ba(ddr4_c0_ba),
        .ddr4_c0_bg(ddr4_c0_bg),
        .ddr4_c0_ck_c(ddr4_c0_ck_c),
        .ddr4_c0_ck_t(ddr4_c0_ck_t),
        .ddr4_c0_cke(ddr4_c0_cke),
        .ddr4_c0_cs_n(ddr4_c0_cs_n),
        .ddr4_c0_dq(ddr4_c0_dq),
        .ddr4_c0_dqs_c(ddr4_c0_dqs_c),
        .ddr4_c0_dqs_t(ddr4_c0_dqs_t),
        .ddr4_c0_odt(ddr4_c0_odt),
        .ddr4_c0_par(ddr4_c0_par),
        .ddr4_c0_reset_n(ddr4_c0_reset_n),
        .ddr4_c0_resetn(ddr4_c0_resetn),
        .ddr4_c0_sysclk_clk_n(ddr4_c0_sysclk_clk_n),
        .ddr4_c0_sysclk_clk_p(ddr4_c0_sysclk_clk_p),
        .ddr4_c1_act_n(ddr4_c1_act_n),
        .ddr4_c1_adr(ddr4_c1_adr),
        .ddr4_c1_ba(ddr4_c1_ba),
        .ddr4_c1_bg(ddr4_c1_bg),
        .ddr4_c1_ck_c(ddr4_c1_ck_c),
        .ddr4_c1_ck_t(ddr4_c1_ck_t),
        .ddr4_c1_cke(ddr4_c1_cke),
        .ddr4_c1_cs_n(ddr4_c1_cs_n),
        .ddr4_c1_dq(ddr4_c1_dq),
        .ddr4_c1_dqs_c(ddr4_c1_dqs_c),
        .ddr4_c1_dqs_t(ddr4_c1_dqs_t),
        .ddr4_c1_odt(ddr4_c1_odt),
        .ddr4_c1_par(ddr4_c1_par),
        .ddr4_c1_reset_n(ddr4_c1_reset_n),
        .ddr4_c1_resetn(ddr4_c1_resetn),
        .ddr4_c1_sysclk_clk_n(ddr4_c1_sysclk_clk_n),
        .ddr4_c1_sysclk_clk_p(ddr4_c1_sysclk_clk_p),
        .pci_express_rxn(pci_express_rxn),
        .pci_express_rxp(pci_express_rxp),
        .pci_express_txn(pci_express_txn),
        .pci_express_txp(pci_express_txp),
        .pcie_perstn(pcie_perstn),
        .pcie_refclk_clk_n(pcie_refclk_clk_n),
        .pcie_refclk_clk_p(pcie_refclk_clk_p),
        .user_lnk_up_0(user_lnk_up_0),
        .usr_irq_ack_0(usr_irq_ack_0),
        .usr_irq_req_0(usr_irq_req_0));
endmodule
