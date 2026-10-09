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

# The CachyOS kernel is clang-built: compile external modules with the
# same toolchain, e.g.  make LLVM=1 CC=clang

obj-m += msi_auxch.o

# nvidia.ko ships no Module.symvers with the prebuilt package, and this
# kernel has CONFIG_MODVERSIONS off — so modpost only needs the symbol
# NAMES. Generate them from the live /proc/kallsyms (insmod resolves the
# rest at load time); the build correctly refuses when nvidia isn't
# loaded, since then even insmod could not work.
EXSYMS  := $(PWD)/nvidia-syms
all: $(EXSYMS)
	$(MAKE) -C $(KDIR) M=$(PWD) KBUILD_EXTRA_SYMBOLS=$(EXSYMS) modules

$(EXSYMS): FORCE
	grep -wE 'nvidia_get_rm_ops[[:space:]]' /proc/kallsyms \
	  | awk '{printf "0x00000000\t%s\tkernel/nvidia\tEXPORT_SYMBOL_GPL\t\n", $$3}' \
	  | tee $@.tmp | grep -q . \
	  && mv $@.tmp $@ \
	  || { rm -f $@.tmp; echo "ERROR: nvidia_get_rm_ops not in /proc/kallsyms — is nvidia loaded?" >&2; exit 1; }

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	rm -f nvidia-syms

.PHONY: all clean FORCE
