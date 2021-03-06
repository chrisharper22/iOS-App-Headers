//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;
@protocol IGObjectArchiving, IGObjectUnarchiving, IGScheduler, NSKeyedUnarchiverDelegate;

@interface IGDiskManager : NSObject
{
    NSString *_userPK;
    id <NSKeyedUnarchiverDelegate> _cacheConsolidator;
    NSFileManager *_fileManager;
    NSString *_appGroupId;
    NSString *_appGroupPrefix;
    id <IGScheduler> _writeScheduler;
    id <IGScheduler> _readScheduler;
    id <IGScheduler> _callbackScheduler;
    id <IGObjectArchiving> _archiver;
    id <IGObjectUnarchiving> _unarchiver;
}

+ (id)makeDiskManagerWithUserPk:(id)arg1 objectCacheConsolidator:(id)arg2;
- (void).cxx_destruct;
- (id)objectStorageWithFileName:(id)arg1 classType:(Class)arg2 inDirectory:(id)arg3;
- (id)objectStorageWithType:(long long)arg1 classType:(Class)arg2 productName:(id)arg3 fileName:(id)arg4;
- (id)dataStorageWithFileName:(id)arg1 inDirectory:(id)arg2;
- (id)dataStorageType:(long long)arg1 productName:(id)arg2 fileName:(id)arg3;
- (void)removeItemAtURL:(id)arg1;
- (_Bool)copyFileAtURL:(id)arg1 toFileWithName:(id)arg2 inDirectory:(id)arg3 error:(id *)arg4;
- (id)subdirectoryWithName:(id)arg1 inDirectory:(id)arg2;
- (id)directoryWithStorageType:(long long)arg1 productName:(id)arg2;
- (id)initWithUserPK:(id)arg1 objectCacheConsolidator:(id)arg2 fileManager:(id)arg3 appGroupIdentifier:(id)arg4 appGroupPrefix:(id)arg5;

@end

