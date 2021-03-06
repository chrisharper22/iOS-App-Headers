//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAutoupdaterDeltaUpdateApplier-Protocol.h"
#import "FBAutoupdaterFileManageDelegate-Protocol.h"

@class NSFileManager, NSString;

@interface FBAutoupdaterDefaultDeltaUpdateApplier : NSObject <FBAutoupdaterFileManageDelegate, FBAutoupdaterDeltaUpdateApplier>
{
    _Bool _useMMAPVersionOfBSPatch;
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)setUseMMAPVersionOfBSPatch:(_Bool)arg1;
- (_Bool)patchFileAtPath:(id)arg1 destinationPath:(id)arg2 patchPath:(id)arg3 checksum:(id)arg4 size:(id)arg5 error:(id *)arg6;
- (_Bool)verifyFileAtPath:(id)arg1 checksum:(id)arg2 size:(id)arg3 error:(id *)arg4;
- (_Bool)removeFileAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)moveFilesFromDirectory:(id)arg1 toDirectory:(id)arg2 fileNames:(id)arg3 error:(id *)arg4;
- (_Bool)linkFileAtPath:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;
- (id)downloadFileAtURL:(id)arg1 destinationFileName:(id)arg2 requireUnzip:(_Bool)arg3 error:(id *)arg4;
- (_Bool)createDestinyAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)addFileAtPath:(id)arg1 toDestinationPath:(id)arg2 error:(id *)arg3;
- (_Bool)applyDeltaUpdate:(id)arg1 atPath:(id)arg2 source:(id)arg3 destination:(id)arg4 host:(id)arg5 error:(id *)arg6;
- (id)initWithFileManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

