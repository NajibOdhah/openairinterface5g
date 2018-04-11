/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/andrey/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_TargetID_H_
#define	_S1ap_TargetID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-TargeteNB-ID.h"
#include "S1ap-TargetRNC-ID.h"
#include "S1ap-CGI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_TargetID_PR {
	S1ap_TargetID_PR_NOTHING,	/* No components present */
	S1ap_TargetID_PR_targeteNB_ID,
	S1ap_TargetID_PR_targetRNC_ID,
	S1ap_TargetID_PR_cGI,
	/* Extensions may appear below */
	
} S1ap_TargetID_PR;

/* S1ap-TargetID */
typedef struct S1ap_TargetID {
	S1ap_TargetID_PR present;
	union S1ap_TargetID_u {
		S1ap_TargeteNB_ID_t	 targeteNB_ID;
		S1ap_TargetRNC_ID_t	 targetRNC_ID;
		S1ap_CGI_t	 cGI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_TargetID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_TargetID;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_TargetID_H_ */
#include <asn_internal.h>
