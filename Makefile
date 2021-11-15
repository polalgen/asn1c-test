CC =  gcc
LIBS += -lm
CFLAGS += -I. -I./asn1c
LIB = s1ap.lib

TARGET=decode
ifeq ($(OS),Windows_NT)
	RM = del
endif

# compile TARGET program with s1ap.a  decoder static library 
all: library
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c ${LIB} 

# make static library from asn1c generated c code 
# call ./asn1c local makefile
library: 
	$(MAKE) -C asn1c all

clean:
	$(MAKE) -C asn1c clean
	ifeq ($(OS),Windows_NT)
		$(RM) $(TARGET).exe
	else
		$(RM) $(TARGET)
	endif