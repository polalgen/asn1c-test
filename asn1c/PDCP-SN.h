/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_PDCP_SN_H_
#define	_PDCP_SN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PDCP-SN */
typedef long	 PDCP_SN_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PDCP_SN_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PDCP_SN;
asn_struct_free_f PDCP_SN_free;
asn_struct_print_f PDCP_SN_print;
asn_constr_check_f PDCP_SN_constraint;
ber_type_decoder_f PDCP_SN_decode_ber;
der_type_encoder_f PDCP_SN_encode_der;
xer_type_decoder_f PDCP_SN_decode_xer;
xer_type_encoder_f PDCP_SN_encode_xer;
per_type_decoder_f PDCP_SN_decode_uper;
per_type_encoder_f PDCP_SN_encode_uper;
per_type_decoder_f PDCP_SN_decode_aper;
per_type_encoder_f PDCP_SN_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_SN_H_ */
#include <asn_internal.h>
