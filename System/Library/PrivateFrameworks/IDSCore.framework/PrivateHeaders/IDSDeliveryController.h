//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTMessageDelivery, NSMutableDictionary;

@interface IDSDeliveryController : NSObject
{
    FTMessageDelivery *_messageDelivery;
    NSMutableDictionary *_messageQueue;
}

+ (id)sharedInstance;
- (void)sendMessageDictionary:(id)arg1 messageID:(id)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(BOOL)arg5 timeout:(double)arg6 allowPartialSendsToSucceed:(BOOL)arg7 highPriority:(BOOL)arg8 fromID:(id)arg9 fromIdentity:(id)arg10 toPeople:(id)arg11 topic:(id)arg12 ackBlock:(CDUnknownBlockType)arg13 sendCompletionBlock:(CDUnknownBlockType)arg14;
- (void)_sendErrorDictionary:(id)arg1 onService:(id)arg2 fromID:(id)arg3 fromIdentity:(id)arg4 toID:(id)arg5 toToken:(id)arg6 topic:(id)arg7 sendCompletionBlock:(CDUnknownBlockType)arg8;
- (void)_sendMessageDictionary:(id)arg1 lastRetryInterval:(double)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(BOOL)arg5 allowPartialSendsToSucceed:(BOOL)arg6 highPriority:(BOOL)arg7 timeout:(double)arg8 messageID:(id)arg9 fromID:(id)arg10 fromIdentity:(id)arg11 toID:(id)arg12 toPeople:(id)arg13 topic:(id)arg14 ackBlock:(CDUnknownBlockType)arg15 sendCompletionBlock:(CDUnknownBlockType)arg16;
- (void)sendIDSMessage:(id)arg1 service:(id)arg2 topic:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_sendMessage:(id)arg1 dataToEncrypt:(id)arg2 onService:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toSessionToken:(id)arg7 toPeople:(id)arg8 originallyToPeople:(id)arg9 allowPartialSendsToSucceed:(BOOL)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (id)_stripPotentialTokenURI:(id)arg1 token:(id *)arg2;
- (id)_tokenURIForToken:(id)arg1 uri:(id)arg2;
- (void)_sendAttachmentWithGuid:(id)arg1 service:(id)arg2 topic:(id)arg3 encryptedData:(id)arg4 toToken:(id)arg5 toID:(id)arg6 fromID:(id)arg7 fromIdentity:(id)arg8 ackBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_sendFTMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toID:(id)arg4 toToken:(id)arg5 toSessionToken:(id)arg6 toPeople:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)_queueMessage:(id)arg1 service:(id)arg2 dataToEncrypt:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 originallyToPeople:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)_emptyMessagesForURIs:(id)arg1;
- (void)_handleMessagesForURIs:(id)arg1 originalURIs:(id)arg2;
- (void)_checkFastDormancy;
- (void)_processMessageResponse:(id)arg1 error:(id)arg2 resultCode:(long long)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6;
@property(readonly, nonatomic) long long effectiveMaxPayloadSize;
@property(readonly, nonatomic) long long maxMessageSize;
- (void)dealloc;
- (id)init;

@end

