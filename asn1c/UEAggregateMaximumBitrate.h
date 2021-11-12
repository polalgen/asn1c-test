/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#ifndef	_UEAggregateMaximumBitrate_H_
#define	_UEAggregateMaximumBitrate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BitRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UEAggregateMaximumBitrate */
typedef struct UEAggregateMaximumBitrate {
	BitRate_t	 uEaggregateMaximumBitRateDL;
	BitRate_t	 uEaggregateMaximumBitRateUL;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAggregateMaximumBitrate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAggregateMaximumBitrate;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _UEAggregateMaximumBitrate_H_ */
#include <asn_internal.h>
