//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGTapButton, UILabel;
@protocol IGInsightsUnitHeaderViewDelegate;

@interface IGInsightsUnitHeaderView : UIView
{
    UILabel *_titleLabel;
    IGTapButton *_infoButton;
    long long _style;
    id <IGInsightsUnitHeaderViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGInsightsUnitHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapInfoButton;
- (void)configureWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutInfoButton;
- (void)_layoutTitleLabel;
- (void)layoutSubviews;
- (id)init;

@end
