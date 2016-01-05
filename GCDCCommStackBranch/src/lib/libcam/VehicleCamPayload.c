/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Interoperability"
 * 	found in "interoperability.asn"
 * 	`asn1c -fnative-types -fcompound-names`
 */

#include <asn_internal.h>

#include "VehicleCamPayload.h"

static int
memb_numOfItemsInTaggedList_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_VehicleCamPayload_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, vehicleElevation),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Elevation,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vehicleElevation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, vehicleType),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_VehicleType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vehicleType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, vehicleSize),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_VehicleSize,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vehicleSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, longitudinalAcceleration),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LongitudinalAcceleration,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"longitudinalAcceleration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, yawRate),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_YawRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"yawRate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, exteriorLights),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_ExteriorLights,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"exteriorLights"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, accelerationControl),
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_AccelerationControl,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"accelerationControl"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, covarianceMatrix),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_IncompleteCovarianceMatrix,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"covarianceMatrix"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleCamPayload, numOfItemsInTaggedList),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_numOfItemsInTaggedList_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numOfItemsInTaggedList"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleCamPayload, taggedList),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_CamTaggedList,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"taggedList"
		},
};
static ber_tlv_tag_t asn_DEF_VehicleCamPayload_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VehicleCamPayload_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 3 }, /* vehicleElevation at 30 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -1, 2 }, /* longitudinalAcceleration at 33 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -2, 1 }, /* yawRate at 34 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 8, -3, 0 }, /* numOfItemsInTaggedList at 38 */
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 5, 0, 1 }, /* exteriorLights at 35 */
    { (ASN_TAG_CLASS_UNIVERSAL | (3 << 2)), 6, -1, 0 }, /* accelerationControl at 36 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 9, 0, 0 }, /* taggedList at 39 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 2 }, /* vehicleType at 31 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 1 }, /* vehicleSize at 32 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -2, 0 } /* covarianceMatrix at 37 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VehicleCamPayload_specs_1 = {
	sizeof(struct VehicleCamPayload),
	offsetof(struct VehicleCamPayload, _asn_ctx),
	asn_MAP_VehicleCamPayload_tag2el_1,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VehicleCamPayload = {
	"VehicleCamPayload",
	"VehicleCamPayload",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VehicleCamPayload_tags_1,
	sizeof(asn_DEF_VehicleCamPayload_tags_1)
		/sizeof(asn_DEF_VehicleCamPayload_tags_1[0]), /* 1 */
	asn_DEF_VehicleCamPayload_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleCamPayload_tags_1)
		/sizeof(asn_DEF_VehicleCamPayload_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VehicleCamPayload_1,
	10,	/* Elements count */
	&asn_SPC_VehicleCamPayload_specs_1	/* Additional specs */
};
