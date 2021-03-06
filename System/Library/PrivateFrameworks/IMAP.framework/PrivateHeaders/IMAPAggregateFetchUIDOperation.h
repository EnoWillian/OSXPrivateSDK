//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPAggregateClientOperation.h>

@interface IMAPAggregateFetchUIDOperation : IMAPAggregateClientOperation
{
    unsigned int _expectedSize;
}

@property unsigned int expectedSize; // @synthesize expectedSize=_expectedSize;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (void)cleanupAfterCompletion;
- (id)activityString;
- (id)commandTypeString;
- (id)initWithOperations:(id)arg1;
- (id)initWithOperations:(id)arg1 expectedSize:(unsigned int)arg2;

@end

