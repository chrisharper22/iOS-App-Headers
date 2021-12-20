//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGuideCreationSearchClickHandlerDelegate-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "IGSearchViewControllerDelegate-Protocol.h"
#import "IGTabPageViewControllerDelegate-Protocol.h"

@class IGGuideCreationSearchClickHandler, IGGuideSearchCustomParametersProvider, IGGuideUnifiedSearchTabViewController, IGSearchAnalyticsLogger, IGSearchBarWithCancel, IGSearchSession, IGUserSession, NSString;
@protocol IGGuideUnifiedSearchDelegate, IGSearchResultsViewControllerType;

@interface IGGuideUnifiedSearchViewController : IGViewController <IGSearchViewControllerDelegate, IGSearchBarDelegate, IGTabPageViewControllerDelegate, IGGuideCreationSearchClickHandlerDelegate>
{
    IGUserSession *_userSession;
    IGSearchSession *_searchSession;
    IGSearchAnalyticsLogger *_searchAnalyticsLogger;
    IGGuideCreationSearchClickHandler *_searchClickHandler;
    IGGuideUnifiedSearchTabViewController *_searchTabsViewController;
    IGViewController<IGSearchResultsViewControllerType> *_userSearchViewController;
    IGViewController<IGSearchResultsViewControllerType> *_placesSearchViewController;
    IGViewController<IGSearchResultsViewControllerType> *_shopSearchViewController;
    IGGuideSearchCustomParametersProvider *_customParametersProvider;
    id <IGGuideUnifiedSearchDelegate> _delegate;
    IGSearchBarWithCancel *_searchBar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSearchBarWithCancel *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <IGGuideUnifiedSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchDidNotHaveGrid;
- (void)searchDidLoadGrid;
- (void)searchChildViewControllerDidFailToLoadNullStateResults:(id)arg1 error:(id)arg2;
- (void)searchChildViewControllerDidLoadNullStateResults:(id)arg1;
- (void)searchChildViewControllerWillLoadNullStateResults:(id)arg1;
- (void)searchChildViewControllerDidTapOnSearchResult:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)childViewControllerWillPushView:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)isReadyForImpressionLogging;
- (id)searchSession;
- (id)searchAnalyticsLogger;
- (id)currentSearchText;
- (void)guideCreationSearchClickHandler:(id)arg1 didSelectSearchableItem:(id)arg2;
- (void)pageViewController:(id)arg1 willPageToViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didPageToViewController:(id)arg2;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (id)_searchViewControllerForTab:(unsigned long long)arg1;
- (void)_searchCancelTapped;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 defaultLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
