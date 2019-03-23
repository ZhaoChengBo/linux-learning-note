PHONY := all clean 

#如果是嵌入式开发的话，需要设置交叉编译工具链的名字，例如 arm-linux-
CROSS_COMPILE = 

AS		= $(CROSS_COMPILE)as
LD		= $(CROSS_COMPILE)ld
CC		= $(CROSS_COMPILE)gcc
CPP		= $(CC) -E
AR		= $(CROSS_COMPILE)ar
NM		= $(CROSS_COMPILE)nm

#export 是将变量导出，也就是通过该makefile间接使用其它的makefile，例如下面生成all目标会进入使用其他的makefile，这样使用
#export导出的变量在后面的makfile中都可以使用
export AS LD CC CPP AR NM

STRIP		= $(CROSS_COMPILE)strip
OBJCOPY		= $(CROSS_COMPILE)objcopy
OBJDUMP		= $(CROSS_COMPILE)objdump

export STRIP OBJCOPY OBJDUMP

TOP_DIR = $(shell pwd)
export TOP_DIR

CFLAGS = -I $(TOP_DIR)/include -I $(TOP_DIR)/subsys/include
LDFLAGS = 

TARGET = mobile

obj-y := main.o
obj-y += cam/
obj-y += lcd/
obj-y += mic/
obj-y += subsys/


all:
	make -C ./ -f $(TOP_DIR)/makefile.build
	$(CC) $(LDFLAGS) -o $(TARGET) built-in.o
	
clean:
	rm -f $(TARGET)
	rm -f $(shell find -name "*.o")
	rm -f $(shell find -name "*.d")
	


.PHONY: $(PHONY)
