/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_SONInformationReply_H_
#define	_SONInformationReply_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2TNLConfigurationInfo;
struct ProtocolExtensionContainer;

/* SONInformationReply */
typedef struct SONInformationReply {
	struct X2TNLConfigurationInfo	*x2TNLConfigurationInfo	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SONInformationReply_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SONInformationReply;
extern asn_SEQUENCE_specifics_t asn_SPC_SONInformationReply_specs_1;
extern asn_TYPE_member_t asn_MBR_SONInformationReply_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2TNLConfigurationInfo.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _SONInformationReply_H_ */
#include <asn_internal.h>
