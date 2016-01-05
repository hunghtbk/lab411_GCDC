/*
 * $Id: MessageType.c $
 *
 * This file is part of the CALM FAST Message Library.
 * 
 * Author: Andras Takacs <andras.takacs@ramsys.hu>
 *
 * Copyright 2006-2009 Ramsys Zrt
 *
 * CALM FAST Message Library is free software; you can redistribute
 * it and/or modify it under the terms of the GNU LEsser General Public
 * License as published by the Free Software Foundation; version 3 of
 * the License.
 *
 * CALM FAST Message Library is distributed in the hope that it will
 * be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with CALM FAST Message Library; if not, write to the Free
 * Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307 USA.
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CALMime"
 * 	found in "29281.asn"
 * 	`asn1c -fnative-types -fcompound-names -fskeletons-copy`
 */

#include <asn_internal.h>

#include "MessageType.h"

int
__LIBFAST__MessageType_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
__LIBFAST__MessageType_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
__LIBFAST__MessageType_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	__LIBFAST__MessageType_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
__LIBFAST__MessageType_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	__LIBFAST__MessageType_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
__LIBFAST__MessageType_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	__LIBFAST__MessageType_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
__LIBFAST__MessageType_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	__LIBFAST__MessageType_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
__LIBFAST__MessageType_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	__LIBFAST__MessageType_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
__LIBFAST__MessageType_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	__LIBFAST__MessageType_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
__LIBFAST__MessageType_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	__LIBFAST__MessageType_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
__LIBFAST__MessageType_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	__LIBFAST__MessageType_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_MessageType_constr_1 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_MessageType_value2enum_1[] = {
	{ 0,	3,	"sta" },
	{ 1,	3,	"stc" },
	{ 5,	8,	"reqNoAck" },
	{ 6,	10,	"reqNeedAck" },
	{ 7,	3,	"res" }
};
static unsigned int asn_MAP_MessageType_enum2value_1[] = {
	3,	/* reqNeedAck(6) */
	2,	/* reqNoAck(5) */
	4,	/* res(7) */
	0,	/* sta(0) */
	1	/* stc(1) */
};
static asn_INTEGER_specifics_t asn_SPC_MessageType_specs_1 = {
	asn_MAP_MessageType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_MessageType_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_MessageType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MessageType = {
	"MessageType",
	"MessageType",
	__LIBFAST__MessageType_free,
	__LIBFAST__MessageType_print,
	__LIBFAST__MessageType_constraint,
	__LIBFAST__MessageType_decode_ber,
	__LIBFAST__MessageType_encode_der,
	__LIBFAST__MessageType_decode_xer,
	__LIBFAST__MessageType_encode_xer,
	__LIBFAST__MessageType_decode_uper,
	__LIBFAST__MessageType_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MessageType_tags_1,
	sizeof(asn_DEF_MessageType_tags_1)
		/sizeof(asn_DEF_MessageType_tags_1[0]), /* 1 */
	asn_DEF_MessageType_tags_1,	/* Same as above */
	sizeof(asn_DEF_MessageType_tags_1)
		/sizeof(asn_DEF_MessageType_tags_1[0]), /* 1 */
	&asn_PER_type_MessageType_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_MessageType_specs_1	/* Additional specs */
};
