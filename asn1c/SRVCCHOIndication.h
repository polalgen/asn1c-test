/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_SRVCCHOIndication_H_
#define	_SRVCCHOIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRVCCHOIndication {
	SRVCCHOIndication_pSandCS	= 0,
	SRVCCHOIndication_cSonly	= 1
	/*
	 * Enumeration is extensible
	 */
} e_SRVCCHOIndication;

/* SRVCCHOIndication */
typedef long	 SRVCCHOIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRVCCHOIndication;
asn_struct_free_f SRVCCHOIndication_free;
asn_struct_print_f SRVCCHOIndication_print;
asn_constr_check_f SRVCCHOIndication_constraint;
ber_type_decoder_f SRVCCHOIndication_decode_ber;
der_type_encoder_f SRVCCHOIndication_encode_der;
xer_type_decoder_f SRVCCHOIndication_decode_xer;
xer_type_encoder_f SRVCCHOIndication_encode_xer;
per_type_decoder_f SRVCCHOIndication_decode_uper;
per_type_encoder_f SRVCCHOIndication_encode_uper;
per_type_decoder_f SRVCCHOIndication_decode_aper;
per_type_encoder_f SRVCCHOIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SRVCCHOIndication_H_ */
#include <asn_internal.h>
