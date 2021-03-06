//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRGuide.h>

@class NSLock, NSString;

__attribute__((visibility("hidden")))
@interface SCRSpeechAttributeGuide : SCRGuide
{
    NSString *_category;
    BOOL _shouldOutputTitle;
    NSLock *_speechGuideLock;
}

- (id)attributeGuideView;
- (void)setShouldOutputTitle:(BOOL)arg1;
- (BOOL)shouldOutputTitle;
- (void)setCategory:(id)arg1;
- (id)category;
- (void)_sendBrailleLine;
- (void)updateVoiceRotorList;
- (void)close;
- (void)open;
- (void)setView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

