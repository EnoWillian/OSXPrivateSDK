//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (RFC2047Support)
- (id)decodeMimeAddressList;
- (id)decodeMimeHeaderValueWithCharsetHint:(id)arg1;
- (id)decodeMimeHeaderValue;
- (id)encodedHeaderDataWithEncodingHint:(unsigned long long)arg1 encodingUsed:(unsigned long long *)arg2;
- (id)encodedHeaderDataWithEncodingHint:(unsigned long long)arg1;
- (id)encodedHeaderData;
@end

