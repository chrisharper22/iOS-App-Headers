//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterUpdateListener-Protocol.h"
#import "IGResultsFilterListSectionDelegate-Protocol.h"
#import "IGResultsFilterTaxonomyListKitDataSourceDelegate-Protocol.h"
#import "IGResultsFilterTaxonomyServiceDelegate-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGListAdapter, IGResultsFilterTaxonomyListKitDataSource, IGSearchBarWithCancel, IGUserSession, NSArray, NSString, UIActivityIndicatorView, UIBarButtonItem, UICollectionView;
@protocol IGResultsFilterTaxonomyServiceType, IGResultsFilterTaxonomyViewControllerDelegate;

@interface IGResultsFilterTaxonomyViewController : IGViewController <IGResultsFilterTaxonomyListKitDataSourceDelegate, IGResultsFilterTaxonomyServiceDelegate, IGResultsFilterListSectionDelegate, IGSearchBarDelegate, IGListAdapterUpdateListener, UIScrollViewDelegate>
{
    NSArray *_taxonomyModels;
    id <IGResultsFilterTaxonomyServiceType> _taxonomyService;
    _Bool _shouldEnableSearch;
    IGUserSession *_userSession;
    NSString *_attributeType;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    UIActivityIndicatorView *_loadingIndicator;
    IGSearchBarWithCancel *_searchBarWithCancel;
    IGResultsFilterTaxonomyListKitDataSource *_taxonomyListKitDataSource;
    IGBottomButtonsView *_bottomButtonView;
    UIBarButtonItem *_clearButton;
    _Bool _showViewAllCategoriesButton;
    id <IGResultsFilterTaxonomyViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGResultsFilterTaxonomyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showViewAllCategoriesButton; // @synthesize showViewAllCategoriesButton=_showViewAllCategoriesButton;
- (_Bool)_shouldEnableClearButton;
- (void)_didTapClearButton;
- (void)_updatePreferredContentSize;
- (void)_didTapCancelButton;
- (void)_didTapBackButton;
- (void)_didTapViewAllCategoriesButton;
- (void)_didTapViewModel:(id)arg1;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isFilterViewControllerInFullyDisplayedState:(id)arg1;
- (void)searchBarDidBeginEditing:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)filterTaxonomyServiceDidCompleteFetch:(id)arg1;
- (void)filterTaxonomyServiceDidFailFetch:(id)arg1;
- (void)resultsFilterListSectionController:(id)arg1 didDeselectViewModel:(id)arg2;
- (void)resultsFilterListSectionController:(id)arg1 didSelectViewModel:(id)arg2;
- (void)clearSearchState;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTaxonomyModels:(id)arg1 taxonomyService:(id)arg2 shouldEnableSearch:(_Bool)arg3 userSession:(id)arg4 attributeType:(id)arg5 module:(id)arg6 title:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
