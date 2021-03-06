//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebBookmark;

__attribute__((visibility("hidden")))
@interface BookmarkURLConfirmer : NSObject
{
    WebBookmark *_bookmark;
    id _delegate;
    SEL _didEndSelector;
    void *_contextInfo;
}

+ (void)beginURLConfirmationForBookmark:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void *)arg5;
+ (void)_performCallbackWithDelegate:(id)arg1 didEndSelector:(SEL)arg2 bookmark:(id)arg3 result:(BOOL)arg4 contextInfo:(void *)arg5;
+ (BOOL)_bookmarkRequiresConfirmation:(id)arg1 inWindow:(id)arg2;
- (void)dealloc;
- (void)_URLConfirmationAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_performCallbackWithResult:(BOOL)arg1;
- (id)_initWithBookmark:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)_beginConfirmationModalForWindow:(id)arg1;

@end

