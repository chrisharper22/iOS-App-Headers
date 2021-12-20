//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGNUXLayoutSpec, IGWelcomeViewBackgroundView, UIButton, UIImageView, UILabel;

@interface IGNUXInterstitialView : UIView
{
    IGNUXLayoutSpec *_layoutSpec;
    UIButton *_actionButton;
    IGCoreTextView *_descriptionLabel;
    IGWelcomeViewBackgroundView *_redesignedBackgroundView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    IGCoreTextView *_subTitleLabel;
    IGCoreTextView *_subTitleLink;
    UIButton *_skipTextButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *skipTextButton; // @synthesize skipTextButton=_skipTextButton;
@property(retain, nonatomic) IGCoreTextView *subTitleLink; // @synthesize subTitleLink=_subTitleLink;
@property(retain, nonatomic) IGCoreTextView *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGWelcomeViewBackgroundView *redesignedBackgroundView; // @synthesize redesignedBackgroundView=_redesignedBackgroundView;
@property(retain, nonatomic) IGCoreTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)toggleIconViewAccessibility:(_Bool)arg1;
- (void)configureViewWithIconImage:(id)arg1 titleText:(id)arg2 subTitleText:(id)arg3 buttonText:(id)arg4 buttonIcon:(id)arg5 descriptionText:(id)arg6;
@property(readonly, nonatomic) UIButton *skipButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutSpec:(id)arg2;

@end

