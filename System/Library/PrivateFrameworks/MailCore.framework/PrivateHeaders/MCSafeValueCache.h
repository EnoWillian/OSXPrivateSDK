//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MCSafeValueCache : NSObject
{
    id _value;
    long long _state;
    id _target;
    SEL _selector;
}

- (void)invalidate;
- (id)retainedValue;
@property(retain) id value;
- (void)clearTarget;
- (void)dealloc;
- (id)initWithUpdateTarget:(id)arg1 selector:(SEL)arg2;

@end

