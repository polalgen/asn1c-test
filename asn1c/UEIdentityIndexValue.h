/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_UEIdentityIndexValue_H_
#define	_UEIdentityIndexValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UEIdentityIndexValue */
typedef BIT_STRING_t	 UEIdentityIndexValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEIdentityIndexValue;
asn_struct_free_f UEIdentityIndexValue_free;
asn_struct_print_f UEIdentityIndexValue_print;
asn_constr_check_f UEIdentityIndexValue_constraint;
ber_type_decoder_f UEIdentityIndexValue_decode_ber;
der_type_encoder_f UEIdentityIndexValue_encode_der;
xer_type_decoder_f UEIdentityIndexValue_decode_xer;
xer_type_encoder_f UEIdentityIndexValue_encode_xer;
per_type_decoder_f UEIdentityIndexValue_decode_uper;
per_type_encoder_f UEIdentityIndexValue_encode_uper;
per_type_decoder_f UEIdentityIndexValue_decode_aper;
per_type_encoder_f UEIdentityIndexValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UEIdentityIndexValue_H_ */
#include <asn_internal.h>
