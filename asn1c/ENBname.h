/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_ENBname_H_
#define	_ENBname_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ENBname */
typedef PrintableString_t	 ENBname_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ENBname;
asn_struct_free_f ENBname_free;
asn_struct_print_f ENBname_print;
asn_constr_check_f ENBname_constraint;
ber_type_decoder_f ENBname_decode_ber;
der_type_encoder_f ENBname_encode_der;
xer_type_decoder_f ENBname_decode_xer;
xer_type_encoder_f ENBname_encode_xer;
per_type_decoder_f ENBname_decode_uper;
per_type_encoder_f ENBname_encode_uper;
per_type_decoder_f ENBname_decode_aper;
per_type_encoder_f ENBname_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ENBname_H_ */
#include <asn_internal.h>
