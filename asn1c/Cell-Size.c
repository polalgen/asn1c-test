/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "Cell-Size.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_Cell_Size_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0l,  3l }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Cell_Size_value2enum_1[] = {
	{ 0,	9,	"verysmall" },
	{ 1,	5,	"small" },
	{ 2,	6,	"medium" },
	{ 3,	5,	"large" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Cell_Size_enum2value_1[] = {
	3,	/* large(3) */
	2,	/* medium(2) */
	1,	/* small(1) */
	0	/* verysmall(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_Cell_Size_specs_1 = {
	asn_MAP_Cell_Size_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Cell_Size_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Cell_Size_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Cell_Size = {
	"Cell-Size",
	"Cell-Size",
	&asn_OP_NativeEnumerated,
	NativeEnumerated_constraint,
	asn_DEF_Cell_Size_tags_1,
	sizeof(asn_DEF_Cell_Size_tags_1)
		/sizeof(asn_DEF_Cell_Size_tags_1[0]), /* 1 */
	asn_DEF_Cell_Size_tags_1,	/* Same as above */
	sizeof(asn_DEF_Cell_Size_tags_1)
		/sizeof(asn_DEF_Cell_Size_tags_1[0]), /* 1 */
	&asn_PER_type_Cell_Size_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Cell_Size_specs_1	/* Additional specs */
};

