//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface IGShoppingCartBarButtonControl : UIControl
{
    UIImageView *_iconImageView;
    UILabel *_badgeLabel;
    long long _cartButtonType;
    unsigned long long _badgeCount;
    long long _sizeType;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(nonatomic) long long sizeType; // @synthesize sizeType=_sizeType;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)_applySizeType;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)setTintColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 cartButtonType:(long long)arg2;

@end

