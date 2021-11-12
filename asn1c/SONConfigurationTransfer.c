/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1/S1AP-IEs.asn"
 * 	`asn1c -no-gen-example -fcompound-names -S skeletons -D asn1c`
 */

#include "SONConfigurationTransfer.h"

static asn_TYPE_member_t asn_MBR_SONConfigurationTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SONConfigurationTransfer, targeteNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TargeteNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targeteNB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONConfigurationTransfer, sourceeNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SourceeNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceeNB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SONConfigurationTransfer, sONInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SONInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sONInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct SONConfigurationTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_173P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_SONConfigurationTransfer_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_SONConfigurationTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SONConfigurationTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targeteNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sourceeNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sONInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SONConfigurationTransfer_specs_1 = {
	sizeof(struct SONConfigurationTransfer),
	offsetof(struct SONConfigurationTransfer, _asn_ctx),
	asn_MAP_SONConfigurationTransfer_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SONConfigurationTransfer_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SONConfigurationTransfer = {
	"SONConfigurationTransfer",
	"SONConfigurationTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_SONConfigurationTransfer_tags_1,
	sizeof(asn_DEF_SONConfigurationTransfer_tags_1)
		/sizeof(asn_DEF_SONConfigurationTransfer_tags_1[0]), /* 1 */
	asn_DEF_SONConfigurationTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_SONConfigurationTransfer_tags_1)
		/sizeof(asn_DEF_SONConfigurationTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SONConfigurationTransfer_1,
	4,	/* Elements count */
	&asn_SPC_SONConfigurationTransfer_specs_1	/* Additional specs */
};

