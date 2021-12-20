//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFeedPreviewHandlerDelegate-Protocol.h"
#import "IGStoryAudioPlayerDelegate-Protocol.h"
#import "IGStoryMusicModelsListViewControllerDelegate-Protocol.h"
#import "IGSundialAudioPageAudioPartsSheetViewControllerDelegate-Protocol.h"
#import "IGSundialAudioPageMetadataViewDelegate-Protocol.h"
#import "IGSundialContextualNavigationProtocol-Protocol.h"
#import "IGSundialGridVideoViewControllerDelegate-Protocol.h"
#import "IGSundialRenameOriginalAudioViewControllerDelegate-Protocol.h"
#import "IGSundialViewerCTADelegate-Protocol.h"
#import "IGSundialViewerProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGCameraEffectConfig, IGFeedPreviewHandler, IGSegmentedTabControl, IGStoryAudioPlayer, IGSundialAudioNavigationPerfComponents, IGSundialAudioPageMetadataPlaceholderView, IGSundialAudioPageMetadataView, IGSundialAudioPageViewModel, IGSundialGridAudioPageMetadata, IGSundialGridVideoViewController, IGSundialMusicAsset, IGSundialOriginalAudioAsset, IGSundialPivotPageCTAButton, IGSundialReactiveAudioAsset, IGUserSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol IGDirectShareSheetControlling, IGSubscriptionToken, IGSundialAudioPageNavigationDelegate;

@interface IGSundialAudioPageViewController : IGViewController <IGDirectShareSheetControllerDelegate, IGFeedNetworkSourceDelegate, IGFeedPreviewHandlerDelegate, IGStoryAudioPlayerDelegate, IGStoryMusicModelsListViewControllerDelegate, IGSundialAudioPageAudioPartsSheetViewControllerDelegate, IGSundialAudioPageMetadataViewDelegate, IGSundialContextualNavigationProtocol, IGSundialGridVideoViewControllerDelegate, IGSundialRenameOriginalAudioViewControllerDelegate, IGSundialViewerCTADelegate, IGSundialViewerProtocol, UITextFieldDelegate>
{
    IGUserSession *_userSession;
    NSString *_referrerMediaID;
    NSMutableDictionary *_audioPageFeedMap;
    IGSundialAudioPageViewModel *_viewModel;
    IGSundialAudioPageMetadataView *_metadataView;
    IGSundialAudioPageMetadataPlaceholderView *_placeholderView;
    IGSegmentedTabControl *_segmentedTabControl;
    IGSundialGridVideoViewController *_gridViewController;
    IGSundialPivotPageCTAButton *_useAudioButton;
    IGStoryAudioPlayer *_musicAudioPlayer;
    IGSundialAudioNavigationPerfComponents *_perfComponents;
    IGFeedPreviewHandler *_previewHandler;
    id <IGDirectShareSheetControlling> _reshareController;
    IGActionableConfirmationToastController *_confirmationToastController;
    id <IGSubscriptionToken> _bookmarkSubscriptionToken;
    IGSundialMusicAsset *_music;
    IGSundialOriginalAudioAsset *_originalAudio;
    IGSundialReactiveAudioAsset *_reactiveAudio;
    IGSundialGridAudioPageMetadata *_metadata;
    _Bool _isTrendingLabelShown;
    _Bool _usedCachedValue;
    _Bool _audioPageSegmentsNUXSeen;
    _Bool _audioPagePartialAttributionRevertAbilityEducationNUXSeen;
    NSString *_selectedAudioPageSegmentCanonicalID;
    long long _selectedFeedType;
    NSArray *_preloadedMediaPks;
    NSMutableArray *_isVisibleCellAtIndexBreakingCreator;
    unsigned long long _breakingCreatorTagsAdded;
    _Bool _isPlaying;
    unsigned long long _contextualNavigationType;
    NSString *_contextualAssetID;
    id <IGSundialAudioPageNavigationDelegate> _sundialAudioPageNavigationDelegate;
    NSString *_pivotPageEntryPoint;
    NSString *_pivotPageSessionId;
    NSString *_sourceMediaPk;
    NSString *_sourceMediaRankingInfoToken;
    NSString *_sourceMediaAuthorPk;
    IGCameraEffectConfig *_sourceMediaEffectsConfig;
    NSString *_mediaTapToken;
    NSMutableArray *_mediaList;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(copy, nonatomic) NSString *mediaTapToken; // @synthesize mediaTapToken=_mediaTapToken;
@property(copy, nonatomic) IGCameraEffectConfig *sourceMediaEffectsConfig; // @synthesize sourceMediaEffectsConfig=_sourceMediaEffectsConfig;
@property(copy, nonatomic) NSString *sourceMediaAuthorPk; // @synthesize sourceMediaAuthorPk=_sourceMediaAuthorPk;
@property(copy, nonatomic) NSString *sourceMediaRankingInfoToken; // @synthesize sourceMediaRankingInfoToken=_sourceMediaRankingInfoToken;
@property(copy, nonatomic) NSString *sourceMediaPk; // @synthesize sourceMediaPk=_sourceMediaPk;
@property(copy, nonatomic) NSString *pivotPageSessionId; // @synthesize pivotPageSessionId=_pivotPageSessionId;
@property(copy, nonatomic) NSString *pivotPageEntryPoint; // @synthesize pivotPageEntryPoint=_pivotPageEntryPoint;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) IGSundialAudioPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <IGSundialAudioPageNavigationDelegate> sundialAudioPageNavigationDelegate; // @synthesize sundialAudioPageNavigationDelegate=_sundialAudioPageNavigationDelegate;
@property(readonly, copy, nonatomic) NSString *contextualAssetID; // @synthesize contextualAssetID=_contextualAssetID;
@property(readonly, nonatomic) unsigned long long contextualNavigationType; // @synthesize contextualNavigationType=_contextualNavigationType;
- (void)sundialViewerViewController:(id)arg1 didTapUseAudio:(id)arg2;
- (void)_updateUseButtonIfNeeded:(_Bool)arg1;
- (void)sundialGridVideoViewControllerDidEndScrolling:(id)arg1;
- (void)sundialGridVideoViewControllerWillBeginScrolling:(id)arg1 scrollingUp:(_Bool)arg2;
- (void)sundialGridVideoViewControllerDidScroll:(id)arg1 contentOffset:(struct CGPoint)arg2;
- (long long)preferredTabBarBehavior;
- (void)_logAudioPageImpressionIfViewModelChangedSufficiently:(id)arg1;
- (long long)_audioTypeForLogging;
@property(copy, nonatomic) NSString *surface;
@property(copy, nonatomic) NSString *productName;
@property(copy, nonatomic) NSString *analyticsModule;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)_presentAudioPartialAttributionRevertAbilityEducationNUXIfNeeded;
- (void)_presentAudioPageSegmentsNUXIfNeeded;
- (void)_presentRenameOriginalAudioTooltipNUXIfNeeded;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_audioSessionRouteChange:(id)arg1;
- (void)_scrubbingEnded:(id)arg1;
- (void)_scrubbingChanged:(id)arg1;
- (void)_scrubbingBegan:(id)arg1;
- (void)_shareAudioPage;
- (void)musicModelsPaginatedListDidUpdateModels:(id)arg1;
- (void)modelsListViewControllerDidTapClearAllForRecentSearches:(id)arg1;
- (void)modelsListViewController:(id)arg1 didTapArtist:(id)arg2 category:(unsigned long long)arg3;
- (void)modelsListViewController:(id)arg1 didTapAudioPageForAudioTrack:(id)arg2 pivotPageSessionId:(id)arg3;
- (void)modelsListViewController:(id)arg1 didTapAudioTrack:(id)arg2 context:(CDStruct_61bbf500)arg3 category_DEPRECATED:(unsigned long long)arg4;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_didTapShareButton;
- (void)_didTapStreamNowButton;
- (void)_didTapBookmarkButton;
- (void)sundialViewerViewControllerWillDismiss:(id)arg1 lastActiveOrganicVideo:(id)arg2;
- (void)sundialViewerViewControllerDidEndShowingActiveVideo:(id)arg1;
- (void)sundialViewerViewController:(id)arg1 didUpdateActiveVideo:(id)arg2;
- (void)audioPartsSheetViewController:(id)arg1 didTapRowWithCanonicalId:(id)arg2;
- (void)metadataView:(id)arg1 didTapAudioPageSegmentWithCanonicalID:(id)arg2;
- (void)metadataViewDidTapDismissSegmentsButton:(id)arg1;
- (void)metadataViewDidTapAllSegmentsButton:(id)arg1;
- (void)metadataViewDidShowAudioPageSegmentsButtons:(id)arg1;
- (void)metadataView:(id)arg1 didTapTruncatedAudioPartViewInfos:(id)arg2;
- (void)metadataView:(id)arg1 didTapAudioPartWithCanonicalId:(id)arg2;
- (void)renameOriginalAudioViewController:(id)arg1 didSaveAudioName:(id)arg2;
- (void)_displayReportActionForMedia:(id)arg1;
- (id)_reportActionForMedia:(id)arg1;
- (void)previewHandlerDidTapSaveOrUnsave:(id)arg1 shouldSave:(_Bool)arg2 productItem:(id)arg3;
- (id)previewHandler:(id)arg1 previewActionsForMedia:(id)arg2 defaultActionProvider:(CDUnknownBlockType)arg3 loggingExtra:(id)arg4;
- (id)hashtagModelForPreviewHandler:(id)arg1;
- (id)previewHandler:(id)arg1 loggingExtrasForMedia:(id)arg2 atIndexPath:(id)arg3;
- (void)_displayMetadataFetchFailureMessage;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3 fromCache:(_Bool)arg4;
- (void)audioPlayer:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)audioPlayer:(id)arg1 didDetermineDuration:(double)arg2 ofAsset:(id)arg3;
- (void)audioPlayer:(id)arg1 didDetermineAssetPlayabilityStatus:(_Bool)arg2;
- (void)audioPlayerDidPlayToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)_updatePageWithResponseForVideoFeed:(id)arg1;
- (void)_playAudioIfNeeded;
- (void)_didTapMoreItemButton:(id)arg1;
- (_Bool)_isJustWatchedMedia:(id)arg1;
- (_Bool)_isOriginalAudioVideo:(id)arg1;
- (_Bool)_isArtistVideo:(id)arg1;
- (id)sundialGridVideoViewController:(id)arg1 sectionControllerForMedia:(id)arg2;
- (id)sundialGridVideoViewController:(id)arg1 sortedListItemsForLoadedItems:(id)arg2;
- (void)_didTapUseAudio:(id)arg1;
- (void)setViewModel:(id)arg1;
- (_Bool)_presentedOriginalAudioIsEligibleForPartialAttributionLinkRemovalAction;
- (void)_showMoreSongsFromArtist;
- (void)_showArtistProfile;
- (void)_didTapPlayPauseButton:(id)arg1;
- (void)_didTapArtist:(id)arg1;
- (void)_exposeForAudioPageTabsTestIfNecessaryForVideoFeed:(id)arg1;
- (void)_tabControlValueChanged:(id)arg1;
- (id)_videoFeed;
- (void)_didTapBackButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)title;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 videoFeed:(id)arg2 feedType:(long long)arg3 pivotPageEntryPoint:(id)arg4 userSession:(id)arg5;
- (id)initWithVideoFeed:(id)arg1 userSession:(id)arg2;
- (id)initWithCanonicalID:(id)arg1 sourceMediaPk:(id)arg2 pivotPageEntryPoint:(id)arg3 userSession:(id)arg4;
- (id)initWithAudioID:(id)arg1 sourceMediaPk:(id)arg2 pivotPageEntryPoint:(id)arg3 userSession:(id)arg4;
- (id)initWithReactiveAudio:(id)arg1 sourceMediaPk:(id)arg2 pivotPageEntryPoint:(id)arg3 userSession:(id)arg4;
- (id)initWithOriginalAudio:(id)arg1 sourceMediaPk:(id)arg2 pivotPageEntryPoint:(id)arg3 userSession:(id)arg4 preloadedMediaPks:(id)arg5;
- (id)initWithMusic:(id)arg1 sourceMediaPk:(id)arg2 pivotPageEntryPoint:(id)arg3 userSession:(id)arg4 preloadedMediaPks:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

