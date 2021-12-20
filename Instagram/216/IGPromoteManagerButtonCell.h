//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface IGPromoteManagerButtonCell : UICollectionViewCell
{
    UILabel *_buttonTextLabel;
    UIImageView *_chevronImageView;
    UIView *_blueDot;
    UILabel *_unreadCountLabel;
}

- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_showUnreadCount:(id)arg1 showBlueDotForUnreadCount:(_Bool)arg2;
- (void)_setUpUnreadCountAndBlueDotIndicator;
- (void)_setUpChevronimageView;
- (void)_setUpButtonTextLabel;
- (void)_setUpViews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

