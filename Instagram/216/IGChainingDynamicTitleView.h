//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IGChainingDynamicTitleView : UIView
{
    UILabel *_firstItemLabel;
    UILabel *_otherItemLabel;
    unsigned long long _currentState;
    unsigned long long _queuedState;
    _Bool _isAnimatingState;
}

- (void).cxx_destruct;
- (void)_updateLayoutForCurrentState;
- (id)_setupLabelWithTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateTitleState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithFirstItemTitle:(id)arg1 otherItemTitle:(id)arg2;

@end

