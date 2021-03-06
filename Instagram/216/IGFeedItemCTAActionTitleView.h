//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGFeedItemCTAButtonStateConfigurable-Protocol.h"

@class IGALTapGestureRecognizer, NSString, UIColor, UIImageView, UILabel;
@protocol IGFeedItemCTAActionTitleViewDelegate;

@interface IGFeedItemCTAActionTitleView : UIView <IGFeedItemCTAButtonStateConfigurable>
{
    UILabel *_titleLabel;
    UILabel *_secondaryTextLabel;
    UILabel *_dotSeparatorLabel;
    UIView *_bottomHairline;
    UIImageView *_rightAccessoryImageView;
    UIColor *_rightAccessoryImageDefaultColor;
    IGALTapGestureRecognizer *_tapGestureRecognizer;
    id <IGFeedItemCTAActionTitleViewDelegate> _delegate;
    _Bool _enableAutomatedLogging;
    unsigned long long _buttonState;
    UIColor *_filledInStateBackgroundColor;
    UIColor *_defaultCTATextColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableAutomatedLogging; // @synthesize enableAutomatedLogging=_enableAutomatedLogging;
@property(copy, nonatomic) UIColor *defaultCTATextColor; // @synthesize defaultCTATextColor=_defaultCTATextColor;
@property(copy, nonatomic) UIColor *filledInStateBackgroundColor; // @synthesize filledInStateBackgroundColor=_filledInStateBackgroundColor;
@property(nonatomic) unsigned long long buttonState; // @synthesize buttonState=_buttonState;
- (_Bool)_isInFilledState;
- (void)_didTapView:(id)arg1;
- (void)_configureTextVisualForCTAButtonState:(unsigned long long)arg1;
- (void)_configureButtonVisualsForCTAButtonState:(unsigned long long)arg1;
- (void)_configureTextAndButtonVisual:(unsigned long long)arg1;
- (id)_iconImageTintColorDefaultColor;
- (void)_animateToButtonState:(unsigned long long)arg1 duration:(double)arg2;
- (void)setButtonState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)isCTATitleViewVisible;
- (void)updateCTAHairlineViewColor:(id)arg1;
- (void)updateCTAAccessoryViewTintColor:(id)arg1;
- (void)updateCTATextColor:(id)arg1;
- (void)resetTextForReuse;
- (void)configureWithTitleActionText:(id)arg1 secondaryActionTextList:(id)arg2;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

