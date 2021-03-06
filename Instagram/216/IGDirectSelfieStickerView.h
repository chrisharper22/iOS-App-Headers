//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGFNFVideoPlayerDelegate-Protocol.h"

@class IGDirectSelfieStickerModel, IGFNFVideoPlayer, IGImageView, IGVideoPlayerManager, NSString;

@interface IGDirectSelfieStickerView : UIView <IGFNFVideoPlayerDelegate>
{
    IGVideoPlayerManager *_videoPlayerManager;
    IGFNFVideoPlayer *_videoPlayer;
    IGDirectSelfieStickerModel *_video;
    UIView *_videoView;
    double _selfieStickerDiameter;
    IGImageView *_imageView;
    _Bool _enableSizeAwareManager;
    _Bool _playing;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
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
- (void)pause;
- (void)play;
- (void)setVideo:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithVideoPlayerManager:(id)arg1 selfieStickerDiameter:(double)arg2 enableSizeAwareManager:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

