//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSObject-Protocol.h>

@class FBMediaUploadJobDetail, NSDictionary, NSString, NSURL;

@protocol FBMediaUploadProtocolProvider <NSObject, NSCoding>
- (NSDictionary *)parseResponse:(NSDictionary *)arg1 error:(id *)arg2;
- (NSURL *)getServerUrlForJobDetail:(FBMediaUploadJobDetail *)arg1 jobId:(NSString *)arg2 phase:(NSString *)arg3;
@end

