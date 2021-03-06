//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class AVCaptureDevice, NSArray, NSString;
@protocol FBCaptureDeviceCustomCameraAction, FBCustomCameraAction;

@interface FBCameraAction : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_switchToDeviceWithID;
    long long _updateCaptureDevicePosition;
    long long _updateFlashMode;
    struct CGPoint _updateScaledPoint;
    NSString *_updateSessionPreset;
    long long _updateTorchMode;
    double _updateZoomFactor;
    long long _setFrameRate;
    _Bool _setShouldFrontCameraVideoMirrored;
    _Bool _setLowLightModeEnabled;
    long long _setVideoOrientation;
    NSArray *_setCaptureDevices_captureDevices;
    _Bool _setCaptureDevices_useMultiCaptureIfPossible;
    AVCaptureDevice *_setMainCaptureDevice;
    id <FBCustomCameraAction> _setCustomAction;
    id <FBCaptureDeviceCustomCameraAction> _setCaptureDeviceCustomAction;
}

+ (id)updateZoomFactor:(double)arg1;
+ (id)updateTorchMode:(long long)arg1;
+ (id)updateSessionPreset:(id)arg1;
+ (id)updateScaledPoint:(struct CGPoint)arg1;
+ (id)updateFlashMode:(long long)arg1;
+ (id)updateCaptureDevicePosition:(long long)arg1;
+ (id)toggleCaptureDevicePosition;
+ (id)switchToDeviceWithID:(id)arg1;
+ (id)setVideoOrientation:(long long)arg1;
+ (id)setShouldFrontCameraVideoMirrored:(_Bool)arg1;
+ (id)setMainCaptureDevice:(id)arg1;
+ (id)setLowLightModeEnabled:(_Bool)arg1;
+ (id)setFrameRate:(long long)arg1;
+ (id)setCustomAction:(id)arg1;
+ (id)setCaptureDevicesWithCaptureDevices:(id)arg1 useMultiCaptureIfPossible:(_Bool)arg2;
+ (id)setCaptureDeviceCustomAction:(id)arg1;
- (void).cxx_destruct;
- (void)matchSwitchToDeviceWithID:(CDUnknownBlockType)arg1 toggleCaptureDevicePosition:(CDUnknownBlockType)arg2 updateCaptureDevicePosition:(CDUnknownBlockType)arg3 updateFlashMode:(CDUnknownBlockType)arg4 updateScaledPoint:(CDUnknownBlockType)arg5 updateSessionPreset:(CDUnknownBlockType)arg6 updateTorchMode:(CDUnknownBlockType)arg7 updateZoomFactor:(CDUnknownBlockType)arg8 setFrameRate:(CDUnknownBlockType)arg9 setShouldFrontCameraVideoMirrored:(CDUnknownBlockType)arg10 setLowLightModeEnabled:(CDUnknownBlockType)arg11 setVideoOrientation:(CDUnknownBlockType)arg12 setCaptureDevices:(CDUnknownBlockType)arg13 setMainCaptureDevice:(CDUnknownBlockType)arg14 setCustomAction:(CDUnknownBlockType)arg15 setCaptureDeviceCustomAction:(CDUnknownBlockType)arg16;

@end

