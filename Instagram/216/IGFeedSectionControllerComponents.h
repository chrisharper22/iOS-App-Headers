//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedPlaybackAudioControllerListener-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGFeedSectionControllerComponentsType-Protocol.h"
#import "IGListAdapterUpdateListener-Protocol.h"
#import "IGMinimizedViewerPresenterCoverListener-Protocol.h"
#import "IGViewAppearListener-Protocol.h"
#import "IGViewDisappearListener-Protocol.h"

@class IGActionableConfirmationToastController, IGAdsManagerLogger, IGCollectionViewVisibility, IGExploreImpressionTwoMeasurementConfig, IGFeedImpressionTwoMeasurementConfig, IGFeedItemAdStateController, IGFeedItemLogger, IGFeedScrollViewAnnouncer, IGFeedSectionControllerTrackingComponents, IGFeedSectionViewabilityTracker, IGFeedUFIDirectQuickSendTooltipProvider, IGFeedUFITooltipManager, IGFeedVideoCellManager_DEPRECATED, IGHeartAnimator, IGLastActionTracker, IGListAdapter, IGListAdapterScrollingContext, IGPlaybackCoordinator, IGPopoutView, IGSaveFeedUfiConfiguration, IGSessionTracker, IGSundialFeedPrefetchProvider, IGUserSession, IGViewController, NSString;
@protocol IGFeedConfigurationType, IGFeedItemConfigurationType;

@interface IGFeedSectionControllerComponents : NSObject <IGFeedPlaybackAudioControllerListener, IGFeedScrollViewListener, IGListAdapterUpdateListener, IGMinimizedViewerPresenterCoverListener, IGViewAppearListener, IGViewDisappearListener, IGFeedSectionControllerComponentsType>
{
    _Bool _viewHasAppeared;
    _Bool _viewIsCoveredByMinimizableViewController;
    _Bool _enableImpressionTracking;
    IGFeedSectionViewabilityTracker *_newFmkViewabilityTracker;
    IGSessionTracker *_shoppingSessionTracker;
    IGFeedItemAdStateController *_adStateController;
    IGFeedImpressionTwoMeasurementConfig *_feedImpression2MConfig;
    IGExploreImpressionTwoMeasurementConfig *_exploreImpression2MConfig;
    _Bool _stopVideoInViewDidDisappear;
    _Bool _hasListeners;
    id <IGFeedConfigurationType> _feedConfiguration;
    IGFeedVideoCellManager_DEPRECATED *_videoCellManager;
    IGPlaybackCoordinator *_playbackCoordinator;
    IGAdsManagerLogger *_adsManagerLogger;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    IGListAdapterScrollingContext *_scrollingContext;
    IGUserSession *_userSession;
    IGCollectionViewVisibility *_collectionViewVisibility;
    IGListAdapter *_listAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGSaveFeedUfiConfiguration *_saveConfiguration;
    IGPopoutView *_directPopoutView;
    IGFeedSectionViewabilityTracker *_sectionViewabilityTracker;
    IGFeedSectionControllerTrackingComponents *_trackingComponents;
    IGLastActionTracker *_lastActionTracker;
    IGViewController *_viewController;
    IGHeartAnimator *_heartAnimator;
    IGActionableConfirmationToastController *_toastController;
    IGFeedItemLogger *_feedItemLogger;
    IGFeedUFITooltipManager *_ufiTooltipManager;
    IGFeedUFIDirectQuickSendTooltipProvider *_quickSendTooltipProvider;
    IGSundialFeedPrefetchProvider *_sundialFeedPrefetchProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSundialFeedPrefetchProvider *sundialFeedPrefetchProvider; // @synthesize sundialFeedPrefetchProvider=_sundialFeedPrefetchProvider;
@property(readonly, nonatomic) IGFeedUFIDirectQuickSendTooltipProvider *quickSendTooltipProvider; // @synthesize quickSendTooltipProvider=_quickSendTooltipProvider;
@property(readonly, nonatomic) IGFeedUFITooltipManager *ufiTooltipManager; // @synthesize ufiTooltipManager=_ufiTooltipManager;
@property(readonly, nonatomic) IGFeedItemLogger *feedItemLogger; // @synthesize feedItemLogger=_feedItemLogger;
@property(nonatomic) _Bool hasListeners; // @synthesize hasListeners=_hasListeners;
@property(readonly, nonatomic) IGActionableConfirmationToastController *toastController; // @synthesize toastController=_toastController;
@property(readonly, nonatomic) IGHeartAnimator *heartAnimator; // @synthesize heartAnimator=_heartAnimator;
@property(readonly, nonatomic) __weak IGViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak IGLastActionTracker *lastActionTracker; // @synthesize lastActionTracker=_lastActionTracker;
@property(readonly, nonatomic) IGFeedSectionControllerTrackingComponents *trackingComponents; // @synthesize trackingComponents=_trackingComponents;
@property(readonly, nonatomic) IGFeedSectionViewabilityTracker *sectionViewabilityTracker; // @synthesize sectionViewabilityTracker=_sectionViewabilityTracker;
@property(readonly, nonatomic) IGPopoutView *directPopoutView; // @synthesize directPopoutView=_directPopoutView;
@property(readonly, nonatomic) IGSaveFeedUfiConfiguration *saveConfiguration; // @synthesize saveConfiguration=_saveConfiguration;
@property(readonly, nonatomic) IGFeedScrollViewAnnouncer *scrollViewAnnouncer; // @synthesize scrollViewAnnouncer=_scrollViewAnnouncer;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(readonly, nonatomic) IGCollectionViewVisibility *collectionViewVisibility; // @synthesize collectionViewVisibility=_collectionViewVisibility;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool stopVideoInViewDidDisappear; // @synthesize stopVideoInViewDidDisappear=_stopVideoInViewDidDisappear;
@property(readonly, nonatomic) IGListAdapterScrollingContext *scrollingContext; // @synthesize scrollingContext=_scrollingContext;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(retain, nonatomic) IGAdsManagerLogger *adsManagerLogger; // @synthesize adsManagerLogger=_adsManagerLogger;
@property(readonly, nonatomic) IGPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property(readonly, nonatomic) IGFeedVideoCellManager_DEPRECATED *videoCellManager; // @synthesize videoCellManager=_videoCellManager;
@property(readonly, nonatomic) id <IGFeedConfigurationType> feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
- (void)feedPlaybackAudioControllerDidReceiveAudioStatusChange:(id)arg1;
- (_Bool)_isProfileContainerModule:(id)arg1;
- (void)_didEndScrolling;
- (void)_onApplicationDidBecomeActive:(id)arg1;
- (void)_onApplicationDidEnterBackground:(id)arg1;
- (void)_unregisterForApplicationStateNotifications;
- (void)_registerForApplicationStateNotifications;
- (void)listAdapter:(id)arg1 didCompleteReloadAndRefreshHidden:(_Bool)arg2;
- (void)listAdapter:(id)arg1 didCompleteUpdateAnimated:(_Bool)arg2 refreshHidden:(_Bool)arg3;
- (void)disableListeners;
- (void)enableListeners;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (void)adapterDidCompleteUpdate;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_stopVideoForViewDisappearance;
- (void)_handleViewDidDisappear;
- (void)_handleViewWillDisappear;
- (void)_handleViewDidAppearAnimated:(_Bool)arg1;
- (void)viewController:(id)arg1 viewDidDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewDidAppearAnimated:(_Bool)arg2;
- (void)viewController:(id)arg1 viewWillAppearAnimated:(_Bool)arg2;
- (void)minimizedViewerPresenter:(id)arg1 didEndCoverWithViewController:(id)arg2;
- (void)minimizedViewerPresenter:(id)arg1 didCoverWithViewController:(id)arg2;
- (id)newFeedSectionController;
- (id)initWithFeedConfiguration:(id)arg1 itemConfiguration:(id)arg2 viewController:(id)arg3 collectionView:(id)arg4 listAdapter:(id)arg5 userSession:(id)arg6 scrollViewAnnouncer:(id)arg7 sectionViewabilityTracker:(id)arg8 newFmkViewabilityTracker:(id)arg9 videoAutoplayStrategy:(id)arg10 feedItemLogger:(id)arg11 enableImpressionTracking:(_Bool)arg12 useCollectionViewContentInset:(_Bool)arg13 shoppingSessionTracker:(id)arg14 lastActionTracker:(id)arg15;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

