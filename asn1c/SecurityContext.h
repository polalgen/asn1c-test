/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_SecurityContext_H_
#define	_SecurityContext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SecurityKey.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* SecurityContext */
typedef struct SecurityContext {
	long	 nextHopChainingCount;
	SecurityKey_t	 nextHopParameter;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityContext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityContext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _SecurityContext_H_ */
#include <asn_internal.h>
