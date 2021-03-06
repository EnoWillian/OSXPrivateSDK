//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CWInterface, NSArray, NSSet;

@interface CWScanManager : NSObject
{
    BOOL _isActive;
    long long _scanCounter;
    struct dispatch_queue_s *_scanQueue;
    struct dispatch_queue_s *_syncQueue;
    struct dispatch_source_s *_scanTimer;
    double _scanInterval;
    NSArray *_ssidList;
    long long _ssidListIndex;
    NSSet *_scanResults;
    CWInterface *_interface;
}

+ (id)sharedScanManager;
- (id)displayedScanResultsForNetworks:(id)arg1;
- (void)setScanResults:(id)arg1;
- (id)scanResults;
- (void)stopScanning;
- (void)startScanning;
- (void)setInterval:(double)arg1;
- (void)setSSIDList:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)performScan;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

