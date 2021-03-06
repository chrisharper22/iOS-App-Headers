//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UILabel;
@protocol IGInsightsInlineMetricViewDelegate;

@interface IGInsightsInlineMetricView : UIView
{
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UILabel *_seeAllLabel;
    IGTapButton *_infoButton;
    id <IGInsightsInlineMetricViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)_didTapInfoButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutSeeAllLabel;
- (void)_layoutInfoButton;
- (void)_layoutValueLabel;
- (void)_layoutTitleLabel;
- (void)layoutSubviews;
- (void)_updateLabelsWithStyle:(long long)arg1;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

