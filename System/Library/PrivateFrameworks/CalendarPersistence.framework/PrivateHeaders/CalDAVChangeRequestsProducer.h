//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CalDAVChangeRequestsProducer : NSObject
{
    NSMutableSet *_createdScheduleChangeRequests;
}

+ (BOOL)changeRequestsShouldBeProducedForContext:(id)arg1;
+ (void)registerForContextNotifications;
+ (id)sharedInstance;
- (void)processDeletedManagedObjects:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)processUpdatedManagedObjects:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)processInsertedManagedObjects:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)createdScheduleRequestForMessage:(id)arg1;
- (void)addCreatedScheduleChangeRequest:(id)arg1;
- (void)managedObjectContextWillSave:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)dealloc;
- (id)init;

@end
