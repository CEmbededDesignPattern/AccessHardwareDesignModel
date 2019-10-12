# # MACRO
SUBDIR := src
# build tools
CC := gcc
CFLAGS := -g -Wall
LDFLAGS :=


# target
TARGET := main

# source file
srcFiles := $(wildcard $(SUBDIR)/*.c) $(TARGET).c
objFiles := $(patsubst %.c, %.o, $(srcFiles))



##########################################################

all:$(TARGET)

$(TARGET):$(objFiles)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

%.o:%.c
	$(CC) -c $< -o $@ $(CFLAGS) $(LDFLAGS)


.PHONY:clean all

clean:
	rm -f $(objFiles)
	rm -f $(TARGET)
