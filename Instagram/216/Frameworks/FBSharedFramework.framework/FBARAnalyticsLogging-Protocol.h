//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBAREffectAnalyticsInfo, NSDictionary, NSString;
@protocol FBARAnalyticsLoggingSessionAnnouncing, FBARBugReportLogging;

@protocol FBARAnalyticsLogging <NSObject>
@property(readonly, nonatomic) shared_ref_bf09a83c userflowLogger;
@property(readonly, nonatomic) shared_ref_fa177e0d sessionWaterfallLogger;
@property(readonly, nonatomic) shared_ptr_422868cf structuredLogger;
@property(readonly, nonatomic) id <FBARBugReportLogging> bugReportLogger;
@property(readonly, nonatomic) id <FBARAnalyticsLoggingSessionAnnouncing> sessionChangeAnnouncer;
@property(readonly, copy, nonatomic) NSString *analyticsProductName;
- (void)logRawEventWithName:(NSString *)arg1 extras:(NSDictionary *)arg2;
- (void)logEngineEventWithEventType:(NSString *)arg1 eventName:(NSString *)arg2 extras:(NSString *)arg3;
- (void)logEventForServiceWithType:(const struct ServiceType *)arg1 withName:(NSString *)arg2 extras:(NSString *)arg3;
- (void)logEffectStop;
- (void)logEffectFirstFrameRenderFailureWithReason:(NSString *)arg1;
- (void)logEffectFirstFrameRenderSuccess;
- (void)logEffectFirstFrameRenderStart;
- (void)logEffectLoadFailureWithReason:(NSString *)arg1;
- (void)logEffectLoadSuccess;
- (void)logEffectStartWithAnalyticsInfo:(FBAREffectAnalyticsInfo *)arg1;
@end

