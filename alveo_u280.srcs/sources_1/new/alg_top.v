`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/28/2023 03:08:32 PM
// Design Name: 
// Module Name: alg_top
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


module alg_top(
    //global      
    input               clk_sys      , 
    input               sys_rst      , 
    //cfg      
    input               alg_start    , 
    input               i_enc_sel    , 
    input   [127:0]     i_ukey       , 
    //ddr_ctrl
    input               ddr2alg_vld  , 
    output              alg2ddr_rdy  , 
    input   [127:0]     ddr2alg_data , 
    input               ddr2alg_rdy  , 
    output              alg2ddr_vld  , 
    output  [127:0]     alg2ddr_data
    );


//instans of sm4_top
SM4_CTRL u_sm4_ctrl (
    .clk_sys       (clk_sys      ),
    .a_rst         (sys_rst      ),
                                 
    .i_ukey_vld    (alg_start    ),
    .i_enc_sel     (i_enc_sel    ),
    .i_ukey        (i_ukey       ),
                   
    .i_msg_vld     (ddr2alg_vld  ),
    .i_msg         (ddr2alg_data ),
    .o_next_rdy    (alg2ddr_rdy  ),
                 
    .o_cypher_data (alg2ddr_data ),
    .o_cypher_rdy  (alg2ddr_vld  )
);

endmodule
