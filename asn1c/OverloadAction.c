/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "OverloadAction.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_OverloadAction_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0l,  2l }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_OverloadAction_value2enum_1[] = {
	{ 0,	26,	"reject-non-emergency-mo-dt" },
	{ 1,	28,	"reject-all-rrc-cr-signalling" },
	{ 2,	30,	"permit-emergency-sessions-only" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_OverloadAction_enum2value_1[] = {
	2,	/* permit-emergency-sessions-only(2) */
	1,	/* reject-all-rrc-cr-signalling(1) */
	0	/* reject-non-emergency-mo-dt(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_OverloadAction_specs_1 = {
	asn_MAP_OverloadAction_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_OverloadAction_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_OverloadAction_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_OverloadAction = {
	"OverloadAction",
	"OverloadAction",
	&asn_OP_NativeEnumerated,
	NativeEnumerated_constraint,
	asn_DEF_OverloadAction_tags_1,
	sizeof(asn_DEF_OverloadAction_tags_1)
		/sizeof(asn_DEF_OverloadAction_tags_1[0]), /* 1 */
	asn_DEF_OverloadAction_tags_1,	/* Same as above */
	sizeof(asn_DEF_OverloadAction_tags_1)
		/sizeof(asn_DEF_OverloadAction_tags_1[0]), /* 1 */
	&asn_PER_type_OverloadAction_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_OverloadAction_specs_1	/* Additional specs */
};

