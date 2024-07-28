module alveo_u280_top
#(
    parameter                                            PCIE_WIDTH = 16              
)
(
    input                                                PCIE_PERSTN                 , // PCIE RESET-N
    input                                                PCIE_CLK1_N                 , // PCIE 100M REF CLK
    input                                                PCIE_CLK1_P                 , // PCIE 100M REF CLK

    input              [PCIE_WIDTH-1:0]                  pci_exp_rxn                 ,
    input              [PCIE_WIDTH-1:0]                  pci_exp_rxp                 ,
    output             [PCIE_WIDTH-1:0]                  pci_exp_txn                 ,
    output             [PCIE_WIDTH-1:0]                  pci_exp_txp                 ,

    input                                                SYS_CLK3_P                  , // HBM0 100M REF CLK
    input                                                SYS_CLK3_N                  , // HBM0 100M REF CLK

    input                                                SYS_CLK0_P                  , // DDR-C0 100M REF CLK
    input                                                SYS_CLK0_N                  , // DDR-C0 100M REF CLK
    output             [    0:0]                         c0_ddr4_ck_t                ,
    output             [    0:0]                         c0_ddr4_ck_c                ,
    output             [    0:0]                         c0_ddr4_cke                 ,
    output             [    0:0]                         c0_ddr4_cs_n                ,
    output             [    0:0]                         c0_ddr4_odt                 ,
    output             [    1:0]                         c0_ddr4_ba                  ,
    output             [    1:0]                         c0_ddr4_bg                  ,
    output                                               c0_ddr4_act_n               ,
    output                                               c0_ddr4_parity              ,
    output                                               c0_ddr4_reset_n             ,
    output             [   16:0]                         c0_ddr4_adr                 ,
    inout              [   17:0]                         c0_ddr4_dqs_t               ,
    inout              [   17:0]                         c0_ddr4_dqs_c               ,
    inout              [   71:0]                         c0_ddr4_dq                  ,

    input                                                SYS_CLK1_P                  , // DDR-C1 100M REF CLK
    input                                                SYS_CLK1_N                  , // DDR-C1 100M REF CLK
    output             [    0:0]                         c1_ddr4_ck_t                ,
    output             [    0:0]                         c1_ddr4_ck_c                ,
    output             [    0:0]                         c1_ddr4_cke                 ,
    output             [    0:0]                         c1_ddr4_cs_n                ,
    output             [    0:0]                         c1_ddr4_odt                 ,
    output             [    1:0]                         c1_ddr4_ba                  ,
    output             [    1:0]                         c1_ddr4_bg                  ,
    output                                               c1_ddr4_act_n               ,
    output                                               c1_ddr4_parity              ,
    output                                               c1_ddr4_reset_n             ,
    output             [   16:0]                         c1_ddr4_adr                 ,
    inout              [   17:0]                         c1_ddr4_dqs_t               ,
    inout              [   17:0]                         c1_ddr4_dqs_c               ,
    inout              [   71:0]                         c1_ddr4_dq                  
);

    wire                                          w_axi4_rst_n                ;
    wire                                          w_axi4_clk                  ;
    wire               [  15:0]                   w_axi4lite_awaddr           ;
    wire               [   2:0]                   w_axi4lite_awprot           ;
    wire                                          w_axi4lite_awvalid          ;
    wire                                          w_axi4lite_awready          ;
    wire               [  31:0]                   w_axi4lite_wdata            ;
    wire               [   3:0]                   w_axi4lite_wstrb            ;
    wire                                          w_axi4lite_wvalid           ;
    wire                                          w_axi4lite_wready           ;
    wire               [   1:0]                   w_axi4lite_bresp            ;
    wire                                          w_axi4lite_bvalid           ;
    wire                                          w_axi4lite_bready           ;
    wire               [  15:0]                   w_axi4lite_araddr           ;
    wire               [   2:0]                   w_axi4lite_arprot           ;
    wire                                          w_axi4lite_arvalid          ;
    wire                                          w_axi4lite_arready          ;
    wire               [  31:0]                   w_axi4lite_rdata            ;
    wire               [   1:0]                   w_axi4lite_rresp            ;
    wire                                          w_axi4lite_rvalid           ;
    wire                                          w_axi4lite_rready           ;

    wire               [  63:0]                   USR_AXI_M_araddr            ; 
    wire               [   1:0]                   USR_AXI_M_arburst           ; 
    wire               [   3:0]                   USR_AXI_M_arcache           ; 
    wire               [   3:0]                   USR_AXI_M_arid              ; 
    wire               [   7:0]                   USR_AXI_M_arlen             ; 
    wire               [   0:0]                   USR_AXI_M_arlock            ; 
    wire               [   2:0]                   USR_AXI_M_arprot            ; 
    wire               [   3:0]                   USR_AXI_M_arqos             ; 
    wire                                          USR_AXI_M_arready           ; 
    wire               [   2:0]                   USR_AXI_M_arsize            ; 
    wire                                          USR_AXI_M_arvalid           ; 
    wire               [  63:0]                   USR_AXI_M_awaddr            ; 
    wire               [   1:0]                   USR_AXI_M_awburst           ; 
    wire               [   3:0]                   USR_AXI_M_awcache           ; 
    wire               [   3:0]                   USR_AXI_M_awid              ; 
    wire               [   7:0]                   USR_AXI_M_awlen             ; 
    wire               [   0:0]                   USR_AXI_M_awlock            ; 
    wire               [   2:0]                   USR_AXI_M_awprot            ; 
    wire               [   3:0]                   USR_AXI_M_awqos             ; 
    wire                                          USR_AXI_M_awready           ; 
    wire               [   2:0]                   USR_AXI_M_awsize            ; 
    wire                                          USR_AXI_M_awvalid           ; 
    wire               [   3:0]                   USR_AXI_M_bid               ; 
    wire                                          USR_AXI_M_bready            ; 
    wire               [   1:0]                   USR_AXI_M_bresp             ; 
    wire                                          USR_AXI_M_bvalid            ; 
    wire               [ 511:0]                   USR_AXI_M_rdata             ; 
    wire               [   3:0]                   USR_AXI_M_rid               ; 
    wire                                          USR_AXI_M_rlast             ; 
    wire                                          USR_AXI_M_rready            ; 
    wire               [   1:0]                   USR_AXI_M_rresp             ; 
    wire                                          USR_AXI_M_rvalid            ; 
    wire               [ 511:0]                   USR_AXI_M_wdata             ; 
    wire                                          USR_AXI_M_wlast             ; 
    wire                                          USR_AXI_M_wready            ; 
    wire               [  63:0]                   USR_AXI_M_wstrb             ; 
    wire                                          USR_AXI_M_wvalid            ; 
  	wire 			   [  31:0]					  w_test_0					  ;
	wire 										  m00_axi_txn_done			  ;
	wire 										  m00_axi_error				  ;
    //ddr2alg
    wire              ddr2alg_vld              ;  
    wire              alg2ddr_rdy              ;  
    wire  [127:0]     ddr2alg_data             ;  
    wire              ddr2alg_rdy              ;  
    wire              alg2ddr_vld              ;  
    wire  [127:0]     alg2ddr_data             ;
    //cfg
    wire              alg_start                ; 
    wire              enc_sel                  ; 
    wire    [127:0]   ukey                     ; 
    wire     [27:0]   data_len                 ; 
    wire     [63:0]   ddr_write_base_addr      ; 
    wire     [63:0]   ddr_read_base_addr       ; 
    //burst_write
    wire              start_single_burst_write ; 
    wire              burst_wdata_next         ; 
    wire    [511:0]   ddr_write_data           ; 
    wire     [63:0]   m00_ddr_write_base_addr  ; 
    //burst_read
    wire              start_single_burst_read  ; 
    wire              burst_rdata_next         ; 
    wire    [511:0]   ddr_read_data            ; 
    wire     [63:0]   m00_ddr_read_base_addr   ;
    //int	
	wire int_flag;
    wire int_flag_clear;
    reg [7:0] usr_irq_req;
    wire [7:0] usr_irq_ack;

    always @( posedge w_axi4_clk ) begin
	   if ( w_axi4_rst_n == 1'b0)begin
	       usr_irq_req <= 8'b0;
	   end 
	   else if(int_flag_clear == 1'b1) begin
	       usr_irq_req <= 8'b0;
	   end
	   else if(int_flag == 1'b1)begin
	       usr_irq_req <= 8'b1; 
	   end

    end

int_ila_0 int_ila_0 (
	.clk(w_axi4_clk), // input wire clk

	.probe0(w_test_0[0]), // input wire [0:0]  probe0  
	.probe1(w_test_0[0]), // input wire [0:0]  probe1 
	.probe2(m00_axi_txn_done), // input wire [0:0]  probe2 
	.probe3(m00_axi_error), // input wire [0:0]  probe3 
	.probe4(usr_irq_req[0]) // input wire [0:0]  probe4
);

    u280_xdma_wrapper u_u280_xdma_wrapper(
        .pcie_perstn                       (PCIE_PERSTN                               ),
        .pcie_refclk_clk_n                 (PCIE_CLK1_N                               ),
        .pcie_refclk_clk_p                 (PCIE_CLK1_P                               ),
        .pci_express_rxn                   (pci_exp_rxn                               ),
        .pci_express_rxp                   (pci_exp_rxp                               ),
        .pci_express_txn                   (pci_exp_txn                               ),
        .pci_express_txp                   (pci_exp_txp                               ),
        .usr_irq_req_0                     (usr_irq_req                               ),
        .usr_irq_ack_0                     (usr_irq_ack                               ),
        .user_lnk_up_0                     (                                          ),

        .M_AXI_ARESETN_0                   (w_axi4_rst_n                              ),
        .M_AXI_ACLK_0                      (w_axi4_clk                                ),
        .M_AXI_LITE_0_araddr               (w_axi4lite_araddr                         ),
        .M_AXI_LITE_0_arprot               (w_axi4lite_arprot                         ),
        .M_AXI_LITE_0_arready              (w_axi4lite_arready                        ),
        .M_AXI_LITE_0_arvalid              (w_axi4lite_arvalid                        ),
        .M_AXI_LITE_0_awaddr               (w_axi4lite_awaddr                         ),
        .M_AXI_LITE_0_awprot               (w_axi4lite_awprot                         ),
        .M_AXI_LITE_0_awready              (w_axi4lite_awready                        ),
        .M_AXI_LITE_0_awvalid              (w_axi4lite_awvalid                        ),
        .M_AXI_LITE_0_bready               (w_axi4lite_bready                         ),
        .M_AXI_LITE_0_bresp                (w_axi4lite_bresp                          ),
        .M_AXI_LITE_0_bvalid               (w_axi4lite_bvalid                         ),
        .M_AXI_LITE_0_rdata                (w_axi4lite_rdata                          ),
        .M_AXI_LITE_0_rready               (w_axi4lite_rready                         ),
        .M_AXI_LITE_0_rresp                (w_axi4lite_rresp                          ),
        .M_AXI_LITE_0_rvalid               (w_axi4lite_rvalid                         ),
        .M_AXI_LITE_0_wdata                (w_axi4lite_wdata                          ),
        .M_AXI_LITE_0_wready               (w_axi4lite_wready                         ),
        .M_AXI_LITE_0_wstrb                (w_axi4lite_wstrb                          ),
        .M_AXI_LITE_0_wvalid               (w_axi4lite_wvalid                         ),

        .HBM_CLK_IN_clk_n                  (SYS_CLK3_N                                ),
        .HBM_CLK_IN_clk_p                  (SYS_CLK3_P                                ),
        .ddr4_c0_resetn                    (PCIE_PERSTN                               ),
        .ddr4_c0_sysclk_clk_n              (SYS_CLK0_N                                ),
        .ddr4_c0_sysclk_clk_p              (SYS_CLK0_P                                ),
        .ddr4_c0_act_n                     (c0_ddr4_act_n                             ),
        .ddr4_c0_adr                       (c0_ddr4_adr                               ),
        .ddr4_c0_ba                        (c0_ddr4_ba                                ),
        .ddr4_c0_bg                        (c0_ddr4_bg                                ),
        .ddr4_c0_ck_c                      (c0_ddr4_ck_c                              ),
        .ddr4_c0_ck_t                      (c0_ddr4_ck_t                              ),
        .ddr4_c0_cke                       (c0_ddr4_cke                               ),
        .ddr4_c0_cs_n                      (c0_ddr4_cs_n                              ),
        .ddr4_c0_dq                        (c0_ddr4_dq                                ),
        .ddr4_c0_dqs_c                     (c0_ddr4_dqs_c                             ),
        .ddr4_c0_dqs_t                     (c0_ddr4_dqs_t                             ),
        .ddr4_c0_odt                       (c0_ddr4_odt                               ),
        .ddr4_c0_par                       (c0_ddr4_parity                            ),
        .ddr4_c0_reset_n                   (c0_ddr4_reset_n                           ),

        .ddr4_c1_resetn                    (PCIE_PERSTN                               ),
        .ddr4_c1_sysclk_clk_n              (SYS_CLK1_N                                ),
        .ddr4_c1_sysclk_clk_p              (SYS_CLK1_P                                ),
        .ddr4_c1_act_n                     (c1_ddr4_act_n                             ),
        .ddr4_c1_adr                       (c1_ddr4_adr                               ),
        .ddr4_c1_ba                        (c1_ddr4_ba                                ),
        .ddr4_c1_bg                        (c1_ddr4_bg                                ),
        .ddr4_c1_ck_c                      (c1_ddr4_ck_c                              ),
        .ddr4_c1_ck_t                      (c1_ddr4_ck_t                              ),
        .ddr4_c1_cke                       (c1_ddr4_cke                               ),
        .ddr4_c1_cs_n                      (c1_ddr4_cs_n                              ),
        .ddr4_c1_dq                        (c1_ddr4_dq                                ),
        .ddr4_c1_dqs_c                     (c1_ddr4_dqs_c                             ),
        .ddr4_c1_dqs_t                     (c1_ddr4_dqs_t                             ),
        .ddr4_c1_odt                       (c1_ddr4_odt                               ),
        .ddr4_c1_par                       (c1_ddr4_parity                            ),
        .ddr4_c1_reset_n                   (c1_ddr4_reset_n                           ),
        
        .USR_AXI_M_araddr                  (USR_AXI_M_araddr                          ),
        .USR_AXI_M_arburst                 (USR_AXI_M_arburst                         ),
        .USR_AXI_M_arcache                 (USR_AXI_M_arcache                         ),
        .USR_AXI_M_arid                    (USR_AXI_M_arid                            ),
        .USR_AXI_M_arlen                   (USR_AXI_M_arlen                           ),
        .USR_AXI_M_arlock                  (USR_AXI_M_arlock                          ),
        .USR_AXI_M_arprot                  (USR_AXI_M_arprot                          ),
        .USR_AXI_M_arqos                   (USR_AXI_M_arqos                           ),
        .USR_AXI_M_arready                 (USR_AXI_M_arready                         ),
        .USR_AXI_M_arsize                  (USR_AXI_M_arsize                          ),
        .USR_AXI_M_arvalid                 (USR_AXI_M_arvalid                         ),
        .USR_AXI_M_awaddr                  (USR_AXI_M_awaddr                          ),
        .USR_AXI_M_awburst                 (USR_AXI_M_awburst                         ),
        .USR_AXI_M_awcache                 (USR_AXI_M_awcache                         ),
        .USR_AXI_M_awid                    (USR_AXI_M_awid                            ),
        .USR_AXI_M_awlen                   (USR_AXI_M_awlen                           ),
        .USR_AXI_M_awlock                  (USR_AXI_M_awlock                          ),
        .USR_AXI_M_awprot                  (USR_AXI_M_awprot                          ),
        .USR_AXI_M_awqos                   (USR_AXI_M_awqos                           ),
        .USR_AXI_M_awready                 (USR_AXI_M_awready                         ),
        .USR_AXI_M_awsize                  (USR_AXI_M_awsize                          ),
        .USR_AXI_M_awvalid                 (USR_AXI_M_awvalid                         ),
        .USR_AXI_M_bid                     (USR_AXI_M_bid                             ),
        .USR_AXI_M_bready                  (USR_AXI_M_bready                          ),
        .USR_AXI_M_bresp                   (USR_AXI_M_bresp                           ),
        .USR_AXI_M_bvalid                  (USR_AXI_M_bvalid                          ),
        .USR_AXI_M_rdata                   (USR_AXI_M_rdata                           ),
        .USR_AXI_M_rid                     (USR_AXI_M_rid                             ),
        .USR_AXI_M_rlast                   (USR_AXI_M_rlast                           ),
        .USR_AXI_M_rready                  (USR_AXI_M_rready                          ),
        .USR_AXI_M_rresp                   (USR_AXI_M_rresp                           ),
        .USR_AXI_M_rvalid                  (USR_AXI_M_rvalid                          ),
        .USR_AXI_M_wdata                   (USR_AXI_M_wdata                           ),
        .USR_AXI_M_wlast                   (USR_AXI_M_wlast                           ),
        .USR_AXI_M_wready                  (USR_AXI_M_wready                          ),
        .USR_AXI_M_wstrb                   (USR_AXI_M_wstrb                           ),
        .USR_AXI_M_wvalid                  (USR_AXI_M_wvalid                          )
    );


    axi4lite_reg #(
        .ADDR_WIDTH                        (16                              ),
        .DATA_WIDTH                        (32                              ) 
    ) u_axi4lite_reg (
        // axi4lite interface
        .i_axi_s_rst_n                     (w_axi4_rst_n                    ),
        .i_axi_s_clk                       (w_axi4_clk                      ),
        .i_axi_s_awaddr                    (w_axi4lite_awaddr               ),
        .i_axi_s_awprot                    (w_axi4lite_awprot               ),
        .i_axi_s_awvalid                   (w_axi4lite_awvalid              ),
        .o_axi_s_awready                   (w_axi4lite_awready              ),
        .i_axi_s_wdata                     (w_axi4lite_wdata                ),
        .i_axi_s_wstrb                     (w_axi4lite_wstrb                ),
        .i_axi_s_wvalid                    (w_axi4lite_wvalid               ),
        .o_axi_s_wready                    (w_axi4lite_wready               ),
        .o_axi_s_bresp                     (w_axi4lite_bresp                ),
        .o_axi_s_bvalid                    (w_axi4lite_bvalid               ),
        .i_axi_s_bready                    (w_axi4lite_bready               ),
        .i_axi_s_araddr                    (w_axi4lite_araddr               ),
        .i_axi_s_arprot                    (w_axi4lite_arprot               ),
        .i_axi_s_arvalid                   (w_axi4lite_arvalid              ),
        .o_axi_s_arready                   (w_axi4lite_arready              ),
        .o_axi_s_rdata                     (w_axi4lite_rdata                ),
        .o_axi_s_rresp                     (w_axi4lite_rresp                ),
        .o_axi_s_rvalid                    (w_axi4lite_rvalid               ),
        .i_axi_s_rready                    (w_axi4lite_rready               ),
        // user interface

    	.alg_start                         ( alg_start                     ),
    	.enc_sel                           ( enc_sel                       ),
    	.ukey                              ( ukey                          ),
    	.data_len                          ( data_len                      ),
    	.ddr_write_base_addr               ( ddr_write_base_addr           ),
    	.ddr_read_base_addr                ( ddr_read_base_addr            ),
 
        .o_test_0                          (w_test_0                        ),
        .o_test_1                          (w_test_1                        ),
        .o_test_2                          (w_test_2                        ),
        .o_test_3                          (w_test_3                        ),
        .o_test_4                          (w_test_4                        ),
        .o_test_5                          (w_test_5                        ),
        .o_test_6                          (w_test_6                        ),
        .o_test_7                          (w_test_7                        ),
        .o_int_flag                        (int_flag                        ),
        .o_int_flag_clear                  (int_flag_clear                  ),

        .i_data_0                          ({31'b0,m00_axi_txn_done}        ),
        .i_data_1                          ({31'b0,m00_axi_error}           ),
        .i_data_2                          (w_data_2                        ),
        .i_data_3                          (w_data_3                        ),
        .i_data_4                          (w_data_4                        ),
        .i_data_5                          (w_data_5                        ),
        .i_data_6                          (w_data_6                        ),
        .i_data_7                          (w_data_7                        )
    );

    ddr_ctrl_v1_0 u_axi_ctrl_v1_0 (
 
    	.m00_ddr_write_base_addr        ( m00_ddr_write_base_addr       ),
    	.m00_ddr_read_base_addr         ( m00_ddr_read_base_addr        ),
    	.start_single_burst_write       ( start_single_burst_write      ),
    	.burst_wdata_next               ( burst_wdata_next              ),
    	.ddr_write_data                 ( ddr_write_data                ),
    	.start_single_burst_read        ( start_single_burst_read       ),
    	.burst_rdata_next               ( burst_rdata_next              ),
    	.ddr_read_data                  ( ddr_read_data                 ),

    	.m00_axi_init_axi_txn			 (w_test_0[0]								),
    	.m00_axi_txn_done				 (m00_axi_txn_done							),
    	.m00_axi_error					 (m00_axi_error								),
    	.m00_axi_aclk					 (w_axi4_clk								),
    	.m00_axi_aresetn				 (w_axi4_rst_n								),
        .m00_axi_araddr                  (USR_AXI_M_araddr                          ),
        .m00_axi_arburst                 (USR_AXI_M_arburst                         ),
        .m00_axi_arcache                 (USR_AXI_M_arcache                         ),
        .m00_axi_arid                    (USR_AXI_M_arid                            ),
        .m00_axi_arlen                   (USR_AXI_M_arlen                           ),
        .m00_axi_arlock                  (USR_AXI_M_arlock                          ),
        .m00_axi_arprot                  (USR_AXI_M_arprot                          ),
        .m00_axi_arqos                   (USR_AXI_M_arqos                           ),
        .m00_axi_arready                 (USR_AXI_M_arready                         ),
        .m00_axi_arsize                  (USR_AXI_M_arsize                          ),
        .m00_axi_arvalid                 (USR_AXI_M_arvalid                         ),
        .m00_axi_awaddr                  (USR_AXI_M_awaddr                          ),
        .m00_axi_awburst                 (USR_AXI_M_awburst                         ),
        .m00_axi_awcache                 (USR_AXI_M_awcache                         ),
        .m00_axi_awid                    (USR_AXI_M_awid                            ),
        .m00_axi_awlen                   (USR_AXI_M_awlen                           ),
        .m00_axi_awlock                  (USR_AXI_M_awlock                          ),
        .m00_axi_awprot                  (USR_AXI_M_awprot                          ),
        .m00_axi_awqos                   (USR_AXI_M_awqos                           ),
        .m00_axi_awready                 (USR_AXI_M_awready                         ),
        .m00_axi_awsize                  (USR_AXI_M_awsize                          ),
        .m00_axi_awvalid                 (USR_AXI_M_awvalid                         ),
        .m00_axi_bid                     (USR_AXI_M_bid                             ),
        .m00_axi_bready                  (USR_AXI_M_bready                          ),
        .m00_axi_bresp                   (USR_AXI_M_bresp                           ),
        .m00_axi_bvalid                  (USR_AXI_M_bvalid                          ),
        .m00_axi_rdata                   (USR_AXI_M_rdata                           ),
        .m00_axi_rid                     (USR_AXI_M_rid                             ),
        .m00_axi_rlast                   (USR_AXI_M_rlast                           ),
        .m00_axi_rready                  (USR_AXI_M_rready                          ),
        .m00_axi_rresp                   (USR_AXI_M_rresp                           ),
        .m00_axi_rvalid                  (USR_AXI_M_rvalid                          ),
        .m00_axi_wdata                   (USR_AXI_M_wdata                           ),
        .m00_axi_wlast                   (USR_AXI_M_wlast                           ),
        .m00_axi_wready                  (USR_AXI_M_wready                          ),
        .m00_axi_wstrb                   (USR_AXI_M_wstrb                           ),
        .m00_axi_wvalid                  (USR_AXI_M_wvalid                          )
    );
  
	ddr_ctrl U_DDR_CTRL_0(
	    .clk_axi                        ( w_axi4_clk                    ),
	    .axi_rst                        ( ~w_axi4_rst_n                 ),
	    .clk_sys                        ( w_axi4_clk                    ),
	    .sys_rst                        ( ~w_axi4_rst_n                 ),
	    .alg_start                      ( alg_start                     ),
	    .data_len                       ( data_len                      ),
	  	.ddr_write_base_addr            ( ddr_write_base_addr           ),
    	.ddr_read_base_addr             ( ddr_read_base_addr            ),
        .ddr2alg_vld                    ( ddr2alg_vld                   ),
	    .alg2ddr_rdy                    ( alg2ddr_rdy                   ),
	    .ddr2alg_data                   ( ddr2alg_data                  ),
	    .ddr2alg_rdy                    ( ddr2alg_rdy                   ),
	    .alg2ddr_vld                    ( alg2ddr_vld                   ),
	    .alg2ddr_data                   ( alg2ddr_data                  ),
	    .start_single_burst_write       ( start_single_burst_write      ),
	    .burst_wdata_next               ( burst_wdata_next              ),
	    .ddr_write_data                 ( ddr_write_data                ),
	    .burst_write_base_addr          ( m00_ddr_write_base_addr       ),
	    .start_single_burst_read        ( start_single_burst_read       ),
	    .burst_rdata_next               ( burst_rdata_next              ),
	    .ddr_read_data                  ( ddr_read_data                 ),
	    .burst_read_base_addr           ( m00_ddr_read_base_addr        )
	);

	alg_top U_ALG_TOP_0(
	    .clk_sys                        ( w_axi4_clk                    ),
	    .sys_rst                        ( ~w_axi4_rst_n                 ),
	    .alg_start                      ( alg_start                     ),
	    .i_enc_sel                      ( enc_sel                       ),
	    .i_ukey                         ( ukey                          ),
	    .ddr2alg_vld                    ( ddr2alg_vld                   ),
	    .alg2ddr_rdy                    ( alg2ddr_rdy                   ),
	    .ddr2alg_data                   ( ddr2alg_data                  ),
	    .ddr2alg_rdy                    ( ddr2alg_rdy                   ),
	    .alg2ddr_vld                    ( alg2ddr_vld                   ),
	    .alg2ddr_data                   ( alg2ddr_data                  )
	);

endmodule
