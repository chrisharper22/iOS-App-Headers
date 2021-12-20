//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeI18nResourcesSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTI18nResources : NSObject <NativeI18nResourcesSpec, RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__501;
+ (const struct RCTMethodInfo *)__rct_export__310;
+ (_Bool)requiresMainQueueSetup;
+ (id)moduleName;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (id)isEnabled;
- (id)getTranslation:(id)arg1 args:(id)arg2;

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

