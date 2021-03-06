//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBIntentTarget-Protocol.h>

@class IGDirectInteropReachabilitySettingsService, IGDirectReachabilityLinkedPageIGDMAccessSettingsContext, IGServiceManager, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectInteropReachabilitySettingsUserIntentTarget : NSObject <FBIntentTarget>
{
    IGDirectInteropReachabilitySettingsService *_reachabilityService;
    IGServiceManager *_serviceManager;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGDirectReachabilityLinkedPageIGDMAccessSettingsContext *_linkedPageIGDMAccessSettingsContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectReachabilityLinkedPageIGDMAccessSettingsContext *linkedPageIGDMAccessSettingsContext; // @synthesize linkedPageIGDMAccessSettingsContext=_linkedPageIGDMAccessSettingsContext;
@property(readonly, nonatomic) id <IGAnalyticsEventLoggingProtocol> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) IGServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(readonly, nonatomic) IGDirectInteropReachabilitySettingsService *reachabilityService; // @synthesize reachabilityService=_reachabilityService;
- (id)initWithReachabilityService:(id)arg1 serviceManager:(id)arg2 analyticsLogger:(id)arg3 linkedPageIGDMAccessSettingsContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

