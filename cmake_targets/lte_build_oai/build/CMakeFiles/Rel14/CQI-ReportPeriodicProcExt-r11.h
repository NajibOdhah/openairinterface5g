/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_CQI_ReportPeriodicProcExt_r11_H_
#define	_CQI_ReportPeriodicProcExt_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CQI-ReportPeriodicProcExtId-r11.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include <NULL.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR {
	CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR_NOTHING,	/* No components present */
	CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR_widebandCQI_r11,
	CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR_subbandCQI_r11
} CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR;
typedef enum CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11__csi_ReportMode_r11 {
	CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11__csi_ReportMode_r11_submode1	= 0,
	CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11__csi_ReportMode_r11_submode2	= 1
} e_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11__csi_ReportMode_r11;
typedef enum CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11__periodicityFactor_r11 {
	CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11__periodicityFactor_r11_n2	= 0,
	CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11__periodicityFactor_r11_n4	= 1
} e_CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11__periodicityFactor_r11;
typedef enum CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR {
	CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR_NOTHING,	/* No components present */
	CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR_release,
	CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR_setup
} CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR;
typedef enum CQI_ReportPeriodicProcExt_r11__ext2__periodicityFactorWB_r13 {
	CQI_ReportPeriodicProcExt_r11__ext2__periodicityFactorWB_r13_n2	= 0,
	CQI_ReportPeriodicProcExt_r11__ext2__periodicityFactorWB_r13_n4	= 1
} e_CQI_ReportPeriodicProcExt_r11__ext2__periodicityFactorWB_r13;

/* Forward declarations */
struct CRI_ReportConfig_r13;

/* CQI-ReportPeriodicProcExt-r11 */
typedef struct CQI_ReportPeriodicProcExt_r11 {
	CQI_ReportPeriodicProcExtId_r11_t	 cqi_ReportPeriodicProcExtId_r11;
	long	 cqi_pmi_ConfigIndex_r11;
	struct CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11 {
		CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_PR present;
		union CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11_u {
			struct CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__widebandCQI_r11 {
				long	*csi_ReportMode_r11	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} widebandCQI_r11;
			struct CQI_ReportPeriodicProcExt_r11__cqi_FormatIndicatorPeriodic_r11__subbandCQI_r11 {
				long	 k;
				long	 periodicityFactor_r11;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} subbandCQI_r11;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cqi_FormatIndicatorPeriodic_r11;
	long	*ri_ConfigIndex_r11	/* OPTIONAL */;
	struct CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11 {
		CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_PR present;
		union CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11_u {
			NULL_t	 release;
			struct CQI_ReportPeriodicProcExt_r11__csi_ConfigIndex_r11__setup {
				long	 cqi_pmi_ConfigIndex2_r11;
				long	*ri_ConfigIndex2_r11	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_ConfigIndex_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CQI_ReportPeriodicProcExt_r11__ext1 {
		struct CRI_ReportConfig_r13	*cri_ReportConfig_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct CQI_ReportPeriodicProcExt_r11__ext2 {
		long	*periodicityFactorWB_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportPeriodicProcExt_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportMode_r11_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicityFactor_r11_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicityFactorWB_r13_24;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodicProcExt_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CRI-ReportConfig-r13.h"

#endif	/* _CQI_ReportPeriodicProcExt_r11_H_ */
#include <asn_internal.h>
