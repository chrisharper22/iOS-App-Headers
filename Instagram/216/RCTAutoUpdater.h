//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeAutoUpdaterSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"
#import "RCTImageRedirectProtocol-Protocol.h"

@class FBAutoupdaterReactHost, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol FBAutoupdaterReactResourceInformationProvider, OS_dispatch_queue;

@interface RCTAutoUpdater : NSObject <NativeAutoUpdaterSpec, RCTBridgeModule, RCTImageRedirectProtocol>
{
    FBAutoupdaterReactHost *_reactHost;
    id <FBAutoupdaterReactResourceInformationProvider> _reactService;
    RCTModuleRegistry *_moduleRegistry;
}

+ (const struct RCTMethodInfo *)__rct_export__802;
+ (const struct RCTMethodInfo *)__rct_export__521;
+ (const struct RCTMethodInfo *)__rct_export__470;
+ (_Bool)requiresMainQueueSetup;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak RCTModuleRegistry *moduleRegistry; // @synthesize moduleRegistry=_moduleRegistry;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)didProcessUpdate:(id)arg1;
- (void)didStartDownloadingUpdate:(id)arg1;
- (long long)activeUpdateDeltaSize;
- (id)activeUpdateotaVersionName;
- (id)activeUpdatebuildDate;
- (id)activeUpdateBuildRevision;
- (id)activeUpdateBuildBranchName;
- (id)redirectAssetsURL:(id)arg1;
- (id)activeBundleURLWithError:(id *)arg1;
- (id)activeBundleVersion;
- (id)getConstants;
- (id)constantsToExport;
- (id)initWithReactHost:(id)arg1 autoupdaterReactService:(id)arg2;
- (id)initWithReactHost:(id)arg1;
- (void)clearCurrentUpdate:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)getPendingUpdate:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)reloadReactBundle;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(nonatomic) __weak RCTBundleManager *bundleManager;
@property(nonatomic) __weak RCTCallableJSModules *callableJSModules;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED;

@end
