//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGBottomButtonsView, IGCoreTextView, IGStandardizedNUXLayoutSpec, IGWelcomeViewBackgroundView, UIImageView, UILabel;
@protocol IGStandardizedNUXInterstitialViewDelegate;

@interface IGStandardizedNUXInterstitialView : UIView
{
    IGStandardizedNUXLayoutSpec *_layoutSpec;
    id <IGStandardizedNUXInterstitialViewDelegate> _delegate;
    IGCoreTextView *_descriptionLabel;
    IGCoreTextView *_subTitleLabel;
    IGWelcomeViewBackgroundView *_backgroundView;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    IGBottomButtonsView *_bottomButtonsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGBottomButtonsView *bottomButtonsView; // @synthesize bottomButtonsView=_bottomButtonsView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IGWelcomeViewBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGCoreTextView *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) IGCoreTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak id <IGStandardizedNUXInterstitialViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapSkipButton;
- (void)_didTapPrimaryButton;
- (void)toggleIconViewAccessibility:(_Bool)arg1;
- (void)configureWithTitleText:(id)arg1 subTitleText:(id)arg2 descriptionText:(id)arg3 iconImage:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2 primaryButtonTitle:(id)arg3 secondaryButtonTitle:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2 primaryButtonTitle:(id)arg3;

@end

