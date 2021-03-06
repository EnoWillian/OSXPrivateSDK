//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection, StreamingUnzipper;

@interface SZExtractor : NSObject
{
    NSXPCConnection *_unzipServiceConnection;
    StreamingUnzipper *_inProcessUnzipper;
    NSObject<OS_dispatch_queue> *_inProcessUnzipQueue;
    BOOL _errorOccurred;
}

- (void).cxx_destruct;
- (void)finishStreamWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)suspendStreamWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)supplyDispatchData:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_invalidateObject;
- (void)_errorOccurred;
- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long *)arg4;
- (id)initForLocalExtractionWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long *)arg4;
- (id)initForRemoteExtractionWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long *)arg4;
- (id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long *)arg2;

@end

