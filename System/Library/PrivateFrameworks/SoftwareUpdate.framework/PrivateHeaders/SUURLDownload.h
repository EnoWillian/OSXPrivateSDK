//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"
#import "NSURLDownloadDelegate.h"

@class NSLock, NSMutableArray, NSURLDownload;

@interface SUURLDownload : NSObject <NSURLDownloadDelegate, NSURLConnectionDelegate>
{
    NSURLDownload *_download;
    id _delegate;
    long long _downloadedLength;
    long long _expectedLength;
    NSLock *_progressLock;
    NSMutableArray *_dates;
    NSMutableArray *_lengthNumbers;
    struct __CFRunLoop *_cfRunLoop;
}

- (double)estimatedTimeRemaining;
- (float)averageBytesPerSecond;
- (BOOL)_updateProgressData;
- (BOOL)_isLastDateWithinTimeInterval:(double)arg1;
- (long long)expectedContentLength;
- (long long)downloadedLength;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 willResumeWithResponse:(id)arg2 fromByte:(long long)arg3;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)downloadDidBegin:(id)arg1;

@end

