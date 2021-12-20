//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface FBCaptureConnectionManager : NSObject
{
    id <AVCaptureVideoDataOutputSampleBufferDelegate> _videoDataOutputBufferDelegate;
    NSObject<OS_dispatch_queue> *_videoBufferQueue;
    NSMutableDictionary *_captureSets;
    struct FBCameraConfiguration _configuration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enableConnection:(id)arg1 enable:(_Bool)arg2;
- (void)enableAllVideoConnections:(_Bool)arg1;
- (id)allConnections;
- (id)photoCaptureConnection:(id)arg1;
- (id)photoCaptureOutput:(id)arg1;
- (id)videoCaptureConnection:(id)arg1;
- (id)videoDataOutput:(id)arg1;
- (id)captureDeviceInput:(id)arg1;
- (id)connectionIdentifierWithPosition:(long long)arg1;
- (id)connectionIdentifier:(id)arg1;
- (void)connect:(id)arg1 toSession:(id)arg2 previewLayer:(id)arg3;
- (void)updateConnectionMirrorSettingForConnection:(id)arg1 frontCameraShouldBeMirrored:(_Bool)arg2;
- (void)updateDefaultVideoOrientationForConnection:(id)arg1 videoOrientation:(long long)arg2;
- (_Bool)createCaptureSetFromDevice:(id)arg1;
- (id)initWithWithConfiguration:(const struct FBCameraConfiguration *)arg1 videoDataOutputSampleBufferDelegate:(id)arg2 videoBufferQueue:(id)arg3;

@end
