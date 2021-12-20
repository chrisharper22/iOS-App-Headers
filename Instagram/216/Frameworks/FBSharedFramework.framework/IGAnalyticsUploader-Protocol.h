//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSURL;

@protocol IGAnalyticsUploader <NSObject>
- (_Bool)uploadWithParameters:(NSDictionary *)arg1 successHandler:(void (^)(NSDictionary *))arg2 failureHandler:(void (^)(_Bool))arg3;
- (void)processLogFilesImmediately_DANGEROUS_DO_NOT_USE;
- (void)processLogFiles;
- (void)prepareLogFile:(NSURL *)arg1;
@end
