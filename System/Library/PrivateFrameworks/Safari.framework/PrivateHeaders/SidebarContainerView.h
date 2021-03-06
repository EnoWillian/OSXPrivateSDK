//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SidebarBackgroundView.h>

#import "SafariDelegatingView.h"

@class NSView;

__attribute__((visibility("hidden")))
@interface SidebarContainerView : SidebarBackgroundView <SafariDelegatingView>
{
    NSView *_topBarView;
    NSView *_contentView;
    id <SafariViewDelegate> _safariViewDelegate;
    NSView *_externalNextKeyView;
}

@property(retain, nonatomic) NSView *externalNextKeyView; // @synthesize externalNextKeyView=_externalNextKeyView;
@property(nonatomic) id <SafariViewDelegate> safariViewDelegate; // @synthesize safariViewDelegate=_safariViewDelegate;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSView *topBarView; // @synthesize topBarView=_topBarView;
- (void)updateKeyViewLoop;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_activeTabCellForAccessibility;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)setNextKeyView:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)removeFromSuperview;
- (void)viewDidMoveToWindow;
- (void)layout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 topBarView:(id)arg2 contentView:(id)arg3;

@end

