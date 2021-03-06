//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAPOfflineCache.h"

@class MFIMAPAccount, NSMutableArray;

@interface MFIMAPOperationCache : NSObject <IMAPOfflineCache>
{
    MFIMAPAccount *_account;
    NSMutableArray *_ops;
    unsigned int _lastUid;
    BOOL _opsChanged;
}

- (id)description;
- (id)_deferredOperations;
- (void)performDeferredOperationsWithGateway:(id)arg1 outDisplayableError:(id *)arg2;
- (BOOL)_performCopyOperation:(id)arg1 withContext:(id)arg2 failedSourceUids:(id)arg3 error:(id *)arg4;
- (BOOL)_performAppendOperation:(id)arg1 withContext:(id)arg2 backupManager:(id)arg3 suggestedOfflineRestoreName:(id)arg4 recoveredMailboxName:(id *)arg5 error:(id *)arg6;
- (BOOL)_performStoreOperation:(id)arg1 forGmailLabels:(BOOL)arg2 ignoringUids:(id)arg3 withContext:(id)arg4;
- (BOOL)_performDeleteOperation:(id)arg1 withContext:(id)arg2;
- (BOOL)_performCreateOperation:(id)arg1 withContext:(id)arg2;
- (BOOL)hasOperationsForMailbox:(id)arg1;
- (unsigned long long)numberOfPendingChanges;
- (void)saveChanges;
- (void)expungeMessageWithMessageID:(id)arg1 documentID:(id)arg2;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (void)_expungeMessageWithTemporaryUid:(unsigned int)arg1 orMessageID:(id)arg2 documentID:(id)arg3;
- (unsigned int)uidForAppendingMessageData:(id)arg1 withFlags:(id)arg2 andInternalDate:(id)arg3 toMailbox:(id)arg4;
- (unsigned int)firstUidForCopyingMessages:(id)arg1 toMailbox:(id)arg2;
- (void)setGmailLabels:(id)arg1 andClearGmailLabels:(id)arg2 forUids:(id)arg3 forMailbox:(id)arg4;
- (void)setFlags:(id)arg1 andClearFlags:(id)arg2 forUids:(id)arg3 forMailbox:(id)arg4;
- (void)_setFlagsOrGmailLabels:(id)arg1 andClearFlagsOrGmailLabels:(id)arg2 actuallyGmailLabels:(BOOL)arg3 forMessages:(id)arg4;
- (void)setGmailLabels:(id)arg1 andClearGmailLabels:(id)arg2 forMessages:(id)arg3;
- (void)setFlags:(id)arg1 andClearFlags:(id)arg2 forMessages:(id)arg3;
- (void)deleteMailbox:(id)arg1;
- (void)createMailbox:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithIMAPAccount:(id)arg1;

@end

