//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGFixedFrameLayout, IGImageView, IGStackLayout, UILabel;

@interface IGInfoCenterShareView : UIView
{
    IGStackLayout *_metadataLayout;
    IGImageView *_backgroundImageView;
    IGImageView *_subtitleImageView;
    UILabel *_titleLabel;
    IGFixedFrameLayout *_backgroundImageViewLayout;
    IGFixedFrameLayout *_subtitleImageViewLayout;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
- (id)_imageSpecifierForURL:(id)arg1;
- (void)_configureWithTitle:(id)arg1 configuration:(id)arg2;
- (id)_setupImageView;
- (void)configureWithModel:(id)arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

