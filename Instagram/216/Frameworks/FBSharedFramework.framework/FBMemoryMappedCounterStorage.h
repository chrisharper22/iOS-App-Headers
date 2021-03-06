//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBReliabilityStatisticsCounterStorage-Protocol.h>

@class NSString;

@interface FBMemoryMappedCounterStorage : NSObject <FBReliabilityStatisticsCounterStorage>
{
    int _fileVersion;
    int _numCounters;
    int *_mMappedByteArray;
}

- (int *)_mMappedByteArray;
- (void)_setupMemoryMappedFileWithPath:(id)arg1;
- (int)_setupMemoryMappedFileWithFileDescriptor:(int)arg1;
- (unsigned long long)_fileInitStatusWithOriginalLen:(unsigned long long)arg1 newLen:(unsigned long long)arg2;
- (int)_offsetForPrimaryId:(int)arg1 secondaryId:(int)arg2;
- (int)_offsetForPrimaryId:(int)arg1 secondaryId:(int)arg2 datalossEnabledFunnels:(id)arg3;
- (void)_formatFile;
- (_Bool)_byteArrayNull;
- (int)_totalFileSize;
- (void)dealloc;
- (void)clear;
- (id)allCounters;
- (void)overwriteStorageWithCounters:(id)arg1;
- (void)setCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 count:(int)arg3 datalossEnabledFunnels:(id)arg4;
- (void)bumpCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 delta:(int)arg3;
- (void)bumpCounterWithPrimaryId:(int)arg1 secondaryId:(int)arg2 delta:(int)arg3 datalossEnabledFunnels:(id)arg4;
- (id)initWithNumCounters:(int)arg1 filePath:(id)arg2 fileVersion:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

