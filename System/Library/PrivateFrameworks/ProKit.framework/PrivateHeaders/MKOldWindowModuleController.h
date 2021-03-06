//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class MKOldWindowModule, NSHashTable;

__attribute__((visibility("hidden")))
@interface MKOldWindowModuleController : NSWindowController
{
    NSHashTable *_modulesNeedingUpdate;
    MKOldWindowModule *_rootModule;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    void *_reserved6;
}

+ (id)windowControllerWithModule:(id)arg1;
- (id)description;
- (void)windowWillClose:(id)arg1;
- (void)updateModulesIfNeeded;
- (void)windowDidUpdate:(id)arg1;
- (id)activeModule;
- (void)moduleUpdateStatusDidChange:(id)arg1;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)setRootModuleForFinalize:(id)arg1;
- (void)setRootModule:(id)arg1;
- (id)window;
- (id)rootModule;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithWindowNibPath:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibName:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibName:(id)arg1;
- (id)initWithWindowModule:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)_removeModuleView;
- (void)_installModuleView;

@end

