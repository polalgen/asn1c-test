/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "ServedGUMMEIs.h"

static asn_per_constraints_t asn_PER_type_ServedGUMMEIs_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1l,  8l }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ServedGUMMEIs_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ServedGUMMEIsItem,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ServedGUMMEIs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ServedGUMMEIs_specs_1 = {
	sizeof(struct ServedGUMMEIs),
	offsetof(struct ServedGUMMEIs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ServedGUMMEIs = {
	"ServedGUMMEIs",
	"ServedGUMMEIs",
	&asn_OP_SEQUENCE_OF,
	SEQUENCE_OF_constraint,
	asn_DEF_ServedGUMMEIs_tags_1,
	sizeof(asn_DEF_ServedGUMMEIs_tags_1)
		/sizeof(asn_DEF_ServedGUMMEIs_tags_1[0]), /* 1 */
	asn_DEF_ServedGUMMEIs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServedGUMMEIs_tags_1)
		/sizeof(asn_DEF_ServedGUMMEIs_tags_1[0]), /* 1 */
	&asn_PER_type_ServedGUMMEIs_constr_1,
	asn_MBR_ServedGUMMEIs_1,
	1,	/* Single element */
	&asn_SPC_ServedGUMMEIs_specs_1	/* Additional specs */
};

