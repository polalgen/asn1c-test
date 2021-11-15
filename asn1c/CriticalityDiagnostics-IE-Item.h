/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_CriticalityDiagnostics_IE_Item_H_
#define	_CriticalityDiagnostics_IE_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Criticality.h"
#include "ProtocolIE-ID.h"
#include "TypeOfError.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* CriticalityDiagnostics-IE-Item */
typedef struct CriticalityDiagnostics_IE_Item {
	Criticality_t	 iECriticality;
	ProtocolIE_ID_t	 iE_ID;
	TypeOfError_t	 typeOfError;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_IE_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CriticalityDiagnostics_IE_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_CriticalityDiagnostics_IE_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_CriticalityDiagnostics_IE_Item_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _CriticalityDiagnostics_IE_Item_H_ */
#include <asn_internal.h>
