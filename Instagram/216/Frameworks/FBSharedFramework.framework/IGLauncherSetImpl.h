//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDeviceLauncherSet-Protocol.h>
#import <FBSharedFramework/IGFeatureFetcherDelegate-Protocol.h>
#import <FBSharedFramework/IGLauncherSetExtras-Protocol.h>
#import <FBSharedFramework/IGUserLauncherSet-Protocol.h>

@class IGFeatureFetcher, NSString;
@protocol FBMobileConfigContext, IGExposureLogging;

@interface IGLauncherSetImpl : NSObject <IGFeatureFetcherDelegate, IGDeviceLauncherSet, IGUserLauncherSet, IGLauncherSetExtras>
{
    struct IGFeatureMap<NSDictionary<NSString *, IGLauncherParameter *>*> _map;
    IGFeatureFetcher *_fetcher;
    id <IGExposureLogging> _exposureLogger;
    id <FBMobileConfigContext> _mobileconfig;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_6db0658e)featureFetcher:(id)arg1 features:(id)arg2 resultForIncrementalPayload:(id)arg3;
- (long long)featureFetcher:(id)arg1 resultForPayload:(id)arg2;
- (id)mobileConfig;
- (id)launcherSet;
- (id)fetcher;
- (id)forTestUseOnlyValueForLauncher:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)initWithUniqueIdentifier:(id)arg1 fetchClock:(id)arg2 persister:(id)arg3 exposureLogger:(id)arg4 mobileconfig:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

