/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-PRE-IEs"
 * 	found in "../v2/e2sm-rc-pre_v2_rsys.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RIC_ReportStyle_List_RCPRE_H_
#define	_RIC_ReportStyle_List_RCPRE_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RIC-Style-Type-RCPRE.h"
#include "RIC-Style-Name-RCPRE.h"
#include "RIC-Format-Type-RCPRE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RIC-ReportStyle-List-RCPRE */
typedef struct RIC_ReportStyle_List_RCPRE {
	RIC_Style_Type_RCPRE_t	 ric_ReportStyle_Type;
	RIC_Style_Name_RCPRE_t	 ric_ReportStyle_Name;
	RIC_Format_Type_RCPRE_t	 ric_IndicationHeaderFormat_Type;
	RIC_Format_Type_RCPRE_t	 ric_IndicationMessageFormat_Type;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RIC_ReportStyle_List_RCPRE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RIC_ReportStyle_List_RCPRE;
extern asn_SEQUENCE_specifics_t asn_SPC_RIC_ReportStyle_List_RCPRE_specs_1;
extern asn_TYPE_member_t asn_MBR_RIC_ReportStyle_List_RCPRE_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RIC_ReportStyle_List_RCPRE_H_ */
#include "asn_internal.h"
