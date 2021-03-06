//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRAssetMaster, MRImage, NSString;

@interface MRAssetPlayer : NSObject
{
    NSString *_path;
    struct CGSize _size;
    double _time;
    MRImage *_image;
    MRAssetMaster *_master;
    id <MRAssetPlayerDelegate> _delegate;
    int _retainByUserCount;
    unsigned char _orientation;
    BOOL _thumbnailIsOK;
    BOOL _isMonochromatic;
    BOOL _usesMipmapping;
    BOOL _isStill;
    BOOL _isEmbeddedAsset;
}

@property BOOL thumbnailIsOK; // @synthesize thumbnailIsOK=_thumbnailIsOK;
@property(retain) id <MRAssetPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) BOOL newImageIsAvailable;
- (id)retainedByUserImageAtTime:(double)arg1 displayLinkTimestamp:(CDStruct_489f4f2f)arg2;
- (void)loadForTime:(double)arg1;
- (void)releaseByUser;
- (id)retainByUser;
- (void)dealloc;
- (id)initWithPath:(id)arg1 size:(struct CGSize)arg2 master:(id)arg3 andOptions:(id)arg4;

@end

