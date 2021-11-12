#include <stdio.h>
#include <S1AP-PDU.h>

/* Write the encoded output into some FILE stream. */
static int write_out(const void *buffer, size_t size, void *app_key) {
    FILE *out_fp = app_key;
    size_t wrote = fwrite(buffer, 1, size, out_fp);
    return (wrote == size) ? 0 : -1;
}

int main(int argc, char** argv) {
    S1AP_PDU_t *pdu; /* Type to encode */
    asn_enc_rval_t ec; /* Encoder return value */
    
    pdu = calloc(1, sizeof(S1AP_PDU_t)); /* not malloc! */
    pdu->present = S1AP_PDU_PR_initiatingMessage;

    InitiatingMessage_t *init;
    init = calloc(1, sizeof(InitiatingMessage_t));
    init->criticality = Criticality_reject;
    init->procedureCode = 17;
    if(!pdu) {
        perror("calloc() failed");
        exit(1);
    }
    return 0;
}