//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDeadFileJanitorCleanupTask-Protocol.h"

@class IGDeadFileJanitorDraftColocator, IGDeadFileJanitorFileManager, IGDeadFileJanitorFolder, NSString;
@protocol IGMultipleAccountHandling;

@interface IGSerializedVideosCleanupTask : NSObject <IGDeadFileJanitorCleanupTask>
{
    IGDeadFileJanitorFileManager *_fileManager;
    IGDeadFileJanitorFolder *_folder;
    id <IGMultipleAccountHandling> _multipleAccountHandler;
    _Bool _checkForPendingUploads;
    IGDeadFileJanitorDraftColocator *_draftColocator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDeadFileJanitorFolder *folder; // @synthesize folder=_folder;
- (unsigned long long)performDeletionWithError:(id *)arg1;
- (unsigned long long)undoFolderMoveWithError:(id *)arg1;
- (unsigned long long)countOfFilesInFolderCreatedSinceDate:(id)arg1;
- (unsigned long long)moveFolderWithError:(id *)arg1;
- (void)ensurePreconditionsAreMetWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFileManager:(id)arg1 folder:(id)arg2 multipleAccountHandler:(id)arg3 checkForPendingUploads:(_Bool)arg4 draftColocator:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

