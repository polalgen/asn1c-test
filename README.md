# asn1c-test
test asn1c usage 

To get asn1c result code working on windows with mingw:
1. Modify skeletons/asn_system.h:
  #include <inttypes.h>
2. Add compiler flags:
  -Dsrandom=srand -Drandom=rand (mingw linker not resolving random func)
  
 With this modifications, asn1 code works
