//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSHashTable, SONavigationController, SONavigationRootView;

@interface SOViewController : NSViewController
{
    SOViewController *_parentViewController;
    NSHashTable *_childViewControllers;
    SOViewController *_childModalViewController;
    SOViewController *_parentModalViewController;
    SONavigationRootView *_rootView;
}

+ (void)_informAllViewControllersOfRootViewDeath:(void *)arg1;
- (void)loadView;
- (id)viewForAnimationIdentifier:(unsigned long long)arg1 willBeVisible:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)layoutView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)layoutViewIfVisible;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isViewLoaded;
- (void)_goTo:(id)arg1 from:(id)arg2 isModalPresent:(BOOL)arg3 animated:(BOOL)arg4;
@property(readonly, nonatomic) SONavigationController *navigationController;
@property(readonly, nonatomic) SOViewController *modalViewController;
- (id)childModalViewController;
- (void)setChildModalViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (id)_ancestorViewControllerOfClass:(Class)arg1;
- (id)_modalParentViewController;
- (id)_baseViewController;
- (id)_nonModalParentViewController;
@property(readonly, nonatomic) SOViewController *parentViewController;
- (void)setParentViewController:(id)arg1;
- (void)_doViewDidDisappear:(BOOL)arg1;
- (void)_doViewWillDisappear:(BOOL)arg1;
- (void)_doViewDidAppear:(BOOL)arg1;
- (void)_makeVisibleViewControllerInRootView:(id)arg1;
- (void)_doLayoutView;
- (void)_doViewWillAppear:(BOOL)arg1 inRootView:(id)arg2;
- (id)_navigationRootView;
- (struct CGRect)_defaultInitialViewFrame;
- (void)doCancel;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)_commonSOViewControllerInit;

@end

