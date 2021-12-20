//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkCallbacks-Protocol.h>

@class NSString;
@protocol IGNetworkCallbacks, IGNetworkingRegionHintReceiver;

@interface IGNetworkRegionHintInterceptorCallbacks : NSObject <IGNetworkCallbacks>
{
    id <IGNetworkCallbacks> _callbacks;
    id <IGNetworkingRegionHintReceiver> _regionHintReceiver;
}

- (void).cxx_destruct;
- (void)failure:(id)arg1 summary:(id)arg2;
- (void)success:(id)arg1;
- (void)bytesReceived:(const char *)arg1 len:(unsigned long long)arg2 totalBytesExpectedToReceive:(long long)arg3;
- (void)responseReceived:(id)arg1;
- (void)timeLastByteAckedCalledMs:(long long)arg1 latencyMs:(long long)arg2;
- (void)timeFirstByteFlushedCalledMs:(long long)arg1;
- (void)bytesSent:(long long)arg1 totalBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)startHandler;
- (void)cacheHandler:(id)arg1;
- (void)retryHandler:(id)arg1;
- (id)initWithCallbacks:(id)arg1 regionHintReceiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

