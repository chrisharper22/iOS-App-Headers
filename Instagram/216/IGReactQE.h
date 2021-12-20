//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "RCTIGUserSessionModule-Protocol.h"

@class IGUserSession, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface IGReactQE : NSObject <RCTBridgeModule, RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
}

+ (const struct RCTMethodInfo *)__rct_export__30523;
+ (const struct RCTMethodInfo *)__rct_export__29522;
+ (const struct RCTMethodInfo *)__rct_export__28521;
+ (const struct RCTMethodInfo *)__rct_export__27520;
+ (const struct RCTMethodInfo *)__rct_export__26519;
+ (const struct RCTMethodInfo *)__rct_export__25718;
+ (const struct RCTMethodInfo *)__rct_export__24917;
+ (const struct RCTMethodInfo *)__rct_export__24116;
+ (const struct RCTMethodInfo *)__rct_export__23315;
+ (const struct RCTMethodInfo *)__rct_export__22514;
+ (const struct RCTMethodInfo *)__rct_export__21713;
+ (const struct RCTMethodInfo *)__rct_export__20912;
+ (const struct RCTMethodInfo *)__rct_export__19911;
+ (const struct RCTMethodInfo *)__rct_export__18910;
+ (const struct RCTMethodInfo *)__rct_export__1799;
+ (const struct RCTMethodInfo *)__rct_export__1698;
+ (const struct RCTMethodInfo *)__rct_export__1597;
+ (const struct RCTMethodInfo *)__rct_export__1516;
+ (const struct RCTMethodInfo *)__rct_export__1435;
+ (const struct RCTMethodInfo *)__rct_export__1354;
+ (const struct RCTMethodInfo *)__rct_export__1273;
+ (const struct RCTMethodInfo *)__rct_export__1192;
+ (const struct RCTMethodInfo *)__rct_export__1111;
+ (const struct RCTMethodInfo *)__rct_export__1030;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)mobileConfigIntegerValueForDeviceConfiguration_IG4A_MIGRATION:(id)arg1 paramName:(id)arg2 configId:(id)arg3 paramId:(id)arg4 expose:(_Bool)arg5;
- (id)mobileConfigDoubleValueForDeviceConfiguration_IG4A_MIGRATION:(id)arg1 paramName:(id)arg2 configId:(id)arg3 paramId:(id)arg4 expose:(_Bool)arg5;
- (id)mobileConfigBooleanValueForDeviceConfiguration_IG4A_MIGRATION:(id)arg1 paramName:(id)arg2 configId:(id)arg3 paramId:(id)arg4 expose:(_Bool)arg5;
- (id)mobileConfigStringValueForDeviceConfiguration_IG4A_MIGRATION:(id)arg1 paramName:(id)arg2 configId:(id)arg3 paramId:(id)arg4 expose:(_Bool)arg5;
- (id)mobileConfigIntegerValueForDeviceConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3;
- (id)mobileConfigDoubleValueForDeviceConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3;
- (id)mobileConfigBooleanValueForDeviceConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3;
- (id)mobileConfigStringValueForDeviceConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3;
- (id)integerValueForDeviceConfiguration:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)doubleValueForDeviceConfiguration:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)booleanValueForDeviceConfiguration:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)stringValueForDeviceConfiguration:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)mobileConfigIntegerValueForUserConfiguration_IG4A_MIGRATION:(id)arg1 paramName:(id)arg2 configId:(id)arg3 paramId:(id)arg4 expose:(_Bool)arg5;
- (id)mobileConfigDoubleValueForUserConfiguration_IG4A_MIGRATION:(id)arg1 paramName:(id)arg2 configId:(id)arg3 paramId:(id)arg4 expose:(_Bool)arg5;
- (id)mobileConfigBooleanValueForUserConfiguration_IG4A_MIGRATION:(id)arg1 paramName:(id)arg2 configId:(id)arg3 paramId:(id)arg4 expose:(_Bool)arg5;
- (id)mobileConfigStringValueForUserConfiguration_IG4A_MIGRATION:(id)arg1 paramName:(id)arg2 configId:(id)arg3 paramId:(id)arg4 expose:(_Bool)arg5;
- (id)mobileConfigIntegerValueForUserConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3;
- (id)mobileConfigDoubleValueForUserConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3;
- (id)mobileConfigBooleanValueForUserConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3;
- (id)mobileConfigStringValueForUserConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3;
- (id)integerValueForUserConfiguration:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)doubleValueForUserConfiguration:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)booleanValueForUserConfiguration:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)stringValueForUserConfiguration:(id)arg1 parameter:(id)arg2 expose:(_Bool)arg3;
- (id)mobileConfigIntegerValueForConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3 mobileconfig:(id)arg4;
- (id)mobileConfigDoubleValueForConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3 mobileconfig:(id)arg4;
- (id)mobileConfigBooleanValueForConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3 mobileconfig:(id)arg4;
- (id)mobileConfigStringValueForConfiguration:(id)arg1 paramId:(id)arg2 expose:(_Bool)arg3 mobileconfig:(id)arg4;
- (unsigned long long)getSpecifier:(id)arg1 paramId:(id)arg2;

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

