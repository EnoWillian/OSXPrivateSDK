//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface MSClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)defaultClient;
- (void)markMessage:(id)arg1 asRead:(BOOL)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)getMessagesWithCriterion:(id)arg1 resultKeys:(id)arg2 inboxesOnly:(BOOL)arg3 maximumResults:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_asyncGenerateStringsAndAttachmentsIfNecessaryForModel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveMessageWithModel:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)sendMessageWithModel:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAccounts:(CDUnknownBlockType)arg1;
- (void)echo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_proxy;
- (id)_newMailServiceXPCConnection;
- (void)dealloc;
- (id)init;

@end

