//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSView, SOTokenAttachmentCell;

@protocol SOTokenAttachmentCellDelegate <NSObject>
- (_Bool)tokenAttachmentCellShouldBeDrawnSelected:(SOTokenAttachmentCell *)arg1;
- (BOOL)tokenAttachmentCellHasErrorState:(SOTokenAttachmentCell *)arg1;
- (BOOL)cellClicked:(SOTokenAttachmentCell *)arg1 inRect:(struct CGRect)arg2 ofView:(NSView *)arg3 withEvent:(NSEvent *)arg4;

@optional
- (_Bool)tokenAttachmentCellShouldShowDedicingBackground:(SOTokenAttachmentCell *)arg1;
@end

