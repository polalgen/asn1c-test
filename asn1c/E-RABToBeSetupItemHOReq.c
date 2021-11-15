/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../asn1/S1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "E-RABToBeSetupItemHOReq.h"

static asn_TYPE_member_t asn_MBR_E_RABToBeSetupItemHOReq_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemHOReq, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_ID,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_E_RAB_ID_constr_1,
		0,
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemHOReq, transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportLayerAddress,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_TransportLayerAddress_constr_1,
		0,
		"transportLayerAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemHOReq, gTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GTP_TEID,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_GTP_TEID_constr_1,
		0,
		"gTP-TEID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABToBeSetupItemHOReq, e_RABlevelQosParameters),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RABLevelQoSParameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RABlevelQosParameters"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RABToBeSetupItemHOReq, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_173P49,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_ProtocolExtensionContainer_173P49_constr_99,
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABToBeSetupItemHOReq_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_E_RABToBeSetupItemHOReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABToBeSetupItemHOReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-RABlevelQosParameters */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_RABToBeSetupItemHOReq_specs_1 = {
	sizeof(struct E_RABToBeSetupItemHOReq),
	offsetof(struct E_RABToBeSetupItemHOReq, _asn_ctx),
	asn_MAP_E_RABToBeSetupItemHOReq_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_E_RABToBeSetupItemHOReq_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_E_RABToBeSetupItemHOReq = {
	"E-RABToBeSetupItemHOReq",
	"E-RABToBeSetupItemHOReq",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_E_RABToBeSetupItemHOReq_tags_1,
	sizeof(asn_DEF_E_RABToBeSetupItemHOReq_tags_1)
		/sizeof(asn_DEF_E_RABToBeSetupItemHOReq_tags_1[0]), /* 1 */
	asn_DEF_E_RABToBeSetupItemHOReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABToBeSetupItemHOReq_tags_1)
		/sizeof(asn_DEF_E_RABToBeSetupItemHOReq_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_E_RABToBeSetupItemHOReq_1,
	5,	/* Elements count */
	&asn_SPC_E_RABToBeSetupItemHOReq_specs_1	/* Additional specs */
};

