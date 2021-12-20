//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDeadFileJanitorCleanupTask-Protocol.h"

@class IGDeadFileJanitorFileManager, IGDeadFileJanitorFolder, NSArray, NSDate, NSString, NSURL;
@protocol IGAuthHeaderManaging, IGMultipleAccountHandling;

@interface IGLoggedOutUserScopedFolderCleanupTask : NSObject <IGDeadFileJanitorCleanupTask>
{
    IGDeadFileJanitorFileManager *_fileManager;
    NSURL *_stagingURL;
    IGDeadFileJanitorFolder *_folder;
    NSDate *_thresholdDate;
    unsigned long long _cleanupOptions;
    id <IGMultipleAccountHandling> _multipleAccountHandler;
    id <IGAuthHeaderManaging> _authHeaderManager;
    NSArray *_contentToCleanup;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDeadFileJanitorFolder *folder; // @synthesize folder=_folder;
- (unsigned long long)performDeletionWithError:(id *)arg1;
- (unsigned long long)undoFolderMoveWithError:(id *)arg1;
- (unsigned long long)moveFolderWithError:(id *)arg1;
- (unsigned long long)_moveFolder:(id)arg1 to:(id)arg2 allUserPKs:(id)arg3 error:(id *)arg4;
- (_Bool)_shouldCleanupFileAtURL:(id)arg1 withLoggedInUserPKs:(id)arg2;
- (void)ensurePreconditionsAreMetWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)countOfFilesInFolderCreatedSinceDate:(id)arg1;
- (unsigned long long)_countOfFilesAtURL:(id)arg1 modifiedSinceDate:(id)arg2;
- (id)initWithFileManager:(id)arg1 stagingURL:(id)arg2 folder:(id)arg3 thresholdDate:(id)arg4 cleanupOptions:(unsigned long long)arg5 multipleAccountHandler:(id)arg6 authHeaderManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

