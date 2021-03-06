//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGHTTPResponse, IGNetworkRequestSummary, NSError;
@protocol IGNetworkCachedData;

@protocol IGNetworkCallbacks <NSObject>
- (void)failure:(NSError *)arg1 summary:(IGNetworkRequestSummary *)arg2;
- (void)success:(IGNetworkRequestSummary *)arg1;
- (void)timeLastByteAckedCalledMs:(long long)arg1 latencyMs:(long long)arg2;
- (void)timeFirstByteFlushedCalledMs:(long long)arg1;
- (void)bytesReceived:(const char *)arg1 len:(unsigned long long)arg2 totalBytesExpectedToReceive:(long long)arg3;
- (void)responseReceived:(IGHTTPResponse *)arg1;
- (void)bytesSent:(long long)arg1 totalBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)startHandler;
- (void)cacheHandler:(id <IGNetworkCachedData>)arg1;
- (void)retryHandler:(IGNetworkRequestSummary *)arg1;
@end

