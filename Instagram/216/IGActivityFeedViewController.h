//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGActivityBusinessConversionTopSectionControllerDelegate-Protocol.h"
#import "IGActivityBusinessProfileReminderSectionControllerDelegate-Protocol.h"
#import "IGActivityFeedNetworkSourceDelegate-Protocol.h"
#import "IGActivityFeedViewControllerProtocol-Protocol.h"
#import "IGActivityFeedViewControllerType-Protocol.h"
#import "IGActivityFiltersViewControllerDelegate-Protocol.h"
#import "IGActivityNavigationHandlerDelegate_DEPRECATED-Protocol.h"
#import "IGActivityNavigationHeaderViewDelegate-Protocol.h"
#import "IGActivityStorySectionControllerDelegate-Protocol.h"
#import "IGAdsPaymentsRiskAppealListener-Protocol.h"
#import "IGBadgeListener-Protocol.h"
#import "IGDiscoverPeopleSectionControllerDelegate-Protocol.h"
#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGFeaturedUserDismissedListener-Protocol.h"
#import "IGFeedItemPostedListener-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGFindUsersViewDataSourceDelegate-Protocol.h"
#import "IGFollowRequestSectionControllerDelegate-Protocol.h"
#import "IGFriendStatusChangedListener-Protocol.h"
#import "IGGDPRConsentListener-Protocol.h"
#import "IGInfoViewDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGMediaDeletedListener-Protocol.h"
#import "IGMediaUpdatedForAllListener-Protocol.h"
#import "IGMegaphoneSectionControllerDelegate-Protocol.h"
#import "IGNewPromotionListener-Protocol.h"
#import "IGNewsFeedListener-Protocol.h"
#import "IGProConversionFlowPresentingDelegate-Protocol.h"
#import "IGProFlowCompletionRefreshDelegate-Protocol.h"
#import "IGQPMegaphoneSectionControllerPresenterDelegate-Protocol.h"
#import "IGTitleAndActionAndOverflowOptionSectionControllerDelegate-Protocol.h"
#import "IGTitleAndActionSectionControllerDelegate-Protocol.h"
#import "IGUserUpdatedListener-Protocol.h"
#import "IGWarmStartListener-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGActivityAdsManagerItemConfiguration, IGActivityFeedCommentStoryLogger, IGActivityFeedHideManager, IGActivityFeedLogger, IGActivityFeedNavigationPerfComponents, IGActivityFeedNetworkSource, IGActivityNavigationHeaderView, IGActivityPreviewingHandler, IGBadgingLogger, IGBusinessOverlayTransitionAnimator, IGEmptyFeedSectionController, IGFeedScrollViewAnnouncer, IGGenericMegaphone, IGInfoView, IGListAdapter, IGNetworkSourceContainer, IGNewsCollectionViewCellSwipeCoordinator, IGNewsStory, IGPromotionErrorStatusNetworker, IGQPInterstitial, IGQPMegaphone, IGQPMegaphoneSectionControllerPresenter, IGQuickPromotionCoordinator, IGRefreshControl, IGStoryMentions, IGSuggestedFindUsersViewDataSource, IGSuggestedUserLogger, IGTableLayoutSpec, IGUser, IGUserSession, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSSet, NSString, UICollectionView;
@protocol IGListDiffable, IGNewsPresentationDelegate;

@interface IGActivityFeedViewController : IGViewController <IGActivityFeedNetworkSourceDelegate, IGFollowRequestSectionControllerDelegate, IGEmptyFeedViewDelegate, IGListAdapterDataSource, IGInfoViewDelegate, UIScrollViewDelegate, IGMegaphoneSectionControllerDelegate, IGActivityStorySectionControllerDelegate, IGDiscoverPeopleSectionControllerDelegate, IGListAdapterDelegate, IGActivityBusinessProfileReminderSectionControllerDelegate, IGProFlowCompletionRefreshDelegate, IGTitleAndActionSectionControllerDelegate, IGQPMegaphoneSectionControllerPresenterDelegate, IGActivityNavigationHandlerDelegate_DEPRECATED, IGUserUpdatedListener, IGGDPRConsentListener, IGNewPromotionListener, IGFeedItemPostedListener, IGActivityBusinessConversionTopSectionControllerDelegate, IGFriendStatusChangedListener, IGMediaDeletedListener, IGMediaUpdatedForAllListener, IGAdsPaymentsRiskAppealListener, IGWarmStartListener, IGNewsFeedListener, IGFeedScrollViewListener, IGBadgeListener, UICollectionViewDelegate, IGActivityNavigationHeaderViewDelegate, IGActivityFiltersViewControllerDelegate, IGFindUsersViewDataSourceDelegate, IGTitleAndActionAndOverflowOptionSectionControllerDelegate, IGFeaturedUserDismissedListener, IGActivityFeedViewControllerType, IGActivityFeedViewControllerProtocol, IGProConversionFlowPresentingDelegate>
{
    IGEmptyFeedSectionController *_emptySectionController;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    unsigned long long _fetchState;
    NSDate *_lastFetchTime;
    NSDate *_lastExitedTime;
    _Bool _hasReceivedContent;
    IGQuickPromotionCoordinator *_qpCoordinator;
    IGQPMegaphone *_qpMegaphone;
    IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
    IGActivityFeedNavigationPerfComponents *_navPerfComponents;
    IGBadgingLogger *_badgingLogger;
    IGActivityFeedCommentStoryLogger *_commentStoryLogger;
    NSString *_lastChecked;
    NSString *_paginationFirstRecordTimestamp;
    unsigned long long _storyCount;
    unsigned long long _requestCount;
    long long _shoppingNotificationCount;
    _Bool _shouldShowFetchingMoreSpinner;
    id <IGListDiffable> _fetchingMoreSpinnerModel;
    _Bool _hasUnseenActivity;
    _Bool _needsRefresh;
    _Bool _inboxIsDirty;
    IGActionableConfirmationToastController *_toastController;
    IGActivityFeedHideManager *_hideManager;
    IGBusinessOverlayTransitionAnimator *_activityFeedOverlayTransitionAnimator;
    IGActivityNavigationHeaderView *_navigationHeaderView;
    IGUser *_userWithMostActivity;
    _Bool _shouldAnimateSwitcher;
    _Bool _isFetchingSU;
    IGSuggestedFindUsersViewDataSource *_suggestedUsersDataSource;
    _Bool _shoppingActivityPrefetchRequestHasStarted;
    _Bool _shouldShowInlineSU;
    _Bool _isShowingInlineSU;
    _Bool _shouldSkipActivityRefresh;
    NSMutableArray *_inlineSuggestions;
    IGActivityFeedNetworkSource *_networkSource;
    IGNetworkSourceContainer *_networkSourceContainer;
    _Bool _activityFeedCacheEnabled;
    _Bool _showBrandedContentSection;
    _Bool _prefetchEnabled;
    IGInfoView *_infoView;
    id _proConversionFlow;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGRefreshControl *_refreshControl;
    IGActivityPreviewingHandler *_previewDelegate;
    IGActivityAdsManagerItemConfiguration *_adsManagerItemConnfiguration;
    NSOrderedSet *_megaphoneStories;
    NSOrderedSet *_directStories;
    IGNewsStory *_friendRequestStory;
    NSOrderedSet *_copyrightStories;
    NSMutableOrderedSet *_priorityStories;
    NSMutableOrderedSet *_freshStories;
    NSMutableOrderedSet *_oldStories;
    NSMutableArray *_suggestions;
    NSArray *_filterSections;
    NSSet *_selectedFilterIDs;
    IGNewsCollectionViewCellSwipeCoordinator *_swipeCoordinator;
    IGGenericMegaphone *_megaphone;
    IGSuggestedUserLogger *_suggestedUserLogger;
    IGActivityFeedLogger *_activityFeedLogger;
    IGTableLayoutSpec *_tableInterface;
    unsigned long long _pendingCount;
    unsigned long long _newLeadsCount;
    NSDictionary *_couponData;
    NSString *_businessConversionActivityFeedText;
    long long _pendingBrandedContentCount;
    long long _unstaleBrandedContentCount;
    IGStoryMentions *_storyMentions;
    IGQPInterstitial *_qpInterstitial;
    id <IGNewsPresentationDelegate> _presentationDelegate;
    NSOrderedSet *_businessReminderStories;
    NSMutableDictionary *_timeBuckets;
    IGPromotionErrorStatusNetworker *_promotionErrorStatusNetworker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGPromotionErrorStatusNetworker *promotionErrorStatusNetworker; // @synthesize promotionErrorStatusNetworker=_promotionErrorStatusNetworker;
@property(retain, nonatomic) NSMutableDictionary *timeBuckets; // @synthesize timeBuckets=_timeBuckets;
@property(retain, nonatomic) NSOrderedSet *businessReminderStories; // @synthesize businessReminderStories=_businessReminderStories;
@property(readonly, nonatomic) __weak id <IGNewsPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(retain, nonatomic) IGQPInterstitial *qpInterstitial; // @synthesize qpInterstitial=_qpInterstitial;
@property(nonatomic) _Bool prefetchEnabled; // @synthesize prefetchEnabled=_prefetchEnabled;
@property(retain, nonatomic) IGStoryMentions *storyMentions; // @synthesize storyMentions=_storyMentions;
@property(nonatomic) long long unstaleBrandedContentCount; // @synthesize unstaleBrandedContentCount=_unstaleBrandedContentCount;
@property(nonatomic) long long pendingBrandedContentCount; // @synthesize pendingBrandedContentCount=_pendingBrandedContentCount;
@property(nonatomic) _Bool showBrandedContentSection; // @synthesize showBrandedContentSection=_showBrandedContentSection;
@property(copy, nonatomic) NSString *businessConversionActivityFeedText; // @synthesize businessConversionActivityFeedText=_businessConversionActivityFeedText;
@property(retain, nonatomic) NSDictionary *couponData; // @synthesize couponData=_couponData;
@property(nonatomic) unsigned long long newLeadsCount; // @synthesize newLeadsCount=_newLeadsCount;
@property(nonatomic) unsigned long long pendingCount; // @synthesize pendingCount=_pendingCount;
@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(retain, nonatomic) IGActivityFeedLogger *activityFeedLogger; // @synthesize activityFeedLogger=_activityFeedLogger;
@property(readonly, nonatomic) IGSuggestedUserLogger *suggestedUserLogger; // @synthesize suggestedUserLogger=_suggestedUserLogger;
@property(retain, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
@property(readonly, nonatomic) IGNewsCollectionViewCellSwipeCoordinator *swipeCoordinator; // @synthesize swipeCoordinator=_swipeCoordinator;
@property(retain, nonatomic) NSSet *selectedFilterIDs; // @synthesize selectedFilterIDs=_selectedFilterIDs;
@property(retain, nonatomic) NSArray *filterSections; // @synthesize filterSections=_filterSections;
@property(readonly, nonatomic) NSMutableArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) NSMutableOrderedSet *oldStories; // @synthesize oldStories=_oldStories;
@property(retain, nonatomic) NSMutableOrderedSet *freshStories; // @synthesize freshStories=_freshStories;
@property(retain, nonatomic) NSMutableOrderedSet *priorityStories; // @synthesize priorityStories=_priorityStories;
@property(retain, nonatomic) NSOrderedSet *copyrightStories; // @synthesize copyrightStories=_copyrightStories;
@property(retain, nonatomic) IGNewsStory *friendRequestStory; // @synthesize friendRequestStory=_friendRequestStory;
@property(retain, nonatomic) NSOrderedSet *directStories; // @synthesize directStories=_directStories;
@property(retain, nonatomic) NSOrderedSet *megaphoneStories; // @synthesize megaphoneStories=_megaphoneStories;
@property(retain, nonatomic) IGActivityAdsManagerItemConfiguration *adsManagerItemConnfiguration; // @synthesize adsManagerItemConnfiguration=_adsManagerItemConnfiguration;
@property(readonly, nonatomic) IGActivityPreviewingHandler *previewDelegate; // @synthesize previewDelegate=_previewDelegate;
@property(readonly, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id proConversionFlow; // @synthesize proConversionFlow=_proConversionFlow;
@property(readonly, nonatomic) IGInfoView *infoView; // @synthesize infoView=_infoView;
- (void)titleAndActionAndOverflowOptionSectionControllerDidTapActionButton:(id)arg1;
- (void)titleAndActionAndOverflowOptionSectionControllerDidTapOverflowOptionButton:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserListFromCache:(id)arg2;
- (void)findUsersViewDataSourceWillLoadUserList:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2 andNearbyBusinesses:(id)arg3;
- (void)_logFilterEventNamed:(id)arg1 selectedFilters:(id)arg2;
- (void)filtersViewControllerDidSelectFilters:(id)arg1;
- (void)_clearContentAndMarkFetchNeeded;
- (void)_resetFiltersAndRefresh;
- (_Bool)_shouldResetFiltersAndRefresh;
- (void)_showFilterSelection;
- (void)proConversionFlowDidConvertToPro:(id)arg1;
- (void)headerDidTapBack:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)followRequestSectionController:(id)arg1 entrypointTappedAtPosition:(long long)arg2;
- (void)_tappedFollowRequestNavigationItem;
- (void)titleAndActionSectionController:(id)arg1 didSelectActionForViewModel:(id)arg2;
- (void)didAcceptGDPRConsent;
- (void)_copyrightViolationReceived:(id)arg1;
- (void)didUpdateActivityBadgeValue:(long long)arg1 previousValue:(long long)arg2;
- (void)didUpdateBadgeOnEnterForeground:(long long)arg1;
- (void)didUpdateBadge:(id)arg1;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (void)friendStatusChangedForUser:(id)arg1 withUserAction:(long long)arg2;
- (void)businessConversionActivityFeedDidTapContinue;
- (void)refreshActivityFeed;
- (void)newPromotionSuccessDialogOkActionClick;
- (void)newPromotionCreated;
- (void)userWasUpdated:(id)arg1;
- (void)discoverPeopleSectionController:(id)arg1 didTapCustomButtonWithFeatureUserInfo:(id)arg2;
- (void)featuredUserDismissed:(id)arg1;
- (void)megaphoneSectionController:(id)arg1 logButtonClickIfNeeded:(id)arg2;
- (void)megaphoneSectionController:(id)arg1 didSelectButton:(id)arg2;
- (void)didDismissMegaphoneSectionController:(id)arg1;
- (void)didDismissQpMegaphoneSectionControllerPresenter:(id)arg1;
- (void)storySectionController:(id)arg1 didRemoveUserFromPostFromStory:(id)arg2;
- (void)storySectionController:(id)arg1 removedFollowRequestForStory:(id)arg2;
- (void)storySectionController:(id)arg1 removedFollowerForStory:(id)arg2;
- (void)_logInlineActionStep:(id)arg1 story:(id)arg2 sectionController:(id)arg3;
- (void)deleteCommentForSectionController:(id)arg1 forStory:(id)arg2 entryPoint:(long long)arg3;
- (void)_logHidingOfStory:(id)arg1 fromSectionController:(id)arg2;
- (void)_showHideStoryToastForStory:(id)arg1 sectionController:(id)arg2;
- (void)_hideStory:(id)arg1 forSectionController:(id)arg2;
- (void)hideStoryForSectionController:(id)arg1 forStory:(id)arg2;
- (void)webViewControllerDismissedForActivityNavigationHandler:(id)arg1;
- (void)didHideSectionController:(id)arg1;
- (void)infoViewWasTapped:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)navState;
- (void)activityFeedNetworkSource:(id)arg1 didFailRequestWithError:(id)arg2;
- (void)activityFeedNetworkSource:(id)arg1 didCompleteRequestWithResponse:(id)arg2 headLoad:(_Bool)arg3;
- (void)activityFeedNetworkSourceWillStartRequest:(id)arg1;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_showAlertFailureMessage:(id)arg1;
- (void)_showFullscreenFailureMessage:(id)arg1;
- (void)_updateFailureMessage;
- (_Bool)_shouldShowInlineSUBelowNewNotificationsWithNewNotifsCount:(unsigned long long)arg1;
- (void)_fetchSU;
- (_Bool)_shouldFetchSU;
- (id)_brandedContentItemConfiguration;
- (double)_toastBottomInset;
- (id)_suggestedUsersShouldShownInline:(_Bool)arg1 loggerOffset:(unsigned long long)arg2;
- (void)_updateHashtagFollowStatusStoreForNewsStories;
- (id)_labelItemConfig;
- (_Bool)_showStoryMentionsEntryPoint;
- (_Bool)_showBrandedContentNotificationEntryPoint;
- (_Bool)_showAdsManagerEntrypoint;
- (void)_onFetchFailed:(id)arg1;
- (void)_onDataReceived:(id)arg1 isInitialFetch:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupFilterButton;
- (void)_updateFiltersBarButtonItem;
- (void)_fetchShoppingActivityBadgeCountIfNeeded;
- (void)_updateFollowRequestNavigationBarItem;
- (void)_updateFeedData:(id)arg1 isInitialFetch:(_Bool)arg2;
- (void)_markActivityFeedAsSeenIfVisible;
- (void)_queryForPromotionErrors;
- (void)_hideFetchingMoreSpinner;
- (void)_showFetchingMoreSpinner;
- (void)_checkQPEligibility;
- (void)_fetchQuickPromotionData;
- (void)_fetchNextPageIfContentDoesNotFillScreen;
- (void)_fetchNextPage;
- (void)_fetchDataWithDisplayRefresh:(_Bool)arg1 action:(long long)arg2;
- (void)fetchData;
- (unsigned long long)fetchState;
- (void)_reloadDataFromPullToRefresh;
- (_Bool)_hasNoActivityNotificationsToDisplay;
- (void)_runRiskPaymentPreValidationIfAccountIsBlocked;
- (_Bool)_showSwitcherAboveReadBuckets;
- (void)_animateSwitcherIfNotVisible;
- (void)_updateForNewBadges;
- (unsigned long long)_activityCountForUserPk:(id)arg1;
- (void)_prefetchShoppingActivityFeedIfEligible;
- (_Bool)performViewControllerCommitForPreviewedItem:(id)arg1;
- (void)reloadNewsFeed;
- (void)prefetch;
- (id)scrollView;
- (void)feedItemWillPost:(id)arg1;
- (void)feedItemPostFailed;
- (void)feedItemPosted:(id)arg1 postId:(id)arg2;
- (void)didRecievePushNotification;
- (void)applicationWillEnterForegroundWithTimeIntervalSinceBackground:(double)arg1 warmStartInitializedFromNotification:(_Bool)arg2;
@property(readonly, nonatomic) double timeSinceLastFetch;
- (void)_enablePrefetch;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 presentationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

