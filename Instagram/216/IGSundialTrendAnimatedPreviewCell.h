//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGSundialTrendPreviewCell.h"

#import "IGFNFVideoPlayerDelegate-Protocol.h"

@class IGFNFVideoPlayer, IGVideo, IGVideoPlayerManager, NSString, UIView;
@protocol IGUserLauncherSet;

@interface IGSundialTrendAnimatedPreviewCell : IGSundialTrendPreviewCell <IGFNFVideoPlayerDelegate>
{
    IGVideo *_video;
    IGVideoPlayerManager *_videoPlayerManager;
    double _loopDuration;
    id <IGUserLauncherSet> _launcherSet;
    UIView *_mediaContainer;
    IGFNFVideoPlayer *_videoPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGFNFVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(readonly, nonatomic) UIView *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
- (id)_videoConfig;
- (void)_requeueVideoPlayerIfNeeded;
- (void)stopPlayback;
- (void)pausePlayback;
- (void)startPlayback;
- (void)preparePlayback;
- (void)configureWithVideo:(id)arg1 videoPlayerManager:(id)arg2 loopDuration:(double)arg3 launcherSet:(id)arg4;
- (void)videoPlayerDidFinishSeeking:(id)arg1;
- (void)videoPlayer:(id)arg1 didBeginSeekingToTime:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(double)arg2;
- (void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(double)arg2;
- (void)videoPlayerDidPause:(id)arg1 reason:(long long)arg2;
- (void)videoPlayer:(id)arg1 didGenerateWarningWithError:(id)arg2;
- (void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
- (void)videoPlayerBufferEmpty:(id)arg1;
- (void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
- (void)videoPlayerDidLoop:(id)arg1;
- (void)videoPlayerDidPlayToEnd:(id)arg1;
- (void)videoPlayerDidPlay:(id)arg1;
- (void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 playbackReason:(long long)arg3;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
