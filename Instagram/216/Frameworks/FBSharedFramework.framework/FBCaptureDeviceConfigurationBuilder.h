//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBCaptureDeviceConfigurationBuilder : NSObject
{
    long long _frameRate;
    long long _position;
    long long _flashMode;
    long long _torchMode;
    double _zoomFactor;
    NSString *_deviceType;
}

+ (id)captureDeviceConfigurationFromExistingCaptureDeviceConfiguration:(id)arg1;
+ (id)captureDeviceConfiguration;
- (void).cxx_destruct;
- (id)withDeviceType:(id)arg1;
- (id)withZoomFactor:(double)arg1;
- (id)withTorchMode:(long long)arg1;
- (id)withFlashMode:(long long)arg1;
- (id)withPosition:(long long)arg1;
- (id)withFrameRate:(long long)arg1;
- (id)build;

@end

