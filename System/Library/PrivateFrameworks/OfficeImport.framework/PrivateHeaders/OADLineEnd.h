//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface OADLineEnd : OADProperties <NSCopying>
{
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned int mIsTypeOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsLengthOverridden:1;
}

+ (id)defaultProperties;
- (BOOL)isLengthOverridden;
- (void)setLength:(int)arg1;
- (int)length;
- (BOOL)isWidthOverridden;
- (void)setWidth:(int)arg1;
- (int)width;
- (BOOL)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

