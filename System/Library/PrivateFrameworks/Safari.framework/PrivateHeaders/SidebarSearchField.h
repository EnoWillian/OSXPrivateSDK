//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSearchField.h"

__attribute__((visibility("hidden")))
@interface SidebarSearchField : NSSearchField
{
    id <SidebarSearchFieldDelegate> _sidebarSearchFieldDelegate;
}

+ (void)initialize;
@property(nonatomic) id <SidebarSearchFieldDelegate> sidebarSearchFieldDelegate; // @synthesize sidebarSearchFieldDelegate=_sidebarSearchFieldDelegate;
- (BOOL)becomeFirstResponder;

@end

