//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCameraEffectChainingContext, IGVideoConfiguration, NSArray;

@interface IGCameraConfig : NSObject
{
    _Bool _useFBMultiCaptureManager;
    _Bool _enableFBCameraLowLightDetector;
    _Bool _removeInputsAndOutputsWhenStopped;
    _Bool _enableBoomerangV2;
    _Bool _enableBlurTransition;
    _Bool _hdrVideoCaptureEnabled;
    long long _cameraPosition;
    long long _captureManagerMode;
    NSArray *_captureDevices;
    long long _initialEffectSurface;
    unsigned long long _applicatorSurface;
    IGCameraEffectChainingContext *_chainingContext;
    IGVideoConfiguration *_videoConfiguration;
}

+ (id)ARLinkScanCameraConfigWithUserSession:(id)arg1;
+ (id)videoCallCameraConfigWithUserSession:(id)arg1;
+ (id)liveConfigWithCameraPosition:(long long)arg1 userSession:(id)arg2;
+ (id)selfieStickerCameraConfigWithUserId:(id)arg1;
+ (id)storyCameraConfigWithCameraPosition:(long long)arg1 removeInputsAndOutputsWhenStopped:(_Bool)arg2 initialEffectSurface:(long long)arg3 applicatorSurface:(unsigned long long)arg4 arEffectChainingContext:(id)arg5 captureDevices:(id)arg6 userSession:(id)arg7 useFBMultiCaptureManager:(_Bool)arg8 enableFBCameraLowLightDetector:(_Bool)arg9 enableBoomerangV2:(_Bool)arg10 enableBlurTransition:(_Bool)arg11 hdrVideoCaptureEnabled:(_Bool)arg12;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hdrVideoCaptureEnabled; // @synthesize hdrVideoCaptureEnabled=_hdrVideoCaptureEnabled;
@property(readonly, nonatomic) _Bool enableBlurTransition; // @synthesize enableBlurTransition=_enableBlurTransition;
@property(readonly, nonatomic) _Bool enableBoomerangV2; // @synthesize enableBoomerangV2=_enableBoomerangV2;
@property(readonly, nonatomic) _Bool removeInputsAndOutputsWhenStopped; // @synthesize removeInputsAndOutputsWhenStopped=_removeInputsAndOutputsWhenStopped;
@property(readonly, nonatomic) _Bool enableFBCameraLowLightDetector; // @synthesize enableFBCameraLowLightDetector=_enableFBCameraLowLightDetector;
@property(readonly, nonatomic) _Bool useFBMultiCaptureManager; // @synthesize useFBMultiCaptureManager=_useFBMultiCaptureManager;
@property(readonly, nonatomic) IGVideoConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, nonatomic) IGCameraEffectChainingContext *chainingContext; // @synthesize chainingContext=_chainingContext;
@property(readonly, nonatomic) unsigned long long applicatorSurface; // @synthesize applicatorSurface=_applicatorSurface;
@property(readonly, nonatomic) long long initialEffectSurface; // @synthesize initialEffectSurface=_initialEffectSurface;
@property(readonly, nonatomic) NSArray *captureDevices; // @synthesize captureDevices=_captureDevices;
@property(readonly, nonatomic) long long captureManagerMode; // @synthesize captureManagerMode=_captureManagerMode;
@property(readonly, nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (id)initWithCameraPosition:(long long)arg1 removeInputsAndOutputsWhenStopped:(_Bool)arg2 captureManagerMode:(long long)arg3 initialEffectSurface:(long long)arg4 applicatorSurface:(unsigned long long)arg5 arEffectChainingContext:(id)arg6 videoConfiguration:(id)arg7 captureDevices:(id)arg8 useFBMultiCaptureManager:(_Bool)arg9 enableFBCameraLowLightDetector:(_Bool)arg10 enableBoomerangV2:(_Bool)arg11 enableBlurTransition:(_Bool)arg12 hdrVideoCaptureEnabled:(_Bool)arg13;

@end

