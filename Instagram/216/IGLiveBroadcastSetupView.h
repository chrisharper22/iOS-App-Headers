//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCountdownView, IGTapButton, UILabel;
@protocol IGLiveBroadcastSetupViewDelegate;

@interface IGLiveBroadcastSetupView : UIView
{
    UILabel *_statusLabel;
    UILabel *_startingLabel;
    IGTapButton *_cancelButton;
    IGCountdownView *_countdownView;
    UIView *_darkenView;
    id <IGLiveBroadcastSetupViewDelegate> _delegate;
}

+ (id)_createTextLabel;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveBroadcastSetupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cleanupFadingToggleAnimation;
- (void)_cancelButtonTapped;
- (void)_doubleTapped:(id)arg1;
- (void)endRingAnimationAndHideIfNeeded;
- (void)startRingAnimationIfNeeded;
- (void)setCount:(long long)arg1;
- (void)layoutSubviews;
- (void)enterStartingStateAnimated:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isPracticeMode:(_Bool)arg2;

@end

