obj-m := hello.o

KDIRECTORY ?= /lib/modules/`uname -r`/build

all:
	make -C $(KDIRECTORY) M=$(PWD)

clean:
	make -C $(KDIRECTORY) M=$(PWD) clean
