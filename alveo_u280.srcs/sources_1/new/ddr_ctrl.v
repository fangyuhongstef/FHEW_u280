`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/28/2023 03:19:20 PM
// Design Name: 
// Module Name: ddr_ctrl
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ddr_ctrl
#(
	parameter DATA_WIDTH = 512,
              ADDR_WIDTH = 64 ,
              BURST_LEN = 64,
              BURST_SIZE_BYTES = BURST_LEN*DATA_WIDTH/8
)
(
  //axi inerface
  input                 clk_axi                  , 
  input                 axi_rst                  , 
  input                 clk_sys                  , 
  input                 sys_rst                  , 
  //cfg
  input                 alg_start                , 
  input     [31:0]      data_len                 , 
  input     [ADDR_WIDTH-1:0]  ddr_write_base_addr       , 
  input     [ADDR_WIDTH-1:0]  ddr_read_base_addr        , 
  //alg_top
  output                ddr2alg_vld              , 
  input                 alg2ddr_rdy              , 
  output    [127:0]     ddr2alg_data             , 
  output                ddr2alg_rdy              , 
  input                 alg2ddr_vld              , 
  input     [127:0]     alg2ddr_data             , 
  
  //burst_write
  output                start_single_burst_write , 
  input                 burst_wdata_next         , 
  output    [511:0]     ddr_write_data           ,
  output reg [ADDR_WIDTH-1:0] burst_write_base_addr  , 
  //burst_read
  output                start_single_burst_read  , 
  input                 burst_rdata_next         , 
  input     [511:0]     ddr_read_data            ,
  output [ADDR_WIDTH-1:0] burst_read_base_addr   
);

wire                alg_ddr_last      ; 
wire    [511:0]     fifo_wdata        ; 
wire                fifo_wren         ; 
wire                fifo_rd_ready_pos ; 
wire                fifo_0_wren       ; 
wire                fifo_1_wren       ; 
wire                fifo_0_rden       ; 
wire                fifo_1_rden       ; 
wire    [511:0]     fifo_0_rdata      ; 
wire    [511:0]     fifo_1_rdata      ; 
reg     [31:0]      alg2ddr_cnt       ; 
reg     [511:0]     alg2ddr_data_buf  ; 
reg     [5:0]       fifo_wr_cnt       ;
reg     [5:0]       fifo_rd_cnt       ; 
reg                 fifo_rd_ready     ; 
reg     [3:0]       fifo_rd_ready_buf ; 
reg                 fifo_rden         ; 
reg     [511:0]     fifo_rdata_buf    ; 
reg                 fifo_rd_ready_pos_1dly ; 
reg                 fifo_0_rd_en_1dly ; 
reg                 fifo_1_rd_en_1dly ; 
reg                 wr_fifo_change    ; 
reg                 rd_fifo_change    ; 


//s2p:128bit->512bit
always @(posedge clk_sys or posedge sys_rst) begin
   	if (sys_rst == 1'b1)begin
       	alg2ddr_cnt <= 32'b0;
   	end 
   	else if(alg_start == 1'b1) begin
        alg2ddr_cnt <= 32'b0;
   	end
   	else if(alg2ddr_vld & ddr2alg_rdy)begin
		if(alg2ddr_cnt == data_len)begin
        	alg2ddr_cnt <= 32'b0; 
   		end
		else begin
			alg2ddr_cnt <= alg2ddr_cnt + 1'b1;
		end
   	end
	else;
end
always @(posedge clk_sys) begin
   	if(alg_start == 1'b1) begin
        alg2ddr_data_buf <= 'b0;
   	end
   	else if(alg2ddr_vld & ddr2alg_rdy)begin
		if(alg2ddr_cnt[1:0] == 2'b0)begin
        	alg2ddr_data_buf <= {128'b0,128'b0,128'b0,alg2ddr_data}; 
   		end
		else begin
			alg2ddr_data_buf <= {alg2ddr_data_buf[128*3-1:128],alg2ddr_data};
		end
   	end
	else;
end
assign alg_ddr_last = alg2ddr_vld & ddr2alg_rdy & (alg2ddr_cnt == data_len); 
//fifo wr ping pang
assign fifo_wren = (alg2ddr_vld & ddr2alg_rdy & (alg2ddr_cnt[1:0] == 2'b0)) | alg_ddr_last;
assign fifo_wdata = alg2ddr_data_buf[511:0]; 

always @(posedge clk_sys or posedge sys_rst) begin
   	if (sys_rst == 1'b1)begin
       	fifo_wr_cnt <= 6'b0;
   	end 
   	else if(alg_start == 1'b1) begin
        fifo_wr_cnt <= 6'b0;
   	end
   	else if(fifo_wren)begin
        fifo_wr_cnt <= fifo_wr_cnt + 1'b1;
   	end
	else;
end
//fifo rd
always @(posedge clk_sys or posedge sys_rst) begin
   	if (sys_rst == 1'b1)begin
       	fifo_rd_ready <= 1'b0;
   	end 
   	else if(wr_fifo_change == 1'b1) begin
        fifo_rd_ready <= 1'b1;
   	end
   	else if(fifo_wr_cnt[5:0] == 6'd20)begin//to do 
        fifo_rd_ready <= 1'b0;
   	end
	else;
end
always @(posedge clk_axi or posedge axi_rst) begin
   	if (axi_rst == 1'b1)begin
       	fifo_rd_ready_buf <= 4'b0;
   	end 
   	else begin
        fifo_rd_ready_buf <= {fifo_rd_ready_buf[3:0],fifo_rd_ready};
   	end
end
assign fifo_rd_ready_pos = (~fifo_rd_ready_buf[3]) & fifo_rd_ready_buf[2];
always @(posedge clk_axi or posedge axi_rst) begin
   	if (axi_rst == 1'b1)begin
       	fifo_rden <= 1'b0;
   	end 
   	else if(fifo_rd_ready_pos | burst_wdata_next)begin
        fifo_rden <= 1'b1;
   	end
   	else begin
        fifo_rden <= 1'b0;
   	end
end
always @(posedge clk_axi or posedge axi_rst) begin
   	if (axi_rst == 1'b1)begin
       	fifo_rd_ready_pos_1dly   <= 1'b0;
       	fifo_0_rd_en_1dly <= 1'b0;
        fifo_1_rd_en_1dly <= 1'b0;
   	end 
   	else begin
        fifo_rd_ready_pos_1dly   <= fifo_rd_ready_pos;
        fifo_0_rd_en_1dly <= fifo_0_rden;
        fifo_1_rd_en_1dly <= fifo_1_rden;
   	end
end
always @(posedge clk_axi) begin
   	if(fifo_0_rd_en_1dly == 1'b1)begin
        fifo_rdata_buf <= fifo_0_rdata;
   	end
   	else if(fifo_1_rd_en_1dly == 1'b1)begin
        fifo_rdata_buf <= fifo_1_rdata;
   	end
   	else;
end
assign start_single_burst_write = fifo_rd_ready_pos_1dly; 
assign ddr_write_data = fifo_rdata_buf;
always @(posedge clk_axi or posedge axi_rst) begin
   	if (axi_rst == 1'b1)begin
       	fifo_rd_cnt <= 6'b0;
   	end 
   	else if(alg_start == 1'b1) begin
        fifo_rd_cnt <= 6'b0;
   	end
   	else if(fifo_rden)begin
        fifo_rd_cnt <= fifo_rd_cnt + 1'b1;
   	end
	else;
end

always @(posedge clk_axi or posedge axi_rst) begin
   	if (axi_rst == 1'b1)begin
       	burst_write_base_addr <= 'b0;
   	end 
   	else if(alg_start == 1'b1)begin
        burst_write_base_addr <= 'b0;
   	end
   	else if(fifo_rd_cnt == 6'h3f)begin
        burst_write_base_addr <= burst_write_base_addr + BURST_SIZE_BYTES;
   	end
end

//ping pang
always @(posedge clk_sys or posedge sys_rst) begin
   	if (sys_rst == 1'b1)begin
       	wr_fifo_change <= 1'b0;
   	end 
   	else if(fifo_wr_cnt[5:0] == 6'd0)begin
        wr_fifo_change <= ~wr_fifo_change;
   	end
   	else; 
end
always @(posedge clk_axi or posedge axi_rst) begin
   	if (axi_rst == 1'b1)begin
       	rd_fifo_change <= 1'b0;
   	end 
   	else if(fifo_rd_ready_pos == 1'd1)begin
        rd_fifo_change <= ~rd_fifo_change;
   	end
   	else; 
end
assign fifo_0_wren = fifo_wren &   wr_fifo_change ;
assign fifo_1_wren = fifo_wren & (~wr_fifo_change);
assign fifo_0_rden = fifo_rden & (~rd_fifo_change);
assign fifo_1_rden = fifo_rden &   rd_fifo_change ;

afifo_ddr_burst write_fifo_0 (
  .rst         ( sys_rst    ) , // input wire rst
  .wr_clk      ( sys_clk    ) , // input wire wr_clk
  .rd_clk      ( axi_clk    ) , // input wire rd_clk
  .din         ( fifo_wdata ) , // input wire [511 : 0] din
  .wr_en       ( fifo_0_wren  ) , // input wire wr_en
  .rd_en       ( fifo_0_rden  ) , // input wire rd_en
  .dout        ( fifo_0_rdata ) , // output wire [511 : 0] dout
  .full        (            ) , // output wire full
  .empty       (            ) , // output wire empty
  .wr_rst_busy (            ) , // output wire wr_rst_busy
  .rd_rst_busy (            )   // output wire rd_rst_busy
);

afifo_ddr_burst write_fifo_1 (
  .rst         ( sys_rst    ) , // input wire rst
  .wr_clk      ( sys_clk    ) , // input wire wr_clk
  .rd_clk      ( axi_clk    ) , // input wire rd_clk
  .din         ( fifo_wdata ) , // input wire [511 : 0] din
  .wr_en       ( fifo_1_wren  ) , // input wire wr_en
  .rd_en       ( fifo_1_rden  ) , // input wire rd_en
  .dout        ( fifo_1_rdata ) , // output wire [511 : 0] dout
  .full        (            ) , // output wire full
  .empty       (            ) , // output wire empty
  .wr_rst_busy (            ) , // output wire wr_rst_busy
  .rd_rst_busy (            )   // output wire rd_rst_busy
);


//ddr2alg



endmodule
