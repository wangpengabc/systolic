init:
	git submodule update --init
	mkdir -p systolic/src
	mkdir -p systolic/test/src

bsp:
	mill -i mill.bsp.BSP/install

clean:
	@echo "this function to be added"
