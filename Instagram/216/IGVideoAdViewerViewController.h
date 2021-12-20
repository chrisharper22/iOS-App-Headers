//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGALLoggerContextProvider-Protocol.h"
#import "IGAdsMoreOptionsActionSheetControllerDelegate-Protocol.h"
#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGPartialModalSheetNavigationControllerPresentDelegate-Protocol.h"
#import "IGTransitionZoomToCapable-Protocol.h"
#import "IGVideoAdSectionControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGAdsMoreOptionsActionSheetController, IGAudioSessionClient, IGGestureCoordinatingCollectionView, IGListAdapter, IGMedia, IGPartialModalSheetViewController, IGPreviewableVideoAdUserFlowLogger, IGSponsoredSupportConfiguration, IGUserSession, IGVideoAdItem, IGVideoAdSectionController, IGVideoPlaybackLoggingConfig, NSString, UIScrollView;
@protocol IGDirectShareSheetControlling, IGSponsoredInfoProviding, IGVideoAdViewerDelegate, IGVideoLogging;

@interface IGVideoAdViewerViewController : IGViewController <IGListAdapterDataSource, UIScrollViewDelegate, IGVideoAdSectionControllerDelegate, IGAdsMoreOptionsActionSheetControllerDelegate, IGALLoggerContextProvider, IGTransitionZoomToCapable, IGDirectShareSheetControllerDelegate, IGPartialModalSheetListener, IGPartialModalSheetNavigationControllerPresentDelegate>
{
    IGUserSession *_userSession;
    IGGestureCoordinatingCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGMedia *_media;
    IGVideoAdItem *_videoAdItem;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfig;
    IGVideoPlaybackLoggingConfig *_videoPlaybackLoggingConfig;
    id <IGSponsoredInfoProviding> _sponsoredInfo;
    NSString *_analyticModule;
    IGAudioSessionClient *_audioSessionClient;
    id <IGVideoAdViewerDelegate> _delegate;
    IGAdsMoreOptionsActionSheetController *_adsMoreOptionsActionSheetController;
    id <IGVideoLogging> _videoLogger;
    IGPreviewableVideoAdUserFlowLogger *_userFlowLogger;
    IGVideoAdSectionController *_videoAdSectionController;
    NSString *_viewerSessionId;
    UIScrollView *_dismissScrollView;
    id <IGDirectShareSheetControlling> _reshareController;
    double _initiallyFocusedMediaSeekTime;
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    _Bool _shouldPauseForPartialModalSheet;
}

- (void).cxx_destruct;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)didCompleteAnimationTransition;
- (id)transitionZoomItemOverrideOnExit;
- (id)transitionZoomViewToItem:(id)arg1;
- (_Bool)shouldZoomToTransition;
- (id)_makePartialModalSheetWithViewController:(id)arg1 presentingGestureRecognizer:(id)arg2 navigationBarTitle:(id)arg3 prefersNavigationBarHidden:(_Bool)arg4 prefersInternalNavigationController:(_Bool)arg5 canExpandToFullScreen:(_Bool)arg6;
- (void)_presentPartialModalSheetWithViewController:(id)arg1 presentingGestureRecognizer:(id)arg2 navigationBarTitle:(id)arg3 prefersNavigationBarHidden:(_Bool)arg4 prefersInternalNavigationController:(_Bool)arg5 canExpandToFullScreen:(_Bool)arg6 shouldPauseVideo:(_Bool)arg7 animated:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_logAdsAction:(id)arg1;
- (void)_handleFRXDidDismissForActionReason:(id)arg1 adsAction:(id)arg2;
- (id)_urlByAppendingDestinationParams:(id)arg1;
- (void)_presentAdsMoreOptionControllerWithType:(id)arg1;
- (id)_cancelAction;
- (id)_learnMoreAction;
- (id)_reportAdAction;
- (id)_hideAdAction;
- (void)_tryAutoResumePlaybackUnlessPausedByUser;
- (struct UIEdgeInsets)_videoFeedInsets;
- (struct CGRect)_videoFeedFrame;
- (void)partialModalSheetNavigationController:(id)arg1 didPresentViewController:(id)arg2;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (id)userSession;
- (id)analyticsModule;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)adsMoreOptionsActionSheetController:(id)arg1 didTapHowWeUseThisActivityButton:(id)arg2;
- (void)adsMoreOptionsActionSheetController:(id)arg1 didTapUpdateTrackingSettingsButton:(id)arg2;
- (void)adsMoreOptionsActionSheetController:(id)arg1 didDismissWithReasons:(id)arg2 adsAction:(id)arg3;
- (void)adsMoreOptionsActionSheetController:(id)arg1 didSelectReason:(id)arg2 adsAction:(id)arg3;
- (void)adsMoreOptionsActionSheetController:(id)arg1 didSelectAdsAction:(id)arg2;
- (void)videoAdSectionControllerPresentCommentsWithShouldDisplayKeyboard:(_Bool)arg1;
- (void)videoAdSectionControllerDidTapReshare:(id)arg1;
- (void)videoAdSectionControllerDidSwipeUpOnCTA:(id)arg1;
- (void)videoAdSectionControllerDidTapURL:(id)arg1 hashtagText:(id)arg2;
- (void)videoAdSectionControllerDidTapCTA:(id)arg1 isNewTappableCTA:(_Bool)arg2;
- (void)videoAdSectionControllerDidTapMore:(id)arg1;
- (void)videoAdSectionControllerDidTapUser:(id)arg1 isBrandedContentSponsor:(_Bool)arg2 clickSource:(id)arg3 sectionController:(id)arg4;
- (void)videoAdSectionControllerDidTapClose:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 sponsoredSupportConfig:(id)arg3 viewerSessionId:(id)arg4 videoAdViewerDelegate:(id)arg5 videoLogger:(id)arg6 userFlowLogger:(id)arg7 initiallyFocusedMediaSeekTime:(double)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
