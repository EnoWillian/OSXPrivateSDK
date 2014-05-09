//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TView.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface FIICloudNoDocumentsView : FI_TView
{
    struct TNSRef<NSView *> _dropTargetView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackgroundOverhangInRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSView *dropTargetView; // @dynamic dropTargetView;
- (void)initCommon;

@end
