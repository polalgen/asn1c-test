/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../asn1/S1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "ResetType.h"

static asn_per_constraints_t asn_PER_type_ResetType_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0l,  1l }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ResetType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ResetType, choice.s1_Interface),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResetAll,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s1-Interface"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ResetType, choice.partOfS1_Interface),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_associatedLogicalS1_ConnectionListRes,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_UE_associatedLogicalS1_ConnectionListRes_constr_1,
		0,
		"partOfS1-Interface"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ResetType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* s1-Interface */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* partOfS1-Interface */
};
static asn_CHOICE_specifics_t asn_SPC_ResetType_specs_1 = {
	sizeof(struct ResetType),
	offsetof(struct ResetType, _asn_ctx),
	offsetof(struct ResetType, present),
	sizeof(((struct ResetType *)0)->present),
	asn_MAP_ResetType_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ResetType = {
	"ResetType",
	"ResetType",
	&asn_OP_CHOICE,
	CHOICE_constraint,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_ResetType_constr_1,
	asn_MBR_ResetType_1,
	2,	/* Elements count */
	&asn_SPC_ResetType_specs_1	/* Additional specs */
};

