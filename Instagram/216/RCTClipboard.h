//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeClipboardSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTClipboard : NSObject <NativeClipboardSpec, RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__351;
+ (const struct RCTMethodInfo *)__rct_export__290;
+ (void)load;
+ (id)moduleName;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)getString:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)setString:(id)arg1;
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

