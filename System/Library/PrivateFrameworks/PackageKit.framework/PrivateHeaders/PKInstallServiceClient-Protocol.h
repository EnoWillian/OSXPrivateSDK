//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString;

@protocol PKInstallServiceClient <NSObject>
- (void)deferredReplyForToken:(NSString *)arg1 installError:(NSError *)arg2 registrationPaths:(NSArray *)arg3;
- (void)installDidEndForToken:(NSString *)arg1;
- (void)installDidBeginCommitForToken:(NSString *)arg1;
- (void)installDidBeginForToken:(NSString *)arg1;
@end

