//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreChineseEngine/CIMPreferencesModule.h>

@class NSMutableArray, NSWindow;

@interface CIMPinyinPreferencesModule : CIMPreferencesModule
{
    NSWindow *_fuzzyPinyinPreferencesSheet;
    NSMutableArray *_fuzzyPinyinPreferences;
}

@property(retain, nonatomic) NSMutableArray *fuzzyPinyinPreferences; // @synthesize fuzzyPinyinPreferences=_fuzzyPinyinPreferences;
@property(retain, nonatomic) NSWindow *fuzzyPinyinPreferencesSheet; // @synthesize fuzzyPinyinPreferencesSheet=_fuzzyPinyinPreferencesSheet;
- (void)closeFuzzyPinyinPreferences:(id)arg1;
- (void)openFuzzyPinyinPreferences:(id)arg1;
- (void)saveFuzzyPinyinPairs;
- (void)loadFuzzyPinyinPairs;
- (void)dealloc;

@end

