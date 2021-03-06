//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGBlurredImageView, IGDirectMessageBlurredImageViewModel, UIImageView, UILabel;

@interface IGDirectMessageBlurredImageView : UIView
{
    IGDirectMessageBlurredImageViewModel *_viewModel;
    UIView *_concealView;
    IGBlurredImageView *_blurredBackgroundImageView;
    UILabel *_label;
    UIImageView *_overlayIconImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *overlayIconImageView; // @synthesize overlayIconImageView=_overlayIconImageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) IGBlurredImageView *blurredBackgroundImageView; // @synthesize blurredBackgroundImageView=_blurredBackgroundImageView;
@property(readonly, nonatomic) UIView *concealView; // @synthesize concealView=_concealView;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

