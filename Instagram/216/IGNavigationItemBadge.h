//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGNavigationItemBadge : UIView
{
    UIImageView *_backgroundImageView;
    unsigned long long _digitCap;
    _Bool _badgeCountIsCapped;
    UILabel *_badgeCountLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *badgeCountLabel; // @synthesize badgeCountLabel=_badgeCountLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBadgeCount:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 digitCap:(unsigned long long)arg2;

@end

