/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_NASSecurityParametersfromE_UTRAN_H_
#define	_NASSecurityParametersfromE_UTRAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NASSecurityParametersfromE-UTRAN */
typedef OCTET_STRING_t	 NASSecurityParametersfromE_UTRAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NASSecurityParametersfromE_UTRAN;
asn_struct_free_f NASSecurityParametersfromE_UTRAN_free;
asn_struct_print_f NASSecurityParametersfromE_UTRAN_print;
asn_constr_check_f NASSecurityParametersfromE_UTRAN_constraint;
ber_type_decoder_f NASSecurityParametersfromE_UTRAN_decode_ber;
der_type_encoder_f NASSecurityParametersfromE_UTRAN_encode_der;
xer_type_decoder_f NASSecurityParametersfromE_UTRAN_decode_xer;
xer_type_encoder_f NASSecurityParametersfromE_UTRAN_encode_xer;
per_type_decoder_f NASSecurityParametersfromE_UTRAN_decode_uper;
per_type_encoder_f NASSecurityParametersfromE_UTRAN_encode_uper;
per_type_decoder_f NASSecurityParametersfromE_UTRAN_decode_aper;
per_type_encoder_f NASSecurityParametersfromE_UTRAN_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NASSecurityParametersfromE_UTRAN_H_ */
#include <asn_internal.h>
