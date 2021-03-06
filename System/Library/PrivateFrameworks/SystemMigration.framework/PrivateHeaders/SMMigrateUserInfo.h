//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMMigrate.h>

@class NSArray, NSMutableArray, SMMigrationRequest;

@interface SMMigrateUserInfo : SMMigrate
{
    SMMigrationRequest *_migrationRequest;
    NSArray *_usersToDelete;
    NSMutableArray *_copyEngineArray;
    BOOL copiesHomeDirectories;
}

@property BOOL copiesHomeDirectories; // @synthesize copiesHomeDirectories;
@property(retain) SMMigrationRequest *migrationRequest; // @synthesize migrationRequest=_migrationRequest;
- (BOOL)_setupUserCopiesAndDetermineSizes;
- (long long)sizeComplete;
- (long long)totalSize;
- (id)postProcess;
- (id)preShove;
- (id)process;
- (BOOL)_migrateUserHomeDirectory:(id)arg1 forUserEntry:(id)arg2;
- (id)preProcess;
- (id)description;
- (void)dealloc;
- (id)initWithSourceSystem:(id)arg1 andDestinationSystem:(id)arg2 andMigrationRequest:(id)arg3;

@end

