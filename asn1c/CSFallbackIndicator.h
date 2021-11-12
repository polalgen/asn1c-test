/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_CSFallbackIndicator_H_
#define	_CSFallbackIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSFallbackIndicator {
	CSFallbackIndicator_cs_fallback_required	= 0,
	/*
	 * Enumeration is extensible
	 */
	CSFallbackIndicator_cs_fallback_high_priority	= 1
} e_CSFallbackIndicator;

/* CSFallbackIndicator */
typedef long	 CSFallbackIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSFallbackIndicator;
asn_struct_free_f CSFallbackIndicator_free;
asn_struct_print_f CSFallbackIndicator_print;
asn_constr_check_f CSFallbackIndicator_constraint;
ber_type_decoder_f CSFallbackIndicator_decode_ber;
der_type_encoder_f CSFallbackIndicator_encode_der;
xer_type_decoder_f CSFallbackIndicator_decode_xer;
xer_type_encoder_f CSFallbackIndicator_encode_xer;
oer_type_decoder_f CSFallbackIndicator_decode_oer;
oer_type_encoder_f CSFallbackIndicator_encode_oer;
per_type_decoder_f CSFallbackIndicator_decode_uper;
per_type_encoder_f CSFallbackIndicator_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CSFallbackIndicator_H_ */
#include <asn_internal.h>
