//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGSoundStateListenerDelegate-Protocol.h"
#import "IGTVAdItemActionsControllerDelegate-Protocol.h"
#import "IGTVAdsSectionControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGListAdapter, IGSoundStateListener, IGTVAdItemActionsController, IGTVHackyCollectionView, IGTVVideoPreloadController, IGTVViewerLoggingContext, IGUserSession, IGVideoPlayerWorkingRangeController, NSArray, NSIndexSet, NSString;
@protocol IGSettingsAdActivityFullscreenViewerViewControllerDelegate;

@interface IGSettingsAdActivityIGTVViewerViewController : IGViewController <IGGestureHandler, IGListAdapterDataSource, IGTVAdItemActionsControllerDelegate, IGTVAdsSectionControllerDelegate, IGSoundStateListenerDelegate, UIScrollViewDelegate>
{
    IGUserSession *_userSession;
    IGSoundStateListener *_soundStateListener;
    NSArray *_adItems;
    long long _mostVisibleIndex;
    IGListAdapter *_listAdapter;
    IGTVHackyCollectionView *_collectionView;
    IGTVVideoPreloadController *_preloadController;
    IGVideoPlayerWorkingRangeController *_videoPlayerWorkingRangeController;
    IGTVViewerLoggingContext *_viewerLoggingContext;
    IGTVAdItemActionsController *_adItemActionsController;
    _Bool _isPausedForActionSheet;
    NSIndexSet *_moreActionTypes;
    id <IGSettingsAdActivityFullscreenViewerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSettingsAdActivityFullscreenViewerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)adItemActionsController:(id)arg1 didHideAdItem:(id)arg2;
- (void)adItemActionsControllerDidFinish:(id)arg1;
- (void)soundListenerDidSetStickySoundState:(id)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)adsSectionControllerCanResumePlayback:(id)arg1;
- (void)adsSectionControllerDidTapOverflow:(id)arg1;
- (void)adsSectionControllerDidTapSkipLabel:(id)arg1;
- (void)adsSectionControllerDidPlayToEnd:(id)arg1;
- (void)adsSectionControllerDidTapClose:(id)arg1 extras:(id)arg2;
- (void)adsSectionController:(id)arg1 didTapUser:(id)arg2 adSkipType:(id)arg3 extras:(id)arg4;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_advanceToNextItemOrExit;
- (void)_tryResumePlayback;
- (void)_pauseWithReason:(long long)arg1;
- (void)_dismissViewer;
- (void)_updateAudioEnabled:(_Bool)arg1;
- (_Bool)_shouldEnableAudio;
- (void)_loadMoreIfNeededForContentOffset:(struct CGPoint)arg1;
- (id)_visiblePlayerControllers;
- (void)_preloadVideosWithIndex:(long long)arg1;
- (void)_warmupVideoPlayersWithIndex:(long long)arg1;
- (void)_focusOnItem:(id)arg1 animated:(_Bool)arg2;
- (void)updateDataSourceWithAdItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)_setupCollectionView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 adItems:(id)arg2 selectedIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

