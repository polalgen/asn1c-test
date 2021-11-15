/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "AllocationAndRetentionPriority.h"

asn_TYPE_member_t asn_MBR_AllocationAndRetentionPriority_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AllocationAndRetentionPriority, priorityLevel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PriorityLevel,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_PriorityLevel_constr_1,
		0,
		"priorityLevel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AllocationAndRetentionPriority, pre_emptionCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Pre_emptionCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pre-emptionCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AllocationAndRetentionPriority, pre_emptionVulnerability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Pre_emptionVulnerability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pre-emptionVulnerability"
		},
	{ ATF_POINTER, 1, offsetof(struct AllocationAndRetentionPriority, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_173P0,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_ProtocolExtensionContainer_173P0_constr_1,
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_AllocationAndRetentionPriority_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_AllocationAndRetentionPriority_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AllocationAndRetentionPriority_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityLevel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pre-emptionCapability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pre-emptionVulnerability */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_AllocationAndRetentionPriority_specs_1 = {
	sizeof(struct AllocationAndRetentionPriority),
	offsetof(struct AllocationAndRetentionPriority, _asn_ctx),
	asn_MAP_AllocationAndRetentionPriority_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_AllocationAndRetentionPriority_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AllocationAndRetentionPriority = {
	"AllocationAndRetentionPriority",
	"AllocationAndRetentionPriority",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_AllocationAndRetentionPriority_tags_1,
	sizeof(asn_DEF_AllocationAndRetentionPriority_tags_1)
		/sizeof(asn_DEF_AllocationAndRetentionPriority_tags_1[0]), /* 1 */
	asn_DEF_AllocationAndRetentionPriority_tags_1,	/* Same as above */
	sizeof(asn_DEF_AllocationAndRetentionPriority_tags_1)
		/sizeof(asn_DEF_AllocationAndRetentionPriority_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AllocationAndRetentionPriority_1,
	4,	/* Elements count */
	&asn_SPC_AllocationAndRetentionPriority_specs_1	/* Additional specs */
};

