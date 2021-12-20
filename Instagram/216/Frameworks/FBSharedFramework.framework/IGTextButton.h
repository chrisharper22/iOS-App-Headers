//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIActivityIndicatorView, UIFont, UIImageView, UILabel;

@interface IGTextButton : UIControl
{
    _Bool _hasDropShadow;
    NSString *_title;
    UILabel *_titleLabel;
    UIImageView *_backgroundView;
    UIActivityIndicatorView *_spinner;
    long long _style;
    double _customAlpha;
    _Bool _isLoading;
    _Bool _useDynamicSizing;
    _Bool _useBackgroundColorForSelectedState;
    _Bool _canToggle;
    _Bool _canWrap;
    _Bool _forceButtonAccessibilityTrait;
    _Bool _overrideTapGestureRecognizer;
    double _horizontalTextInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool overrideTapGestureRecognizer; // @synthesize overrideTapGestureRecognizer=_overrideTapGestureRecognizer;
@property(nonatomic) _Bool forceButtonAccessibilityTrait; // @synthesize forceButtonAccessibilityTrait=_forceButtonAccessibilityTrait;
@property(nonatomic) _Bool hasDropShadow; // @synthesize hasDropShadow=_hasDropShadow;
@property(nonatomic) _Bool canWrap; // @synthesize canWrap=_canWrap;
@property(nonatomic) double customAlpha; // @synthesize customAlpha=_customAlpha;
@property(nonatomic) _Bool canToggle; // @synthesize canToggle=_canToggle;
@property(nonatomic) _Bool useBackgroundColorForSelectedState; // @synthesize useBackgroundColorForSelectedState=_useBackgroundColorForSelectedState;
@property(nonatomic) _Bool useDynamicSizing; // @synthesize useDynamicSizing=_useDynamicSizing;
@property(nonatomic) double horizontalTextInset; // @synthesize horizontalTextInset=_horizontalTextInset;
@property(nonatomic) long long style; // @synthesize style=_style;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateAlpha;
- (void)_setLabelOnMediaDropShadow:(_Bool)arg1;
- (void)_setBackgroundOnMediaDropShadow:(_Bool)arg1;
- (void)_updateLabelTitle:(id)arg1;
- (void)_setupTitleLabelWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)titleLabel;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1;

@end

