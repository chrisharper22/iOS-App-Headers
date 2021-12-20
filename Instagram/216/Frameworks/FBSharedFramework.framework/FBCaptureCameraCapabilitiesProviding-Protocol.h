//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSString;

@protocol FBCaptureCameraCapabilitiesProviding <NSObject>
@property(readonly, nonatomic) _Bool isVideoHDREnabled;
@property(readonly, nonatomic) double maxZoomFactor;
@property(readonly, nonatomic) CDStruct_15fe95f0 validExposureValues;
- (_Bool)supportsCaptureSessionPreset:(NSString *)arg1 cameraPosition:(long long)arg2;
- (_Bool)currentDeviceSupportsCaptureSessionPreset:(NSString *)arg1;
- (_Bool)canUpdateCaptureDevicePosition:(long long)arg1;
- (_Bool)isExposureModeSupported:(long long)arg1;
- (_Bool)isFocusModeSupported:(long long)arg1;
- (_Bool)isTorchModeSupported:(long long)arg1;
- (_Bool)isZoomFactorSupported:(double)arg1;
- (double)supportedZoomFactorFromZoomFactor:(double)arg1;
@end

