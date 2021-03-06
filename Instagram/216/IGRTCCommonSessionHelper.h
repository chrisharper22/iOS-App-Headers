//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGRTCCommonPeerConnection, IGRTCCommonSignalingService;

@interface IGRTCCommonSessionHelper : NSObject
{
    id <IGRTCCommonPeerConnection> _commonPeerConnection;
    id <IGRTCCommonSignalingService> _commonSignalingService;
}

- (void).cxx_destruct;
- (id)setupConnectionWithOptions:(unsigned long long)arg1 requestParams:(id)arg2 joinCallHandler:(CDUnknownBlockType)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)initWithPeerConnection:(id)arg1 signalingService:(id)arg2;

@end

