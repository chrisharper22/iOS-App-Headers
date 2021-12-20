//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FB_RTCMTLRenderer-Protocol.h"

@class MTKView, NSString, NSValue;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLLibrary, MTLRenderPipelineState, OS_dispatch_semaphore;

@interface FB_RTCMTLRenderer : NSObject <FB_RTCMTLRenderer>
{
    MTKView *_view;
    NSObject<OS_dispatch_semaphore> *_inflight_semaphore;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLLibrary> _defaultLibrary;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLBuffer> _vertexBuffer;
    int _oldFrameWidth;
    int _oldFrameHeight;
    int _oldCropWidth;
    int _oldCropHeight;
    int _oldCropX;
    int _oldCropY;
    long long _oldRotation;
    NSValue *_rotationOverride;
}

- (void).cxx_destruct;
@property(retain) NSValue *rotationOverride; // @synthesize rotationOverride=_rotationOverride;
- (void)drawFrame:(id)arg1;
- (void)render;
- (void)loadAssets;
- (_Bool)setupMetal;
- (_Bool)setupTexturesForFrame:(id)arg1;
- (void)getWidth:(int *)arg1 height:(int *)arg2 cropWidth:(int *)arg3 cropHeight:(int *)arg4 cropX:(int *)arg5 cropY:(int *)arg6 ofFrame:(id)arg7;
- (void)uploadTexturesToRenderEncoder:(id)arg1;
- (id)shaderSource;
- (id)currentMetalDevice;
- (_Bool)setupWithView:(id)arg1;
- (_Bool)addRenderingDestination:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

