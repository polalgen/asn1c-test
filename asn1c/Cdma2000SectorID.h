/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_Cdma2000SectorID_H_
#define	_Cdma2000SectorID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Cdma2000SectorID */
typedef OCTET_STRING_t	 Cdma2000SectorID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Cdma2000SectorID;
asn_struct_free_f Cdma2000SectorID_free;
asn_struct_print_f Cdma2000SectorID_print;
asn_constr_check_f Cdma2000SectorID_constraint;
ber_type_decoder_f Cdma2000SectorID_decode_ber;
der_type_encoder_f Cdma2000SectorID_encode_der;
xer_type_decoder_f Cdma2000SectorID_decode_xer;
xer_type_encoder_f Cdma2000SectorID_encode_xer;
oer_type_decoder_f Cdma2000SectorID_decode_oer;
oer_type_encoder_f Cdma2000SectorID_encode_oer;
per_type_decoder_f Cdma2000SectorID_decode_uper;
per_type_encoder_f Cdma2000SectorID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Cdma2000SectorID_H_ */
#include <asn_internal.h>