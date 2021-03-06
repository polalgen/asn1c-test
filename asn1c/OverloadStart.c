/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../asn1/S1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "OverloadStart.h"

static asn_TYPE_member_t asn_MBR_OverloadStart_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OverloadStart, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_122P57,
		0,	/* Defer constraints checking to the member type */
		&asn_PER_type_ProtocolIE_Container_122P57_constr_115,
		0,
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_OverloadStart_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OverloadStart_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
static asn_SEQUENCE_specifics_t asn_SPC_OverloadStart_specs_1 = {
	sizeof(struct OverloadStart),
	offsetof(struct OverloadStart, _asn_ctx),
	asn_MAP_OverloadStart_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_OverloadStart = {
	"OverloadStart",
	"OverloadStart",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_OverloadStart_tags_1,
	sizeof(asn_DEF_OverloadStart_tags_1)
		/sizeof(asn_DEF_OverloadStart_tags_1[0]), /* 1 */
	asn_DEF_OverloadStart_tags_1,	/* Same as above */
	sizeof(asn_DEF_OverloadStart_tags_1)
		/sizeof(asn_DEF_OverloadStart_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_OverloadStart_1,
	1,	/* Elements count */
	&asn_SPC_OverloadStart_specs_1	/* Additional specs */
};

