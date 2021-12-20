//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeNavigationSpec-Protocol.h"
#import "RCTIGUserSessionModule-Protocol.h"

@class IGReactModule, IGUserSession, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface IGReactNavigator : NSObject <RCTIGUserSessionModule, NativeNavigationSpec>
{
    IGUserSession *_userSession;
    IGReactModule *_reactModule;
}

+ (const struct RCTMethodInfo *)__rct_export__22111;
+ (const struct RCTMethodInfo *)__rct_export__21610;
+ (const struct RCTMethodInfo *)__rct_export__2119;
+ (const struct RCTMethodInfo *)__rct_export__1938;
+ (const struct RCTMethodInfo *)__rct_export__1747;
+ (const struct RCTMethodInfo *)__rct_export__1646;
+ (const struct RCTMethodInfo *)__rct_export__1565;
+ (const struct RCTMethodInfo *)__rct_export__1484;
+ (const struct RCTMethodInfo *)__rct_export__1413;
+ (const struct RCTMethodInfo *)__rct_export__1002;
+ (const struct RCTMethodInfo *)__rct_export__861;
+ (const struct RCTMethodInfo *)__rct_export__780;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
+ (void)registerOpenURLHandlerBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGReactModule *reactModule; // @synthesize reactModule=_reactModule;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)setInstanceStateToSave:(double)arg1 key:(id)arg2 state:(id)arg3;
- (void)getSavedInstanceState:(double)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateAppRegistryConfiguration:(id)arg1;
- (void)setRouteStack:(double)arg1 routes:(id)arg2;
- (void)setBadgeConfig:(id)arg1;
- (void)setSections:(id)arg1;
- (void)replaceTarget:(double)arg1 target:(id)arg2 type:(id)arg3;
- (void)present:(double)arg1 url:(id)arg2;
- (void)updateNativeRoutesConfiguration:(id)arg1;
- (void)reloadReact;
- (void)clearRightBarButton:(double)arg1;
- (void)setBarPrimaryAction:(double)arg1 action:(id)arg2;
- (void)setBarLeftAction:(double)arg1 action:(id)arg2;
- (void)setBarTitleWithConfig:(double)arg1 config:(id)arg2;
- (void)setBarTitle:(double)arg1 title:(id)arg2;
- (void)dismiss:(double)arg1 options:(id)arg2;
- (void)pop:(double)arg1;
- (void)navigate:(double)arg1 target:(id)arg2 params:(id)arg3;
- (void)popToScreen:(double)arg1 destinationReactTag:(double)arg2;
- (void)openURL:(double)arg1 url:(id)arg2;
- (id)getConstants;
- (id)constantsToExport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (id)initWithReactModule:(id)arg1;

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
