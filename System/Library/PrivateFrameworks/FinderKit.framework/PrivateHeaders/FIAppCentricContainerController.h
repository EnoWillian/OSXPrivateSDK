//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FIContainerController.h>

__attribute__((visibility("hidden")))
@interface FIAppCentricContainerController : FIContainerController
{
}

+ (void)initialize;
- (Class)browserClassForViewStyle:(id)arg1;
- (void)dealloc;
- (void)appResignedActive;
- (BOOL)shouldShowSidebarSplitter;
- (void)searchFieldCancel;
- (void)updateViewLayout:(BOOL)arg1;
- (void)configureAccessoryViews:(id)arg1;
- (void)commonFinishInitialization:(id)arg1;
- (void)setViewStyle:(id)arg1;
- (BOOL)uiAllowsRenamingNode:(const struct TFENode *)arg1;
- (BOOL)canShare;
- (BOOL)canMoveItemsToTrash;
- (BOOL)canDuplicateItems;
- (unsigned int)defaultSearchScope;
- (BOOL)showScopeBar;
- (BOOL)isAppCentric;
- (id)containingOpenPanel;
- (id)acGutsController;
- (id)nibName;

@end

