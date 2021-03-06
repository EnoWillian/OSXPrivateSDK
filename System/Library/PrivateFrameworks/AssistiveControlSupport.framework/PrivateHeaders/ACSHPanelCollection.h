//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPlistObject.h>

@class NSMutableArray;

@interface ACSHPanelCollection : ACSHPlistObject
{
    NSMutableArray *_panels;
}

+ (id)userPanelCollectionPath:(BOOL)arg1;
+ (id)_userPanelCollectionPath;
+ (id)_applicationSupportDirectory;
@property(retain, nonatomic) NSMutableArray *panels; // @synthesize panels=_panels;
- (id)allAssociatedApplications;
- (id)associatedPanelForApplicationWithBundleID:(id)arg1;
- (void)associatePanel:(id)arg1 withApplication:(id)arg2;
- (void)setDefaultKeyboardPanelID:(id)arg1;
- (id)defaultKeyboardPanelID;
- (void)addPanelsFromCollection:(id)arg1;
- (void)insertPanel:(id)arg1 atIndex:(long long)arg2;
- (id)allRequiredResourceIDs;
- (id)allPanelIDs;
- (id)panelForIdentifier:(id)arg1;
- (id)dictionaryForSaving;
- (void)dealloc;
- (void)_initWithPlistDictionary:(id)arg1;
- (id)init;

@end

