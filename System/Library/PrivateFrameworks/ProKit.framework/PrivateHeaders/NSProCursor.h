//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCursor.h"

@class NSProThemeFacet;

@interface NSProCursor : NSCursor
{
    char *_cursorName;
    NSProThemeFacet *_facet;
    void *_reserved2;
}

+ (id)scrubberVertDragCursor;
+ (id)scrubberDragCursor;
+ (id)scrubberCursor;
+ (id)navigateDownCursor;
+ (id)navigateUpCursor;
+ (id)navigateRightCursor;
+ (id)navigateLeftCursor;
+ (id)rotateBottomRightCursor;
+ (id)rotateBottomLeftCursor;
+ (id)rotateTopRightCursor;
+ (id)rotateTopLeftCursor;
+ (id)verticalDividerCursor;
+ (id)horizontalDividerCursor;
+ (id)resizeRightClipCursor;
+ (id)resizeLeftClipCursor;
+ (id)resizeTopRightCursor;
+ (id)resizeTopLeftCursor;
+ (id)resizeUpDownCursor;
+ (id)resizeLeftRightCursor;
+ (id)resizeRightCursor;
+ (id)resizeLeftCursor;
+ (id)closedHandCursor;
+ (id)openHandCursor;
+ (id)pointerCursor;
+ (id)eyedropperCursor;
+ (id)IBeamCursor;
+ (id)crosshairCursor;
+ (id)zoomOutCursor;
+ (id)zoomInCursor;
+ (id)zoomCursor;
+ (id)createDropZoneCursor;
+ (id)createButtonCursor;
+ (id)createTextCursor;
+ (id)menuCursor;
+ (id)moveCursor;
+ (id)arrowCursor;
+ (id)cursorWithFacet:(id)arg1;
+ (id)cursorWithTheme:(unsigned long long)arg1 andThemeCursorID:(unsigned long long)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithFacet:(id)arg1;
- (id)initWithTheme:(unsigned long long)arg1 andThemeCursor:(struct _prothemecursor)arg2;

@end

