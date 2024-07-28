onbreak {quit -force}
onerror {quit -force}

asim +access +r +m+int_ila_0  -L xilinx_vip -L xpm -L xil_defaultlib -L xilinx_vip -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.int_ila_0 xil_defaultlib.glbl

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure

do {int_ila_0.udo}

run

endsim

quit -force
