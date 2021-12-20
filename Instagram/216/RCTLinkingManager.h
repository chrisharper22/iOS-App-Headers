//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "NativeLinkingManagerSpec-Protocol.h"

@class NSObject, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTLinkingManager : RCTEventEmitter <NativeLinkingManagerSpec>
{
}

+ (const struct RCTMethodInfo *)__rct_export__1834;
+ (const struct RCTMethodInfo *)__rct_export__1683;
+ (const struct RCTMethodInfo *)__rct_export__1522;
+ (const struct RCTMethodInfo *)__rct_export__1231;
+ (const struct RCTMethodInfo *)__rct_export__990;
+ (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
+ (void)load;
+ (id)moduleName;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)sendIntent:(id)arg1 extras:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)openSettings:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)getInitialURL:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)canOpenURL:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)handleOpenURLNotification:(id)arg1;
- (id)supportedEvents;
- (void)stopObserving;
- (void)startObserving;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(nonatomic) __weak RCTBundleManager *bundleManager;
@property(nonatomic) __weak RCTCallableJSModules *callableJSModules;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak RCTModuleRegistry *moduleRegistry;
@property(readonly) Class superclass;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED;

@end

