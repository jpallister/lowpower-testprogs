

all:
	cd cortex-m0 && make
	cd cortex-m3 && make

clean:
	cd cortex-m0 && make clean
	cd cortex-m3 && make clean
