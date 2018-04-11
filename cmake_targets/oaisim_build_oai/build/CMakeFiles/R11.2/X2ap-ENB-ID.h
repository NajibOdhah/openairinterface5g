/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/andrey/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_ENB_ID_H_
#define	_X2ap_ENB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_ENB_ID_PR {
	X2ap_ENB_ID_PR_NOTHING,	/* No components present */
	X2ap_ENB_ID_PR_macro_eNB_ID,
	X2ap_ENB_ID_PR_home_eNB_ID,
	/* Extensions may appear below */
	
} X2ap_ENB_ID_PR;

/* X2ap-ENB-ID */
typedef struct X2ap_ENB_ID {
	X2ap_ENB_ID_PR present;
	union X2ap_ENB_ID_u {
		BIT_STRING_t	 macro_eNB_ID;
		BIT_STRING_t	 home_eNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_ENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_ENB_ID;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_ENB_ID_H_ */
#include <asn_internal.h>
