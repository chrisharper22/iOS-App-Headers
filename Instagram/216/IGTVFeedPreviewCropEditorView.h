//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCameraGuideView, IGTVVideoControlsView, IGVideoPlaybackView, UILabel, UIScrollView;

@interface IGTVFeedPreviewCropEditorView : UIView
{
    IGCameraGuideView *_guideView;
    UIView *_topBlockingView;
    UIView *_playerControlsContainerView;
    UIView *_playerControlsSeparatorView;
    UIView *_bottomBlockingView;
    UILabel *_instructionLabel;
    double _feedPreviewDuration;
    double _videoAspectRatio;
    UIScrollView *_scrollView;
    IGVideoPlaybackView *_videoPlaybackView;
    IGTVVideoControlsView *_playbackControlsView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTVVideoControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property(readonly, nonatomic) IGVideoPlaybackView *videoPlaybackView; // @synthesize videoPlaybackView=_videoPlaybackView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)showCutOffPortionsOfVideo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFeedPreviewDuration:(double)arg1 delegate:(id)arg2 videoAspectRatio:(double)arg3 shouldCleanUpCurrentOpenGLContext:(_Bool)arg4;

@end

