//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, IGLabel, UIColor, UIView;

@interface IGLabelSupplementaryView : UICollectionViewCell
{
    IGLabel *_textLabel;
    UIColor *_separatorColor;
    CALayer *_topSeparator;
    CALayer *_bottomSeparator;
    UIView *_rightView;
    UIView *_newRightView;
    unsigned long long _rightViewAlignment;
    struct UIEdgeInsets _labelViewInsets;
    struct UIEdgeInsets _separatorInsets;
}

- (void).cxx_destruct;
- (void)_updateSeparatorColor;
- (void)_updateTextLabelWithConfig:(id)arg1;
- (id)accessibilityElements;
- (void)_applyConfig:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

