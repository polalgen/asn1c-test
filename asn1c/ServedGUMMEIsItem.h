/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_ServedGUMMEIsItem_H_
#define	_ServedGUMMEIsItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ServedPLMNs.h"
#include "ServedGroupIDs.h"
#include "ServedMMECs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ServedGUMMEIsItem */
typedef struct ServedGUMMEIsItem {
	ServedPLMNs_t	 servedPLMNs;
	ServedGroupIDs_t	 servedGroupIDs;
	ServedMMECs_t	 servedMMECs;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedGUMMEIsItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedGUMMEIsItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ServedGUMMEIsItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedGUMMEIsItem_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _ServedGUMMEIsItem_H_ */
#include <asn_internal.h>
