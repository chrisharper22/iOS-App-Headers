//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, IGDirectGradientView, UIBezierPath, UIImageView, UILabel, UIView;

@interface IGVideoCallRoomInboxHeaderView : UIControl
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_labelsContainerView;
    IGDirectGradientView *_gradientView;
    UIImageView *_linkImageView;
    UIImageView *_chevronImageView;
    UIView *_separator;
    CAShapeLayer *_circularMask;
    UIBezierPath *_circularPath;
    double _cachedAvailableWidthForLabels;
    double _cachedTitleHeight;
    double _cachedSubtitleHeight;
    _Bool _useMonochromeIcons;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithMonochromeIcons:(_Bool)arg1 isPanoUIRefreshOn:(_Bool)arg2;

@end

