//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IGCoWatchPrivateMediaView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    double _titleLabelFontSize;
    double _subtitleLabelFontSize;
    double _cachedDisplayRatio;
}

- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

