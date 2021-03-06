//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGTabPageViewController.h"

#import "IGFriendStatusChangedListener-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGSearchViewControllerDelegate-Protocol.h"
#import "IGTabPageViewControllerDelegate-Protocol.h"
#import "IGUserBlockingActionListener-Protocol.h"

@class IGAnimatablePlaceholderModel, IGKeyboardObserver, IGSearchAnalyticsLogger, IGSearchNavigationPerfComponents, IGSearchRecommendationImpressionLogger, IGSearchSession, IGUserSession, IGViewController, NSArray, NSString, UIColor;
@protocol IGSearchContainerViewControllerDelegate, IGSearchResultsViewControllerType;

@interface IGSearchContainerViewController : IGTabPageViewController <IGFriendStatusChangedListener, IGSearchViewControllerDelegate, IGTabPageViewControllerDelegate, IGKeyboardObserverShowDelegate, IGUserBlockingActionListener>
{
    IGUserSession *_userSession;
    IGViewController<IGSearchResultsViewControllerType> *_topSearchViewController;
    IGViewController<IGSearchResultsViewControllerType> *_userSearchViewController;
    IGViewController<IGSearchResultsViewControllerType> *_hashtagSearchViewController;
    IGViewController<IGSearchResultsViewControllerType> *_placesSearchViewController;
    IGViewController<IGSearchResultsViewControllerType> *_audioSearchViewController;
    NSString *_searchText;
    UIColor *_tabBackgroundColor;
    _Bool _willMoveToParentVC;
    _Bool _viewHasAppeared;
    IGSearchNavigationPerfComponents *_navPerfComponents;
    IGKeyboardObserver *_keyboardObserver;
    _Bool _sendNetworkRequestOnTabFullySwitched;
    NSArray *_blendedSearchAnimatePlaceholders;
    IGSearchRecommendationImpressionLogger *_searchRecommendationImpressionLogger;
    IGAnimatablePlaceholderModel *_currentPlaceholderModel;
    _Bool _hasSeenAudioTabNux;
    id <IGSearchContainerViewControllerDelegate> _searchDelegate;
    IGSearchAnalyticsLogger *_searchAnalyticsLogger;
    IGSearchSession *_searchSession;
}

+ (void)prefetchSuggestedResultsIfNeeded:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGSearchSession *searchSession; // @synthesize searchSession=_searchSession;
@property(readonly, nonatomic) IGSearchAnalyticsLogger *searchAnalyticsLogger; // @synthesize searchAnalyticsLogger=_searchAnalyticsLogger;
@property(nonatomic) __weak id <IGSearchContainerViewControllerDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void)_refetchNullStateWithUsers;
- (void)user:(id)arg1 blocked:(_Bool)arg2 messagingOnlyBlocked:(_Bool)arg3;
- (void)friendStatusChangedForUser:(id)arg1 withUserAction:(long long)arg2;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)pageViewController:(id)arg1 willPageToViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didPageToViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willShowViewController:(id)arg2;
- (void)logSearchRecommendationImpression:(id)arg1;
- (id)searchTitleViewAnimatePlaceholders;
- (void)_searchDidEnd;
- (void)_searchDidStart;
- (void)searchBarDidClickSearch;
- (void)updateActiveSearchText:(id)arg1;
- (void)searchDidNotHaveGrid;
- (void)searchDidLoadGrid;
- (void)searchChildViewControllerDidFailToLoadNullStateResults:(id)arg1 error:(id)arg2;
- (void)searchChildViewControllerDidLoadNullStateResults:(id)arg1;
- (void)searchChildViewControllerWillLoadNullStateResults:(id)arg1;
- (_Bool)isReadyForImpressionLogging;
- (void)searchChildViewControllerDidTapOnSearchResult:(id)arg1;
- (id)currentSearchText;
- (void)childViewControllerWillPushView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (_Bool)prefersNavigationBarHidden;
- (void)_reloadPlacesTab;
- (void)_initiateSearchSession;
- (void)_onApplicationWillResignActiveNotification:(id)arg1;
- (void)_onApplicationWillEnterForegroundNotification:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_initializeChildViewControllers;
- (id)_searchViewControllerForTab:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(retain, nonatomic) IGViewController<IGSearchResultsViewControllerType> *currentViewController; // @dynamic currentViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

