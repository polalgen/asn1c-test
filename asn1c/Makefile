CC=gcc
CFLAGS=-I.
SOURCES = $(wildcard *.c)
HEADERS = $(wildcard *.h)
OBJECTS = $(SOURCES:.c=.o)

ifeq ($(OS),Windows_NT)
	RM=del
endif

all:${OBJECTS}
	$(CC) $(CFLAGS) $ -o $@ $(SRCS)

clean:
	$(RM) $(OBJECTS)

regenerate-asn:
	asn1c  -gen-PER -fcompound-names -S ../skeletons ../asn1/*
	$(RM) converter-sample.c
