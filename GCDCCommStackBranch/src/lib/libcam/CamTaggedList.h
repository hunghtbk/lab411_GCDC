/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Interoperability"
 * 	found in "interoperability.asn"
 * 	`asn1c -fnative-types -fcompound-names`
 */

#ifndef	_CamTaggedList_H_
#define	_CamTaggedList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CamTaggedList */
typedef OCTET_STRING_t	 CamTaggedList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CamTaggedList;
asn_struct_free_f CamTaggedList_free;
asn_struct_print_f CamTaggedList_print;
asn_constr_check_f CamTaggedList_constraint;
ber_type_decoder_f CamTaggedList_decode_ber;
der_type_encoder_f CamTaggedList_encode_der;
xer_type_decoder_f CamTaggedList_decode_xer;
xer_type_encoder_f CamTaggedList_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CamTaggedList_H_ */
