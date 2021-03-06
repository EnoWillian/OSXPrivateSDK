//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenField.h"

@class MUITokenAddressTextView, NSView;

@interface MUITokenAddressField : NSTokenField
{
    MUITokenAddressTextView *_addressTextView;
    NSView *_parentAddressField;
}

+ (Class)cellClass;
@property(nonatomic) NSView *parentAddressField; // @synthesize parentAddressField=_parentAddressField;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)designatedFocusRingView;
- (struct CGSize)intrinsicContentSize;
- (void)setFrameSize:(struct CGSize)arg1;
- (double)minimumHeight;
- (void)refreshField;
- (void)didAddSubview:(id)arg1;
- (id)_addressTextView;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (unsigned long long)textView:(id)arg1 dragOperationForDraggingInfo:(id)arg2 type:(id)arg3;
- (id)tokenFieldCell:(id)arg1 shouldUseReadablePasteboardTypes:(id)arg2;
- (id)tokenFieldCell:(id)arg1 shouldUseDraggingPasteboardTypes:(id)arg2;
- (BOOL)becomeFirstResponder;
- (void)dealloc;

@end

