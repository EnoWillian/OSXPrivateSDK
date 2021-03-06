//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ESDContainer, OABWriterState, OADTable;

__attribute__((visibility("hidden")))
@interface OABWTable : NSObject
{
    OADTable *mSrcTable;
    ESDContainer *mTgtTable;
    OABWriterState *mState;
    int mRowCount;
    int mColumnCount;
    struct vector<int, std::__1::allocator<int>> *mpXCoords;
    struct vector<int, std::__1::allocator<int>> *mpYCoords;
}

- (void)map;
- (void)mapVectors;
- (void)mapCells;
- (void)mapCoordinates;
- (void)mapGlobals;
- (void)dealloc;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;

@end

