//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGTVCreateFullscreenCellGradientOverlay, IGTVFullscreenHideVideoOverlayView, IGTVFullscreenLoadingView, IGTVFullscreenTapController, IGTVStaticLoadingView, IGTapButton, IGVideoCaptionView, UIButton, UIImageView;

@interface IGTVFullscreenBaseVideoView : UIView
{
    UIView *_backgroundView;
    UIView *_videoContainerView;
    UIView *_videoView;
    struct CGSize _aspectRatio;
    IGGradientView *_rewindGradientView;
    IGGradientView *_fastForwardGradientView;
    IGTVCreateFullscreenCellGradientOverlay *_overlayGradientView;
    UIView *_overlayContentView;
    UIView *_quickTapActionView;
    UIImageView *_quickTapActionImageView;
    double _cornerRadiusPresentationProgress;
    _Bool _isNonIGTVMedia;
    long long _playerMode;
    double _overlayAlpha;
    IGTVFullscreenTapController *_quickSkipController;
    IGTVStaticLoadingView *_staticView;
    IGTVFullscreenLoadingView *_loadingView;
    IGTVFullscreenHideVideoOverlayView *_hideVideoOverlayView;
    IGTapButton *_closeButton;
    IGTapButton *_enterLandscapeButton;
    UIButton *_blockedButton;
    IGVideoCaptionView *_videoCaptionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGVideoCaptionView *videoCaptionView; // @synthesize videoCaptionView=_videoCaptionView;
@property(readonly, nonatomic) UIButton *blockedButton; // @synthesize blockedButton=_blockedButton;
@property(readonly, nonatomic) IGTapButton *enterLandscapeButton; // @synthesize enterLandscapeButton=_enterLandscapeButton;
@property(readonly, nonatomic) IGTapButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) IGTVFullscreenHideVideoOverlayView *hideVideoOverlayView; // @synthesize hideVideoOverlayView=_hideVideoOverlayView;
@property(readonly, nonatomic) IGTVFullscreenLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) IGTVStaticLoadingView *staticView; // @synthesize staticView=_staticView;
@property(readonly, nonatomic) IGTVFullscreenTapController *quickSkipController; // @synthesize quickSkipController=_quickSkipController;
@property(nonatomic) double overlayAlpha; // @synthesize overlayAlpha=_overlayAlpha;
@property(nonatomic) long long playerMode; // @synthesize playerMode=_playerMode;
- (_Bool)_isLandscape;
- (void)layoutSubviews;
- (void)configureWithVideoView:(id)arg1 aspectRatio:(struct CGSize)arg2 playerMode:(long long)arg3 isNonIGTVMedia:(_Bool)arg4;
- (void)setCornerRadiusPresentationProgress:(double)arg1;
- (void)prepareForReuse;
- (id)initWithGradientConfig:(id)arg1;

@end

