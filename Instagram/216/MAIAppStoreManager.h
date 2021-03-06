//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAIAppStoreFetchCoordinatorAnalyticsDelegate-Protocol.h"
#import "MAISKStoreProductViewControllerDelegate-Protocol.h"

@class MAIAppStoreFetchCoordinator, MAIAppStoreManagerConfiguration, NSString;
@protocol MAILoggingProtocol;

@interface MAIAppStoreManager : NSObject <MAIAppStoreFetchCoordinatorAnalyticsDelegate, MAISKStoreProductViewControllerDelegate>
{
    MAIAppStoreManagerConfiguration *_config;
    MAIAppStoreFetchCoordinator *_fetchCoordinator;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _containerDismissBlock;
    _Bool _isPresentingAppStore;
    id <MAILoggingProtocol> _logger;
}

+ (void)openExternalAppleAppStoreWithITunesIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <MAILoggingProtocol> logger; // @synthesize logger=_logger;
- (void)maiProductViewControllerDidAppear:(id)arg1 withAnalytics:(id)arg2;
- (void)maiProductViewControllerDidFinish:(id)arg1 withAnalytics:(id)arg2;
- (id)_sharedCacheManager;
- (void)_appWillResignActive:(id)arg1;
- (_Bool)_inAppStoreSheetEnabled;
- (id)_appStoreFetchCoordinator;
- (void)appStoreFetchCoordinatorAnalyticEventLoadedWithAnalytics:(id)arg1 analyticsModule:(id)arg2;
- (void)clearAllAppStoreProductViewControllers;
- (void)clearAppStoreProductViewControllerForITunesIdentifier:(id)arg1;
- (void)_presentAppStoreForSKStoreProductParams:(id)arg1 moduleName:(id)arg2 createAppStoreContainerViewControllerBlock:(CDUnknownBlockType)arg3 containerPresentationBlock:(CDUnknownBlockType)arg4 skStoreProductPresentationBlock:(CDUnknownBlockType)arg5 containerDismissBlock:(CDUnknownBlockType)arg6 skStoreDismissBlock:(CDUnknownBlockType)arg7;
- (void)presentAppStoreWithContainerForSKStoreProductParams:(id)arg1 moduleName:(id)arg2 createAppStoreContainerViewControllerBlock:(CDUnknownBlockType)arg3 presentationBlock:(CDUnknownBlockType)arg4 dismissBlock:(CDUnknownBlockType)arg5;
- (void)presentAppStoreWithContainerForITunesIdentifier:(id)arg1 createAppStoreContainerViewControllerBlock:(CDUnknownBlockType)arg2 presentationBlock:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;
- (void)presentAppStoreForSKStoreProductParams:(id)arg1 moduleName:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;
- (void)presentAppStoreForITunesIdentifier:(id)arg1 moduleName:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3 dismissBlock:(CDUnknownBlockType)arg4;
- (void)startAppStorePrefetchForITunesIdentifiers:(id)arg1 shouldUseBackgroundThread:(_Bool)arg2;
- (void)startAppStorePrefetchForSKStoreProductParamsArray:(id)arg1 moduleName:(id)arg2 shouldUseBackgroundThread:(_Bool)arg3;
- (id)initWithConfiguration:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

