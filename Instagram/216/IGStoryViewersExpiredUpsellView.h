//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol IGStoryViewersExpiredUpsellViewDelegate;

@interface IGStoryViewersExpiredUpsellView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIButton *_actionButton;
    long long _viewType;
    double _bottomInset;
    id <IGStoryViewersExpiredUpsellViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_actionTapped:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithType:(long long)arg1 reelTitle:(id)arg2 bottomInset:(double)arg3 delegate:(id)arg4;

@end

