

include asn1c/Makefile.am.libasncodec

CC =  gcc
LIBS += -lm
CFLAGS +=  $(ASN_MODULE_CFLAGS) -I. -I./asn1c -Dsrandom=srand -Drandom=rand
ifeq ($(OS),Windows_NT)
	CFLAGS +=  -Dsrandom=srand -Drandom=rand
	RM = del
endif


ASN_LIBRARY ?= libasncodec.a
ASN_PROGRAM = encode
ASN_PROGRAM_SRCS ?= encode.c

all: $(ASN_PROGRAM)

$(ASN_PROGRAM): $(ASN_LIBRARY) $(ASN_PROGRAM_SRCS:.c=.o)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(ASN_PROGRAM) $(ASN_PROGRAM_SRCS:.c=.o) $(LDFLAGS) $(ASN_LIBRARY) $(LIBS)

$(ASN_LIBRARY): $(ASN_MODULE_SRCS:.c=.o)
	$(AR) rcs $@ $(ASN_MODULE_SRCS:.c=.o)

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(ASN_PROGRAM) $(ASN_LIBRARY)
	$(RM) $(ASN_MODULE_SRCS:.c=.o) 
	$(RM) $(ASN_PROGRAM_SRCS:.c=.o)

regenerate:
	asn1c -no-gen-example -S skeletons -D asn1c asn1/rectangle.asn

