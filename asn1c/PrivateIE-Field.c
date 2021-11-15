/*
 * Generated by asn1c-1.0.0 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-Containers"
 * 	found in "../asn1/S1AP-Containers.asn"
 * 	`asn1c -gen-PER -fcompound-names -S ../skeletons`
 */

#include "PrivateIE-Field.h"

static int
memb_id_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_criticality_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_value_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_id_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0l,  1l }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_criticality_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0l,  2l }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_value_constr_4 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PrivateIE_Field_192P0_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PrivateIE_Field_192P0, id),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_PrivateIE_ID,
		memb_id_constraint_1,
		&asn_PER_memb_id_constr_2,
		0,
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PrivateIE_Field_192P0, criticality),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_Criticality,
		memb_criticality_constraint_1,
		&asn_PER_memb_criticality_constr_3,
		0,
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct PrivateIE_Field_192P0, value),
		-1 /* Ambiguous tag (ANY?) */,
		0,
		&asn_DEF_ANY,
		memb_value_constraint_1,
		&asn_PER_memb_value_constr_4,
		0,
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_PrivateIE_Field_192P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PrivateIE_Field_192P0_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* local */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 } /* global */
};
asn_SEQUENCE_specifics_t asn_SPC_PrivateIE_Field_192P0_specs_1 = {
	sizeof(struct PrivateIE_Field_192P0),
	offsetof(struct PrivateIE_Field_192P0, _asn_ctx),
	asn_MAP_PrivateIE_Field_192P0_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PrivateIE_Field_192P0 = {
	"PrivateIE-Field",
	"PrivateIE-Field",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_PrivateIE_Field_192P0_tags_1,
	sizeof(asn_DEF_PrivateIE_Field_192P0_tags_1)
		/sizeof(asn_DEF_PrivateIE_Field_192P0_tags_1[0]), /* 1 */
	asn_DEF_PrivateIE_Field_192P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_PrivateIE_Field_192P0_tags_1)
		/sizeof(asn_DEF_PrivateIE_Field_192P0_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PrivateIE_Field_192P0_1,
	3,	/* Elements count */
	&asn_SPC_PrivateIE_Field_192P0_specs_1	/* Additional specs */
};

