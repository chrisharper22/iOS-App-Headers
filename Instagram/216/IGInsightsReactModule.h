//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDeprecatedAndObsoleteBugReportViewControllerDelegate-Protocol.h"
#import "NativeIGInsightsReactModuleSpec-Protocol.h"
#import "RCTIGUserSessionModule-Protocol.h"

@class IGUserSession, NSString, RCTBridge, RCTBundleManager, RCTCallableJSModules, RCTModuleRegistry, RCTViewRegistry;
@protocol OS_dispatch_queue;

@interface IGInsightsReactModule : NSObject <IGDeprecatedAndObsoleteBugReportViewControllerDelegate, NativeIGInsightsReactModuleSpec, RCTIGUserSessionModule>
{
    IGUserSession *_userSession;
    RCTViewRegistry *_viewRegistry_DEPRECATED;
}

+ (const struct RCTMethodInfo *)__rct_export__1386;
+ (const struct RCTMethodInfo *)__rct_export__1175;
+ (const struct RCTMethodInfo *)__rct_export__1034;
+ (const struct RCTMethodInfo *)__rct_export__903;
+ (const struct RCTMethodInfo *)__rct_export__722;
+ (const struct RCTMethodInfo *)__rct_export__631;
+ (const struct RCTMethodInfo *)__rct_export__530;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
@property(nonatomic) __weak RCTViewRegistry *viewRegistry_DEPRECATED; // @synthesize viewRegistry_DEPRECATED=_viewRegistry_DEPRECATED;
@property(nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
- (shared_ptr_3725e3cd)getTurboModule:(const void *)arg1;
- (void)didDismissBugReportViewController:(id)arg1 didSendReport:(_Bool)arg2;
- (id)_topNavigationViewController;
- (void)onFilterChangedInsightsAccountGrowth:(double)arg1 date:(double)arg2;
- (void)showInsightsFilterView:(id)arg1 userID:(id)arg2 postType:(id)arg3 ordering:(id)arg4 timeframe:(id)arg5;
- (void)navigateToFeedbackChannel:(id)arg1;
- (void)navigateToSingleFeedView:(id)arg1;
- (void)navigateToSeeMorePromotions;
- (void)navigateToCreatePromotion;
- (void)navigateToStoriesCamera;
- (void)navigateToTopPostsCamera;

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

@end

