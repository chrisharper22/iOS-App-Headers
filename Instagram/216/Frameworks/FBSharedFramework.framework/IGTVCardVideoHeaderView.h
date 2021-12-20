//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGTVCardVideoHeaderAccessory, IGTVProgressScrubber, IGTVSeriesTagView, UIImageView;

@interface IGTVCardVideoHeaderView : UIView
{
    IGTVCardVideoHeaderAccessory *_leftAccessory;
    IGTVCardVideoHeaderAccessory *_rightAccessory;
    IGGradientView *_gradientView;
    IGTVSeriesTagView *_seriesTagView;
    UIImageView *_checkImageView;
    UIImageView *_shoppingCartImageView;
    IGTVProgressScrubber *_progressView;
}

- (void).cxx_destruct;
- (void)setGradientAlpha:(double)arg1;
- (void)configureWithLeftAccessory:(id)arg1 rightAccessory:(id)arg2;
- (void)layoutSubviews;
- (id)initWithSeriesTagPreferredLength:(long long)arg1;

@end
