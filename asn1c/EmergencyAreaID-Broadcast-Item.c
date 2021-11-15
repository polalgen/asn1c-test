/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "EmergencyAreaID-Broadcast-Item.h"

asn_TYPE_member_t asn_MBR_EmergencyAreaID_Broadcast_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyAreaID_Broadcast_Item, emergencyAreaID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EmergencyAreaID,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_EmergencyAreaID_constr_1,
		0,
		"emergencyAreaID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyAreaID_Broadcast_Item, completedCellinEAI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CompletedCellinEAI,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_CompletedCellinEAI_constr_1,
		0,
		"completedCellinEAI"
		},
	{ ATF_POINTER, 1, offsetof(struct EmergencyAreaID_Broadcast_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_173P10,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_ProtocolExtensionContainer_173P10_constr_21,
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_EmergencyAreaID_Broadcast_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_EmergencyAreaID_Broadcast_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EmergencyAreaID_Broadcast_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* emergencyAreaID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* completedCellinEAI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_EmergencyAreaID_Broadcast_Item_specs_1 = {
	sizeof(struct EmergencyAreaID_Broadcast_Item),
	offsetof(struct EmergencyAreaID_Broadcast_Item, _asn_ctx),
	asn_MAP_EmergencyAreaID_Broadcast_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_EmergencyAreaID_Broadcast_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EmergencyAreaID_Broadcast_Item = {
	"EmergencyAreaID-Broadcast-Item",
	"EmergencyAreaID-Broadcast-Item",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_EmergencyAreaID_Broadcast_Item_tags_1,
	sizeof(asn_DEF_EmergencyAreaID_Broadcast_Item_tags_1)
		/sizeof(asn_DEF_EmergencyAreaID_Broadcast_Item_tags_1[0]), /* 1 */
	asn_DEF_EmergencyAreaID_Broadcast_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_EmergencyAreaID_Broadcast_Item_tags_1)
		/sizeof(asn_DEF_EmergencyAreaID_Broadcast_Item_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EmergencyAreaID_Broadcast_Item_1,
	3,	/* Elements count */
	&asn_SPC_EmergencyAreaID_Broadcast_Item_specs_1	/* Additional specs */
};

