################################################################################

# This XDC is used only for OOC mode of synthesis, implementation
# This constraints file contains default clock frequencies to be used during
# out-of-context flows such as OOC Synthesis and Hierarchical Designs.
# This constraints file is not used in normal top-down synthesis (default flow
# of Vivado)
################################################################################
create_clock -name ddr4_c0_sysclk_clk_p -period 10 [get_ports ddr4_c0_sysclk_clk_p]
create_clock -name pcie_refclk_clk_p -period 10 [get_ports pcie_refclk_clk_p]
create_clock -name ddr4_c1_sysclk_clk_p -period 10 [get_ports ddr4_c1_sysclk_clk_p]
create_clock -name HBM_CLK_IN_clk_p -period 10 [get_ports HBM_CLK_IN_clk_p]

################################################################################