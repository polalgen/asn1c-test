/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "asn1/S1AP-PDU-Contents.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_DeactivateTrace_H_
#define	_DeactivateTrace_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DeactivateTrace */
typedef struct DeactivateTrace {
	ProtocolIE_Container_122P0_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeactivateTrace_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeactivateTrace;

#ifdef __cplusplus
}
#endif

#endif	/* _DeactivateTrace_H_ */
#include <asn_internal.h>
