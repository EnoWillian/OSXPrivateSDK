//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSearchField.h"

@class NSColor;

__attribute__((visibility("hidden")))
@interface SearchField : NSSearchField
{
    NSColor *_savedInsertionPointColor;
    NSColor *_savedSelectionColor;
    SEL _focusAction;
    SEL _blurAction;
    long long _trackingRectNumber;
    BOOL _cursorWasSetToIBeam;
    BOOL _updatesCursorWhenParentWindowIsKey;
}

- (void)setBlurAction:(SEL)arg1;
- (SEL)blurAction;
- (void)setFocusAction:(SEL)arg1;
- (SEL)focusAction;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (BOOL)updatesCursorWhenParentWindowIsKey;
- (void)setUpdatesCursorWhenParentWindowIsKey:(BOOL)arg1;

@end

