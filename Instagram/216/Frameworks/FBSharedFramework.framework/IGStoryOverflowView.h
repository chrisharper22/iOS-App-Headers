//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIVisualEffectView;

@interface IGStoryOverflowView : UIView
{
    UIView *_blurDarkeningView;
    UILabel *_overflowLabel;
    double _leftInset;
    double _cornerRadius;
    _Bool _isPillStyle;
    long long _overflowCount;
    UIVisualEffectView *_overflowBlurView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIVisualEffectView *overflowBlurView; // @synthesize overflowBlurView=_overflowBlurView;
@property(nonatomic) long long overflowCount; // @synthesize overflowCount=_overflowCount;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCornerRadius:(double)arg1 leftInset:(double)arg2 blurDarkeningColor:(id)arg3 textColor:(id)arg4 isPillStyle:(_Bool)arg5;

@end
