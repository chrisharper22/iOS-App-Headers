//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListSingleSectionControllerDelegate-Protocol.h"
#import "IGShoppingBloksDataSourceProviderDelegate-Protocol.h"
#import "IGShoppingBrandSelectionViewControllerDelegate-Protocol.h"
#import "IGShoppingInlineVariantSelectionControllerDelegate-Protocol.h"
#import "IGShoppingSearchProductListResultSectionControllerDelegate-Protocol.h"
#import "IGTabControlSegment-Protocol.h"
#import "IGTaggingSearchDataSourceDelegate-Protocol.h"

@class BKBloksHostingView, IGBottomButtonsView, IGFeedScrollViewAnnouncer, IGKeyboardObserver, IGListAdapter, IGProductTaggingViewConfiguration, IGRefreshControl, IGShoppingBloksDataSourceProvider, IGShoppingInlineVariantSelectionController, IGShoppingNavigationAnalyticsContext, IGShoppingProductSourceModel, IGShoppingProductSourceSelectionConfiguration, IGShoppingSearchProductListGroupResultViewModel, IGTaggingSearchLogger, IGUserSession, NSString, UICollectionView, UIResponder;
@protocol IGProductTaggingResultListViewControllerDelegate, IGShoppingBrandSelectionViewControllerDelegate, IGShoppingProductSearchDataSource;

@interface IGProductTaggingResultListViewController : IGViewController <IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGShoppingBloksDataSourceProviderDelegate, IGListSingleSectionControllerDelegate, IGShoppingBrandSelectionViewControllerDelegate, IGShoppingInlineVariantSelectionControllerDelegate, IGShoppingSearchProductListResultSectionControllerDelegate, IGTaggingSearchDataSourceDelegate, IGTabControlSegment>
{
    IGUserSession *_userSession;
    IGProductTaggingViewConfiguration *_taggingConfig;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    id <IGShoppingProductSearchDataSource> _searchDataSource;
    IGShoppingProductSourceModel *_lastLoadedProductSource;
    IGShoppingProductSourceSelectionConfiguration *_productSourceSelectionConfig;
    IGBottomButtonsView *_ctaButtonView;
    UICollectionView *_collectionView;
    IGRefreshControl *_refreshControl;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGListAdapter *_listAdapter;
    IGShoppingBloksDataSourceProvider *_bloksDataSourceProvider;
    BKBloksHostingView *_embeddedBloksView;
    NSString *_filterQuery;
    IGShoppingInlineVariantSelectionController *_variantSelectionController;
    IGShoppingSearchProductListGroupResultViewModel *_presentedGroupResultViewModel;
    double _keyboardHeight;
    IGKeyboardObserver *_keyboardObserver;
    IGTaggingSearchLogger *_taggingLogger;
    UIResponder *_searchResponder;
    id <IGProductTaggingResultListViewControllerDelegate> _delegate;
    id <IGShoppingBrandSelectionViewControllerDelegate> _brandSelectionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingBrandSelectionViewControllerDelegate> brandSelectionDelegate; // @synthesize brandSelectionDelegate=_brandSelectionDelegate;
@property(nonatomic) __weak id <IGProductTaggingResultListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIResponder *searchResponder; // @synthesize searchResponder=_searchResponder;
- (void)shoppingInlineVariantSelectionController:(id)arg1 didResolveWithProductItem:(id)arg2 productSelectionBehavior:(id)arg3;
- (_Bool)_shouldShowEmbeddedBloksScreen;
- (void)_animateKeyboardChangeWithDuration:(double)arg1 curve:(long long)arg2;
- (void)_presentVariantPickerViewControllerWithResultViewModel:(id)arg1;
- (_Bool)_handleUntaggableReason:(id)arg1 viewModel:(id)arg2;
- (void)_onProductListResultSectionSelectedWithViewModel:(id)arg1;
- (void)_didTapCTA;
- (void)_updateCTAEnabled;
- (void)_logProductTaggingSearchEvent:(long long)arg1;
- (void)_logProductTaggingLoadSuccessWithProductSource:(id)arg1;
- (void)_startReviewForProductItem:(id)arg1;
- (void)_deselectProductItem:(id)arg1;
- (void)_selectProductItem:(id)arg1 fromGroup:(id)arg2;
- (_Bool)_isLoading;
- (void)_filterUsingStoredQueryWithIsPullToRefresh:(_Bool)arg1;
- (void)_updateStoredFilterQueryWithSearchText:(id)arg1;
- (void)_refreshSearchResultsIfNeeded;
- (void)_enablePullToRefreshIfNeeded;
- (void)bloksDataSourceProvider:(id)arg1 didReceiveErrorFetchingBloksViewModel:(id)arg2;
- (void)bloksDataSourceProvider:(id)arg1 didUpdateBloksView:(id)arg2;
- (void)shoppingBrandSelectionViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)sectionController:(id)arg1 didTapDecoratorForItemWithViewModel:(id)arg2;
- (void)sectionController:(id)arg1 didSelectItemWithViewModel:(id)arg2;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (void)taggingSearchDataSourceDidFailLoading;
- (void)taggingSearchDataSourceDidUpdateResults;
- (void)taggingSearchDataSourceDidStartLoading;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)completeMultiProductSelection:(CDUnknownBlockType)arg1;
- (void)updateTaggingConfig:(id)arg1 taggedMerchantIds:(id)arg2;
- (void)updateFilterQueryWithText:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 taggingConfig:(id)arg2 searchDataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
