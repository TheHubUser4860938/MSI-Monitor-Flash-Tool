# msi_auxch prototype module.
#
# OGKM must point at an open-gpu-kernel-modules checkout whose version
# matches the LOADED nvidia driver exactly (the RM ops ABI is version-
# checked at runtime, but the structs here come from these headers).
# Session 14d used: git clone --depth 1 --branch 615.78.08
#   https://github.com/NVIDIA/open-gpu-kernel-modules /tmp/opencode/ogkm

OGKM  ?= /tmp/opencode/ogkm
KDIR  ?= /lib/modules/$(shell uname -r)/build
PWD   := $(shell pwd)

ccflags-y := \
	-I$(OGKM)/kernel-open/common/inc \
	-I$(OGKM)/src/common/sdk/nvidia/inc \
	-I$(OGKM)/src/nvidia/arch/nvalloc/unix/include

obj-m += msi_auxch.o

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean

.PHONY: all clean
