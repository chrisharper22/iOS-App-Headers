//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, IGPassthroughLabel, IGUnreadBubbleViewConfig;

@interface IGUnreadBubbleView : UIView
{
    IGUnreadBubbleViewConfig *_config;
    long long _unreadCount;
    IGPassthroughLabel *_label;
    double _labelOffsetX;
    CAGradientLayer *_gradient;
}

- (void).cxx_destruct;
- (void)setTitleLabelAlpha:(double)arg1;
- (void)setUnreadCount:(long long)arg1;
- (void)configureWithConfig:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)arg1;

@end
