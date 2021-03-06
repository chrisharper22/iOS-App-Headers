//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol IGAnalyticsLogFileManagerProtocol <NSObject>
- (_Bool)isCompressedFile:(NSURL *)arg1;
- (void)deleteLogFiles:(NSArray *)arg1 keepNewestFiles:(unsigned long long)arg2;
- (void)deleteLogFile:(NSURL *)arg1;
- (NSURL *)createLogFileByMovingFile:(NSURL *)arg1;
- (NSURL *)createLogFileWithData:(NSString *)arg1;
- (NSArray *)allLogFiles;
- (void)enableCompression:(_Bool)arg1;
@end

