//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MCWebAuthenticationManager : NSObject
{
    NSMutableArray *_requests;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_displayWebAuthentication;
- (void)queueDisplayWebAuthenticationURL:(id)arg1 onWindow:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)description;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)init;

@end

