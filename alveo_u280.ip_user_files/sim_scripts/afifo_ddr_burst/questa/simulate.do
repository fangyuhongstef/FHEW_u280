onbreak {quit -f}
onerror {quit -f}

vsim  -lib xil_defaultlib afifo_ddr_burst_opt

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure
view signals

do {afifo_ddr_burst.udo}

run 1000ns

quit -force
