//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AccessibilityChildInfo : NSObject
{
    NSString *_role;
    id _parent;
    unsigned int _identifier;
}

+ (id)infoWithRole:(id)arg1 parent:(id)arg2 identifier:(unsigned int)arg3;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)identifier;
- (void)dealloc;
- (id)initWithRole:(id)arg1 parent:(id)arg2 identifier:(unsigned int)arg3;
- (id)accessibilityAttributeNames;

@end

