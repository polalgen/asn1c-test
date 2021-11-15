#include <stdio.h>
#include <S1AP-PDU.h>

int main(int argc, char** argv) {
    S1AP_PDU_t *pdu = 0; /* Type to encode */
    asn_dec_rval_t dc; /* Decoder return value */

    char*  buffer = 0;    
    int    length = 0;
    /* Allocate the S1AP_PDU_t */
    pdu = calloc(1, sizeof(S1AP_PDU_t)); /* not malloc! */

    if(!pdu) {
        perror("calloc() failed");
        exit(1);
    }

    /* UPER decode the data if filename is given */
    if(argc < 2) {
        fprintf(stderr, "Specify filename for APER input\n");
        exit(1);
    } else {
        // read file contents
        const char *filename = argv[1];
        FILE *fp = fopen(filename, "rb"); /* file input */
        if(!fp) {
            perror(filename);
            exit(1);
        }
        fseek(fp, 0, SEEK_END);
        length = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        
        buffer = malloc(length);
        if (buffer){
            fread(buffer, 1, length, fp);
        }
        printf("read %d bytes payload\n", length);
        fclose(fp);
    }

    /* Decode buffer as S1AP_PDU_t*/
    asn_dec_rval_t rval; /* Decoder return value */
    rval = aper_decode_complete(0, &asn_DEF_S1AP_PDU, (void **)&pdu, buffer, length);
    if(rval.code != RC_OK) {
        fprintf(stderr, "Broken S1AP_PDU encoding at byte %ld\n", (long)rval.consumed);
        exit(1);
    }
    /* Print the decoded S1AP_PDU type as XML */
    xer_fprint(stdout, &asn_DEF_S1AP_PDU, pdu);
    //dc = uper_decode(&S1AP_PDU_t, buffer, length, fp);

    
}