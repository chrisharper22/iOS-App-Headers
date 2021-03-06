//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPollingDelegate-Protocol.h"

@class FBCCUExecutor, IGUserDefaults, IGUserSession, NSString;
@protocol FBPolling, IGAPIClient, IGAnalyticsEventLoggingProtocol;

@interface IGContinuousContactUploadSession : NSObject <FBPollingDelegate>
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGUserSession *_userSession;
    id <IGAPIClient> _networker;
    IGUserDefaults *_userDefaults;
    FBCCUExecutor *_sharedCCUExecutor;
    id <FBPolling> _pollingSource;
}

- (void).cxx_destruct;
- (void)pollingSourceDidFire:(id)arg1;
- (void)handleContactSyncSetting:(_Bool)arg1;
- (void)startSessionWithChecks:(_Bool)arg1;
- (id)initWithAnalyticsLogger:(id)arg1 userSession:(id)arg2 networker:(id)arg3 userDefaults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

