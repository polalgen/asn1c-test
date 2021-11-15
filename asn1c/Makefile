CC=gcc
CFLAGS=-I.
TARGET=../s1ap.a
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

ifeq ($(OS),Windows_NT)
	RM=del
endif

all:$(OBJECTS)
	ar rcs $(TARGET) $(OBJECTS)

$(OBJECTS): %.o: %.c
	$(CC) -c $(CFLAGS)  $< -o $@

clean:
	$(RM) $(OBJECTS)

regen:
	asn1c  -gen-PER -fcompound-names -S ../skeletons ../asn1/*
	$(RM) converter-sample.c
