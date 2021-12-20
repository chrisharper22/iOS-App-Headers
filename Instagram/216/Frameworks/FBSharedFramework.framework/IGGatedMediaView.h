//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class IGBlurredImageView, IGTapButton, UIImageView, UILabel, UIView;
@protocol IGGatedMediaViewDelegate;

@interface IGGatedMediaView : UIVisualEffectView
{
    IGBlurredImageView *_blurredImageView;
    UIView *_tintView;
    UIImageView *_hiddenIcon;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_lineView;
    IGTapButton *_bottomOrLeftButton;
    IGTapButton *_rightButton;
    IGTapButton *_descriptionCTAButton;
    unsigned long long _numBottomButtons;
    id <IGGatedMediaViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGatedMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setButtonsHiddenWithBottomButtonOneHidden:(_Bool)arg1 bottomButtonTwoHidden:(_Bool)arg2 descriptionCTAButtonHidden:(_Bool)arg3;
- (void)layoutSubviews;
- (void)updateWithGating:(id)arg1 photoForBlurView:(id)arg2;
- (void)_didTapButton:(id)arg1;
- (id)_createCTAButtonWithSelector:(SEL)arg1;
- (id)_createBottomButtonWithSelector:(SEL)arg1;
- (id)_createLineView;
- (id)_createHiddenIcon;
- (id)_createDescriptionLabel;
- (id)_createTitleLabel;
- (id)_createTintView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

