/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "ConnEstFailReport-r11.h"

static asn_TYPE_member_t asn_MBR_measResultFailedCell_r11_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11__measResultFailedCell_r11, rsrpResult_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrpResult-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11__measResultFailedCell_r11, rsrqResult_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrqResult-r11"
		},
};
static int asn_MAP_measResultFailedCell_r11_oms_4[] = { 1 };
static ber_tlv_tag_t asn_DEF_measResultFailedCell_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_measResultFailedCell_r11_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrpResult-r11 at 2301 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsrqResult-r11 at 2302 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultFailedCell_r11_specs_4 = {
	sizeof(struct ConnEstFailReport_r11__measResultFailedCell_r11),
	offsetof(struct ConnEstFailReport_r11__measResultFailedCell_r11, _asn_ctx),
	asn_MAP_measResultFailedCell_r11_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_measResultFailedCell_r11_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultFailedCell_r11_4 = {
	"measResultFailedCell-r11",
	"measResultFailedCell-r11",
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
	asn_DEF_measResultFailedCell_r11_tags_4,
	sizeof(asn_DEF_measResultFailedCell_r11_tags_4)
		/sizeof(asn_DEF_measResultFailedCell_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_measResultFailedCell_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_measResultFailedCell_r11_tags_4)
		/sizeof(asn_DEF_measResultFailedCell_r11_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResultFailedCell_r11_4,
	2,	/* Elements count */
	&asn_SPC_measResultFailedCell_r11_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResultNeighCells_r11_7[] = {
	{ ATF_POINTER, 4, offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, measResultListEUTRA_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListEUTRA-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, measResultListUTRA_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2UTRA_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListUTRA-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, measResultListGERAN_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultListGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListGERAN-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, measResultsCDMA2000_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2CDMA2000_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultsCDMA2000-r11"
		},
};
static int asn_MAP_measResultNeighCells_r11_oms_7[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_measResultNeighCells_r11_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_measResultNeighCells_r11_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultListEUTRA-r11 at 2305 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultListUTRA-r11 at 2306 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultListGERAN-r11 at 2307 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* measResultsCDMA2000-r11 at 2308 */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResultNeighCells_r11_specs_7 = {
	sizeof(struct ConnEstFailReport_r11__measResultNeighCells_r11),
	offsetof(struct ConnEstFailReport_r11__measResultNeighCells_r11, _asn_ctx),
	asn_MAP_measResultNeighCells_r11_tag2el_7,
	4,	/* Count of tags in the map */
	asn_MAP_measResultNeighCells_r11_oms_7,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResultNeighCells_r11_7 = {
	"measResultNeighCells-r11",
	"measResultNeighCells-r11",
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
	asn_DEF_measResultNeighCells_r11_tags_7,
	sizeof(asn_DEF_measResultNeighCells_r11_tags_7)
		/sizeof(asn_DEF_measResultNeighCells_r11_tags_7[0]) - 1, /* 1 */
	asn_DEF_measResultNeighCells_r11_tags_7,	/* Same as above */
	sizeof(asn_DEF_measResultNeighCells_r11_tags_7)
		/sizeof(asn_DEF_measResultNeighCells_r11_tags_7[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_measResultNeighCells_r11_7,
	4,	/* Elements count */
	&asn_SPC_measResultNeighCells_r11_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_18[] = {
	{ ATF_POINTER, 3, offsetof(struct ConnEstFailReport_r11__ext1, measResultFailedCell_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultFailedCell-v1250"
		},
	{ ATF_POINTER, 2, offsetof(struct ConnEstFailReport_r11__ext1, failedCellRSRQ_Type_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Type_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"failedCellRSRQ-Type-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11__ext1, measResultListEUTRA_v1250),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_v1250,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListEUTRA-v1250"
		},
};
static int asn_MAP_ext1_oms_18[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_ext1_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measResultFailedCell-v1250 at 2316 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* failedCellRSRQ-Type-r12 at 2317 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResultListEUTRA-v1250 at 2318 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_18 = {
	sizeof(struct ConnEstFailReport_r11__ext1),
	offsetof(struct ConnEstFailReport_r11__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_18,
	3,	/* Count of tags in the map */
	asn_MAP_ext1_oms_18,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_18 = {
	"ext1",
	"ext1",
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
	asn_DEF_ext1_tags_18,
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_18,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_18)
		/sizeof(asn_DEF_ext1_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_18,
	3,	/* Elements count */
	&asn_SPC_ext1_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ConnEstFailReport_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, failedCellId_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGlobalIdEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"failedCellId-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11, locationInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationInfo_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"locationInfo-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, measResultFailedCell_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_measResultFailedCell_r11_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultFailedCell-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11, measResultNeighCells_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_measResultNeighCells_r11_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultNeighCells-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, numberOfPreamblesSent_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfPreamblesSent_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberOfPreamblesSent-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, contentionDetected_r11),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"contentionDetected-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, maxTxPowerReached_r11),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxTxPowerReached-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ConnEstFailReport_r11, timeSinceFailure_r11),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeSinceFailure_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeSinceFailure-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct ConnEstFailReport_r11, measResultListEUTRA_v1130),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2EUTRA_v9e0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measResultListEUTRA-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnEstFailReport_r11, ext1),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext1_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
};
static int asn_MAP_ConnEstFailReport_r11_oms_1[] = { 1, 3, 8, 9 };
static ber_tlv_tag_t asn_DEF_ConnEstFailReport_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ConnEstFailReport_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failedCellId-r11 at 2298 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* locationInfo-r11 at 2299 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measResultFailedCell-r11 at 2301 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measResultNeighCells-r11 at 2305 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* numberOfPreamblesSent-r11 at 2310 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* contentionDetected-r11 at 2311 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* maxTxPowerReached-r11 at 2312 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* timeSinceFailure-r11 at 2313 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* measResultListEUTRA-v1130 at 2314 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* ext1 at 2316 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ConnEstFailReport_r11_specs_1 = {
	sizeof(struct ConnEstFailReport_r11),
	offsetof(struct ConnEstFailReport_r11, _asn_ctx),
	asn_MAP_ConnEstFailReport_r11_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_ConnEstFailReport_r11_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	8,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ConnEstFailReport_r11 = {
	"ConnEstFailReport-r11",
	"ConnEstFailReport-r11",
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
	asn_DEF_ConnEstFailReport_r11_tags_1,
	sizeof(asn_DEF_ConnEstFailReport_r11_tags_1)
		/sizeof(asn_DEF_ConnEstFailReport_r11_tags_1[0]), /* 1 */
	asn_DEF_ConnEstFailReport_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConnEstFailReport_r11_tags_1)
		/sizeof(asn_DEF_ConnEstFailReport_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ConnEstFailReport_r11_1,
	10,	/* Elements count */
	&asn_SPC_ConnEstFailReport_r11_specs_1	/* Additional specs */
};

