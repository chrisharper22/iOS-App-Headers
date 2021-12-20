//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGLiveStackedWaveAvatarView, IGMediaTextButton, IGUser;
@protocol IGLiveWaveViewerOverlayViewDelegate;

@interface IGLiveWaveViewerOverlayView : UIView
{
    UIView *_darkBackgroundView;
    IGLiveStackedWaveAvatarView *_stackedWaveAvatarView;
    IGMediaTextButton *_waveBackButton;
    IGUser *_waver;
    _Bool _waveBackEnabled;
    id <IGLiveWaveViewerOverlayViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveWaveViewerOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)_waveBackButtonTapped:(id)arg1;
- (id)_scaleAnimationWithSpringFromScale:(double)arg1 toScale:(double)arg2 beginTime:(double)arg3;
- (void)animateWave;
- (void)configureWaveOverlayWithUser:(id)arg1 waveBackEnabled:(_Bool)arg2 isWaveBack:(_Bool)arg3 module:(id)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
