/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-PRE-IEs"
 * 	found in "../v2/e2sm-rc-pre_v2_rsys.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RANparameter_Name_H_
#define	_RANparameter_Name_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PrintableString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RANparameter-Name */
typedef PrintableString_t	 RANparameter_Name_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RANparameter_Name_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RANparameter_Name;
asn_struct_free_f RANparameter_Name_free;
asn_struct_print_f RANparameter_Name_print;
asn_constr_check_f RANparameter_Name_constraint;
ber_type_decoder_f RANparameter_Name_decode_ber;
der_type_encoder_f RANparameter_Name_encode_der;
xer_type_decoder_f RANparameter_Name_decode_xer;
xer_type_encoder_f RANparameter_Name_encode_xer;
per_type_decoder_f RANparameter_Name_decode_uper;
per_type_encoder_f RANparameter_Name_encode_uper;
per_type_decoder_f RANparameter_Name_decode_aper;
per_type_encoder_f RANparameter_Name_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANparameter_Name_H_ */
#include "asn_internal.h"
