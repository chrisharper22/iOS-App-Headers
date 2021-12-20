//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGRegistrationBackgroundView, UIButton, UIImageView, UILabel;

@interface IGWelcomeViewBackgroundView : UIView
{
    IGRegistrationBackgroundView *_backgroundView;
    UIImageView *_brandView;
    UILabel *_brandValuePropositionLabel;
    UIView *_canvasView;
    UIView *_footerViewSeparator;
    UIView *_footerView;
    UIButton *_actionButton;
    UILabel *_textLabel;
    long long _viewType;
    struct CGPoint _brandViewOrigin;
    struct CGRect _canvasViewOriginalFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect canvasViewOriginalFrame; // @synthesize canvasViewOriginalFrame=_canvasViewOriginalFrame;
@property(nonatomic) struct CGPoint brandViewOrigin; // @synthesize brandViewOrigin=_brandViewOrigin;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *footerViewSeparator; // @synthesize footerViewSeparator=_footerViewSeparator;
@property(retain, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UILabel *brandValuePropositionLabel; // @synthesize brandValuePropositionLabel=_brandValuePropositionLabel;
@property(retain, nonatomic) UIImageView *brandView; // @synthesize brandView=_brandView;
@property(retain, nonatomic) IGRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (double)footerHeight;
- (struct CGRect)desiredCanvasViewFrame;
- (void)keyboardWillShowDuration:(double)arg1 curve:(long long)arg2;
- (void)keyboardWillHideDuration:(double)arg1 curve:(long long)arg2;
- (_Bool)isTouchOnLoginButton:(struct CGPoint)arg1;
@property(readonly, nonatomic) UIButton *signUpButton;
@property(readonly, nonatomic) UIButton *loginButton;
- (void)_layoutFooterView;
- (id)_createFooterViewWithTextLabel:(id)arg1 actionButton:(id)arg2;
- (id)_createFooterViewSeparator;
- (void)_setupSignupFooterView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(long long)arg2;

@end
