//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGResultsFilterBasicListViewControllerDelegate-Protocol.h"
#import "IGResultsFilterMenuViewControllerDelegate-Protocol.h"
#import "IGResultsFilterRangeSelectionViewControllerDelegate-Protocol.h"
#import "IGResultsFilterTaxonomyViewControllerDelegate-Protocol.h"

@class IGBottomButtonsView, IGSearchSession, IGSessionTracker, IGShoppingNavigationAnalyticsContext, IGUserSession, NSDictionary, NSString;
@protocol IGResultsFilterMetadataProvider, IGResultsFilterViewControllerDelegate, IGResultsFilterViewControllerLoggingProviderType;

@interface IGResultsFilterViewController : IGViewController <IGGestureHandler, IGResultsFilterBasicListViewControllerDelegate, IGResultsFilterMenuViewControllerDelegate, IGResultsFilterRangeSelectionViewControllerDelegate, IGResultsFilterTaxonomyViewControllerDelegate>
{
    IGViewController *_childViewController;
    IGUserSession *_userSession;
    IGBottomButtonsView *_bottomButtonsView;
    NSString *_primaryButtonText;
    id <IGResultsFilterViewControllerLoggingProviderType> _loggingProvider;
    NSDictionary *_loggingExtras;
    id <IGResultsFilterMetadataProvider> _filterMetadataProvider;
    IGShoppingNavigationAnalyticsContext *_navigationInfo;
    IGSearchSession *_searchSession;
    IGSessionTracker *_shoppingSessionTracker;
    id <IGResultsFilterViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGResultsFilterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectItemFromListTypeWithModel:(id)arg1 searchText:(id)arg2;
- (void)_didSelectFilterFromListTypeWithModel:(id)arg1 searchText:(id)arg2;
- (void)_didTapBottomButton;
- (void)_updateBottomButtonEnabled;
- (void)_updatePreferredContentSize;
- (void)resultsFilterRangeSelectionViewControllerDidTapDoneButton:(id)arg1;
- (void)resultsFilterRangeSelectionViewController:(id)arg1 didSelectRangeWithViewModel:(id)arg2;
- (void)resultsFilterSingleSelectListViewController:(id)arg1 didSelectItemWithViewModel:(id)arg2;
- (void)resultsFilterTaxonomyViewControllerShouldPartiallyCollapse:(id)arg1;
- (_Bool)resultsFilterTaxonomyViewControllerIsInFullyDisplayedState:(id)arg1;
- (void)resultsFilterTaxonomyViewController:(id)arg1 didFocusOnSearchBar:(id)arg2;
- (void)resultsFilterTaxonomyViewController:(id)arg1 didSelectItemWithViewModel:(id)arg2 searchText:(id)arg3;
- (void)resultsFilterTaxonomyViewController:(id)arg1 didSelectFilterWithViewModel:(id)arg2 searchText:(id)arg3;
- (void)resultsFilterMenuViewControllerShouldPartiallyCollapse:(id)arg1;
- (_Bool)resultsFilterMenuViewControllerIsInFullyDisplayedState:(id)arg1;
- (void)resultsFilterMenuViewController:(id)arg1 didFocusOnSearchBar:(id)arg2;
- (void)resultsFilterMenuViewControllerDidUpdateSelection:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithChildViewController:(id)arg1 userSession:(id)arg2 filterMetadataProvider:(id)arg3 primaryButtonText:(id)arg4 loggingProvider:(id)arg5 loggingExtras:(id)arg6 navigationInfo:(id)arg7 searchSession:(id)arg8 shoppingSessionTracker:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

