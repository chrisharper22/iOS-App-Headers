//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSObject, NSString, NSURL;
@protocol IGImageRequestInterfacing, OS_dispatch_queue;

@protocol IGImageNetworking <NSObject>
- (id <IGImageRequestInterfacing>)startRequestForURL:(NSURL *)arg1 module:(NSString *)arg2 imageFetchPriority:(long long)arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4 retryHandler:(void (^)(void))arg5 startHandler:(void (^)(void))arg6 responseReceivedHandler:(void (^)(long long))arg7 bytesReceivedHandler:(void (^)(char *, unsigned long long))arg8 successHandler:(void (^)(long long, id <MOSNetworkRequestSummary>))arg9 failureHandler:(void (^)(NSError *, id <MOSNetworkRequestSummary>))arg10;
@end

