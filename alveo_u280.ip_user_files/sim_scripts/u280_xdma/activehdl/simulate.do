onbreak {quit -force}
onerror {quit -force}

asim +access +r +m+u280_xdma  -L xilinx_vip -L xpm -L microblaze_v11_0_10 -L xil_defaultlib -L lib_cdc_v1_0_2 -L proc_sys_reset_v5_0_13 -L lmb_v10_v3_0_12 -L lmb_bram_if_cntlr_v4_0_21 -L blk_mem_gen_v8_4_5 -L iomodule_v3_1_8 -L gtwizard_ultrascale_v1_7_14 -L xdma_v4_1_20 -L xlconstant_v1_1_7 -L smartconnect_v1_0 -L axi_infrastructure_v1_1_0 -L axi_register_slice_v2_1_27 -L axi_vip_v1_1_13 -L util_vector_logic_v2_0_2 -L hbm_v1_0_13 -L xilinx_vip -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.u280_xdma xil_defaultlib.glbl

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure

do {u280_xdma.udo}

run

endsim

quit -force
