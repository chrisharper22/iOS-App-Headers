//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeAnalyticsFunnelLoggerSpec-Protocol.h"

@class NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface IGLeadGenAnalyticsFunnelLogger : NSObject <NativeAnalyticsFunnelLoggerSpec>
{
}

+ (const struct RCTMethodInfo *)__rct_export__594;
+ (const struct RCTMethodInfo *)__rct_export__473;
+ (const struct RCTMethodInfo *)__rct_export__362;
+ (const struct RCTMethodInfo *)__rct_export__281;
+ (const struct RCTMethodInfo *)__rct_export__200;
+ (void)load;
+ (id)moduleName;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)startFunnel_DEV_MODE:(id)arg1 instanceID:(double)arg2;
- (void)addFunnelTag:(id)arg1 instanceID:(double)arg2 tag:(id)arg3;
- (void)addActionToFunnel:(id)arg1 instanceID:(double)arg2 actionName:(id)arg3 tag:(id)arg4 payload:(id)arg5;
- (void)cancelFunnel:(id)arg1 instanceID:(double)arg2;
- (void)endFunnel:(id)arg1 instanceID:(double)arg2;
- (void)startFunnel:(id)arg1 instanceID:(double)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(nonatomic) __weak RCTBundleManager *bundleManager;
@property(nonatomic) __weak RCTCallableJSModules *callableJSModules;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(nonatomic) __weak RCTModuleRegistry *moduleRegistry;
@property(readonly) Class superclass;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED;

@end

