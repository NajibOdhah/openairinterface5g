/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SCellToAddModListSCG_r12_H_
#define	_SCellToAddModListSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Cell_ToAddMod_r12;

/* SCellToAddModListSCG-r12 */
typedef struct SCellToAddModListSCG_r12 {
	A_SEQUENCE_OF(struct Cell_ToAddMod_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddModListSCG_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddModListSCG_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Cell-ToAddMod-r12.h"

#endif	/* _SCellToAddModListSCG_r12_H_ */
#include <asn_internal.h>
