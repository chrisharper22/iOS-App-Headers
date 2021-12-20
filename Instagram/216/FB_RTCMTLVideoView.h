//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FB_RTCVideoRenderer-Protocol.h"
#import "MTKViewDelegate-Protocol.h"

@class FB_RTCMTLI420Renderer, FB_RTCMTLNV12Renderer, FB_RTCMTLRGBRenderer, FB_RTCVideoFrame, MTKView, NSString, NSValue;
@protocol FB_RTCVideoViewDelegate;

@interface FB_RTCMTLVideoView : UIView <MTKViewDelegate, FB_RTCVideoRenderer>
{
    id <FB_RTCVideoViewDelegate> _delegate;
    FB_RTCMTLI420Renderer *_rendererI420;
    FB_RTCMTLNV12Renderer *_rendererNV12;
    FB_RTCMTLRGBRenderer *_rendererRGB;
    MTKView *_metalView;
    FB_RTCVideoFrame *_videoFrame;
    long long _lastFrameTimeNs;
    NSValue *_rotationOverride;
    struct CGSize _videoFrameSize;
}

+ (id)createRGBRenderer;
+ (id)createI420Renderer;
+ (id)createNV12Renderer;
+ (id)createMetalView:(struct CGRect)arg1;
+ (_Bool)isMetalAvailable;
- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *rotationOverride; // @synthesize rotationOverride=_rotationOverride;
@property(nonatomic) long long lastFrameTimeNs; // @synthesize lastFrameTimeNs=_lastFrameTimeNs;
@property(nonatomic) struct CGSize videoFrameSize; // @synthesize videoFrameSize=_videoFrameSize;
@property(retain) FB_RTCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(retain, nonatomic) FB_RTCMTLRGBRenderer *rendererRGB; // @synthesize rendererRGB=_rendererRGB;
@property(retain, nonatomic) FB_RTCMTLNV12Renderer *rendererNV12; // @synthesize rendererNV12=_rendererNV12;
@property(retain, nonatomic) FB_RTCMTLI420Renderer *rendererI420; // @synthesize rendererI420=_rendererI420;
@property(nonatomic) __weak id <FB_RTCVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)renderFrame:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)drawableSize;
- (long long)frameRotation;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)layoutSubviews;
- (void)configure;
@property(nonatomic) long long videoContentMode;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
