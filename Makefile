CC =  gcc
LIBS += -lm
CFLAGS += -I. -I./asn1c
LIB = s1ap.a

TARGET=decode
ifeq ($(OS),Windows_NT)
	RM = del
endif

all: library
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c ${LIB} 
library: 
	$(MAKE) -C asn1c all

clean:
	$(MAKE) -C asn1c clean
	ifeq ($(OS),Windows_NT)
		$(RM) $(TARGET).exe
	else
		$(RM) $(TARGET)
	endif