//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface IGTextField : UITextField
{
    UIView *_underlineView;
    UILabel *_leftLabel;
    _Bool _isVerifying;
    _Bool _hideCursor;
    _Bool _showUnderline;
    _Bool _shouldHoldFirstResponder;
    int _leftLabelNumberOfLines;
    UIImage *_icon;
    long long _validity;
    double _iconSpacing;
    long long _leftViewVerticalLayoutType;
    UIColor *_caretOverlayTintColor;
    UIView *_caretOverlayView;
    UIImageView *_iconImageView;
    struct UIEdgeInsets _insets;
}

+ (id)_iconTintColorForValidity:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *caretOverlayView; // @synthesize caretOverlayView=_caretOverlayView;
@property(nonatomic) _Bool shouldHoldFirstResponder; // @synthesize shouldHoldFirstResponder=_shouldHoldFirstResponder;
@property(retain, nonatomic) UIColor *caretOverlayTintColor; // @synthesize caretOverlayTintColor=_caretOverlayTintColor;
@property(nonatomic) long long leftViewVerticalLayoutType; // @synthesize leftViewVerticalLayoutType=_leftViewVerticalLayoutType;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double iconSpacing; // @synthesize iconSpacing=_iconSpacing;
@property(nonatomic) int leftLabelNumberOfLines; // @synthesize leftLabelNumberOfLines=_leftLabelNumberOfLines;
@property(nonatomic) _Bool showUnderline; // @synthesize showUnderline=_showUnderline;
@property(nonatomic) _Bool hideCursor; // @synthesize hideCursor=_hideCursor;
@property(nonatomic) _Bool isVerifying; // @synthesize isVerifying=_isVerifying;
@property(nonatomic) long long validity; // @synthesize validity=_validity;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void)wiggleAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)canResignFirstResponder;
- (void)deleteBackward;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (double)_rightTextPadding;
- (double)_leftTextPadding;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (void)_didChange;
@property(copy, nonatomic) NSString *labelText;
- (void)_layoutUnderlineView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPlaceholder:(id)arg1;
- (id)init;

@end

