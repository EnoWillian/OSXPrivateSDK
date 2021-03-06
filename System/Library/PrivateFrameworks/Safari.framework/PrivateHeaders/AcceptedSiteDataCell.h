//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AcceptedSiteDataCell : NSTextFieldCell
{
    NSString *_displayName;
    NSString *_trackingTypes;
}

@property(nonatomic) NSString *trackingTypes; // @synthesize trackingTypes=_trackingTypes;
@property(nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityDescription;
- (id)accessibilityAttributeNames;
- (id)computeAccessibilityAttributeNames;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

