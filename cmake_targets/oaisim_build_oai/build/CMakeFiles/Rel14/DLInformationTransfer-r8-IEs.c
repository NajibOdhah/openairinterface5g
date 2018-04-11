/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "DLInformationTransfer-r8-IEs.h"

static asn_per_constraints_t asn_PER_type_dedicatedInfoType_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_dedicatedInfoType_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, choice.dedicatedInfoNAS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoNAS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dedicatedInfoNAS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, choice.dedicatedInfoCDMA2000_1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dedicatedInfoCDMA2000-1XRTT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, choice.dedicatedInfoCDMA2000_HRPD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dedicatedInfoCDMA2000-HRPD"
		},
};
static asn_TYPE_tag2member_t asn_MAP_dedicatedInfoType_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoNAS at 288 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dedicatedInfoCDMA2000-1XRTT at 289 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dedicatedInfoCDMA2000-HRPD at 291 */
};
static asn_CHOICE_specifics_t asn_SPC_dedicatedInfoType_specs_2 = {
	sizeof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType),
	offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, _asn_ctx),
	offsetof(struct DLInformationTransfer_r8_IEs__dedicatedInfoType, present),
	sizeof(((struct DLInformationTransfer_r8_IEs__dedicatedInfoType *)0)->present),
	asn_MAP_dedicatedInfoType_tag2el_2,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dedicatedInfoType_2 = {
	"dedicatedInfoType",
	"dedicatedInfoType",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_dedicatedInfoType_constr_2,
	asn_MBR_dedicatedInfoType_2,
	3,	/* Elements count */
	&asn_SPC_dedicatedInfoType_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DLInformationTransfer_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DLInformationTransfer_r8_IEs, dedicatedInfoType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_dedicatedInfoType_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dedicatedInfoType"
		},
	{ ATF_POINTER, 1, offsetof(struct DLInformationTransfer_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DLInformationTransfer_v8a0_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_DLInformationTransfer_r8_IEs_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_DLInformationTransfer_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DLInformationTransfer_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoType at 288 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension at 292 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DLInformationTransfer_r8_IEs_specs_1 = {
	sizeof(struct DLInformationTransfer_r8_IEs),
	offsetof(struct DLInformationTransfer_r8_IEs, _asn_ctx),
	asn_MAP_DLInformationTransfer_r8_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DLInformationTransfer_r8_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DLInformationTransfer_r8_IEs = {
	"DLInformationTransfer-r8-IEs",
	"DLInformationTransfer-r8-IEs",
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
	asn_DEF_DLInformationTransfer_r8_IEs_tags_1,
	sizeof(asn_DEF_DLInformationTransfer_r8_IEs_tags_1)
		/sizeof(asn_DEF_DLInformationTransfer_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_DLInformationTransfer_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_DLInformationTransfer_r8_IEs_tags_1)
		/sizeof(asn_DEF_DLInformationTransfer_r8_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DLInformationTransfer_r8_IEs_1,
	2,	/* Elements count */
	&asn_SPC_DLInformationTransfer_r8_IEs_specs_1	/* Additional specs */
};

