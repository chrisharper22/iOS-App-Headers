//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGStackLayout, UIImageView, UILabel;

@interface IGVotingInfoCenterShareView : UIView
{
    IGGradientView *_backgroundGradientView;
    IGStackLayout *_metadataLayout;
    IGStackLayout *_layout;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
- (void)_configureWithTitle:(id)arg1 subtitle:(id)arg2 configuration:(id)arg3;
- (void)configureWithModel:(id)arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

