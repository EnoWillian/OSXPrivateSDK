//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FI_IPropertyValueExtractor : NSObject
{
}

+ (id)extractor;
- (void)flush;
- (BOOL)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (BOOL)needsUpdateForProperty:(unsigned int)arg1;
- (id)defaultValue;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;

@end

