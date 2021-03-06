/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "SecurityContext.h"

static int
memb_nextHopChainingCount_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 0LL && value <= 7LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_nextHopChainingCount_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0l,  7l }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SecurityContext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityContext, nextHopChainingCount),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nextHopChainingCount_constraint_1,
		&asn_PER_memb_nextHopChainingCount_constr_2,
		0,
		"nextHopChainingCount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityContext, nextHopParameter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityKey,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_SecurityKey_constr_1,
		0,
		"nextHopParameter"
		},
	{ ATF_POINTER, 1, offsetof(struct SecurityContext, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_173P28,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_ProtocolExtensionContainer_173P28_constr_57,
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_SecurityContext_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_SecurityContext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SecurityContext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nextHopChainingCount */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nextHopParameter */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SecurityContext_specs_1 = {
	sizeof(struct SecurityContext),
	offsetof(struct SecurityContext, _asn_ctx),
	asn_MAP_SecurityContext_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SecurityContext_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SecurityContext = {
	"SecurityContext",
	"SecurityContext",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_SecurityContext_tags_1,
	sizeof(asn_DEF_SecurityContext_tags_1)
		/sizeof(asn_DEF_SecurityContext_tags_1[0]), /* 1 */
	asn_DEF_SecurityContext_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecurityContext_tags_1)
		/sizeof(asn_DEF_SecurityContext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SecurityContext_1,
	3,	/* Elements count */
	&asn_SPC_SecurityContext_specs_1	/* Additional specs */
};

