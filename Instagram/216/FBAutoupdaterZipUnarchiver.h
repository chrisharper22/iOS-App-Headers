//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAutoupdaterUnarchiver-Protocol.h"

@class FBAutoupdaterUpdate, NSFileManager, NSMutableDictionary, NSProgress, NSString;
@protocol FBAutoupdaterUnarchiverDelegate, FBAutoupdaterZipUnarchiverOutputStrategy, OS_dispatch_queue;

@interface FBAutoupdaterZipUnarchiver : NSObject <FBAutoupdaterUnarchiver>
{
    NSFileManager *_fileManager;
    FBAutoupdaterUpdate *_currentUpdate;
    NSMutableDictionary *_manifest;
    NSMutableDictionary *_uncompressedFilesizeMap;
    NSString *_fromPath;
    NSObject<OS_dispatch_queue> *_unzipQueue;
    id <FBAutoupdaterUnarchiverDelegate> _delegate;
    id <FBAutoupdaterZipUnarchiverOutputStrategy> _outputStrategy;
    NSProgress *_progress;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) id <FBAutoupdaterZipUnarchiverOutputStrategy> outputStrategy; // @synthesize outputStrategy=_outputStrategy;
@property(nonatomic) __weak id <FBAutoupdaterUnarchiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_failWithMessage:(id)arg1 underlyingError:(id)arg2 update:(id)arg3;
- (_Bool)_createSymlinkForEntry:(id)arg1 toPath:(id)arg2;
- (_Bool)_createDirectory:(id)arg1;
- (_Bool)_writeEntry:(id)arg1 toPath:(id)arg2;
- (_Bool)_unzipFromPath:(id)arg1 toPath:(id)arg2;
- (_Bool)_verifyInstallPreconditionsForUpdate:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
- (void)_cleanup;
- (_Bool)_shouldCancel:(id)arg1;
- (void)_startUnarchive:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
- (void)_initializeProgressForPath:(id)arg1;
- (id)_unarchivePathForEntryAtPath:(id)arg1;
- (void)cancel;
- (void)unarchive:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
- (void)unarchiveInForeground:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
- (id)initWithDelegate:(id)arg1 outputStrategy:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

