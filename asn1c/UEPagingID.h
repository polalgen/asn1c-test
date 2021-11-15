/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#ifndef	_UEPagingID_H_
#define	_UEPagingID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S-TMSI.h"
#include "IMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEPagingID_PR {
	UEPagingID_PR_NOTHING,	/* No components present */
	UEPagingID_PR_s_TMSI,
	UEPagingID_PR_iMSI
	/* Extensions may appear below */
	
} UEPagingID_PR;

/* UEPagingID */
typedef struct UEPagingID {
	UEPagingID_PR present;
	union UEPagingID_u {
		S_TMSI_t	 s_TMSI;
		IMSI_t	 iMSI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEPagingID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEPagingID;

#ifdef __cplusplus
}
#endif

#endif	/* _UEPagingID_H_ */
#include <asn_internal.h>
