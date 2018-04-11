/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RLC-Parameters-r12.h"

static int
extended_RLC_LI_Field_r12_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
extended_RLC_LI_Field_r12_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
extended_RLC_LI_Field_r12_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
extended_RLC_LI_Field_r12_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
extended_RLC_LI_Field_r12_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
extended_RLC_LI_Field_r12_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
extended_RLC_LI_Field_r12_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
extended_RLC_LI_Field_r12_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
extended_RLC_LI_Field_r12_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
extended_RLC_LI_Field_r12_2_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
extended_RLC_LI_Field_r12_2_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td1);
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
extended_RLC_LI_Field_r12_2_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	extended_RLC_LI_Field_r12_2_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_extended_RLC_LI_Field_r12_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_extended_RLC_LI_Field_r12_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_extended_RLC_LI_Field_r12_enum2value_2[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_extended_RLC_LI_Field_r12_specs_2 = {
	asn_MAP_extended_RLC_LI_Field_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_extended_RLC_LI_Field_r12_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_extended_RLC_LI_Field_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_extended_RLC_LI_Field_r12_2 = {
	"extended-RLC-LI-Field-r12",
	"extended-RLC-LI-Field-r12",
	extended_RLC_LI_Field_r12_2_free,
	extended_RLC_LI_Field_r12_2_print,
	extended_RLC_LI_Field_r12_2_constraint,
	extended_RLC_LI_Field_r12_2_decode_ber,
	extended_RLC_LI_Field_r12_2_encode_der,
	extended_RLC_LI_Field_r12_2_decode_xer,
	extended_RLC_LI_Field_r12_2_encode_xer,
	extended_RLC_LI_Field_r12_2_decode_uper,
	extended_RLC_LI_Field_r12_2_encode_uper,
	extended_RLC_LI_Field_r12_2_decode_aper,
	extended_RLC_LI_Field_r12_2_encode_aper,
	extended_RLC_LI_Field_r12_2_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_extended_RLC_LI_Field_r12_tags_2,
	sizeof(asn_DEF_extended_RLC_LI_Field_r12_tags_2)
		/sizeof(asn_DEF_extended_RLC_LI_Field_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_extended_RLC_LI_Field_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_extended_RLC_LI_Field_r12_tags_2)
		/sizeof(asn_DEF_extended_RLC_LI_Field_r12_tags_2[0]), /* 2 */
	&asn_PER_type_extended_RLC_LI_Field_r12_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_extended_RLC_LI_Field_r12_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RLC_Parameters_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_Parameters_r12, extended_RLC_LI_Field_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_extended_RLC_LI_Field_r12_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"extended-RLC-LI-Field-r12"
		},
};
static ber_tlv_tag_t asn_DEF_RLC_Parameters_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RLC_Parameters_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* extended-RLC-LI-Field-r12 at 7922 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RLC_Parameters_r12_specs_1 = {
	sizeof(struct RLC_Parameters_r12),
	offsetof(struct RLC_Parameters_r12, _asn_ctx),
	asn_MAP_RLC_Parameters_r12_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RLC_Parameters_r12 = {
	"RLC-Parameters-r12",
	"RLC-Parameters-r12",
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
	asn_DEF_RLC_Parameters_r12_tags_1,
	sizeof(asn_DEF_RLC_Parameters_r12_tags_1)
		/sizeof(asn_DEF_RLC_Parameters_r12_tags_1[0]), /* 1 */
	asn_DEF_RLC_Parameters_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLC_Parameters_r12_tags_1)
		/sizeof(asn_DEF_RLC_Parameters_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RLC_Parameters_r12_1,
	1,	/* Elements count */
	&asn_SPC_RLC_Parameters_r12_specs_1	/* Additional specs */
};

