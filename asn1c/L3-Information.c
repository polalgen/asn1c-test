/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../asn1/S1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "L3-Information.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_L3_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_L3_Information = {
	"L3-Information",
	"L3-Information",
	&asn_OP_OCTET_STRING,
	OCTET_STRING_constraint,
	asn_DEF_L3_Information_tags_1,
	sizeof(asn_DEF_L3_Information_tags_1)
		/sizeof(asn_DEF_L3_Information_tags_1[0]), /* 1 */
	asn_DEF_L3_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_L3_Information_tags_1)
		/sizeof(asn_DEF_L3_Information_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

