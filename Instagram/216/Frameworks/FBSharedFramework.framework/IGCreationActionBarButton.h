//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, UIColor, UIView, UIVisualEffectView;

@interface IGCreationActionBarButton : UIButton
{
    NSMutableDictionary *_backgroundColorsForControlStates;
    UIView *_accessoryView;
    struct CGSize _accessoryViewSize;
    UIVisualEffectView *_backgroundBlurView;
    UIColor *_tintColorOverride;
    _Bool _useBackgroundBlur;
    _Bool _automaticallyInvertUserInterfaceStyleWhenSelected;
    unsigned long long _userInterfaceStyle;
    double _labelEdgePaddingOffset;
}

+ (id)textWithChevronButton:(id)arg1;
+ (id)saveButton;
+ (id)arrowNextButton;
- (void).cxx_destruct;
@property(nonatomic) double labelEdgePaddingOffset; // @synthesize labelEdgePaddingOffset=_labelEdgePaddingOffset;
@property(nonatomic) _Bool automaticallyInvertUserInterfaceStyleWhenSelected; // @synthesize automaticallyInvertUserInterfaceStyleWhenSelected=_automaticallyInvertUserInterfaceStyleWhenSelected;
- (void)applyOverrideTintAndTitleColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_fireHapticFeedback;
- (id)_resolveColor:(id)arg1;
- (unsigned long long)_resolveUserInterfaceStyle;
- (void)_configureColors;
- (void)_getLeftInset:(double *)arg1 rightInset:(double *)arg2;
- (void)setAccessoryView:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) unsigned long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
- (void)setHapticFeedbackEnabled:(_Bool)arg1;
@property(nonatomic) _Bool useBackgroundBlur; // @synthesize useBackgroundBlur=_useBackgroundBlur;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)_addHighlightAnimationWithPropertyNamed:(id)arg1 toValue:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

