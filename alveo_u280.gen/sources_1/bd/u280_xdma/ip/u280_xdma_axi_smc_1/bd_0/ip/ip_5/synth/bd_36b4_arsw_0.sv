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


// IP VLNV: xilinx.com:ip:sc_switchboard:1.0
// IP Revision: 6

(* X_CORE_INFO = "sc_switchboard_v1_0_6_top,Vivado 2022.2" *)
(* CHECK_LICENSE_TYPE = "bd_36b4_arsw_0,sc_switchboard_v1_0_6_top,{}" *)
(* CORE_GENERATION_INFO = "bd_36b4_arsw_0,sc_switchboard_v1_0_6_top,{x_ipProduct=Vivado 2022.2,x_ipVendor=xilinx.com,x_ipLibrary=ip,x_ipName=sc_switchboard,x_ipVersion=1.0,x_ipCoreRevision=6,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_PAYLD_WIDTH=183,K_MAX_INFO_WIDTH=1,C_S_PIPELINES=0,C_M_PIPELINES=1,C_S_LATENCY=0,C_NUM_SI=2,C_NUM_MI=12,C_TESTING_MODE=0,C_CONNECTIVITY=0b111111111111111111111111}" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module bd_36b4_arsw_0 (
  aclk,
  aclken,
  s_sc_send,
  s_sc_req,
  s_sc_info,
  s_sc_payld,
  s_sc_recv,
  m_sc_recv,
  m_sc_send,
  m_sc_req,
  m_sc_info,
  m_sc_payld
);

(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME aclk, FREQ_HZ 250000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk, ASSOCIATED_BUSIF M00_SC:M01_SC:M02_SC:M03_SC:M04_SC:M05_SC:M06_SC:M07_SC:M08_SC:M09_SC:M10_SC:M11_SC:M12_SC:M13_SC:M14_SC:M15_SC:S00_SC:S01_SC:S02_SC:S03_SC:S04_SC:S05_SC:S06_SC:S07_SC:S08_SC:S09_SC:S10_SC:S11_SC:S12_SC:S13_SC:S14_SC:S15_SC, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 aclk CLK" *)
input wire aclk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME aclken, POLARITY ACTIVE_LOW" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clockenable:1.0 aclken CE" *)
input wire aclken;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 S00_SC SEND [11:0] [11:0], xilinx.com:interface:sc:1.0 S01_SC SEND [11:0] [23:12]" *)
input wire [23 : 0] s_sc_send;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 S00_SC REQ [11:0] [11:0], xilinx.com:interface:sc:1.0 S01_SC REQ [11:0] [23:12]" *)
input wire [23 : 0] s_sc_req;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 S00_SC INFO [11:0] [11:0], xilinx.com:interface:sc:1.0 S01_SC INFO [11:0] [23:12]" *)
input wire [23 : 0] s_sc_info;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 S00_SC PAYLD [182:0] [182:0], xilinx.com:interface:sc:1.0 S01_SC PAYLD [182:0] [365:183]" *)
input wire [365 : 0] s_sc_payld;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S00_SC, BRIDGES M00_SC:M01_SC:M02_SC:M03_SC:M04_SC:M05_SC:M06_SC:M07_SC:M08_SC:M09_SC:M10_SC:M11_SC:M12_SC:M13_SC:M14_SC:M15_SC, XIL_INTERFACENAME S01_SC, BRIDGES M00_SC:M01_SC:M02_SC:M03_SC:M04_SC:M05_SC:M06_SC:M07_SC:M08_SC:M09_SC:M10_SC:M11_SC:M12_SC:M13_SC:M14_SC:M15_SC" *)
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 S00_SC RECV [11:0] [11:0], xilinx.com:interface:sc:1.0 S01_SC RECV [11:0] [23:12]" *)
output wire [23 : 0] s_sc_recv;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 M00_SC RECV [1:0] [1:0], xilinx.com:interface:sc:1.0 M01_SC RECV [1:0] [3:2], xilinx.com:interface:sc:1.0 M02_SC RECV [1:0] [5:4], xilinx.com:interface:sc:1.0 M03_SC RECV [1:0] [7:6], xilinx.com:interface:sc:1.0 M04_SC RECV [1:0] [9:8], xilinx.com:interface:sc:1.0 M05_SC RECV [1:0] [11:10], xilinx.com:interface:sc:1.0 M06_SC RECV [1:0] [13:12], xilinx.com:interface:sc:1.0 M07_SC RECV [1:0] [15:14], xilinx.com:interface:sc:1.0 M08_SC RECV [1:0] [17:16], xilinx.com:inte\
rface:sc:1.0 M09_SC RECV [1:0] [19:18], xilinx.com:interface:sc:1.0 M10_SC RECV [1:0] [21:20], xilinx.com:interface:sc:1.0 M11_SC RECV [1:0] [23:22]" *)
input wire [23 : 0] m_sc_recv;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 M00_SC SEND [1:0] [1:0], xilinx.com:interface:sc:1.0 M01_SC SEND [1:0] [3:2], xilinx.com:interface:sc:1.0 M02_SC SEND [1:0] [5:4], xilinx.com:interface:sc:1.0 M03_SC SEND [1:0] [7:6], xilinx.com:interface:sc:1.0 M04_SC SEND [1:0] [9:8], xilinx.com:interface:sc:1.0 M05_SC SEND [1:0] [11:10], xilinx.com:interface:sc:1.0 M06_SC SEND [1:0] [13:12], xilinx.com:interface:sc:1.0 M07_SC SEND [1:0] [15:14], xilinx.com:interface:sc:1.0 M08_SC SEND [1:0] [17:16], xilinx.com:inte\
rface:sc:1.0 M09_SC SEND [1:0] [19:18], xilinx.com:interface:sc:1.0 M10_SC SEND [1:0] [21:20], xilinx.com:interface:sc:1.0 M11_SC SEND [1:0] [23:22]" *)
output wire [23 : 0] m_sc_send;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 M00_SC REQ [1:0] [1:0], xilinx.com:interface:sc:1.0 M01_SC REQ [1:0] [3:2], xilinx.com:interface:sc:1.0 M02_SC REQ [1:0] [5:4], xilinx.com:interface:sc:1.0 M03_SC REQ [1:0] [7:6], xilinx.com:interface:sc:1.0 M04_SC REQ [1:0] [9:8], xilinx.com:interface:sc:1.0 M05_SC REQ [1:0] [11:10], xilinx.com:interface:sc:1.0 M06_SC REQ [1:0] [13:12], xilinx.com:interface:sc:1.0 M07_SC REQ [1:0] [15:14], xilinx.com:interface:sc:1.0 M08_SC REQ [1:0] [17:16], xilinx.com:interface:sc:\
1.0 M09_SC REQ [1:0] [19:18], xilinx.com:interface:sc:1.0 M10_SC REQ [1:0] [21:20], xilinx.com:interface:sc:1.0 M11_SC REQ [1:0] [23:22]" *)
output wire [23 : 0] m_sc_req;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 M00_SC INFO [1:0] [1:0], xilinx.com:interface:sc:1.0 M01_SC INFO [1:0] [3:2], xilinx.com:interface:sc:1.0 M02_SC INFO [1:0] [5:4], xilinx.com:interface:sc:1.0 M03_SC INFO [1:0] [7:6], xilinx.com:interface:sc:1.0 M04_SC INFO [1:0] [9:8], xilinx.com:interface:sc:1.0 M05_SC INFO [1:0] [11:10], xilinx.com:interface:sc:1.0 M06_SC INFO [1:0] [13:12], xilinx.com:interface:sc:1.0 M07_SC INFO [1:0] [15:14], xilinx.com:interface:sc:1.0 M08_SC INFO [1:0] [17:16], xilinx.com:inte\
rface:sc:1.0 M09_SC INFO [1:0] [19:18], xilinx.com:interface:sc:1.0 M10_SC INFO [1:0] [21:20], xilinx.com:interface:sc:1.0 M11_SC INFO [1:0] [23:22]" *)
output wire [23 : 0] m_sc_info;
(* X_INTERFACE_INFO = "xilinx.com:interface:sc:1.0 M00_SC PAYLD [182:0] [182:0], xilinx.com:interface:sc:1.0 M01_SC PAYLD [182:0] [365:183], xilinx.com:interface:sc:1.0 M02_SC PAYLD [182:0] [548:366], xilinx.com:interface:sc:1.0 M03_SC PAYLD [182:0] [731:549], xilinx.com:interface:sc:1.0 M04_SC PAYLD [182:0] [914:732], xilinx.com:interface:sc:1.0 M05_SC PAYLD [182:0] [1097:915], xilinx.com:interface:sc:1.0 M06_SC PAYLD [182:0] [1280:1098], xilinx.com:interface:sc:1.0 M07_SC PAYLD [182:0] [1463:1281], xilinx.com:interf\
ace:sc:1.0 M08_SC PAYLD [182:0] [1646:1464], xilinx.com:interface:sc:1.0 M09_SC PAYLD [182:0] [1829:1647], xilinx.com:interface:sc:1.0 M10_SC PAYLD [182:0] [2012:1830], xilinx.com:interface:sc:1.0 M11_SC PAYLD [182:0] [2195:2013]" *)
output wire [2195 : 0] m_sc_payld;

  sc_switchboard_v1_0_6_top #(
    .C_PAYLD_WIDTH(183),
    .K_MAX_INFO_WIDTH(1),
    .C_S_PIPELINES(0),
    .C_M_PIPELINES(1),
    .C_S_LATENCY(0),
    .C_NUM_SI(2),
    .C_NUM_MI(12),
    .C_TESTING_MODE(0),
    .C_CONNECTIVITY(24'B111111111111111111111111)
  ) inst (
    .aclk(aclk),
    .aclken(aclken),
    .connectivity(24'B111111111111111111111111),
    .s_sc_send(s_sc_send),
    .s_sc_req(s_sc_req),
    .s_sc_info(s_sc_info),
    .s_sc_payld(s_sc_payld),
    .s_sc_recv(s_sc_recv),
    .m_sc_recv(m_sc_recv),
    .m_sc_send(m_sc_send),
    .m_sc_req(m_sc_req),
    .m_sc_info(m_sc_info),
    .m_sc_payld(m_sc_payld)
  );
endmodule
