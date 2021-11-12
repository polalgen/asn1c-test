/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_SupportedTAs_H_
#define	_SupportedTAs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SupportedTAs_Item;

/* SupportedTAs */
typedef struct SupportedTAs {
	A_SEQUENCE_OF(struct SupportedTAs_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedTAs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedTAs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedTAs-Item.h"

#endif	/* _SupportedTAs_H_ */
#include <asn_internal.h>
