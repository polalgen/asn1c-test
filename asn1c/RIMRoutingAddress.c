/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#include "RIMRoutingAddress.h"

static asn_oer_constraints_t asn_OER_type_RIMRoutingAddress_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_RIMRoutingAddress_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RIMRoutingAddress_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RIMRoutingAddress, choice.gERAN_Cell_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GERAN_Cell_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gERAN-Cell-ID"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RIMRoutingAddress_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* gERAN-Cell-ID */
};
asn_CHOICE_specifics_t asn_SPC_RIMRoutingAddress_specs_1 = {
	sizeof(struct RIMRoutingAddress),
	offsetof(struct RIMRoutingAddress, _asn_ctx),
	offsetof(struct RIMRoutingAddress, present),
	sizeof(((struct RIMRoutingAddress *)0)->present),
	asn_MAP_RIMRoutingAddress_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RIMRoutingAddress = {
	"RIMRoutingAddress",
	"RIMRoutingAddress",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_RIMRoutingAddress_constr_1, &asn_PER_type_RIMRoutingAddress_constr_1, CHOICE_constraint },
	asn_MBR_RIMRoutingAddress_1,
	1,	/* Elements count */
	&asn_SPC_RIMRoutingAddress_specs_1	/* Additional specs */
};
