onbreak {quit -force}
onerror {quit -force}

asim +access +r +m+afifo_ddr_burst  -L xilinx_vip -L xpm -L fifo_generator_v13_2_7 -L xil_defaultlib -L xilinx_vip -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.afifo_ddr_burst xil_defaultlib.glbl

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure

do {afifo_ddr_burst.udo}

run

endsim

quit -force
