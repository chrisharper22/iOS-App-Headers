//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGFNFVideoPlayerDelegate-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"
#import "IGShoppingPDPLightboxMediaCellDelegate-Protocol.h"

@class IGFNFVideoPlayer, IGShoppingPDPLightboxProductVideoViewModel, IGUserSession, NSString;
@protocol IGShoppingPDPLightboxProductVideoSectionControllerDelegate;

@interface IGShoppingPDPLightboxProductVideoSectionController : IGListSectionController <IGFNFVideoPlayerDelegate, IGListDisplayDelegate, IGShoppingPDPLightboxMediaCellDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGShoppingPDPLightboxProductVideoViewModel *_viewModel;
    _Bool _audioEnabled;
    IGFNFVideoPlayer *_videoPlayer;
    id <IGShoppingPDPLightboxProductVideoSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPLightboxProductVideoSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(retain, nonatomic) IGFNFVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void)_setUpVideoViews;
- (void)_loadVideoIfNeeded;
- (id)_visibleCell;
- (void)shoppingPDPLightboxMediaCell:(id)arg1 didSetAudioEnabled:(_Bool)arg2;
- (void)shoppingPDPLightboxMediaCell:(id)arg1 didTapViewMediaButton:(id)arg2;
- (void)shoppingPDPLightboxMediaCell:(id)arg1 didTapAttributionButton:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)_tearDownVideoPlayer;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

