/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "ServedMMECs.h"

asn_per_constraints_t asn_PER_type_ServedMMECs_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1l,  256l }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ServedMMECs_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_MME_Code,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_MME_Code_constr_1,
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ServedMMECs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_ServedMMECs_specs_1 = {
	sizeof(struct ServedMMECs),
	offsetof(struct ServedMMECs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ServedMMECs = {
	"ServedMMECs",
	"ServedMMECs",
	&asn_OP_SEQUENCE_OF,
	SEQUENCE_OF_constraint,
	asn_DEF_ServedMMECs_tags_1,
	sizeof(asn_DEF_ServedMMECs_tags_1)
		/sizeof(asn_DEF_ServedMMECs_tags_1[0]), /* 1 */
	asn_DEF_ServedMMECs_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServedMMECs_tags_1)
		/sizeof(asn_DEF_ServedMMECs_tags_1[0]), /* 1 */
	&asn_PER_type_ServedMMECs_constr_1,
	asn_MBR_ServedMMECs_1,
	1,	/* Single element */
	&asn_SPC_ServedMMECs_specs_1	/* Additional specs */
};

