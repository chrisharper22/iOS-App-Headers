//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBCCPerformanceLogger-Protocol.h>

@class NSMapTable, NSString;
@protocol FBAnalyticsLogging, FBCameraActionPerformanceLoggerProviding, FBCameraCaptureCoordinatorStartPerformanceLoggerProviding, FBCameraCapturePhotoPerformanceLoggerProviding, FBCameraSessionUsagePerformanceLoggerProviding, FBCameraStartPerformanceLoggerProviding, FBCameraStartRecordingVideoPerformanceLoggerProviding, FBCameraStopRecordingVideoPerformanceLoggerProviding;

@interface FBCCFacebookPerformanceLogger : NSObject <FBCCPerformanceLogger>
{
    NSString *_productName;
    NSString *_productSessionID;
    NSString *_mode;
    id <FBAnalyticsLogging> _analyticsLogger;
    NSMapTable *_filterExtras;
    id <FBCameraActionPerformanceLoggerProviding> _cameraActionPerformanceLogger;
    CDUnknownBlockType _timeToFirstFrameLoggerFactory;
    id <FBCameraStartPerformanceLoggerProviding> _timeToFirstFrameLogger;
    CDUnknownBlockType _capturePhotoLoggerFactory;
    id <FBCameraCapturePhotoPerformanceLoggerProviding> _capturePhotoLogger;
    CDUnknownBlockType _captureCoordinatorTimeToFirstFrameLoggerFactory;
    id <FBCameraCaptureCoordinatorStartPerformanceLoggerProviding> _captureCoordinatorTimeToFirstFrameLogger;
    CDUnknownBlockType _startRecordingVideoLoggerFactory;
    id <FBCameraStartRecordingVideoPerformanceLoggerProviding> _startRecordingVideoLogger;
    CDUnknownBlockType _stopRecordingVideoLoggerFactory;
    id <FBCameraStopRecordingVideoPerformanceLoggerProviding> _stopRecordingVideoLogger;
    CDUnknownBlockType _sessionUsageLoggerFactory;
    id <FBCameraSessionUsagePerformanceLoggerProviding> _sessionUsageLogger;
    id <FBCameraActionPerformanceLoggerProviding> _cameraActionLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBCameraActionPerformanceLoggerProviding> cameraActionLogger; // @synthesize cameraActionLogger=_cameraActionLogger;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) id <FBCameraSessionUsagePerformanceLoggerProviding> sessionUsageLogger;
@property(readonly, nonatomic) id <FBCameraStopRecordingVideoPerformanceLoggerProviding> stopRecordingVideoLogger;
@property(readonly, nonatomic) id <FBCameraStartRecordingVideoPerformanceLoggerProviding> startRecordingVideoLogger;
@property(readonly, nonatomic) id <FBCameraCaptureCoordinatorStartPerformanceLoggerProviding> captureCoordinatorTimeToFirstFrameLogger;
@property(readonly, nonatomic) id <FBCameraCapturePhotoPerformanceLoggerProviding> capturePhotoLogger;
@property(readonly, nonatomic) id <FBCameraStartPerformanceLoggerProviding> timeToFirstFrameLogger;
- (void)logPerformanceForFilter:(id)arg1 parameters:(id)arg2;
- (void)removeAdditionalParametersForAllFilters;
- (void)removeAdditionalParametersForFilters:(id)arg1;
- (void)setAdditionalParameters:(id)arg1 forFilter:(id)arg2;
- (double)preferredPerformanceTimerInterval;
- (id)initWithProductName:(unsigned long long)arg1 productSessionID:(id)arg2 mode:(id)arg3 cameraActionPerformanceLogger:(id)arg4 timeToFirstFrameLoggerFactory:(CDUnknownBlockType)arg5 capturePhotoLoggerFactory:(CDUnknownBlockType)arg6 captureCoordinatorTimeToFirstFrameLoggerFactory:(CDUnknownBlockType)arg7 startRecordingVideoLoggerFactory:(CDUnknownBlockType)arg8 stopRecordingVideoLoggerFactory:(CDUnknownBlockType)arg9 sessionUsageLoggerFactory:(CDUnknownBlockType)arg10 analyticsLogger:(id)arg11;
- (id)initWithProductName:(unsigned long long)arg1 productSessionID:(id)arg2 mode:(id)arg3 timeToFirstFrameLogger:(id)arg4 analyticsLogger:(id)arg5;
- (id)initWithProductName:(unsigned long long)arg1 productSessionID:(id)arg2 mode:(id)arg3 analyticsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

