//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/UserNotificationPolicyData.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RemoteNotificationPolicyData : UserNotificationPolicyData
{
    NSString *_websiteIdentifier;
    NSString *_deviceToken;
    NSArray *_allowedDomains;
}

@property(readonly, nonatomic) NSArray *allowedDomains; // @synthesize allowedDomains=_allowedDomains;
@property(readonly, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(readonly, nonatomic) NSString *websiteIdentifier; // @synthesize websiteIdentifier=_websiteIdentifier;
- (void)updatePermission:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithWebsiteIdentifier:(id)arg1 displayName:(id)arg2 icon:(id)arg3 policy:(int)arg4 deviceToken:(id)arg5 allowedDomains:(id)arg6;

@end

