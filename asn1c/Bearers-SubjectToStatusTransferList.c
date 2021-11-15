/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "Bearers-SubjectToStatusTransferList.h"

asn_per_constraints_t asn_PER_type_Bearers_SubjectToStatusTransferList_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1l,  256l }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Bearers_SubjectToStatusTransferList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ProtocolIE_Field_128P0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_Bearers_SubjectToStatusTransferList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Bearers_SubjectToStatusTransferList_specs_1 = {
	sizeof(struct Bearers_SubjectToStatusTransferList),
	offsetof(struct Bearers_SubjectToStatusTransferList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Bearers_SubjectToStatusTransferList = {
	"Bearers-SubjectToStatusTransferList",
	"Bearers-SubjectToStatusTransferList",
	&asn_OP_SEQUENCE_OF,
	SEQUENCE_OF_constraint,
	asn_DEF_Bearers_SubjectToStatusTransferList_tags_1,
	sizeof(asn_DEF_Bearers_SubjectToStatusTransferList_tags_1)
		/sizeof(asn_DEF_Bearers_SubjectToStatusTransferList_tags_1[0]), /* 1 */
	asn_DEF_Bearers_SubjectToStatusTransferList_tags_1,	/* Same as above */
	sizeof(asn_DEF_Bearers_SubjectToStatusTransferList_tags_1)
		/sizeof(asn_DEF_Bearers_SubjectToStatusTransferList_tags_1[0]), /* 1 */
	&asn_PER_type_Bearers_SubjectToStatusTransferList_constr_1,
	asn_MBR_Bearers_SubjectToStatusTransferList_1,
	1,	/* Single element */
	&asn_SPC_Bearers_SubjectToStatusTransferList_specs_1	/* Additional specs */
};

