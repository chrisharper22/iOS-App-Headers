//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserBlockLogging-Protocol.h>

@class IGLoggerThreadInfo, IGUser, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGBlockAnalyticsLogger : NSObject <IGUserBlockLogging>
{
    NSString *_module;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    long long _entryPoint;
    NSString *_uuid;
    IGUser *_targetUser;
    NSString *_currentUserPK;
    IGLoggerThreadInfo *_threadInfo;
}

- (void).cxx_destruct;
- (void)logBlockDialogConfirmedForState:(long long)arg1;
- (void)logBlockActionFailureForState:(long long)arg1;
- (void)logBlockDialogCancelledForState:(long long)arg1;
- (void)logBlockActionSuccessForState:(long long)arg1;
- (void)logBlockButtonTappedForState:(long long)arg1;
- (void)logBlockImpressionForState:(long long)arg1;
- (id)_createEventWithActionString:(id)arg1 entryPoint:(long long)arg2 targetUser:(id)arg3 analyticsModule:(id)arg4 requestId:(id)arg5 threadInfo:(id)arg6 currentUserPK:(id)arg7;
- (void)_logBlockForAction:(id)arg1;
- (id)initWithModule:(id)arg1 analyticsLogger:(id)arg2 entryPoint:(long long)arg3 uuidString:(id)arg4 targetUser:(id)arg5 currentUserPK:(id)arg6 threadInfo:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
