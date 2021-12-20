//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class IGBlurredImageView, IGCenterLayout, UIImageView, UILabel, UIView;

@interface IGMediaOverlayIconAndTextView : UIVisualEffectView
{
    IGBlurredImageView *_blurredImageView;
    UIView *_tintView;
    UIImageView *_hiddenIcon;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    IGCenterLayout *_contentCenterLayout;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithMediaOverlayModel:(id)arg1 photoForBlurView:(id)arg2;
- (id)_createHiddenIcon;
- (id)_createDescriptionLabel;
- (id)_createTitleLabel;
- (id)_createTintView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

