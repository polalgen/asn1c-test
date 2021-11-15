# asn1c-test
test asn1c usage 

To get asn1c with aper support working on windows:
1.  git clone -b master https://github.com/mouse07410/asn1c.git 
    Default branch is vlm-master, last version in branch master
    ------------------------
    ASN.1 Compiler, v1.0.0
    Copyright (c) 2003-2017 Lev Walkin <vlm@lionet.info>
    ------------------------
2. Copy skeletons files from asn1c repo to target repo
2. Compile asn1 sources with asn1c
    cd asn1c
    asn1c  -gen-PER -fcompound-names -S ../skeletons ../asn1

