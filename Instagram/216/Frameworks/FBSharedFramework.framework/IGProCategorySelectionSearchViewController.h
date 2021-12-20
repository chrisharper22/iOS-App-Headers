//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGListAdapterDataSource-Protocol.h>
#import <FBSharedFramework/IGProCategorySelectionListSectionControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>

@class IGBusinessConversionFacebookPageCategory, IGFullscreenSearchTransitionController, IGFullscreenSearchViewController, IGProCategorySelectionLoggingHelper, IGProCategorySelectionSearchListViewModel, IGProConversionCategoriesDataSource, IGProConversionCategoriesPreloader, IGSearchBar, IGSearchBarConfig, NSArray, NSString;
@protocol IGProCategorySelectionSearchViewControllerDelegate;

@interface IGProCategorySelectionSearchViewController : IGViewController <IGListAdapterDataSource, IGProCategorySelectionListSectionControllerDelegate, IGSearchBarDelegate>
{
    id <IGProCategorySelectionSearchViewControllerDelegate> _delegate;
    IGProConversionCategoriesDataSource *_dataSource;
    IGProConversionCategoriesPreloader *_categoryPreloader;
    IGBusinessConversionFacebookPageCategory *_selectedCategory;
    NSArray *_suggestedCategories;
    NSArray *_searchResultCategories;
    IGFullscreenSearchViewController *_searchViewController;
    IGSearchBarConfig *_searchBarConfig;
    IGFullscreenSearchTransitionController *_searchTransitionController;
    IGSearchBar *_presentingSearchBar;
    IGProCategorySelectionSearchListViewModel *_viewModel;
    IGProCategorySelectionLoggingHelper *_loggingHelper;
}

- (void).cxx_destruct;
- (void)didSelectItem:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)searchBarDidTapClearButton:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (void)_setSelectedCategory:(id)arg1;
- (void)_setSuggestedCategories:(id)arg1;
- (void)_setSearchResultCategories:(id)arg1;
- (void)_searchDoneTapped;
- (void)_searchCategoriesWithQuery:(id)arg1;
- (void)_handleFetchSuggestedCategories:(id)arg1 error:(id)arg2;
- (void)_fetchSuggestedCategories;
- (void)_setupSearchViewController;
- (id)_searchBarText;
- (void)_updateViewModel;
- (void)updateSelectedCategory:(id)arg1;
- (void)clearSearchText;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 categoryPreloader:(id)arg3 selectedCategory:(id)arg4 presentingSearchBar:(id)arg5 searchBarConfig:(id)arg6 loggingHelper:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

