/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_EmergencyAreaID_Broadcast_H_
#define	_EmergencyAreaID_Broadcast_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EmergencyAreaID_Broadcast_Item;

/* EmergencyAreaID-Broadcast */
typedef struct EmergencyAreaID_Broadcast {
	A_SEQUENCE_OF(struct EmergencyAreaID_Broadcast_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EmergencyAreaID_Broadcast_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmergencyAreaID_Broadcast;
extern asn_SET_OF_specifics_t asn_SPC_EmergencyAreaID_Broadcast_specs_1;
extern asn_TYPE_member_t asn_MBR_EmergencyAreaID_Broadcast_1[1];
extern asn_per_constraints_t asn_PER_type_EmergencyAreaID_Broadcast_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EmergencyAreaID-Broadcast-Item.h"

#endif	/* _EmergencyAreaID_Broadcast_H_ */
#include <asn_internal.h>
