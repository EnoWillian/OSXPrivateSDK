//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRTable.h>

#import "SCRWebElementAutoDrillAndAnnounceNavigationProtocol.h"

@class NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface SCRWebTable : SCRTable <SCRWebElementAutoDrillAndAnnounceNavigationProtocol>
{
    BOOL _justLandedOnTable;
    BOOL _arrivedAtStart;
    int _tableRequiresInteraction;
    NSMutableArray *_cachedBrailleLine;
    NSSet *_cachedRetainedElements;
    unsigned long long _previousBrailleRowIndex;
}

- (id)emptyCellDescription;
- (BOOL)toggleWebTableInteractability:(id)arg1 request:(id)arg2;
- (id)_createWebTableDomainKey;
- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (void)addDescendantsToArray:(id)arg1 additionalToRetain:(id)arg2 additionalToSkip:(id)arg3;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (BOOL)webElementSuperInteractRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)webElementSuperInteractUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_handleMovementWithEvent:(id)arg1 inDirection:(int)arg2 request:(id)arg3 lastElement:(id)arg4;
- (BOOL)canWrapWhileNavigating;
- (BOOL)needToRebuildChildren;
- (BOOL)shouldWrapNavigationForOrientation:(int)arg1;
- (BOOL)_handleColumnNavigation:(id)arg1 request:(id)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)completeKeyboardChainToUIElement:(id)arg1;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (void)addWebColumnHeaderInfoToRequest:(id)arg1 forCell:(id)arg2 shouldSpeakRowColumnIndices:(BOOL)arg3;
- (void)addWebRowHeaderInfoToRequest:(id)arg1 forCell:(id)arg2 shouldSpeakRowColumnIndices:(BOOL)arg3;
- (void)addWebRowChangeInfoToRequest:(id)arg1 forCell:(id)arg2;
- (void)addWebColumnIndexToRequest:(id)arg1 forCell:(id)arg2;
- (BOOL)includeRowIndices;
- (BOOL)includeColumnIndices;
- (void)addItemDescriptionForInteractionToRequest:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)focusInto:(id)arg1;
- (void)endFocus;
- (void)setFocusedChild:(id)arg1;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (void)addStartOfElementTextToRequest:(id)arg1;
- (id)fullItemDescriptionForMenu;
- (void)addItemDescriptionForEndInteractionToRequest:(id)arg1;
- (void)addEndOfElementTextToRequest:(id)arg1;
- (id)statusDescription;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)_moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)_moveLastWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (void)focusOntoAutoDrillAndAnnouceWebElement:(id)arg1;
- (void)setFocusArrivedFromFront:(BOOL)arg1;
- (BOOL)focusArrivedFromFront;
- (void)setFocusIsOnElement:(BOOL)arg1;
- (BOOL)focusIsOnElement;
- (BOOL)webTableRequiresInteraction;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;
- (BOOL)isDepthLevelElement;
- (BOOL)isWebTable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

