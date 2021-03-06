//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeLeadGenHelperSpec-Protocol.h"
#import "RCTIGUserSessionModule-Protocol.h"

@class IGDirectResponseLogger, IGUserSession, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface IGLeadGenReactModule : NSObject <NativeLeadGenHelperSpec, RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
    IGDirectResponseLogger *_directResponseLogger;
}

+ (const struct RCTMethodInfo *)__rct_export__1212;
+ (const struct RCTMethodInfo *)__rct_export__701;
+ (const struct RCTMethodInfo *)__rct_export__420;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectResponseLogger *directResponseLogger; // @synthesize directResponseLogger=_directResponseLogger;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)onAppPrepareToClose;
- (void)onScroll:(double)arg1;
- (void)openDialer:(id)arg1 mediaID:(id)arg2 mediaPosition:(double)arg3 carouselIndex:(double)arg4 actionSource:(id)arg5;
- (void)openAdUrl:(id)arg1 mediaID:(id)arg2 mediaPosition:(double)arg3 carouselIndex:(double)arg4 actionSource:(id)arg5;
- (void)submitForm:(id)arg1 mediaID:(id)arg2;

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

