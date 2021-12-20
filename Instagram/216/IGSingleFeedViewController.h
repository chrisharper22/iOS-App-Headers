//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAdsBottomCTAControllerDelegate-Protocol.h"
#import "IGCoWatchInThreadCTAControllingDelegate-Protocol.h"
#import "IGFeedItemPreviewProviding-Protocol.h"
#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFeedPreviewingType-Protocol.h"
#import "IGFeedStatusViewDelegate-Protocol.h"
#import "IGListAdapterCompletionListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGMediaHardDeletedListener-Protocol.h"
#import "IGMediaHiddenListener-Protocol.h"
#import "IGMediaRestoredListener-Protocol.h"
#import "IGMediaVisibilityChangeListener-Protocol.h"
#import "IGScreenshotObserverDelegate-Protocol.h"
#import "IGSingleFeedViewControllerType-Protocol.h"
#import "IGTombstoneManagerDelegate-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"

@class IGCTAPresenterContext, IGFeedNetworkSource, IGFeedPreviewingHandler, IGFeedStarterKit, IGMedia, IGSingleFeedTitleHelper, IGSingleFeedViewControllerConfiguration, IGTombstoneManager, IGTombstoneView, IGUserSession, NSObject, NSString;
@protocol IGAdsBottomCTAControlling, IGCoWatchInThreadCTAControlling, IGFeedConfigurationType, IGFeedItemConfigurationType, IGFeedSectionControllerComponentsType;

@interface IGSingleFeedViewController : IGViewController <IGFeedNetworkSourceDelegate, IGFeedPreviewingType, IGFeedStatusViewDelegate, IGListAdapterCompletionListener, IGListAdapterDataSource, IGTombstoneManagerDelegate, IGAdsBottomCTAControllerDelegate, IGMediaHardDeletedListener, IGMediaHiddenListener, IGMediaRestoredListener, IGMediaVisibilityChangeListener, IGScreenshotObserverDelegate, IGCoWatchInThreadCTAControllingDelegate, IGTransitionZoomFromCapable, IGSingleFeedViewControllerType, IGFeedItemPreviewProviding>
{
    IGSingleFeedTitleHelper *_singleFeedTitleHelper;
    IGCTAPresenterContext *_ctaPresenterContext;
    NSObject<IGAdsBottomCTAControlling> *_ctaController;
    id <IGCoWatchInThreadCTAControlling> _coWatchCTAController;
    double _additionalBottomInsetForCTA;
    double _additionalBottomInsetForCoWatchEntry;
    IGFeedNetworkSource *_feedNetworkSource;
    IGSingleFeedViewControllerConfiguration *_configuration;
    id <IGFeedConfigurationType> _feedConfiguration;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    NSString *_previewCommentID;
    IGFeedStarterKit *_feed;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    IGUserSession *_userSession;
    IGFeedPreviewingHandler *_previewingHandler;
    IGTombstoneManager *_tombstoneManager;
    IGTombstoneView *_tombstoneView;
    IGMedia *_media;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) IGTombstoneView *tombstoneView; // @synthesize tombstoneView=_tombstoneView;
@property(readonly, nonatomic) IGTombstoneManager *tombstoneManager; // @synthesize tombstoneManager=_tombstoneManager;
@property(readonly, nonatomic) IGFeedPreviewingHandler *previewingHandler; // @synthesize previewingHandler=_previewingHandler;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) id <IGFeedSectionControllerComponentsType> feedSectionControllerComponents; // @synthesize feedSectionControllerComponents=_feedSectionControllerComponents;
@property(readonly, nonatomic) IGFeedStarterKit *feed; // @synthesize feed=_feed;
@property(copy, nonatomic) NSString *previewCommentID; // @synthesize previewCommentID=_previewCommentID;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(readonly, nonatomic) id <IGFeedConfigurationType> feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property(readonly, nonatomic) IGSingleFeedViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (void)coWatchInThreadCTAControlDidHide;
- (void)coWatchInThreadCTAControlDidShowWithBottomMargin:(double)arg1;
- (void)bottomCTAControllerDidShowCTA:(_Bool)arg1 withBottomOffset:(double)arg2;
- (void)bottomCTAControllerDidAddCTAView:(id)arg1 toScrollView:(id)arg2;
- (void)screenshotObserverDidSeeActiveScreenCapture:(id)arg1 event:(long long)arg2;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)arg1;
- (id)analyticsExtras;
- (id)analyticsModule;
- (_Bool)performViewControllerCommitForPreviewedItem:(id)arg1;
- (id)collectionView;
- (void)feedStatusEmptyStateButtonWasTapped:(id)arg1;
- (void)feedStatusViewDidTap:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (void)listAdapter:(id)arg1 didCompleteReloadAndRefreshHidden:(_Bool)arg2;
- (void)listAdapter:(id)arg1 didCompleteUpdateAnimated:(_Bool)arg2 refreshHidden:(_Bool)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)tombstoneManager:(id)arg1 didTapShowButtonForTombstoneView:(id)arg2;
- (void)mediaWasRestored:(id)arg1;
- (void)mediaHiddenFeedItem:(id)arg1 sourceModule:(id)arg2 storyReelPK:(id)arg3 reason:(long long)arg4;
- (void)mediaWasHardDeleted:(id)arg1;
- (void)mediaVisibilityChange:(id)arg1 withOldVisibility:(long long)arg2;
- (void)_presentRTCCallForCowatch;
- (void)_updateCoWatchBanner;
- (void)_updateFeedState;
- (void)_updateTombstoneView;
- (id)_indexPathForPoint:(struct CGPoint)arg1;
- (id)_refreshButton;
- (void)_updateNavigationBarButtonItem;
- (id)_displayTitle;
- (void)_updateTitle;
- (void)_refresh;
- (long long)getCurrentPage;
- (id)objectForPreviewAtPoint:(struct CGPoint)arg1;
- (id)cellForPreviewAtPoint:(struct CGPoint)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFeedNetworkSource:(id)arg1 configuration:(id)arg2 feedConfiguration:(id)arg3 itemConfiguration:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

