//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDiscoveryNavigationTrayDelegate-Protocol.h"
#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGFeedItemPreviewProviding-Protocol.h"
#import "IGInsightsFilterOptionsViewControllerDelegate-Protocol.h"
#import "IGInsightsMediaThumbnailsSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGPromoteMediaFeedPreviewingType-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGBoostPostLogger, IGDiscoveryNavigationTray, IGInsightsFilterParams, IGInsightsGraphQLDataFetcher, IGInsightsMediaItemsModel, IGListAdapter, IGPromoteMediaPreviewingHandler, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGPromoteMediaGridViewControllerDelegate;

@interface IGPromoteMediaGridViewController : IGViewController <IGDiscoveryNavigationTrayDelegate, IGEmptyFeedViewDelegate, IGInsightsFilterOptionsViewControllerDelegate, IGInsightsMediaThumbnailsSectionControllerDelegate, IGListAdapterDataSource, IGPromoteMediaFeedPreviewingType, IGFeedItemPreviewProviding, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    long long _gridType;
    NSString *_itemId;
    IGInsightsGraphQLDataFetcher *_dataFetcher;
    IGBoostPostLogger *_logger;
    IGInsightsMediaItemsModel *_mediaItemsModel;
    NSArray *_mediaThumbnailsArray;
    _Bool _isLoading;
    _Bool _isPaging;
    NSString *_selectedMediaId;
    IGInsightsFilterParams *_filterParams;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGDiscoveryNavigationTray *_filterTray;
    NSArray *_filters;
    _Bool _isFilterEnabled;
    long long _defaultDataOrder;
    IGPromoteMediaPreviewingHandler *_previewingHandler;
    id <IGPromoteMediaGridViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteMediaGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_pageInfo;
- (void)insightsSectionController:(id)arg1 didSelectMediaWithIndex:(unsigned long long)arg2 view:(id)arg3;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)filterOptionsViewController:(id)arg1 didUpdateFilterType:(long long)arg2 withOption:(id)arg3;
- (unsigned long long)_selectedOptionValueForFilterType:(long long)arg1;
- (void)_presentFilterOptionsViewControllerWithFilterType:(long long)arg1;
- (void)navigationTray:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_logTapActionWithActionState:(id)arg1 unit:(id)arg2 parentUnit:(id)arg3;
- (void)_logMediaDataFetchFailureWithErrorMessage:(id)arg1;
- (void)_logMediaDataFetched;
- (id)analyticsModule;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (_Bool)performViewControllerCommitForPreviewedItem:(id)arg1;
- (_Bool)enableCarouselPreview;
- (id)collectionView;
- (id)objectForPreviewAtPoint:(struct CGPoint)arg1;
- (id)cellForPreviewAtPoint:(struct CGPoint)arg1;
- (id)_indexPathForPoint:(struct CGPoint)arg1;
- (id)_queryParametersForGridType:(long long)arg1 filterParams:(id)arg2 cursor:(id)arg3;
- (void)_setupLayoutForSubviews;
- (_Bool)_isFullList;
- (void)_handleMediaItemsModel:(id)arg1;
- (void)_handleFetchInsightsCompletedWithData:(id)arg1 error:(id)arg2;
- (void)_autoLoadNextPageIfPossibleAndTailSpinnerIsVisible;
- (void)_fetchDataWithCursor:(id)arg1;
- (void)_setupPreviewHandler;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 gridType:(long long)arg2 defaultOrderType:(long long)arg3 isFilterEnabled:(_Bool)arg4 itemId:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

