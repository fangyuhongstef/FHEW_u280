# aclk {FREQ_HZ 250000000 CLK_DOMAIN u280_xdma_xdma_0_1_axi_aclk PHASE 0.0} aclk1 {FREQ_HZ 300000000 CLK_DOMAIN u280_xdma_ddr4_0_1_c0_ddr4_ui_clk PHASE 0.00} aclk2 {FREQ_HZ 300000000 CLK_DOMAIN u280_xdma_ddr4_1_0_c0_ddr4_ui_clk PHASE 0.00}
# Clock Domain: u280_xdma_xdma_0_1_axi_aclk
create_clock -name aclk -period 4.000 [get_ports aclk]
# Clock Domain: u280_xdma_ddr4_0_1_c0_ddr4_ui_clk
create_clock -name aclk1 -period 3.333 [get_ports aclk1]
# Clock Domain: u280_xdma_ddr4_1_0_c0_ddr4_ui_clk
create_clock -name aclk2 -period 3.333 [get_ports aclk2]
# Generated clocks
