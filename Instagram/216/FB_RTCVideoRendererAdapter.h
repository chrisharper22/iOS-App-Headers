//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FB_RTCVideoRenderer;

@interface FB_RTCVideoRendererAdapter : NSObject
{
    struct unique_ptr<webrtc::VideoRendererAdapter, std::default_delete<webrtc::VideoRendererAdapter>> _adapter;
    id <FB_RTCVideoRenderer> _videoRenderer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FB_RTCVideoRenderer> videoRenderer; // @synthesize videoRenderer=_videoRenderer;
@property(readonly, nonatomic) void *nativeVideoRenderer;
- (id)initWithNativeRenderer:(id)arg1;

@end

