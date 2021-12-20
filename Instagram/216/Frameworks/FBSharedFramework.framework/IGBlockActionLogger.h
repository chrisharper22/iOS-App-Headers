//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserBlockLogging-Protocol.h>

@class NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGBlockActionLogger : NSObject <IGUserBlockLogging>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    long long _userType;
    NSString *_module;
    NSString *_targetID;
    NSString *_uuid;
    long long _entryPoint;
    long long _surface;
    _Bool _isMsysThread;
}

- (void).cxx_destruct;
- (void)logBlockDialogConfirmedForState:(long long)arg1;
- (void)logBlockActionContinueForState:(long long)arg1;
- (void)logBlockActionFailureForState:(long long)arg1;
- (void)logBlockDialogCancelledForState:(long long)arg1;
- (void)logBlockActionSuccessForState:(long long)arg1;
- (void)logBlockButtonTappedForState:(long long)arg1;
- (void)logBlockImpressionForState:(long long)arg1;
- (long long)_getStructuredLoggerBlockSurfaceEnum:(long long)arg1;
- (long long)_getStructuredLoggerBlockEntryPointEnum:(long long)arg1;
- (void)_logBlockForAction:(long long)arg1;
- (id)initWithModule:(id)arg1 analyticsLogger:(id)arg2 targetID:(id)arg3 entryPoint:(long long)arg4 surface:(long long)arg5 uuidString:(id)arg6 interopUserType:(long long)arg7 threadInfo:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

