//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ZZArchiveEntry : NSObject
{
}

+ (id)archiveEntryWithFileName:(id)arg1 fileMode:(unsigned short)arg2 lastModified:(id)arg3 compressionLevel:(long long)arg4 dataBlock:(CDUnknownBlockType)arg5 streamBlock:(CDUnknownBlockType)arg6 dataConsumerBlock:(CDUnknownBlockType)arg7;
+ (id)archiveEntryWithDirectoryName:(id)arg1;
+ (id)archiveEntryWithFileName:(id)arg1 compress:(_Bool)arg2 dataConsumerBlock:(CDUnknownBlockType)arg3;
+ (id)archiveEntryWithFileName:(id)arg1 compress:(_Bool)arg2 streamBlock:(CDUnknownBlockType)arg3;
+ (id)archiveEntryWithFileName:(id)arg1 compress:(_Bool)arg2 dataBlock:(CDUnknownBlockType)arg3;
- (id)newWriterCanSkipLocalFile:(_Bool)arg1;
- (struct CGDataProvider *)newDataProviderWithPassword:(id)arg1 error:(id *)arg2;
- (struct CGDataProvider *)newDataProviderWithError:(id *)arg1;
- (id)newDataWithPassword:(id)arg1 error:(id *)arg2;
- (id)newDataWithError:(id *)arg1;
- (_Bool)check:(id *)arg1;
- (id)newStreamWithPassword:(id)arg1 error:(id *)arg2;
- (id)newStreamWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) unsigned short fileMode;
@property(readonly, nonatomic) unsigned long long uncompressedSize;
@property(readonly, nonatomic) unsigned long long compressedSize;
@property(readonly, nonatomic) unsigned long long crc32;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) _Bool encrypted;
@property(readonly, nonatomic) _Bool compressed;

@end

