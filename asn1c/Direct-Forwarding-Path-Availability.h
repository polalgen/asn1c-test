/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_Direct_Forwarding_Path_Availability_H_
#define	_Direct_Forwarding_Path_Availability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Direct_Forwarding_Path_Availability {
	Direct_Forwarding_Path_Availability_directPathAvailable	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Direct_Forwarding_Path_Availability;

/* Direct-Forwarding-Path-Availability */
typedef long	 Direct_Forwarding_Path_Availability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Direct_Forwarding_Path_Availability;
asn_struct_free_f Direct_Forwarding_Path_Availability_free;
asn_struct_print_f Direct_Forwarding_Path_Availability_print;
asn_constr_check_f Direct_Forwarding_Path_Availability_constraint;
ber_type_decoder_f Direct_Forwarding_Path_Availability_decode_ber;
der_type_encoder_f Direct_Forwarding_Path_Availability_encode_der;
xer_type_decoder_f Direct_Forwarding_Path_Availability_decode_xer;
xer_type_encoder_f Direct_Forwarding_Path_Availability_encode_xer;
oer_type_decoder_f Direct_Forwarding_Path_Availability_decode_oer;
oer_type_encoder_f Direct_Forwarding_Path_Availability_encode_oer;
per_type_decoder_f Direct_Forwarding_Path_Availability_decode_uper;
per_type_encoder_f Direct_Forwarding_Path_Availability_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Direct_Forwarding_Path_Availability_H_ */
#include <asn_internal.h>
