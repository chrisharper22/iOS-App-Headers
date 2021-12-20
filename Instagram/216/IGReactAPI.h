//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeIGReactAPISpec-Protocol.h"
#import "RCTIGUserSessionModule-Protocol.h"

@class IGUserSession, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface IGReactAPI : NSObject <NativeIGReactAPISpec, RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
}

+ (const struct RCTMethodInfo *)__rct_export__401;
+ (const struct RCTMethodInfo *)__rct_export__260;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)_request:(id)arg1 method:(unsigned long long)arg2 withParameters:(id)arg3 withFiles:(id)arg4 onComplete:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)buildRequest:(id)arg1 method:(unsigned long long)arg2 withParameters:(id)arg3 withFiles:(id)arg4;
- (void)get:(id)arg1 params:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)post:(id)arg1 params:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;

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

