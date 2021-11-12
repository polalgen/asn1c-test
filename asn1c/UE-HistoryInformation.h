/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_UE_HistoryInformation_H_
#define	_UE_HistoryInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LastVisitedCell_Item;

/* UE-HistoryInformation */
typedef struct UE_HistoryInformation {
	A_SEQUENCE_OF(struct LastVisitedCell_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_HistoryInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_HistoryInformation;
extern asn_SET_OF_specifics_t asn_SPC_UE_HistoryInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_HistoryInformation_1[1];
extern asn_per_constraints_t asn_PER_type_UE_HistoryInformation_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LastVisitedCell-Item.h"

#endif	/* _UE_HistoryInformation_H_ */
#include <asn_internal.h>