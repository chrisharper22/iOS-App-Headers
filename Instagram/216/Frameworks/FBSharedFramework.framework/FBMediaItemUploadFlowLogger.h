//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMediaItemUploadLogging-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol FBMediaUploadEventLogging;

@interface FBMediaItemUploadFlowLogger : NSObject <FBMediaItemUploadLogging>
{
    id <FBMediaUploadEventLogging> _eventLogger;
    NSString *_moduleName;
    NSMutableDictionary *_context;
    CDUnknownBlockType _applicationStateProvider;
    NSDate *_recordingStartDate;
    NSDate *_recordingStopDate;
    NSDate *_uploadStartDate;
    NSDate *_processingStartDate;
    NSDate *_uploadCompletedDate;
    NSDate *_fetchingUploadSettingsStartDate;
    NSDate *_uploadQualityMeasurementStartDate;
}

- (void).cxx_destruct;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_addApplicationStateChangeObservers;
- (void)_logEvent:(id)arg1 extras:(id)arg2 elapsedTime:(double)arg3;
- (void)_logEvent:(id)arg1 error:(id)arg2 extras:(id)arg3 elapsedTime:(double)arg4;
- (void)logUploadUserLogout;
- (void)logUploadQualityMeasurementFailureWithExtras:(id)arg1 extras:(id)arg2;
- (void)logUploadQualityMeasurementSuccessWithExtras:(id)arg1;
- (void)logUploadQualityMeasurementStart;
- (void)logEnteredForegroundDueToLocalNotification;
- (void)logCancelledLocalNotification;
- (void)logScheduledLocalNotification;
- (void)logFetchUploadSettingsFail:(id)arg1;
- (void)logFetchUploadSettingsSuccessWithExtras:(id)arg1;
- (void)logFetchUploadSettingsStart;
- (void)logProcessFail:(id)arg1 extras:(id)arg2;
- (void)logProcessCancel;
- (void)logProcessSuccessWithExtras:(id)arg1;
- (void)logProcessStartWithExtras:(id)arg1;
- (void)logPreviewFail:(id)arg1 extras:(id)arg2;
- (void)logPreviewSuccess:(id)arg1;
- (void)logPreviewAttempt:(id)arg1;
- (void)logPreviewStart;
- (void)logUploadFail:(id)arg1;
- (void)logUploadCancelWithCancellationReason:(long long)arg1;
- (void)logUploadSuccess;
- (void)logUploadStart;
- (void)logStreamingRecordFail:(id)arg1;
- (void)logStreamingRecordSuccess;
- (void)logStreamingRecordStart;
- (void)addEntriesFromDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *contextCopy;
- (id)initWithLoggingInfo:(id)arg1 eventLogger:(id)arg2 applicationStateProvider:(CDUnknownBlockType)arg3;
- (id)initWithLoggingInfo:(id)arg1 eventLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
