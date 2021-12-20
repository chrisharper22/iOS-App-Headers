//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeIGPromoteMigrationReactModuleSpec-Protocol.h"
#import "RCTIGUserSessionModule-Protocol.h"

@class IGUserSession, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface IGPromoteMigrationReactModule : NSObject <NativeIGPromoteMigrationReactModuleSpec, RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
}

+ (const struct RCTMethodInfo *)__rct_export__481;
+ (const struct RCTMethodInfo *)__rct_export__270;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)postDataFromCreateEditAudienceScreen:(double)arg1 audienceID:(id)arg2;
- (void)postDataFromDestinationWebsiteScreen:(double)arg1 website:(id)arg2 cta:(id)arg3;

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

