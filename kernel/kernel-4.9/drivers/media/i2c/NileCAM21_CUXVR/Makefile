ifneq (,$(filter $(CONFIG_VIDEO_ECAM),y m))
	ccflags-y += -Wno-unused-variable -I$(srctree)/drivers/media/platform/tegra/
	obj-m	+=  ar0233.o
	ar0233-objs :=  ar0233_common.o serdes.o 
endif

ar0233:
	make -C $(KERNEL_PATH) M=$(PWD) modules
clean:
	make -C $(KERNEL_PATH) M=$(PWD) clean
