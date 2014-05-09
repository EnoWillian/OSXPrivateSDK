//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMPingTest : NSObject
{
    NSString *_address;
    BOOL _usesWifi;
    id _collector;
    BOOL _isRunning;
    struct dispatch_source_s *_sendTimer;
    struct dispatch_source_s *_socketReadSource;
    double _secondsToRun;
}

@property(readonly, nonatomic) double secondsToRun; // @synthesize secondsToRun=_secondsToRun;
- (double)longTimeInterval;
- (void)_setupReadSource:(int)arg1 address:(struct sockaddr_in)arg2 icmID:(unsigned short)arg3 queue:(struct dispatch_queue_s *)arg4 completionHander:(CDUnknownBlockType)arg5;
- (void)_doPingWithSocket:(int)arg1 address:(struct sockaddr_in)arg2 timeToRunTestInSeconds:(double)arg3 pingTimeout:(double)arg4 queue:(struct dispatch_queue_s *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (int)_setupAndPerformPing:(double)arg1 queue:(struct dispatch_queue_s *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)writeResultsToFile:(id)arg1 error:(id *)arg2;
- (id)pingStats:(double)arg1;
- (id)pingStats;
- (void)stop;
- (void)startWithTimeout:(double)arg1 queue:(struct dispatch_queue_s *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 wifi:(BOOL)arg2;

@end
