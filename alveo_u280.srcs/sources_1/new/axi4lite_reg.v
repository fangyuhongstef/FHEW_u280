module axi4lite_reg
#(
    parameter                                     ADDR_WIDTH = 16            ,
    parameter                                     DATA_WIDTH = 32             
)
(
    // axi4lite salve interface
    input                                         i_axi_s_rst_n              ,
    input                                         i_axi_s_clk                ,

    input              [ADDR_WIDTH-1:0]           i_axi_s_awaddr             ,
    input              [   2:0]                   i_axi_s_awprot             ,// protect type
    input                                         i_axi_s_awvalid            ,
    output                                        o_axi_s_awready            ,
    input              [DATA_WIDTH-1:0]           i_axi_s_wdata              ,
    input              [(DATA_WIDTH/8)-1:0]       i_axi_s_wstrb              ,// byte write enable
    input                                         i_axi_s_wvalid             ,
    output                                        o_axi_s_wready             ,
    output             [   1:0]                   o_axi_s_bresp              ,// write response
    output                                        o_axi_s_bvalid             ,// write response valid
    input                                         i_axi_s_bready             ,// master accept a write response

    input              [ADDR_WIDTH-1:0]           i_axi_s_araddr             ,
    input              [   2:0]                   i_axi_s_arprot             ,
    input                                         i_axi_s_arvalid            ,
    output                                        o_axi_s_arready            ,
    output             [DATA_WIDTH-1:0]           o_axi_s_rdata              ,
    output             [   1:0]                   o_axi_s_rresp              ,// read response
    output                                        o_axi_s_rvalid             ,
    input                                         i_axi_s_rready             ,
    
    // user interface
    output                                        alg_start                 , 
    output                                        enc_sel                   , 
    output              [127:0]                   ukey                      , 
    output              [27:0]                    data_len                  , 
    output              [63:0]                    ddr_write_base_addr       , 
    output              [63:0]                    ddr_read_base_addr        ,  
      
    output reg         [DATA_WIDTH-1:0]           o_test_0                   ,
    output reg         [DATA_WIDTH-1:0]           o_test_1                   ,
    output reg         [DATA_WIDTH-1:0]           o_test_2                   ,
    output reg         [DATA_WIDTH-1:0]           o_test_3                   ,
    output reg         [DATA_WIDTH-1:0]           o_test_4                   ,
    output reg         [DATA_WIDTH-1:0]           o_test_5                   ,
    output reg         [DATA_WIDTH-1:0]           o_test_6                   ,
    output reg         [DATA_WIDTH-1:0]           o_test_7                   ,
    output o_int_flag,
    output o_int_flag_clear,
    
    input              [DATA_WIDTH-1:0]           i_data_0                   ,
    input              [DATA_WIDTH-1:0]           i_data_1                   ,
    input              [DATA_WIDTH-1:0]           i_data_2                   ,
    input              [DATA_WIDTH-1:0]           i_data_3                   ,
    input              [DATA_WIDTH-1:0]           i_data_4                   ,
    input              [DATA_WIDTH-1:0]           i_data_5                   ,
    input              [DATA_WIDTH-1:0]           i_data_6                   ,
    input              [DATA_WIDTH-1:0]           i_data_7                    
);
    // Example-specific design signals
    // local parameter for addressing 32 bit / 64 bit C_S_AXI_DATA_WIDTH
    // ADDR_LSB is used for addressing 32/64 bit registers/memories
    // ADDR_LSB = 2 for 32 bits (n downto 2)
    // ADDR_LSB = 3 for 64 bits (n downto 3)
    localparam                                    integer ADDR_LSB = (DATA_WIDTH/32) + 1;

    // AXI4LITE signals
    reg                [ADDR_WIDTH-1 : 0]         r_axi_awaddr               ;
    reg                                           r_axi_awready              ;
    reg                                           r_axi_wready               ;
    reg                [   1:0]                   r_axi_bresp                ;
    reg                                           r_axi_bvalid               ;

    reg                [ADDR_WIDTH-1 : 0]         r_axi_araddr               ;
    reg                                           r_axi_arready              ;
    reg                [DATA_WIDTH-1 : 0]         r_axi_rdata                ;
    reg                [   1:0]                   r_axi_rresp                ;
    reg                                           r_axi_rvalid               ;
    reg         [DATA_WIDTH-1:0]           o_test_8                   ;   
    //----------------------------------------------
    //-- Signals for user logic register space example
    //------------------------------------------------
    //-- Number of Slave Registers
    genvar                                        i                          ;
    wire                                          w_slv_reg_rden             ;
    wire                                          w_slv_reg_wren             ;
    reg                                           r_aw_en                    ;

    // user register


    /* -------------------------------------------------------------------- */
    assign o_axi_s_awready = r_axi_awready;
    assign o_axi_s_wready  = r_axi_wready;
    assign o_axi_s_bresp   = r_axi_bresp;
    assign o_axi_s_bvalid  = r_axi_bvalid;
    assign o_axi_s_arready = r_axi_arready;
    assign o_axi_s_rdata   = r_axi_rdata;
    assign o_axi_s_rresp   = r_axi_rresp;
    assign o_axi_s_rvalid  = r_axi_rvalid;

    assign w_slv_reg_wren = r_axi_wready && i_axi_s_wvalid && r_axi_awready && i_axi_s_awvalid;
    assign w_slv_reg_rden = r_axi_arready & i_axi_s_arvalid & ~r_axi_rvalid;

    // user interface


    /* -------------------------------------------------------------------- */
    /* write process */
    generate
    for(i=0; i<(DATA_WIDTH/8); i=i+1)
    begin:reg_write
    always@(posedge i_axi_s_clk)
    begin
        if(i_axi_s_rst_n == 1'b0)
        begin            
            o_test_0[(i+1)*8-1:i*8] <= 'd0;
            o_test_1[(i+1)*8-1:i*8] <= 'd0;
            o_test_2[(i+1)*8-1:i*8] <= 'd0;
            o_test_3[(i+1)*8-1:i*8] <= 'd0;
            o_test_4[(i+1)*8-1:i*8] <= 'd0;
            o_test_5[(i+1)*8-1:i*8] <= 'd0;
            o_test_6[(i+1)*8-1:i*8] <= 'd0;
            o_test_7[(i+1)*8-1:i*8] <= 'd0;
            o_test_8[(i+1)*8-1:i*8] <= 'd0;
        end
        else if(w_slv_reg_wren == 1'b1)
        begin
            case(r_axi_awaddr[ADDR_WIDTH-1:ADDR_LSB])

                'h40:o_test_0[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                'h41:o_test_1[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                'h42:o_test_2[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                'h43:o_test_3[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                'h80:o_test_4[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                'h81:o_test_5[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                'h82:o_test_6[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                'h83:o_test_7[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                'hC0:o_test_8[(i+1)*8-1:i*8] <= i_axi_s_wdata[(i+1)*8-1:i*8];
                default:;
            endcase
        end
    end
    end
    endgenerate

    assign o_int_flag       = w_slv_reg_wren & (r_axi_awaddr[ADDR_WIDTH-1:ADDR_LSB] == 'd0) & (i_axi_s_wdata[31:0] == 'h5a5a); 
    assign o_int_flag_clear = w_slv_reg_wren & (r_axi_awaddr[ADDR_WIDTH-1:ADDR_LSB] == 'd0) & (i_axi_s_wdata[31:0] == 'ha5a5); 

    assign ukey = {o_test_3,o_test_2,o_test_1,o_test_0};
    assign ddr_read_base_addr = {o_test_5,o_test_4};
    assign ddr_write_base_addr = {o_test_7,o_test_6};
    assign enc_sel = o_test_8[2];
    assign data_len = o_test_8[31:4];
    assign alg_start = w_slv_reg_wren & (r_axi_awaddr[ADDR_WIDTH-1:ADDR_LSB] == 'hC0);
    
    /* read process */
    always@(posedge i_axi_s_clk)
    begin
        if(i_axi_s_rst_n == 1'b0)
            r_axi_rdata <= 'd0;
        else if(w_slv_reg_rden == 1'b1)
        begin
            case(r_axi_araddr[ADDR_WIDTH-1:ADDR_LSB])

                'h00:r_axi_rdata <= 32'h2023_1019;
                'h01:r_axi_rdata <= 32'h0000_0001;
                'h02:r_axi_rdata <= 32'h000A_0001;
                'h03:r_axi_rdata <= 32'h000B_0002;
                'h04:r_axi_rdata <= 32'h000C_0003;
                'h05:r_axi_rdata <= 32'h000D_0004;
                'h06:r_axi_rdata <= 32'h000E_0005;
                'h07:r_axi_rdata <= 32'hFFFF_ABCD;


                'h40:r_axi_rdata <= o_test_0;
                'h41:r_axi_rdata <= o_test_1;
                'h42:r_axi_rdata <= o_test_2;
                'h43:r_axi_rdata <= o_test_3;
                'h80:r_axi_rdata <= o_test_4;
                'h81:r_axi_rdata <= o_test_5;
                'h82:r_axi_rdata <= o_test_6;
                'h83:r_axi_rdata <= o_test_7;
                'hC0:r_axi_rdata <= o_test_8;

                'h20:r_axi_rdata <= i_data_0;
                'h21:r_axi_rdata <= i_data_1;
                'h22:r_axi_rdata <= i_data_2;
                'h23:r_axi_rdata <= i_data_3;
                'h24:r_axi_rdata <= i_data_4;
                'h25:r_axi_rdata <= i_data_5;
                'h26:r_axi_rdata <= i_data_6;
                'h27:r_axi_rdata <= i_data_7;

                default:
                    r_axi_rdata[DATA_WIDTH-1:0] <= 32'hFFFF_FFFF;
            endcase
        end
    end


    /* -------------------------------------------------------------------- */
    /*
        @function:      Implement axi_awready generation
        @description:   none
        @parameter:     none
    */
    always@(posedge i_axi_s_clk)
    begin
        if(i_axi_s_rst_n == 1'b0)
        begin
            r_axi_awready <= 1'b0;
            r_aw_en <= 1'b1;
        end
        else
        begin
            if(~r_axi_awready && i_axi_s_awvalid && i_axi_s_wvalid && r_aw_en)
            begin
                r_axi_awready <= 1'b1;
                r_aw_en <= 1'b0;
            end
            else if(i_axi_s_bready && r_axi_bvalid)
            begin
                r_aw_en <= 1'b1;
                r_axi_awready <= 1'b0;
            end
            else
                r_axi_awready <= 1'b0;
        end
    end
    
    
    /*
        @function:      Implement axi_awaddr latching
        @description:   none
        @parameter:     none
    */
    always@(posedge i_axi_s_clk)
    begin
        if(i_axi_s_rst_n == 1'b0)
            r_axi_awaddr <= 'd0;
        else
            if (~r_axi_awready && i_axi_s_awvalid && i_axi_s_wvalid && r_aw_en)
                r_axi_awaddr <= i_axi_s_awaddr;                     // Write Address latching 
    end


    /*
        @function:      Implement axi_wready generation
        @description:   none
        @parameter:     none
    */
    always@(posedge i_axi_s_clk)
    begin
        if(i_axi_s_rst_n == 1'b0)
            r_axi_wready <= 1'b0;
        else
        begin
            if (~r_axi_wready && i_axi_s_wvalid && i_axi_s_awvalid && r_aw_en)
                // slave is ready to accept write data when 
                // there is a valid write address and write data
                // on the write address and data bus. This design 
                // expects no outstanding transactions. 
                r_axi_wready <= 1'b1;
            else
                r_axi_wready <= 1'b0;
        end
    end


    /*
        @function:      Implement write response logic generation
        @description:   none
        @parameter:     none
    */
    always@(posedge i_axi_s_clk)
    begin
        if(i_axi_s_rst_n == 1'b0)
        begin
            r_axi_bvalid <= 'd0;
            r_axi_bresp  <= 2'b0;
        end
        else
        begin
            if(r_axi_awready && i_axi_s_wvalid && ~r_axi_bvalid && r_axi_wready && i_axi_s_wvalid)
            begin
                // indicates a valid write response is available
                r_axi_bvalid <= 1'b1;
                r_axi_bresp  <= 2'b0;                               // 'OKAY' response, work error responses in future
            end
            else if (i_axi_s_bready && r_axi_bvalid)
                //check if bready is asserted while bvalid is high) 
                //(there is a possibility that bready is always asserted high)   
                r_axi_bvalid <= 1'b0;
        end
    end

    /* -------------------------------------------------------------------- */
    /*
        @function:      Implement axi_arready generation
        @description:   none
        @parameter:     none
    */
    always@(posedge i_axi_s_clk)
    begin
        if(i_axi_s_rst_n == 1'b0)
        begin
            r_axi_arready <= 1'b0;
            r_axi_araddr  <= 32'b0;
        end
        else
        begin
            if(~r_axi_arready && i_axi_s_arvalid)
            begin
                r_axi_arready <= 1'b1;                              // indicates that the slave has acceped the valid read address
                r_axi_araddr  <= i_axi_s_araddr;                    // Read address latching
            end
            else
                r_axi_arready <= 1'b0;
        end
    end


    /*
        @function:      Implement axi_arvalid generation
        @description:   none
        @parameter:     none
    */
    always@(posedge i_axi_s_clk)
    begin
        if(i_axi_s_rst_n == 1'b0)
        begin
            r_axi_rvalid <= 0;
            r_axi_rresp  <= 0;
        end
        else
        begin
            if(r_axi_arready && i_axi_s_arvalid && ~r_axi_rvalid)
            begin
                r_axi_rvalid <= 1'b1;                               // Valid read data is available at the read data bus
                r_axi_rresp  <= 2'b0;                               // 'OKAY' response
            end
            else if(r_axi_rvalid && i_axi_s_rready)
                r_axi_rvalid <= 1'b0;                               // Read data is accepted by the master
        end
    end

endmodule