/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MAC_Parameters_r12_H_
#define	_MAC_Parameters_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_Parameters_r12__logicalChannelSR_ProhibitTimer_r12 {
	MAC_Parameters_r12__logicalChannelSR_ProhibitTimer_r12_supported	= 0
} e_MAC_Parameters_r12__logicalChannelSR_ProhibitTimer_r12;
typedef enum MAC_Parameters_r12__longDRX_Command_r12 {
	MAC_Parameters_r12__longDRX_Command_r12_supported	= 0
} e_MAC_Parameters_r12__longDRX_Command_r12;

/* MAC-Parameters-r12 */
typedef struct MAC_Parameters_r12 {
	long	*logicalChannelSR_ProhibitTimer_r12	/* OPTIONAL */;
	long	*longDRX_Command_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_Parameters_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_logicalChannelSR_ProhibitTimer_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_longDRX_Command_r12_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_Parameters_r12;

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_Parameters_r12_H_ */
#include <asn_internal.h>
