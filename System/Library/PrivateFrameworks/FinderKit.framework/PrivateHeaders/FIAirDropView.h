//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSImage;

@interface FIAirDropView : NSView
{
    id _controller;
    id _reserved;
}

- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)fileImageFrame;
- (id)recipientNames;
- (void)cancel;
- (void)send;
@property(retain) NSImage *smallThumbnail; // @dynamic smallThumbnail;
@property(retain) NSImage *largeThumbnail; // @dynamic largeThumbnail;
@property(copy) NSArray *urlsToSend; // @dynamic urlsToSend;
@property id <FIAirDropViewDelegate> delegate; // @dynamic delegate;
- (BOOL)isOpaque;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_commonAirDropViewInit;
- (id)controller;

@end

