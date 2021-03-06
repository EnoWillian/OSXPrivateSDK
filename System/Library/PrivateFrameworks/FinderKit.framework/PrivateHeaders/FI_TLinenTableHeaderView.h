//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableHeaderView.h"

@class FI_TListViewController;

__attribute__((visibility("hidden")))
@interface FI_TLinenTableHeaderView : NSTableHeaderView
{
    FI_TListViewController *_listViewController;
    BOOL _updatingColumnHeaders;
    struct TNSRef<NSMutableArray *> _columnHeaders;
    struct TString _lastSortColumn;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (void)updateColumnHeaderPlacement;
- (void)updateColumnHeaderConfiguration;
- (void)drawTriangle:(struct CGRect)arg1 ascending:(BOOL)arg2;
- (struct CGRect)rectForSortIndicator;
- (double)sortIndicatorMargins;
- (double)sortIndicatorWidth;
- (BOOL)sortOrderAscending;
- (id)initWithListViewController:(id)arg1;

@end

