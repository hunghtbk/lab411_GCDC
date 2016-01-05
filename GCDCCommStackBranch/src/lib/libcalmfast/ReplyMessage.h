/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CalmFast"
 * 	found in "calmfast.asn1"
 * 	`asn1c -fnative-types -fcompound-names`
 */

#ifndef	_ReplyMessage_H_
#define	_ReplyMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "OpenReply.h"
#include "CloseReply.h"
#include "MsgReply.h"
#include "FaultReply.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReplyMessage__payload_PR {
	ReplyMessage__payload_PR_NOTHING,	/* No components present */
	ReplyMessage__payload_PR_openack,
	ReplyMessage__payload_PR_closeack,
	ReplyMessage__payload_PR_msg,
	ReplyMessage__payload_PR_service,
	ReplyMessage__payload_PR_fault
} ReplyMessage__payload_PR;

/* ReplyMessage */
typedef struct ReplyMessage {
	long	 serial;
	struct ReplyMessage__payload {
		ReplyMessage__payload_PR present;
		union ReplyMessage__payload_u {
			OpenReply_t	 openack;
			CloseReply_t	 closeack;
			MsgReply_t	 msg;
			MsgReply_t	 service;
			FaultReply_t	 fault;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} payload;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReplyMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReplyMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _ReplyMessage_H_ */
