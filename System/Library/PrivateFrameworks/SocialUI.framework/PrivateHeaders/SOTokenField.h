//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTokenField.h"

@class NSTrackingArea, NSWindow;

@interface SOTokenField : NSTokenField
{
    NSTrackingArea *_tokenFieldTrackingArea;
    BOOL _needsRefresh;
    NSWindow *_axChild;
}

+ (id)decidingSelectedAttributedStringForAttachmentString:(id)arg1;
+ (id)decidingHighlightedAttributedStringForAttachmentString:(id)arg1;
+ (id)decidingStandardAttributedStringForAttachmentString:(id)arg1;
+ (id)decidingUnhighlightedAttributedStringForAttachmentString:(id)arg1;
+ (id)errorSelectedAttributedStringForAttachmentString:(id)arg1;
+ (id)errorHighlightedAttributedStringForAttachmentString:(id)arg1;
+ (id)errorStandardAttributedStringForAttachmentString:(id)arg1;
+ (id)errorUnhighlightedAttributedStringForAttachmentString:(id)arg1;
+ (id)selectedAttributedStringForAttachmentString:(id)arg1;
+ (id)highlightedAttributedStringForAttachmentString:(id)arg1;
+ (id)standardAttributedStringForAttachmentString:(id)arg1;
+ (id)unhighlightedAttributedStringForAttachmentString:(id)arg1;
+ (id)attachmentCellDecidingSelectedAttributes;
+ (id)attachmentCellDecidingHighlightedAttributes;
+ (id)attachmentCellDecidingStandardAttributes;
+ (id)attachmentCellDecidingUnhighlightedAttributes;
+ (id)attachmentCellErrorSelectedAttributes;
+ (id)attachmentCellErrorHighlightedAttributes;
+ (id)attachmentCellErrorStandardAttributes;
+ (id)attachmentCellErrorUnhighlightedAttributes;
+ (id)attachmentCellSelectedAttributes;
+ (id)attachmentCellHighlightedAttributes;
+ (id)attachmentCellStandardAttributes;
+ (id)attachmentCellUnhighlightedAttributes;
+ (id)attachmentCellTypingAttributes;
+ (id)decidingSelectedTokenTextColor;
+ (id)decidingHighlightedTokenTextColor;
+ (id)decidingStandardTokenTextColor;
+ (id)decidingUnhighlightedTokenTextColor;
+ (id)errorSelectedTokenTextColor;
+ (id)errorHighlightedTokenTextColor;
+ (id)errorStandardTokenTextColor;
+ (id)errorUnhighlightedTokenTextColor;
+ (id)selectedTokenTextColor;
+ (id)highlightedTokenTextColor;
+ (id)standardTokenTextColor;
+ (id)unhighlightedTokenTextColor;
+ (id)typingTextColor;
+ (id)attachmentCellFont;
+ (id)typingFont;
+ (void)initialize;
@property(nonatomic) BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
@property(nonatomic) NSWindow *axChild; // @synthesize axChild=_axChild;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mouseExited:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonSOTokenFieldInit;
- (void)tokenFieldNeedsRefresh;
- (id)accessibilityAttributeValue:(id)arg1;
- (struct CGSize)cellToViewSizeDelta;
- (double)baseHeight;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;

@end

