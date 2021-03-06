//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGImageView, IGTextButton, NSArray, UIButton, UILabel, UIVisualEffectView;
@protocol IGVideoCallEndOverlayViewDelegate;

@interface IGVideoCallEndOverlayView : UIView
{
    id <IGVideoCallEndOverlayViewDelegate> _delegate;
    UIView *_darkOverlay;
    UIVisualEffectView *_blurOverlay;
    UILabel *_endLabel;
    UILabel *_durationLabel;
    UIView *_participantView;
    UIButton *_goodButton;
    UIButton *_poorButton;
    UILabel *_feedbackLabel;
    UIView *_feedbackView;
    UIButton *_closeButton;
    _Bool _showFeedback;
    NSArray *_starButtons;
    UIView *_starRatingView;
    _Bool _showAvatarPromo;
    UIView *_promoView;
    IGImageView *_promoImageView;
    UILabel *_promoTitle;
    UILabel *_promoBody;
    IGTextButton *_promoButton;
}

- (void).cxx_destruct;
- (void)_avatarPromoButtonTapped:(id)arg1;
- (void)_starButtonTapped:(id)arg1;
- (void)_closeButtonTapped:(id)arg1;
- (void)presentViews:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 callDuration:(double)arg2 callType:(long long)arg3 participantView:(id)arg4 userInitiatedHangup:(_Bool)arg5 showFeedback:(_Bool)arg6 tapToDismiss:(_Bool)arg7 showAvatarPromo:(_Bool)arg8;

@end

