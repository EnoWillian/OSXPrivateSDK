//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString;

@interface SOFaceTimeButtonDelegate : NSObject
{
    NSString *_abPersonID;
    long long _buttonType;
    NSOperationQueue *_updateQueue;
}

@property(retain, nonatomic) NSOperationQueue *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) NSString *abPersonID; // @synthesize abPersonID=_abPersonID;
- (void).cxx_destruct;
- (void)_askToShare:(id)arg1;
- (void)_shareScreen:(id)arg1;
- (void)_videoChat:(id)arg1;
- (void)_audioChat:(id)arg1;
- (void)_faceTimePerson:(id)arg1;
- (void)_faceTimeAlias:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end

