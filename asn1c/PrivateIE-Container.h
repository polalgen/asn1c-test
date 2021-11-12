/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-Containers"
 * 	found in "asn1/S1AP-Containers.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_PrivateIE_Container_H_
#define	_PrivateIE_Container_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PrivateIE_Field;

/* PrivateIE-Container */
typedef struct PrivateIE_Container_189P0 {
	A_SEQUENCE_OF(struct PrivateIE_Field) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PrivateIE_Container_189P0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrivateIE_Container_189P0;
extern asn_SET_OF_specifics_t asn_SPC_PrivateIE_Container_189P0_specs_1;
extern asn_TYPE_member_t asn_MBR_PrivateIE_Container_189P0_1[1];
extern asn_per_constraints_t asn_PER_type_PrivateIE_Container_189P0_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PrivateIE-Field.h"

#endif	/* _PrivateIE_Container_H_ */
#include <asn_internal.h>
