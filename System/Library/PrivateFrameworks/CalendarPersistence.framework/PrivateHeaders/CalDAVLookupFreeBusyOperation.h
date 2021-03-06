//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CALTimeRange, CalDAVFreeBusyLookupTask, NSDictionary, NSMutableDictionary;

@interface CalDAVLookupFreeBusyOperation : CalSingleSynchronousTask
{
    CalDAVFreeBusyLookupTask *_task;
    NSDictionary *_freeBusySpans;
    NSMutableDictionary *_userEventArrays;
    CALTimeRange *_timeRange;
}

@property(readonly) NSDictionary *userEventArrays; // @synthesize userEventArrays=_userEventArrays;
@property(readonly) NSDictionary *freeBusySpans; // @synthesize freeBusySpans=_freeBusySpans;
- (BOOL)executeSynchronouslyWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithPrincipal:(id)arg1 timeRange:(id)arg2 attendees:(id)arg3 maskingEventSharedUid:(id)arg4;

@end

