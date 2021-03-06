//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDFormula.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDSharedFormula : EDFormula
{
    unsigned long long mBaseFormulaIndex;
    int mRowBaseOrOffset;
    int mColumnBaseOrOffset;
    EDReference *mBaseFormulaRange;
}

- (_Bool)isSharedFormula;
- (id)warningWithRowBlocks:(id)arg1;
- (void)setColumnBaseOrOffset:(int)arg1;
- (int)columnBaseOrOffset;
- (void)setRowBaseOrOffset:(int)arg1;
- (int)rowBaseOrOffset;
- (_Bool)isBaseFormula;
- (id)baseFormulaWithRowBlocks:(id)arg1;
- (void)setBaseFormulaIndex:(unsigned long long)arg1;
- (unsigned long long)baseFormulaIndex;
- (void)dealloc;
- (id)init;
- (id)initWithFormula:(id)arg1;
- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;
- (id)baseFormulaRange;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;

@end

