//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFFileBasedCaching-Protocol.h>

@class NSFileHandle, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FNFFileBasedCache : NSObject <FNFFileBasedCaching>
{
    NSFileHandle *_fileHandle;
    NSURL *_fileURL;
    NSMutableDictionary *_fileMap;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct mutex _cacheMutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_closeFile;
- (_Bool)_openFile;
- (void)_cleanUpIfNecessary;
- (void)_setupDirectory;
- (id)_getDirectoryURL;
- (id)_insertData:(id)arg1 forKey:(id)arg2;
- (void)insertData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasDataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

