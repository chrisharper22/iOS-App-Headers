//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTIGUserSessionModule-Protocol.h"

@class IGUserSession, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface IGBrandedContentReactModule : NSObject <RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
    RCTViewRegistry *_viewRegistry_DEPRECATED;
}

+ (const struct RCTMethodInfo *)__rct_export__362;
+ (const struct RCTMethodInfo *)__rct_export__311;
+ (const struct RCTMethodInfo *)__rct_export__260;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED; // @synthesize viewRegistry_DEPRECATED=_viewRegistry_DEPRECATED;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)openAllowlistedPartners:(double)arg1 allowlistedPartners:(id)arg2;
- (void)openAdCreationPartners:(double)arg1;
- (void)openRequestAdCreationAccess:(double)arg1;
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

@end

