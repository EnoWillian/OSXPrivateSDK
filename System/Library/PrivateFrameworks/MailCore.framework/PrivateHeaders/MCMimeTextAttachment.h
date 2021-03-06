//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

@class MCMimePart;

@interface MCMimeTextAttachment : NSTextAttachment
{
    MCMimePart *_mimePart;
}

+ (id)attachmentWithInternalAppleAttachmentData:(id)arg1 mimeBody:(id)arg2;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (BOOL)hasBeenDownloaded;
- (BOOL)isPlaceholder;
- (unsigned long long)approximateSize;
- (void)setMimePart:(id)arg1;
- (id)mimePart;
- (id)fileWrapperForcingDownloadEvenIfExternalBody:(BOOL)arg1;
- (id)fileWrapperForcingDownload;
- (void)_forceDownloadOfFileWrapperInBackground:(id)arg1;
- (id)initWithMimePart:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithMimePart:(id)arg1 andFileWrapper:(id)arg2;
- (void)dealloc;

@end

