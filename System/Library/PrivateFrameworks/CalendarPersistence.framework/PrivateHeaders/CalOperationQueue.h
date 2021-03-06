//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalManagedObjectContext, NSCountedSet, NSManagedObjectID, NSMutableArray, NSOperationQueue;

@interface CalOperationQueue : NSObject
{
    NSManagedObjectID *_sessionID;
    NSOperationQueue *_queue;
    NSMutableArray *_operations;
    NSMutableArray *_debugOperations;
    NSCountedSet *_writeOperationsCountedSet;
    CalManagedObjectContext *_context;
    long long _lastSequenceNumberProcessed;
}

- (void)processChangeRequests;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)_mergeChangesFromContextDidSaveNotificationInvokedByQueue:(id)arg1;
- (void)calendarStoreResetExternally:(id)arg1;
- (void)_calendarStoreResetExternallyInvokedByQueue:(id)arg1;
- (void)_notifyListenersQueueChanged;
- (void)_notifyListenersThatOperationFinished:(id)arg1 withError:(id)arg2;
- (id)sessionIDAsString;
- (void)_removeDebugOperationForOperation:(id)arg1;
- (void)_addDebugOperationForOperation:(id)arg1 atIndex:(long long)arg2;
- (void)_setSessionStatus:(int)arg1 withError:(id)arg2;
- (void)_performSelectorOnQueue:(SEL)arg1 withObject:(id)arg2;
- (BOOL)isItemLocallyModifiedForObjectID:(id)arg1;
- (void)addOperationToInternalQueue:(id)arg1;
- (void)run;
- (id)operations;
- (id)debugOperations;
- (void)revertOperation:(id)arg1;
- (void)_revertOperationInvokedByQueue:(id)arg1;
- (void)testConnection;
- (void)addOperation:(id)arg1;
- (void)_clearPersistedError;
- (void)removeOperation:(id)arg1;
- (void)_removeOperationInvokedByQueue:(id)arg1 andExecute:(BOOL)arg2;
- (void)_removeOperationInvokedByQueue:(id)arg1;
- (void)_addOperationInvokedByQueue:(id)arg1 andExecute:(BOOL)arg2;
- (void)_addOperationInvokedByQueue:(id)arg1;
- (void)_testConnectionInvokedByQueue;
- (void)_fetchPersistentOperations;
- (void)_fetchPersistentOperationsInvokedByQueueAndExecute:(BOOL)arg1;
- (void)_fetchPersistentOperationsInvokedByQueue;
- (id)_persistentOperationsForSessionID:(id)arg1 largerThanSequenceNumber:(long long)arg2 inManagedObjectContext:(id)arg3;
- (void)executeOperations;
- (BOOL)isBusy;
- (id)sessionID;
- (void)dealloc;
- (void)invalidate;
- (id)initWithSessionID:(id)arg1;
- (void)_createQueueContext;

@end

