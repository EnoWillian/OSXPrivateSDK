//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CalAgentAccount : NSObject
{
    int _refreshInterval;
    BOOL _pushIsActive;
    BOOL _isExchange;
    NSString *_objectID;
}

@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void)setFlagToRefreshProperties;
- (BOOL)updatePushStateTo:(BOOL)arg1;
- (void)scheduleNextRefreshWithInterval:(int)arg1;
- (void)scheduleNextRefresh;
- (void)_refresh:(int)arg1 principal:(id)arg2;
- (id)description;
- (void)update;
- (void)dealloc;
- (id)initWithManagedAccount:(id)arg1;

@end
