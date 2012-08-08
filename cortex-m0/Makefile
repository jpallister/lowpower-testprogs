
CC=~/arm_cortex-m0_toolchain/bin/arm-none-eabi-gcc
TESTS=load1.ram load4.ram load16.ram store1.ram store4.ram store16.ram add1.ram add4.ram add16.ram load1.flash load4.flash load16.flash store1.flash store4.flash store16.flash add1.flash add4.flash add16.flash

all: $(TESTS)

%.ram : %.c
	$(CC) -T ram.ld -g -o $@ $< exit.c

%.flash : %.c
	$(CC) -T flash.ld -g -o $@ $< exit.c

clean:
	rm -rf *.ram *.flash
