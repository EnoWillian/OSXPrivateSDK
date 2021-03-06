//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreUI/FRUpdateItem.h>

@class NSDictionary;

@interface FRRecentlyInstalledUpdateItem : FRUpdateItem
{
    NSDictionary *_updateInfo;
}

@property(readonly) NSDictionary *updateInfo; // @synthesize updateInfo=_updateInfo;
- (void).cxx_destruct;
- (id)updateButtonTitle;
- (BOOL)updateIsInstalling;
- (BOOL)updateCanStartOrPause;
- (id)icon;
- (id)installDate;
- (id)dateString;
- (id)version;
- (id)_version;
- (id)subtitle;
- (id)_subtitle;
- (id)releaseNotes;
- (BOOL)isLeaf;
- (id)title;
- (id)initWithDictionary:(id)arg1;

@end

