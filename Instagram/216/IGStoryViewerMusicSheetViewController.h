//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGStoryAudioPlayerDelegate-Protocol.h"
#import "IGStoryViewerMusicSheetContentViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGCameraLoggingContext, IGMusicStickerTapModelObject, IGStoryAudioPlayer, IGStoryFullscreenSectionLoggingContext, IGStoryViewerMusicSheetContentView, IGUserSession, NSString;
@protocol IGDirectShareSheetControlling, IGStoryItemType, IGSubscriptionToken;

@interface IGStoryViewerMusicSheetViewController : IGViewController <IGStoryAudioPlayerDelegate, IGStoryViewerMusicSheetContentViewDelegate, UIGestureRecognizerDelegate, IGDirectShareSheetControllerDelegate, IGGestureHandler>
{
    IGStoryViewerMusicSheetContentView *_contentView;
    IGUserSession *_userSession;
    IGMusicStickerTapModelObject *_musicTapModelObject;
    IGStoryAudioPlayer *_musicAudioPlayer;
    double _musicDuration;
    IGStoryFullscreenSectionLoggingContext *_loggingContext;
    id <IGStoryItemType> _storyItem;
    _Bool _inPartialModalNavigationController;
    id <IGDirectShareSheetControlling> _shareSheetController;
    id <IGSubscriptionToken> _bookmarkSubscriptionToken;
    IGCameraLoggingContext *_cameraLoggingContext;
    _Bool _isPlaying;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)_presentToastWithText:(id)arg1;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)_audioSessionRouteChange:(id)arg1;
- (void)_scrubbingEnded:(id)arg1;
- (void)_scrubbingChanged:(id)arg1;
- (void)_scrubbingBegan:(id)arg1;
- (void)audioPlayer:(id)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)audioPlayer:(id)arg1 didDetermineAssetPlayabilityStatus:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didDetermineDuration:(double)arg2 ofAsset:(id)arg3;
- (void)audioPlayerDidPlayToEnd:(id)arg1;
- (void)audioPlayer:(id)arg1 didUpdateStallState:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didUpdateToPlaybackTime:(double)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (id)_extraLoggingData;
- (void)musicSheetContentView:(id)arg1 didTapSendToButton:(id)arg2;
- (void)musicSheetContentView:(id)arg1 didTapBookmarkButton:(id)arg2 shouldBookmark:(_Bool)arg3;
- (void)musicSheetContentView:(id)arg1 didTapTopClipsView:(id)arg2;
- (void)musicSheetContentView:(id)arg1 didTapCreateClipsView:(id)arg2;
- (void)_dismissTapped;
- (void)musicSheetContentView:(id)arg1 didTapArtistView:(id)arg2;
- (void)_didTapPlayPauseButton:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (_Bool)prefersNavigationBarDividerHidden;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMusicTapModelObject:(id)arg1 userSession:(id)arg2 storyItem:(id)arg3 inPartialModalNavigationController:(_Bool)arg4 loggingContext:(id)arg5 cameraLoggingContext:(id)arg6;
- (id)initWithMusicTapModelObject:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

