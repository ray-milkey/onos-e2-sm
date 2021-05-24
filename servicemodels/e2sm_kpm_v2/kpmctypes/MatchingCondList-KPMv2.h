/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "../v2/e2sm_kpm_v2.0.3-changed.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_MatchingCondList_KPMv2_H_
#define	_MatchingCondList_KPMv2_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "MatchingCondItem-KPMv2.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MatchingCondItem_KPMv2;

/* MatchingCondList-KPMv2 */
typedef struct MatchingCondList_KPMv2 {
	A_SEQUENCE_OF(struct MatchingCondItem_KPMv2) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MatchingCondList_KPMv2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MatchingCondList_KPMv2;
extern asn_SET_OF_specifics_t asn_SPC_MatchingCondList_KPMv2_specs_1;
extern asn_TYPE_member_t asn_MBR_MatchingCondList_KPMv2_1[1];
extern asn_per_constraints_t asn_PER_type_MatchingCondList_KPMv2_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MatchingCondList_KPMv2_H_ */
#include "asn_internal.h"