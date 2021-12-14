obj-m := homework1.o

homework1.ko: homework1.c
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` V=1 modules
clean:
	make -C /usr/src/linux-headers-`uname -r` M=`pwd` V=1 clean