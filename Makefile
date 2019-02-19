KDIR = /lib/modules/`uname -r`/build

kbuild:
#ldc2 -betterC -c -of=dsrc.o_shipped dsrc.d
	dmd -betterC -c -of=dsrc.o_shipped dsrc.d
	make -C $(KDIR) M=`pwd`

clean:
	make -C $(KDIR) M=`pwd` clean
