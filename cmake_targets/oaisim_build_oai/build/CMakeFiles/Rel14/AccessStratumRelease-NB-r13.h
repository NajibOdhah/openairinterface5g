/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_AccessStratumRelease_NB_r13_H_
#define	_AccessStratumRelease_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccessStratumRelease_NB_r13 {
	AccessStratumRelease_NB_r13_rel13	= 0,
	AccessStratumRelease_NB_r13_spare7	= 1,
	AccessStratumRelease_NB_r13_spare6	= 2,
	AccessStratumRelease_NB_r13_spare5	= 3,
	AccessStratumRelease_NB_r13_spare4	= 4,
	AccessStratumRelease_NB_r13_spare3	= 5,
	AccessStratumRelease_NB_r13_spare2	= 6,
	AccessStratumRelease_NB_r13_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_AccessStratumRelease_NB_r13;

/* AccessStratumRelease-NB-r13 */
typedef long	 AccessStratumRelease_NB_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AccessStratumRelease_NB_r13;
asn_struct_free_f AccessStratumRelease_NB_r13_free;
asn_struct_print_f AccessStratumRelease_NB_r13_print;
asn_constr_check_f AccessStratumRelease_NB_r13_constraint;
ber_type_decoder_f AccessStratumRelease_NB_r13_decode_ber;
der_type_encoder_f AccessStratumRelease_NB_r13_encode_der;
xer_type_decoder_f AccessStratumRelease_NB_r13_decode_xer;
xer_type_encoder_f AccessStratumRelease_NB_r13_encode_xer;
per_type_decoder_f AccessStratumRelease_NB_r13_decode_uper;
per_type_encoder_f AccessStratumRelease_NB_r13_encode_uper;
per_type_decoder_f AccessStratumRelease_NB_r13_decode_aper;
per_type_encoder_f AccessStratumRelease_NB_r13_encode_aper;
type_compare_f     AccessStratumRelease_NB_r13_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessStratumRelease_NB_r13_H_ */
#include <asn_internal.h>
