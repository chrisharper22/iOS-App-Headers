//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FB_RTCIceCandidate : NSObject
{
    int _sdpMLineIndex;
    NSString *_sdpMid;
    NSString *_sdp;
    NSString *_serverUrl;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *serverUrl; // @synthesize serverUrl=_serverUrl;
@property(readonly, nonatomic) NSString *sdp; // @synthesize sdp=_sdp;
@property(readonly, nonatomic) int sdpMLineIndex; // @synthesize sdpMLineIndex=_sdpMLineIndex;
@property(readonly, nonatomic) NSString *sdpMid; // @synthesize sdpMid=_sdpMid;
@property(readonly, nonatomic) unique_ptr_2559677c nativeCandidate;
- (id)initWithNativeCandidate:(const struct IceCandidateInterface *)arg1;
- (id)description;
- (id)initWithSdp:(id)arg1 sdpMLineIndex:(int)arg2 sdpMid:(id)arg3;

@end

