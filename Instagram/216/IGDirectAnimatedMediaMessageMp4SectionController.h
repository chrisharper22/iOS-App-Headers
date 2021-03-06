//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDirectMessageSectionController.h"

#import "IGFNFVideoPlayerDelegate-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"

@class IGDirectAnimatedMediaMessageCell, IGDirectAnimatedMediaMessageViewModel, IGFNFVideoPlayer, NSString, UIView;

@interface IGDirectAnimatedMediaMessageMp4SectionController : IGDirectMessageSectionController <IGFNFVideoPlayerDelegate, IGListDisplayDelegate>
{
    IGFNFVideoPlayer *_videoPlayer;
    UIView *_videoView;
    double _downloadProgress;
    IGDirectAnimatedMediaMessageCell *_oldCell;
}

- (void).cxx_destruct;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (void)_configureVideoPlayerIfNeededWithSize:(struct CGSize)arg1;
- (void)_cleanupVideoPlayerIfNeeded;
- (id)_visibleCell;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) IGDirectAnimatedMediaMessageViewModel *viewModel; // @dynamic viewModel;

@end

