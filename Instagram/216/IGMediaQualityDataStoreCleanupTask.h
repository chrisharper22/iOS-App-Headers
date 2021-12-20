//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDeadFileJanitorCleanupTask-Protocol.h"

@class IGDeadFileJanitorFileManager, IGDeadFileJanitorFolder, NSDate, NSString, NSURL;

@interface IGMediaQualityDataStoreCleanupTask : NSObject <IGDeadFileJanitorCleanupTask>
{
    IGDeadFileJanitorFileManager *_fileManager;
    NSURL *_storageURL;
    NSURL *_stagingURL;
    IGDeadFileJanitorFolder *_folder;
    NSDate *_thresholdDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDeadFileJanitorFolder *folder; // @synthesize folder=_folder;
- (unsigned long long)performDeletionWithError:(id *)arg1;
- (unsigned long long)undoFolderMoveWithError:(id *)arg1;
- (unsigned long long)moveFolderWithError:(id *)arg1;
- (void)ensurePreconditionsAreMetWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)countOfFilesInFolderCreatedSinceDate:(id)arg1;
- (id)initWithFileManager:(id)arg1 storageURL:(id)arg2 stagingURL:(id)arg3 folder:(id)arg4 thresholdDate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

