/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/andrey/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_Neighbour_Information_Elm_H_
#define	_X2ap_Neighbour_Information_Elm_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-ECGI.h"
#include "X2ap-PCI.h"
#include "X2ap-EARFCN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_IE_Extensions;

/* X2ap-Neighbour-Information-Elm */
typedef struct X2ap_Neighbour_Information_Elm {
	X2ap_ECGI_t	 eCGI;
	X2ap_PCI_t	 pCI;
	X2ap_EARFCN_t	 eARFCN;
	struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_Neighbour_Information_Elm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_Neighbour_Information_Elm;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_Neighbour_Information_Elm_H_ */
#include <asn_internal.h>
