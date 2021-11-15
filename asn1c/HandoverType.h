/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_HandoverType_H_
#define	_HandoverType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverType {
	HandoverType_intralte	= 0,
	HandoverType_ltetoutran	= 1,
	HandoverType_ltetogeran	= 2,
	HandoverType_utrantolte	= 3,
	HandoverType_gerantolte	= 4
	/*
	 * Enumeration is extensible
	 */
} e_HandoverType;

/* HandoverType */
typedef long	 HandoverType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverType;
asn_struct_free_f HandoverType_free;
asn_struct_print_f HandoverType_print;
asn_constr_check_f HandoverType_constraint;
ber_type_decoder_f HandoverType_decode_ber;
der_type_encoder_f HandoverType_encode_der;
xer_type_decoder_f HandoverType_decode_xer;
xer_type_encoder_f HandoverType_encode_xer;
per_type_decoder_f HandoverType_decode_uper;
per_type_encoder_f HandoverType_encode_uper;
per_type_decoder_f HandoverType_decode_aper;
per_type_encoder_f HandoverType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverType_H_ */
#include <asn_internal.h>
