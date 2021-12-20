//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCircularProgressView, IGTVVideoControlsView, IGVideoPlaybackView;
@protocol IGTVAspectRatioPickerViewDelegate;

@interface IGTVAspectRatioPickerView : UIView
{
    UIView *_playerControlsSeparatorView;
    id <IGTVAspectRatioPickerViewDelegate> _delegate;
    IGVideoPlaybackView *_previewVideoPlaybackView;
    UIView *_playerControlsContainerView;
    IGTVVideoControlsView *_playbackControlsView;
    UIView *_loadingContainerView;
    IGCircularProgressView *_loadingProgressView;
    UIView *_aspectRatioTransitionSnapshotView;
    struct CGSize _aspectRatio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *aspectRatioTransitionSnapshotView; // @synthesize aspectRatioTransitionSnapshotView=_aspectRatioTransitionSnapshotView;
@property(readonly, nonatomic) IGCircularProgressView *loadingProgressView; // @synthesize loadingProgressView=_loadingProgressView;
@property(readonly, nonatomic) UIView *loadingContainerView; // @synthesize loadingContainerView=_loadingContainerView;
@property(readonly, nonatomic) IGTVVideoControlsView *playbackControlsView; // @synthesize playbackControlsView=_playbackControlsView;
@property(readonly, nonatomic) UIView *playerControlsContainerView; // @synthesize playerControlsContainerView=_playerControlsContainerView;
@property(readonly, nonatomic) IGVideoPlaybackView *previewVideoPlaybackView; // @synthesize previewVideoPlaybackView=_previewVideoPlaybackView;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) __weak id <IGTVAspectRatioPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animateFadeOutSnapshotAndFadeInVideoView:(CDUnknownBlockType)arg1;
- (void)updateAspectRatioTransitionSnapshotView;
- (void)resetPreviewVideoPlaybackView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 initialAspectRatio:(struct CGSize)arg2 delegate:(id)arg3;

@end
