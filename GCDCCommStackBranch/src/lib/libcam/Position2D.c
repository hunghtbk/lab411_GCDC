/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Interoperability"
 * 	found in "interoperability.asn"
 * 	`asn1c -fnative-types -fcompound-names`
 */

#include <asn_internal.h>

#include "Position2D.h"

static asn_TYPE_member_t asn_MBR_Position2D_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Position2D, long2D),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LongitudePosition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"long2D"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Position2D, lat2D),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LatitudePosition,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lat2D"
		},
};
static ber_tlv_tag_t asn_DEF_Position2D_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Position2D_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* long2D at 133 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 } /* lat2D at 135 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Position2D_specs_1 = {
	sizeof(struct Position2D),
	offsetof(struct Position2D, _asn_ctx),
	asn_MAP_Position2D_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Position2D = {
	"Position2D",
	"Position2D",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Position2D_tags_1,
	sizeof(asn_DEF_Position2D_tags_1)
		/sizeof(asn_DEF_Position2D_tags_1[0]), /* 1 */
	asn_DEF_Position2D_tags_1,	/* Same as above */
	sizeof(asn_DEF_Position2D_tags_1)
		/sizeof(asn_DEF_Position2D_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Position2D_1,
	2,	/* Elements count */
	&asn_SPC_Position2D_specs_1	/* Additional specs */
};
