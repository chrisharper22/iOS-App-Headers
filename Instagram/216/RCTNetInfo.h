//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "NativeNetInfoSpec-Protocol.h"

@class NSObject, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTNetInfo : RCTEventEmitter <NativeNetInfoSpec>
{
    struct __SCNetworkReachability *_firstTimeReachability;
    struct __SCNetworkReachability *_reachability;
    NSString *_connectionType;
    NSString *_effectiveConnectionType;
    NSString *_statusDeprecated;
    NSString *_host;
    _Bool _isObserving;
    CDUnknownBlockType _resolve;
}

+ (const struct RCTMethodInfo *)__rct_export__2571;
+ (const struct RCTMethodInfo *)__rct_export__2450;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)isConnectionMetered:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)getCurrentConnectivity:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (_Bool)setReachabilityStatus:(unsigned int)arg1;
- (struct __SCNetworkReachability *)getReachabilityRef;
- (void)dealloc;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;
- (id)initWithHost:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)updateWithNetworkReachabilityFlags:(unsigned int)arg1;

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
