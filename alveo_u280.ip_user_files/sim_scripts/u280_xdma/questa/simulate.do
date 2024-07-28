onbreak {quit -f}
onerror {quit -f}

vsim  -lib xil_defaultlib u280_xdma_opt

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure
view signals

do {u280_xdma.udo}

run 1000ns

quit -force
