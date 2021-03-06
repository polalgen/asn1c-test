/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Descriptions"
 * 	found in "../asn1/S1AP-PDU-Descriptions.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_S1AP_PDU_H_
#define	_S1AP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InitiatingMessage.h"
#include "SuccessfulOutcome.h"
#include "UnsuccessfulOutcome.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_PDU_PR {
	S1AP_PDU_PR_NOTHING,	/* No components present */
	S1AP_PDU_PR_initiatingMessage,
	S1AP_PDU_PR_successfulOutcome,
	S1AP_PDU_PR_unsuccessfulOutcome
	/* Extensions may appear below */
	
} S1AP_PDU_PR;

/* S1AP-PDU */
typedef struct S1AP_PDU {
	S1AP_PDU_PR present;
	union S1AP_PDU_u {
		InitiatingMessage_t	 initiatingMessage;
		SuccessfulOutcome_t	 successfulOutcome;
		UnsuccessfulOutcome_t	 unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_PDU_H_ */
#include <asn_internal.h>
