//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EngineDelegateProtocol.h"

@interface SMEngineDelegateStatusMessageReceiver : NSObject <EngineDelegateProtocol>
{
    id _migratePane;
}

- (void)engineCompletedWithErrorsAndWarnings:(id)arg1;
- (void)engineMinutesRemaining:(id)arg1;
- (void)enginePercentDone:(id)arg1;
- (void)engineProcessingText:(in id)arg1;
- (void)engineStarted;
- (id)initWithPane:(id)arg1;

@end

