/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_TDD_Config_v1130_H_
#define	_TDD_Config_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TDD_Config_v1130__specialSubframePatterns_v1130 {
	TDD_Config_v1130__specialSubframePatterns_v1130_ssp7	= 0,
	TDD_Config_v1130__specialSubframePatterns_v1130_ssp9	= 1
} e_TDD_Config_v1130__specialSubframePatterns_v1130;

/* TDD-Config-v1130 */
typedef struct TDD_Config_v1130 {
	long	 specialSubframePatterns_v1130;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_Config_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_specialSubframePatterns_v1130_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_TDD_Config_v1130;

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_Config_v1130_H_ */
#include <asn_internal.h>
