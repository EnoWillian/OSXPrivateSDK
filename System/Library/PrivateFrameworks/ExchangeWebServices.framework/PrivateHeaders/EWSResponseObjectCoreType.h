//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSMessageType.h>

@class EWSItemIdType;

@interface EWSResponseObjectCoreType : EWSMessageType
{
    EWSItemIdType *ReferenceItemId;
}

+ (id)definition;
@property(retain, nonatomic) EWSItemIdType *ReferenceItemId; // @synthesize ReferenceItemId;
- (void)dealloc;

@end

