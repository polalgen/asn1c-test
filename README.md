# asn1c-test
test asn1c usage 

To get asn1c with aper support working on windows:
1.  git clone -b master https://github.com/mouse07410/asn1c.git 
    Default branch is vlm-master, last version in branch master
    Correct version:
    ------------------------
    ASN.1 Compiler, v1.0.0
    Copyright (c) 2003-2017 Lev Walkin <vlm@lionet.info>
    ------------------------
2. Copy skeletons files from asn1c repo to target repo /skeletons
3. Compile asn1 sources with asn1c (or run /asn1c makefile with regen target )
    cd asn1c
    asn1c  -gen-PER -fcompound-names -S ../skeletons ../asn1
    
    or
    
    cd asn1c
    make regen

4. just run make in project root