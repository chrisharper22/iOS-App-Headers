//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGSearchBarRightAccessoryButtonDelegate-Protocol.h"

@class IGAdItemMapper, IGFeedPlaceholderProvider, IGPerformanceLoadingIndicatorAnnouncer, IGPlaybackCoordinator, IGQPMegaphone, IGQPMegaphoneSectionControllerPresenter, IGQuickPromotionCoordinator, IGSessionTracker, IGShopHomeStoryTrayDataSource, IGShoppingHomeService, IGShoppingLiveInTabManager, IGShoppingNavigationAnalyticsContext, IGSponsoredSupportConfiguration, IGUserSession, IGViewController, NSMapTable, NSMutableSet, NSString;
@protocol IGFeedSectionControllerComponentsType, IGSearchBarRightButtonWithContainerModuleDelegate, IGShoppingHomeDataSourceDelegate;

@interface IGShoppingHomeDataSource : NSObject <IGListAdapterDataSource, IGSearchBarRightAccessoryButtonDelegate>
{
    IGUserSession *_userSession;
    IGShoppingHomeService *_service;
    IGShoppingLiveInTabManager *_liveManager;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    IGSessionTracker *_shoppingSessionTracker;
    long long _productTileEntryPoint;
    long long _searchEntryPoint;
    _Bool _productTileVideoEnabled;
    IGPlaybackCoordinator *_playbackCoordinator;
    IGFeedPlaceholderProvider *_placeholderProvider;
    IGQuickPromotionCoordinator *_qpCoordinator;
    IGQPMegaphone *_qpMegaphone;
    IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
    IGShopHomeStoryTrayDataSource *_shopHomeStoryTrayDataSource;
    NSString *_focusedMediaPK;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    NSMapTable *_productTileToPinnedContentMap;
    _Bool _hasShownShopTabIncentiveBanner;
    IGViewController<IGShoppingHomeDataSourceDelegate> *_delegate;
    id <IGSearchBarRightButtonWithContainerModuleDelegate> _rightAccessoryButtonDelegate;
    long long _headerType;
    long long _contentViewpointLevel;
    IGPerformanceLoadingIndicatorAnnouncer *_tailLoadingIndicatorAnnouncer;
    IGAdItemMapper *_adItemMapper;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    NSString *_adPagingToken;
    NSMutableSet *_hiddenProductItemPKs;
    NSMutableSet *_hiddenMediaPKs;
    NSMutableSet *_hiddenMerchantPKs;
    NSMutableSet *_hiddenReelUserPKs;
    id _itemForFocusedMediaPK;
    CDStruct_0f031222 _gridLayoutConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id itemForFocusedMediaPK; // @synthesize itemForFocusedMediaPK=_itemForFocusedMediaPK;
@property(retain, nonatomic) NSMutableSet *hiddenReelUserPKs; // @synthesize hiddenReelUserPKs=_hiddenReelUserPKs;
@property(retain, nonatomic) NSMutableSet *hiddenMerchantPKs; // @synthesize hiddenMerchantPKs=_hiddenMerchantPKs;
@property(retain, nonatomic) NSMutableSet *hiddenMediaPKs; // @synthesize hiddenMediaPKs=_hiddenMediaPKs;
@property(retain, nonatomic) NSMutableSet *hiddenProductItemPKs; // @synthesize hiddenProductItemPKs=_hiddenProductItemPKs;
@property(readonly, nonatomic) NSString *adPagingToken; // @synthesize adPagingToken=_adPagingToken;
@property(readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration; // @synthesize sponsoredSupportConfiguration=_sponsoredSupportConfiguration;
@property(readonly, nonatomic) IGAdItemMapper *adItemMapper; // @synthesize adItemMapper=_adItemMapper;
@property(nonatomic) CDStruct_0f031222 gridLayoutConfiguration; // @synthesize gridLayoutConfiguration=_gridLayoutConfiguration;
@property(readonly, nonatomic) IGPerformanceLoadingIndicatorAnnouncer *tailLoadingIndicatorAnnouncer; // @synthesize tailLoadingIndicatorAnnouncer=_tailLoadingIndicatorAnnouncer;
@property(nonatomic) long long contentViewpointLevel; // @synthesize contentViewpointLevel=_contentViewpointLevel;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) __weak id <IGSearchBarRightButtonWithContainerModuleDelegate> rightAccessoryButtonDelegate; // @synthesize rightAccessoryButtonDelegate=_rightAccessoryButtonDelegate;
@property(nonatomic) __weak IGViewController<IGShoppingHomeDataSourceDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_setPinnedContentForProductTileDataModel:(id)arg1 pinnedContent:(id)arg2;
- (void)_setPinnedContentForDropsTile:(id)arg1;
- (void)_setPinnedContentForProductTile:(id)arg1;
- (id)pinnedContentForProductTile:(id)arg1;
- (id)_bottomPaddingWithSectionId:(id)arg1;
- (id)_topPaddingForNonFullBleedNoHeaderWithSectionId:(id)arg1;
- (id)_topPaddingWithSectionId:(id)arg1;
- (id)_emptyStateViewModelWithSubtitle:(id)arg1 isFullBleed:(_Bool)arg2;
- (id)_shimmeringGridModelIsDenseGrid:(_Bool)arg1;
- (id)_placeholderViewModelsWithTailIndicator:(_Bool)arg1;
- (void)_liveManagerSetRenderStateWithLiveTile:(id)arg1;
- (id)_liveCardViewModelWithLiveTile:(id)arg1 sectionId:(id)arg2 idx:(unsigned long long)arg3;
- (id)_topRankedTileWithLiveTile:(id)arg1 fallbackProductTile:(id)arg2 dropsTile:(id)arg3 sectionId:(id)arg4 idx:(unsigned long long)arg5;
- (id)_viewModelsForMixedTileModels:(id)arg1 sectionId:(id)arg2 isDenseGrid:(_Bool)arg3 useMediaViewerPostTap:(_Bool)arg4 currentGlobalIndex:(unsigned long long)arg5;
- (id)_homeFeedViewModelsWithTailIndicator:(_Bool)arg1 constructAdPagingToken:(_Bool)arg2;
- (id)_sectionHeaderViewModelForDataModel:(id)arg1 identifier:(id)arg2 showFilterActionButton:(_Bool)arg3;
- (id)_filterHeaderViewModel;
- (id)_productTileLoggingProviderWithUserSession:(id)arg1 navigationInfo:(id)arg2 filtersInfo:(id)arg3 shoppingSessionTracker:(id)arg4 adMetadata:(id)arg5;
- (id)_navigationInfoWithSubmodule:(id)arg1;
- (void)clearHiddenReels;
- (void)hideReelForUserPk:(id)arg1;
- (void)clearHiddenMerchants;
- (void)unhideMerchantForPk:(id)arg1;
- (void)hideMerchantForPk:(id)arg1;
- (void)clearHiddenMedias;
- (void)hideMediaForPk:(id)arg1;
- (void)clearHiddenProductItems;
- (void)unhideProductItemForPk:(id)arg1;
- (void)hideProductItemForPk:(id)arg1;
- (void)storyTrayDataSourceDidUpdateWithRefreshType:(long long)arg1;
- (void)clearAdPagingToken;
- (void)updateWithQPMegaphone:(id)arg1 qpSectionControllerPresenter:(id)arg2;
- (void)searchBarRightAccessoryButtonTappedOnSearchBar:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 service:(id)arg2 liveManager:(id)arg3 navigationInfo:(id)arg4 shoppingSessionTracker:(id)arg5 productTileEntryPoint:(long long)arg6 searchEntryPoint:(long long)arg7 playbackCoordinator:(id)arg8 gridLayoutConfiguration:(CDStruct_0f031222)arg9 feedSectionControllerComponents:(id)arg10 hiddenProductItemPKs:(id)arg11 hiddenMediaPKs:(id)arg12 hiddenMerchantPKs:(id)arg13 focusedMediaPK:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
