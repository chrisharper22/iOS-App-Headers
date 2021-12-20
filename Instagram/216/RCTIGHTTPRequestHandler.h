//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTIGUserSessionModule-Protocol.h"
#import "RCTInvalidating-Protocol.h"
#import "RCTURLRequestHandler-Protocol.h"

@class IGUserSession, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface RCTIGHTTPRequestHandler : NSObject <RCTIGUserSessionModule, RCTURLRequestHandler, RCTInvalidating>
{
    IGUserSession *_userSession;
}

+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)invalidate;
- (void)cancelRequest:(id)arg1;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (float)handlerPriority;
- (_Bool)canHandleRequest:(id)arg1;

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

