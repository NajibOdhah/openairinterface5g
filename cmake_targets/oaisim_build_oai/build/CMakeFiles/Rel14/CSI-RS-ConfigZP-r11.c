/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CSI-RS-ConfigZP-r11.h"

static int
memb_resourceConfigList_r11_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_subframeConfig_r11_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 154)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_resourceConfigList_r11_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_subframeConfig_r11_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  154 }	/* (0..154) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CSI_RS_ConfigZP_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigZP_r11, csi_RS_ConfigZPId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPId_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-RS-ConfigZPId-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigZP_r11, resourceConfigList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_resourceConfigList_r11_constraint_1,
		&asn_PER_memb_resourceConfigList_r11_constr_3,
		0,
		"resourceConfigList-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ConfigZP_r11, subframeConfig_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_subframeConfig_r11_constraint_1,
		&asn_PER_memb_subframeConfig_r11_constr_4,
		0,
		"subframeConfig-r11"
		},
};
static ber_tlv_tag_t asn_DEF_CSI_RS_ConfigZP_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CSI_RS_ConfigZP_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-RS-ConfigZPId-r11 at 3819 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* resourceConfigList-r11 at 3820 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* subframeConfig-r11 at 3821 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ConfigZP_r11_specs_1 = {
	sizeof(struct CSI_RS_ConfigZP_r11),
	offsetof(struct CSI_RS_ConfigZP_r11, _asn_ctx),
	asn_MAP_CSI_RS_ConfigZP_r11_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_ConfigZP_r11 = {
	"CSI-RS-ConfigZP-r11",
	"CSI-RS-ConfigZP-r11",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CSI_RS_ConfigZP_r11_tags_1,
	sizeof(asn_DEF_CSI_RS_ConfigZP_r11_tags_1)
		/sizeof(asn_DEF_CSI_RS_ConfigZP_r11_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_ConfigZP_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_ConfigZP_r11_tags_1)
		/sizeof(asn_DEF_CSI_RS_ConfigZP_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CSI_RS_ConfigZP_r11_1,
	3,	/* Elements count */
	&asn_SPC_CSI_RS_ConfigZP_r11_specs_1	/* Additional specs */
};

