//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectInboxServiceListener-Protocol.h>

@class IGDirectInboxFetchPerformanceLogger, IGDirectIrisNewContentPerformanceLogger, IGDirectMainInboxAnalyticsLogger, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectInboxServiceFetchLogger : NSObject <IGDirectInboxServiceListener>
{
    IGDirectIrisNewContentPerformanceLogger *_irisNewContentPerformanceLogger;
    IGDirectInboxFetchPerformanceLogger *_fetchPerformanceLogger;
    IGDirectMainInboxAnalyticsLogger *_mainInboxAnalyticsLogger;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)_logSuccessRateForFetchAction:(id)arg1 fetchInput:(id)arg2 extra:(id)arg3;
- (void)directInboxServiceFetchResultWasIgnoredDueToSnapshotFetchWithFetchInput:(id)arg1;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)arg1 httpStatusCode:(long long)arg2 error:(id)arg3 willAutoRetry:(_Bool)arg4;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)arg1 fetchOutput:(id)arg2;
- (void)directInboxServiceDidReceiveInboxFetchPayloadFromNetwork;
- (void)directInboxServiceWillFetchInboxDataWithFetchInput:(id)arg1;
- (void)directInboxServiceWillIgnoreInboxFetchDueToAlreadyRunningFetchWithFetchInput:(id)arg1;
- (id)initWithIrisNewContentPerformanceLogger:(id)arg1 fetchPerformanceLogger:(id)arg2 mainInboxAnalyticsLogger:(id)arg3 analyticsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

