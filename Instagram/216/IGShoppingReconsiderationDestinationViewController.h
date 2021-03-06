//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCollectionViewLayoutConfigurationProvider-Protocol.h"
#import "IGCollectionViewLayoutSeparatorDelegate-Protocol.h"
#import "IGLabelSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGSaveStatusListener-Protocol.h"
#import "IGSharedShoppingHistorySettingsListener-Protocol.h"
#import "IGShoppingBloksDataSourceProviderDelegate-Protocol.h"
#import "IGShoppingGenericProductTileSectionControllerDelegate-Protocol.h"
#import "IGShoppingMediaTileSectionControllerDelegate-Protocol.h"
#import "IGShoppingModuleHeaderSectionControllerDelegate-Protocol.h"
#import "IGShoppingReconsiderationDestinationSectionDelegate-Protocol.h"
#import "IGShoppingSessionTracking-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class BKBloksHostingView, IGActionableConfirmationToastController, IGFeedPreviewHandler, IGListAdapter, IGPopoutView, IGRefreshControl, IGSessionTracker, IGShoppingBloksDataSourceProvider, IGShoppingCartBarButtonItem, IGShoppingReconsiderationDataController, IGShoppingReconsiderationDestinationCollectionViewLayout, IGShoppingReconsiderationDestinationContextProvider, IGShoppingReconsiderationDestinationLogger, IGShoppingReconsiderationDestinationPerformanceLogger, IGShoppingReconsiderationDestinationSectionModelMap, IGUserSession, NSArray, NSString, UIBarButtonItem, UICollectionView;

@interface IGShoppingReconsiderationDestinationViewController : IGViewController <IGCollectionViewLayoutConfigurationProvider, IGCollectionViewLayoutSeparatorDelegate, IGLabelSectionControllerDelegate, IGListAdapterDataSource, IGSaveStatusListener, IGSharedShoppingHistorySettingsListener, IGShoppingBloksDataSourceProviderDelegate, IGShoppingMediaTileSectionControllerDelegate, IGShoppingModuleHeaderSectionControllerDelegate, IGShoppingGenericProductTileSectionControllerDelegate, IGShoppingReconsiderationDestinationSectionDelegate, IGShoppingSessionTracking, IGTransitionZoomFromCapable, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    IGShoppingReconsiderationDataController *_dataController;
    NSArray *_sections;
    UICollectionView *_collectionView;
    IGShoppingReconsiderationDestinationCollectionViewLayout *_collectionViewLayout;
    IGListAdapter *_listAdapter;
    IGRefreshControl *_refreshControl;
    IGActionableConfirmationToastController *_toastController;
    IGFeedPreviewHandler *_previewHandler;
    struct IGGridLayoutConfiguration _gridLayoutConfig;
    IGShoppingReconsiderationDestinationContextProvider *_contextProvider;
    IGShoppingReconsiderationDestinationSectionModelMap *_sectionModelMap;
    IGShoppingReconsiderationDestinationLogger *_logger;
    IGShoppingReconsiderationDestinationPerformanceLogger *_perfLogger;
    NSString *_priorModule;
    NSString *_priorSubmodule;
    NSString *_shopsSessionEntryPoint;
    long long _surfaceNavigationTraits;
    IGShoppingCartBarButtonItem *_cartBarButtonItem;
    UIBarButtonItem *_wishlistBarButtonItem;
    IGPopoutView *_savePopoutView;
    IGShoppingBloksDataSourceProvider *_sshDataSignifierSourceProvider;
    BKBloksHostingView *_sshDataSignifierBloksView;
    NSString *_shopLinkedCreatorId;
    struct {
        _Bool isScheduled;
        _Bool isUpdateLocal;
    } _scheduledListUpdate;
    IGSessionTracker *_shoppingSessionTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (void)bloksDataSourceProvider:(id)arg1 didReceiveErrorFetchingBloksViewModel:(id)arg2;
- (void)bloksDataSourceProvider:(id)arg1 didUpdateBloksView:(id)arg2;
- (void)sharedShoppingHistorySettingsDidUpdate:(id)arg1;
- (void)savableObject:(id)arg1 didUpdateSaveStatusWithHasSaved:(_Bool)arg2 saveAction:(long long)arg3;
- (void)genericProductTileSectionController:(id)arg1 willNavigateToPDPForProductItemPk:(id)arg2 merchantId:(id)arg3;
- (void)genericProductTileSectionController:(id)arg1 didUpdateGenericProductItem:(id)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(id)arg4 successHandler:(CDUnknownBlockType)arg5;
- (void)genericProductTileSectionController:(id)arg1 didTapDismissForProductItemPk:(id)arg2;
- (_Bool)genericProductTileSectionController:(id)arg1 containsLastSavedProductItemPk:(id)arg2;
- (void)shoppingModuleHeaderSectionController:(id)arg1 didTapSubtitleTextWithViewModel:(id)arg2;
- (void)shoppingModuleHeaderSectionController:(id)arg1 didTapActionButtonWithViewModel:(id)arg2;
- (void)mediaTileSectionController:(id)arg1 didTapMediaTileForViewModel:(id)arg2;
- (void)mediaTileSectionController:(id)arg1 didTapViewProductsForViewModel:(id)arg2;
- (void)didSelectLabelSectionController:(id)arg1;
- (void)shoppingReconsiderationDestinationSection:(id)arg1 didUpdateFetchState:(id)arg2;
- (void)shoppingReconsiderationDestinationSection:(id)arg1 didUpdateItemModels:(id)arg2 withUpdateType:(id)arg3;
- (CDStruct_3d581f42)collectionView:(id)arg1 layout:(id)arg2 separatorOptionsForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)contentInsetAdjustmentForIndexPath:(id)arg1;
- (id)collectionViewLayoutConfiguration;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_configureBarButtonItems;
- (void)_navigateToWishlist:(id)arg1;
- (void)_navigateToCartIndex:(id)arg1;
- (long long)_productTileEntryPointForViewModel:(id)arg1;
- (id)_productTileLoggingProviderForViewModel:(id)arg1;
- (id)_navigationAnalyticsContextWithSubmodule:(id)arg1;
- (void)_refreshControlTriggered:(id)arg1;
- (void)_updateListWithUpdateType:(id)arg1;
- (void)_updateProductViewModel:(id)arg1 withUpdatedSaveStatus:(_Bool)arg2 merchantID:(id)arg3 displayedMediaId:(id)arg4 successHandler:(CDUnknownBlockType)arg5;
- (void)_updateTTIMarkerState;
- (void)_fetchInitialData;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 perfLogger:(id)arg2 dataController:(id)arg3 title:(id)arg4 priorModule:(id)arg5 priorSubmodule:(id)arg6 shopsSessionEntryPoint:(id)arg7 shoppingSessionTracker:(id)arg8 surfaceNavigationTraits:(long long)arg9 shopLinkedCreatorId:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

