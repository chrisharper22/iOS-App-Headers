//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol FBCameraCapturePhotoPerformanceLoggerProviding <NSObject>
- (void)didFailCapturePhoto;
- (void)didAbortCapturePhoto;
- (void)didFinishCapturePhoto;
- (void)didRenderEffect;
- (void)didReceivePhotoFromDeviceWithIsDepthEnabled:(NSString *)arg1 capturePhotoParamsWithEffect:(NSDictionary *)arg2;
- (void)didCapturePhotoByDeviceCamera;
- (void)willCapturePhotoByDeviceCamera;
- (void)didStartCapturePhoto:(NSString *)arg1;
@end

