/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_CGI_H_
#define	_CGI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include "LAC.h"
#include "CI.h"
#include "RAC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* CGI */
typedef struct CGI {
	PLMNidentity_t	 pLMNidentity;
	LAC_t	 lAC;
	CI_t	 cI;
	RAC_t	*rAC	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CGI;
extern asn_SEQUENCE_specifics_t asn_SPC_CGI_specs_1;
extern asn_TYPE_member_t asn_MBR_CGI_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _CGI_H_ */
#include <asn_internal.h>
