/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-PRE-IEs"
 * 	found in "../v2/e2sm-rc-pre_v2_rsys.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "E2SM-RC-PRE-RANfunction-Description.h"

#include "RIC-EventTriggerStyle-List.h"
#include "RIC-ReportStyle-List.h"
static int
memb_ric_EventTriggerStyle_List_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 63)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ric_ReportStyle_List_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 63)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ric_EventTriggerStyle_List_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ric_ReportStyle_List_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ric_EventTriggerStyle_List_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ric_ReportStyle_List_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ric_EventTriggerStyle_List_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RIC_EventTriggerStyle_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ric_EventTriggerStyle_List_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ric_EventTriggerStyle_List_specs_4 = {
	sizeof(struct E2SM_RC_PRE_RANfunction_Description__e2SM_RC_PRE_RANfunction_Item__ric_EventTriggerStyle_List),
	offsetof(struct E2SM_RC_PRE_RANfunction_Description__e2SM_RC_PRE_RANfunction_Item__ric_EventTriggerStyle_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_EventTriggerStyle_List_4 = {
	"ric-EventTriggerStyle-List",
	"ric-EventTriggerStyle-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ric_EventTriggerStyle_List_tags_4,
	sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_4)
		/sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_4[0]) - 1, /* 1 */
	asn_DEF_ric_EventTriggerStyle_List_tags_4,	/* Same as above */
	sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_4)
		/sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_ric_EventTriggerStyle_List_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_ric_EventTriggerStyle_List_4,
	1,	/* Single element */
	&asn_SPC_ric_EventTriggerStyle_List_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ric_ReportStyle_List_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RIC_ReportStyle_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ric_ReportStyle_List_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ric_ReportStyle_List_specs_6 = {
	sizeof(struct E2SM_RC_PRE_RANfunction_Description__e2SM_RC_PRE_RANfunction_Item__ric_ReportStyle_List),
	offsetof(struct E2SM_RC_PRE_RANfunction_Description__e2SM_RC_PRE_RANfunction_Item__ric_ReportStyle_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_ReportStyle_List_6 = {
	"ric-ReportStyle-List",
	"ric-ReportStyle-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ric_ReportStyle_List_tags_6,
	sizeof(asn_DEF_ric_ReportStyle_List_tags_6)
		/sizeof(asn_DEF_ric_ReportStyle_List_tags_6[0]) - 1, /* 1 */
	asn_DEF_ric_ReportStyle_List_tags_6,	/* Same as above */
	sizeof(asn_DEF_ric_ReportStyle_List_tags_6)
		/sizeof(asn_DEF_ric_ReportStyle_List_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_ric_ReportStyle_List_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_ric_ReportStyle_List_6,
	1,	/* Single element */
	&asn_SPC_ric_ReportStyle_List_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_e2SM_RC_PRE_RANfunction_Item_3[] = {
	{ ATF_POINTER, 2, offsetof(struct E2SM_RC_PRE_RANfunction_Description__e2SM_RC_PRE_RANfunction_Item, ric_EventTriggerStyle_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ric_EventTriggerStyle_List_4,
		0,
		{ 0, &asn_PER_memb_ric_EventTriggerStyle_List_constr_4,  memb_ric_EventTriggerStyle_List_constraint_3 },
		0, 0, /* No default value */
		"ric-EventTriggerStyle-List"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_RC_PRE_RANfunction_Description__e2SM_RC_PRE_RANfunction_Item, ric_ReportStyle_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ric_ReportStyle_List_6,
		0,
		{ 0, &asn_PER_memb_ric_ReportStyle_List_constr_6,  memb_ric_ReportStyle_List_constraint_3 },
		0, 0, /* No default value */
		"ric-ReportStyle-List"
		},
};
static const int asn_MAP_e2SM_RC_PRE_RANfunction_Item_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_e2SM_RC_PRE_RANfunction_Item_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_e2SM_RC_PRE_RANfunction_Item_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-EventTriggerStyle-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ric-ReportStyle-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_e2SM_RC_PRE_RANfunction_Item_specs_3 = {
	sizeof(struct E2SM_RC_PRE_RANfunction_Description__e2SM_RC_PRE_RANfunction_Item),
	offsetof(struct E2SM_RC_PRE_RANfunction_Description__e2SM_RC_PRE_RANfunction_Item, _asn_ctx),
	asn_MAP_e2SM_RC_PRE_RANfunction_Item_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_e2SM_RC_PRE_RANfunction_Item_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_e2SM_RC_PRE_RANfunction_Item_3 = {
	"e2SM-RC-PRE-RANfunction-Item",
	"e2SM-RC-PRE-RANfunction-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_e2SM_RC_PRE_RANfunction_Item_tags_3,
	sizeof(asn_DEF_e2SM_RC_PRE_RANfunction_Item_tags_3)
		/sizeof(asn_DEF_e2SM_RC_PRE_RANfunction_Item_tags_3[0]) - 1, /* 1 */
	asn_DEF_e2SM_RC_PRE_RANfunction_Item_tags_3,	/* Same as above */
	sizeof(asn_DEF_e2SM_RC_PRE_RANfunction_Item_tags_3)
		/sizeof(asn_DEF_e2SM_RC_PRE_RANfunction_Item_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_e2SM_RC_PRE_RANfunction_Item_3,
	2,	/* Elements count */
	&asn_SPC_e2SM_RC_PRE_RANfunction_Item_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E2SM_RC_PRE_RANfunction_Description_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_PRE_RANfunction_Description, ranFunction_Name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANfunction_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranFunction-Name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_PRE_RANfunction_Description, e2SM_RC_PRE_RANfunction_Item),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_e2SM_RC_PRE_RANfunction_Item_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2SM-RC-PRE-RANfunction-Item"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_RC_PRE_RANfunction_Description_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_PRE_RANfunction_Description_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ranFunction-Name */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* e2SM-RC-PRE-RANfunction-Item */
};
static asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_PRE_RANfunction_Description_specs_1 = {
	sizeof(struct E2SM_RC_PRE_RANfunction_Description),
	offsetof(struct E2SM_RC_PRE_RANfunction_Description, _asn_ctx),
	asn_MAP_E2SM_RC_PRE_RANfunction_Description_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_PRE_RANfunction_Description = {
	"E2SM-RC-PRE-RANfunction-Description",
	"E2SM-RC-PRE-RANfunction-Description",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_PRE_RANfunction_Description_tags_1,
	sizeof(asn_DEF_E2SM_RC_PRE_RANfunction_Description_tags_1)
		/sizeof(asn_DEF_E2SM_RC_PRE_RANfunction_Description_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_PRE_RANfunction_Description_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_PRE_RANfunction_Description_tags_1)
		/sizeof(asn_DEF_E2SM_RC_PRE_RANfunction_Description_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_RC_PRE_RANfunction_Description_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_RC_PRE_RANfunction_Description_specs_1	/* Additional specs */
};

