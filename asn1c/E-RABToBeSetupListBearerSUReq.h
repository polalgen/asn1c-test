/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "asn1/S1AP-PDU-Contents.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_E_RABToBeSetupListBearerSUReq_H_
#define	_E_RABToBeSetupListBearerSUReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* E-RABToBeSetupListBearerSUReq */
typedef struct E_RABToBeSetupListBearerSUReq {
	A_SEQUENCE_OF(struct ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABToBeSetupListBearerSUReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABToBeSetupListBearerSUReq;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolIE-SingleContainer.h"

#endif	/* _E_RABToBeSetupListBearerSUReq_H_ */
#include <asn_internal.h>