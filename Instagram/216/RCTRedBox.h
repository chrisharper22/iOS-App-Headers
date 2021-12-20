//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeRedBoxSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"

@class NSString, NSURL, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTRedBox : NSObject <NativeRedBoxSpec, RCTBridgeModule>
{
    NSURL *_overrideBundleURL;
    CDUnknownBlockType _overrideReloadAction;
}

+ (id)moduleName;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType overrideReloadAction; // @synthesize overrideReloadAction=_overrideReloadAction;
@property(retain, nonatomic) NSURL *overrideBundleURL; // @synthesize overrideBundleURL=_overrideBundleURL;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)addCustomButton:(id)arg1 onPressHandler:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)setExtraData:(id)arg1 forIdentifier:(id)arg2;
- (void)updateErrorMessage:(id)arg1 withParsedStack:(id)arg2 errorCookie:(int)arg3;
- (void)showErrorMessage:(id)arg1 withParsedStack:(id)arg2 errorCookie:(int)arg3;
- (void)updateErrorMessage:(id)arg1 withParsedStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withParsedStack:(id)arg2;
- (void)updateErrorMessage:(id)arg1 withStack:(id)arg2 errorCookie:(int)arg3;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2 errorCookie:(int)arg3;
- (void)updateErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withRawStack:(id)arg2 errorCookie:(int)arg3;
- (void)showErrorMessage:(id)arg1 withRawStack:(id)arg2;
- (void)showErrorMessage:(id)arg1 withDetails:(id)arg2;
- (void)showErrorMessage:(id)arg1;
- (void)showError:(id)arg1;
- (void)registerErrorCustomizer:(id)arg1;

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
