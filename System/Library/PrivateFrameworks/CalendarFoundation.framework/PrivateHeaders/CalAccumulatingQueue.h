//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CalAccumulatingQueue : NSObject
{
    struct dispatch_queue_s *_queue;
    NSMutableSet *_tags;
    CDUnknownBlockType _block;
}

- (void)dealloc;
- (void)updateTagsAndExecuteBlock:(id)arg1;
- (BOOL)_hasQueuedUpBlock;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 andBlock:(CDUnknownBlockType)arg2;

@end

