//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol FBMediaUploadListener <NSObject>
- (void)uploadHasProgressed:(NSString *)arg1 withProgressInformation:(CDStruct_60aa3504)arg2;
- (void)uploadWasCancelled:(NSString *)arg1 metrics:(NSDictionary *)arg2;
- (void)uploadDidFail:(NSString *)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(_Bool)arg3 metrics:(NSDictionary *)arg4;
- (void)uploadDidSucceed:(NSString *)arg1 withResponse:(NSDictionary *)arg2 metrics:(NSDictionary *)arg3;
@end
