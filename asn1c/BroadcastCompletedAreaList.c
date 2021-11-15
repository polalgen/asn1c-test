/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "BroadcastCompletedAreaList.h"

static asn_per_constraints_t asn_PER_type_BroadcastCompletedAreaList_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0l,  2l }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_BroadcastCompletedAreaList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.cellID_Broadcast),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellID_Broadcast,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_CellID_Broadcast_constr_1,
		0,
		"cellID-Broadcast"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.tAI_Broadcast),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAI_Broadcast,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_TAI_Broadcast_constr_1,
		0,
		"tAI-Broadcast"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastCompletedAreaList, choice.emergencyAreaID_Broadcast),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EmergencyAreaID_Broadcast,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_EmergencyAreaID_Broadcast_constr_1,
		0,
		"emergencyAreaID-Broadcast"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_BroadcastCompletedAreaList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellID-Broadcast */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tAI-Broadcast */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* emergencyAreaID-Broadcast */
};
static asn_CHOICE_specifics_t asn_SPC_BroadcastCompletedAreaList_specs_1 = {
	sizeof(struct BroadcastCompletedAreaList),
	offsetof(struct BroadcastCompletedAreaList, _asn_ctx),
	offsetof(struct BroadcastCompletedAreaList, present),
	sizeof(((struct BroadcastCompletedAreaList *)0)->present),
	asn_MAP_BroadcastCompletedAreaList_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_BroadcastCompletedAreaList = {
	"BroadcastCompletedAreaList",
	"BroadcastCompletedAreaList",
	&asn_OP_CHOICE,
	CHOICE_constraint,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_BroadcastCompletedAreaList_constr_1,
	asn_MBR_BroadcastCompletedAreaList_1,
	3,	/* Elements count */
	&asn_SPC_BroadcastCompletedAreaList_specs_1	/* Additional specs */
};

