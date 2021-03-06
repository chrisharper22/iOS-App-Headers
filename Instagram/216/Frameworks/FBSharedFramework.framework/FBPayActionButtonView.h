//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UIButton, UIColor, UIFont;
@protocol FBPayViewStyleConfiguring;

@interface FBPayActionButtonView : UIView
{
    UIView *_topSeparator;
    UIButton *_button;
    NSString *_title;
    UIFont *_titleFont;
    long long _titleAlignment;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    _Bool _showTopSeparator;
    _Bool _showPressedState;
    _Bool _isEnabled;
    CDUnknownBlockType _tapAction;
    id <FBPayViewStyleConfiguring> _viewStyleConfiguration;
    UIActivityIndicatorView *_activityIndicatorView;
}

- (void).cxx_destruct;
- (void)_didTapButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dismissSystemSpinnerOnButton;
- (void)showSystemSpinnerOnButton;
- (void)_setupButton;
- (void)_setupTopSeparator;
- (void)_setupViews;
- (id)initWithTitle:(id)arg1 titleFont:(id)arg2 titleAlignment:(long long)arg3 backgroundColor:(id)arg4 titleColor:(id)arg5 showTopSeparator:(_Bool)arg6 showPressedState:(_Bool)arg7 tapAction:(CDUnknownBlockType)arg8;

@end

