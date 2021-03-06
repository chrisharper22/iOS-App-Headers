//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGBusinessConversionPrepareServiceDelegate-Protocol.h>
#import <FBSharedFramework/IGDismissableViewController-Protocol.h>
#import <FBSharedFramework/IGProCategorySelectionListViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGProCategorySelectionSearchViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGProCategorySelectionViewControllerProtocol-Protocol.h>
#import <FBSharedFramework/IGProConversionCategoriesPreloaderDelegate-Protocol.h>
#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGBottomButtonsView, IGBusinessConversionFacebookPageCategory, IGBusinessConversionPrepareService, IGHeadlineView, IGProCategorySelectionListViewController, IGProCategorySelectionLoggingHelper, IGProCategorySelectionSearchViewController, IGProCategoryService, IGProConversionCategoriesDataSource, IGProConversionCategoriesPreloader, IGProProfileSwitchView, IGSearchBar, IGStepperHeaderControl, IGUser, NSString, UIActivityIndicatorView, UILabel, UIView;
@protocol IGConcurrentSessionHandling, IGInterestAccountLoggingProviding, IGProCategorySelectionViewControllerDelegate;

@interface IGProCategorySelectionOptimizedViewController : IGViewController <IGDismissableViewController, IGBusinessConversionPrepareServiceDelegate, IGProCategorySelectionListViewControllerDelegate, IGProCategorySelectionSearchViewControllerDelegate, IGProConversionCategoriesPreloaderDelegate, IGSearchBarDelegate, UIGestureRecognizerDelegate, IGProCategorySelectionViewControllerProtocol>
{
    IGUser *_actorAccount;
    id <IGConcurrentSessionHandling> _concurrentUserSessionHandler;
    id <IGInterestAccountLoggingProviding> _loggingProvider;
    IGProConversionCategoriesDataSource *_dataSource;
    IGProCategoryService *_categoryService;
    IGBusinessConversionFacebookPageCategory *_selectedCategory;
    IGBottomButtonsView *_dockedNavigationButtons;
    IGHeadlineView *_headlineView;
    IGProProfileSwitchView *_switchView;
    IGSearchBar *_searchBar;
    UILabel *_noResultsText;
    UIView *_nullStateView;
    UIActivityIndicatorView *_loadingSpinner;
    id <IGProCategorySelectionViewControllerDelegate> _delegate;
    NSString *_currentlyFetchedQueryString;
    IGStepperHeaderControl *_stepperHeaderControl;
    _Bool _shouldShowCategory;
    _Bool _shouldUseBottomNavigation;
    _Bool _shouldUseDoneButtonText;
    _Bool _shouldDismissOnSelect;
    _Bool _shouldUpdateUserCategory;
    _Bool _shouldShowCategoryToggle;
    NSString *_navigationTitle;
    long long _preFillCategoryAccountType;
    NSString *_preFillCategoryID;
    NSString *_preFillCategoryName;
    long long _stepperCapacity;
    long long _stepperIndex;
    IGProConversionCategoriesPreloader *_categoryPreloader;
    IGBusinessConversionPrepareService *_quickConversionSettingPrepareService;
    IGProCategorySelectionListViewController *_selectionListViewController;
    IGProCategorySelectionSearchViewController *_selectionSearchViewController;
    IGProCategorySelectionLoggingHelper *_loggingHelper;
    NSString *_loadingStatusText;
    _Bool ignoreCancelEventLogging;
    CDUnknownBlockType _categoryPreloadingCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType categoryPreloadingCompletionBlock; // @synthesize categoryPreloadingCompletionBlock=_categoryPreloadingCompletionBlock;
@property(nonatomic) _Bool ignoreCancelEventLogging; // @synthesize ignoreCancelEventLogging;
- (void)didUpdateSearchText:(id)arg1;
- (void)didTapSelectionSearchDoneButton;
- (void)didSelectCategory:(id)arg1 sender:(id)arg2;
- (void)businessConversionPrepareService:(id)arg1 didFetchQuickConversionSetting:(id)arg2;
- (void)updateLoadingStatusText:(id)arg1;
- (void)updateToLoadingState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didDismissViewController;
- (id)analyticsModule;
- (void)finishedPreloadingCategoriesWith:(id)arg1 success:(_Bool)arg2 categories:(id)arg3 error:(id)arg4;
- (void)searchBarDidTapClearButton:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_loadingSpinnerStopAnimating;
- (void)_loadingSpinnerStartAnimating;
- (void)_setupLoadingSpinner;
- (void)_viewTapped:(id)arg1;
- (void)_updateState;
- (void)_setupSelectionSearchViewController;
- (void)_setupSelectionListViewController;
- (void)_finishStep;
- (void)_handleUpdateUserCategoryCompletedWithError:(id)arg1;
- (void)_updateUserCategory;
- (void)_completeCategorySelection;
- (void)_nextButtonTapped:(id)arg1;
- (void)_setupNavigationButtons;
- (void)_setupNullState;
- (void)_setupSearchBar;
- (void)_handleSwitchToggled:(_Bool)arg1;
- (void)_setupSwitchView;
- (void)_setupHeaderView;
- (_Bool)_isShowingPreFillCategory;
- (_Bool)_isPreFillCategoryNameValid;
- (_Bool)_isPreFillCategoryIDValid;
- (_Bool)_shouldShowPreFillCategory;
- (void)_setupStepperHeaderIfNecessary;
- (void)_showInitialResults;
- (void)_checkForQuickConversionSettings;
- (void)_setSelectedCategory:(id)arg1 sender:(id)arg2;
- (long long)preferredStatusBarStyle;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithActorAccount:(id)arg1 concurrentUserSessionHandler:(id)arg2 delegate:(id)arg3 loggingProvider:(id)arg4 categoryPreloader:(id)arg5 quickConversionSettingPrepareService:(id)arg6 shouldUseBottomNavigation:(_Bool)arg7 shouldUseDoneButtonText:(_Bool)arg8 shouldDismissOnSelect:(_Bool)arg9 shouldUpdateUserCategory:(_Bool)arg10 shouldShowCategoryToggle:(_Bool)arg11 navigationTitle:(id)arg12 preFillCategoryAccountType:(long long)arg13 stepperCapacity:(long long)arg14 stepperIndex:(long long)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

