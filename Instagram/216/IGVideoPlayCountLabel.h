//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGVideoPlayCountLabel : UIView
{
    UIImageView *_iconView;
    UILabel *_label;
    _Bool _shouldHidePlayCount;
    long long _playCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldHidePlayCount; // @synthesize shouldHidePlayCount=_shouldHidePlayCount;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
