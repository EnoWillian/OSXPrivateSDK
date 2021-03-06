//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPProfile, NSDictionary, NSMutableArray, NSString;

@protocol CPProfileMissingFieldHelperProtocol <NSObject>
- (id)initForPayload:(NSDictionary *)arg1 forProfile:(CPProfile *)arg2 intoResults:(NSMutableArray *)arg3;
- (void)addMissingField:(NSString *)arg1 forKey:(NSString *)arg2 isRequired:(BOOL)arg3 useSecureEntry:(BOOL)arg4;
- (void)startSection:(NSString *)arg1;
- (void)setPayloadHeader:(NSString *)arg1;
- (void)setPayloadIconImagePath:(NSString *)arg1 title:(NSString *)arg2;
- (_Bool)isKeyMissing:(NSString *)arg1;
@end

