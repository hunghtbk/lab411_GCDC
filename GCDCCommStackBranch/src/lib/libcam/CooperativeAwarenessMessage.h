/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "Interoperability"
 * 	found in "interoperability.asn"
 * 	`asn1c -fnative-types -fcompound-names`
 */

#ifndef	_CooperativeAwarenessMessage_H_
#define	_CooperativeAwarenessMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CamHeader.h"
#include "CamPayload.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CooperativeAwarenessMessage */
typedef struct CooperativeAwarenessMessage {
	CamHeader_t	 header;
	CamPayload_t	 payload;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CooperativeAwarenessMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CooperativeAwarenessMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _CooperativeAwarenessMessage_H_ */