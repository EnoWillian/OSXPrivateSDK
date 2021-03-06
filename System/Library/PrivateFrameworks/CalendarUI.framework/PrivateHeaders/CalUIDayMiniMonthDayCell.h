//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSAttributedString, NSColor, NSDate;

@interface CalUIDayMiniMonthDayCell : NSTextFieldCell
{
    NSDate *_date;
    struct CGRect _frame;
    BOOL _isHovered;
    BOOL _isActive;
    id _axParent;
    BOOL _isInPreviousMonth;
    BOOL _isInNextMonth;
    BOOL _weekNumbersEnabled;
    BOOL _alwaysDrawsBackground;
    BOOL _backgroundHasRoundedCorners;
    BOOL _backgroundSizeIsStatic;
    NSAttributedString *_weekNumberString;
    NSColor *_dayBackgroundColor;
    double _backgroundXOffset;
    double _backgroundYOffset;
    struct CGSize _backgroundSize;
}

+ (id)_todayInsetBorderGradient;
+ (id)_todayBorderGradient;
+ (id)_todayGradient;
+ (id)_localizedStringForNumber:(id)arg1;
@property struct CGSize backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property BOOL backgroundSizeIsStatic; // @synthesize backgroundSizeIsStatic=_backgroundSizeIsStatic;
@property double backgroundYOffset; // @synthesize backgroundYOffset=_backgroundYOffset;
@property double backgroundXOffset; // @synthesize backgroundXOffset=_backgroundXOffset;
@property BOOL backgroundHasRoundedCorners; // @synthesize backgroundHasRoundedCorners=_backgroundHasRoundedCorners;
@property BOOL alwaysDrawsBackground; // @synthesize alwaysDrawsBackground=_alwaysDrawsBackground;
@property NSColor *dayBackgroundColor; // @synthesize dayBackgroundColor=_dayBackgroundColor;
@property(retain) NSAttributedString *weekNumberString; // @synthesize weekNumberString=_weekNumberString;
@property BOOL weekNumbersEnabled; // @synthesize weekNumbersEnabled=_weekNumbersEnabled;
@property BOOL isInNextMonth; // @synthesize isInNextMonth=_isInNextMonth;
@property BOOL isInPreviousMonth; // @synthesize isInPreviousMonth=_isInPreviousMonth;
@property(retain) id axParent; // @synthesize axParent=_axParent;
@property BOOL isActive; // @synthesize isActive=_isActive;
@property BOOL isHovered; // @synthesize isHovered=_isHovered;
@property(retain) NSDate *date; // @synthesize date=_date;
@property struct CGRect frame; // @synthesize frame=_frame;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)initTextCellWithDate:(id)arg1 calendar:(id)arg2 isActive:(BOOL)arg3 font:(id)arg4 textColor:(id)arg5 alignment:(unsigned long long)arg6;

@end

