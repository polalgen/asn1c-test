/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_BroadcastCompletedAreaList_H_
#define	_BroadcastCompletedAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellID-Broadcast.h"
#include "TAI-Broadcast.h"
#include "EmergencyAreaID-Broadcast.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BroadcastCompletedAreaList_PR {
	BroadcastCompletedAreaList_PR_NOTHING,	/* No components present */
	BroadcastCompletedAreaList_PR_cellID_Broadcast,
	BroadcastCompletedAreaList_PR_tAI_Broadcast,
	BroadcastCompletedAreaList_PR_emergencyAreaID_Broadcast
	/* Extensions may appear below */
	
} BroadcastCompletedAreaList_PR;

/* BroadcastCompletedAreaList */
typedef struct BroadcastCompletedAreaList {
	BroadcastCompletedAreaList_PR present;
	union BroadcastCompletedAreaList_u {
		CellID_Broadcast_t	 cellID_Broadcast;
		TAI_Broadcast_t	 tAI_Broadcast;
		EmergencyAreaID_Broadcast_t	 emergencyAreaID_Broadcast;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BroadcastCompletedAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BroadcastCompletedAreaList;

#ifdef __cplusplus
}
#endif

#endif	/* _BroadcastCompletedAreaList_H_ */
#include <asn_internal.h>
