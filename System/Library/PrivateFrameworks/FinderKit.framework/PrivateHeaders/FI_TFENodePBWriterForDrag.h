//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TFENodePBWriter.h>

__attribute__((visibility("hidden")))
@interface FI_TFENodePBWriterForDrag : FI_TFENodePBWriter
{
    struct CGRect _globalBounds;
    vector_3d8babec _clippingData;
    BOOL _isSidebarItem;
    BOOL _itemNeedsConversionOnDrop;
    BOOL _privateDrag;
    long long _windowNumber;
}

@property(nonatomic) long long windowNumber; // @synthesize windowNumber=_windowNumber;
@property(nonatomic) BOOL privateDrag; // @synthesize privateDrag=_privateDrag;
@property(nonatomic) BOOL isSidebarItem; // @synthesize isSidebarItem=_isSidebarItem;
@property(nonatomic) vector_3d8babec clippingData; // @synthesize clippingData=_clippingData;
@property(nonatomic) struct CGRect globalBounds; // @synthesize globalBounds=_globalBounds;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)typesForClippings;
- (id)initWithNode:(const struct TFENode *)arg1 checkForTEFFilesInContainer:(BOOL)arg2;

@end

