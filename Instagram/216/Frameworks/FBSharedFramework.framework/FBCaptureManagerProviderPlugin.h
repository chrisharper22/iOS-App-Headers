//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBCaptureManagerProviding-Protocol.h>

@class NSString;

@interface FBCaptureManagerProviderPlugin : NSObject <FBCaptureManagerProviding>
{
}

- (id)captureManagerWithCameraConfiguration:(const struct FBCameraConfiguration *)arg1 requiredCameraCapabilities:(unsigned long long)arg2 orientationTracker:(id)arg3 systemAudioCaptureSessionInteractor:(id)arg4 audioPipelineProviding:(id)arg5 captureCoordinatorLogger:(id)arg6 analyticsPayloadProvider:(id)arg7 experimentManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

