//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDiskClearing-Protocol.h>
#import <FBSharedFramework/IGLegacyPath-Protocol.h>

@class IGDiskLocation, IGDiskMigrator, NSString;
@protocol IGScheduler;

@interface IGDataDiskStorage : NSObject <IGDiskClearing, IGLegacyPath>
{
    IGDiskLocation *_location;
    id <IGScheduler> _writeScheduler;
    id <IGScheduler> _readScheduler;
    id <IGScheduler> _callbackScheduler;
    IGDiskMigrator *_diskMigrator;
}

- (void).cxx_destruct;
- (void)overrideFilePathWithLegacyPath:(id)arg1;
- (void)clearStorageWithCompletion:(CDUnknownBlockType)arg1;
- (void)writeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (void)readDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)readDataImmediatelyWithError:(id *)arg1;
- (id)initWithLocation:(id)arg1 writeScheduler:(id)arg2 readScheduler:(id)arg3 callbackScheduler:(id)arg4 diskMigrator:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
