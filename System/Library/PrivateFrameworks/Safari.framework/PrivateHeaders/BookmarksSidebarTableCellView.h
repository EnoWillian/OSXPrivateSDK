//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class BookmarksSidebarTitleTextFieldBackground, NSButton, NSImageView, SidebarClippingImageView;

__attribute__((visibility("hidden")))
@interface BookmarksSidebarTableCellView : NSTableCellView
{
    SidebarClippingImageView *_iconView;
    NSImageView *_folderIconView;
    NSButton *_removeButton;
    BookmarksSidebarTitleTextFieldBackground *_backgroundView;
    id <BookmarksSidebarTableCellViewDelegate> _delegate;
}

@property(nonatomic) id <BookmarksSidebarTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BookmarksSidebarTitleTextFieldBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) NSImageView *folderIconView; // @synthesize folderIconView=_folderIconView;
@property(nonatomic) SidebarClippingImageView *iconView; // @synthesize iconView=_iconView;
- (void)_unbindProperties;
- (void)_bindPropertiesToObject:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)bookmarksSidebarTitleTextViewResignFirstResponder:(id)arg1;
- (void)bookmarksSidebarTitleTextViewBecameFirstResponder:(id)arg1;
- (void)didPressRemoveButton:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;

@end

