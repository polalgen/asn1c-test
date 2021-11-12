/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_ForbiddenTAs_H_
#define	_ForbiddenTAs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ForbiddenTAs_Item;

/* ForbiddenTAs */
typedef struct ForbiddenTAs {
	A_SEQUENCE_OF(struct ForbiddenTAs_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ForbiddenTAs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ForbiddenTAs;
extern asn_SET_OF_specifics_t asn_SPC_ForbiddenTAs_specs_1;
extern asn_TYPE_member_t asn_MBR_ForbiddenTAs_1[1];
extern asn_per_constraints_t asn_PER_type_ForbiddenTAs_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ForbiddenTAs-Item.h"

#endif	/* _ForbiddenTAs_H_ */
#include <asn_internal.h>
