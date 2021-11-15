CC =  gcc
LIBS += -lm
CFLAGS += -I. -I./asn1c
OBJECTS = $(wildcard ./asn1c/*.o)

ifeq ($(OS),Windows_NT)
	RM = del
endif

TARGET = decode.c

all:
	$(CC) $(CFLAGS) -o $(TARGET).exe $(TARGET) ${OBJECTS} 

library: 
	$(MAKE) -C asn1c all



