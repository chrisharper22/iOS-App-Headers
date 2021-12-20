//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class IGFormFieldPlaceholderView, NSString, UILabel, UIView;

@interface IGMultilineFormField : UITextView
{
    IGFormFieldPlaceholderView *_placeholderView;
    UIView *_bottomDivider;
    UILabel *_remainingCharactersLabel;
    _Bool _editing;
    _Bool _remainingCharactersLabelVisible;
    unsigned long long _formFieldState;
    _Bool _showSuccess;
    _Bool _showError;
    CDUnknownBlockType _inputValidator;
    NSString *_placeholder;
    unsigned long long _characterLimit;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long characterLimit; // @synthesize characterLimit=_characterLimit;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool showError; // @synthesize showError=_showError;
@property(nonatomic) _Bool showSuccess; // @synthesize showSuccess=_showSuccess;
@property(nonatomic) CDUnknownBlockType inputValidator; // @synthesize inputValidator=_inputValidator;
- (void)_validateInput:(id)arg1 animated:(_Bool)arg2;
- (void)_setFormFieldState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_resetValidationStateAnimated:(_Bool)arg1;
- (void)setShowError:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowSuccess:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setPlaceholderShowingError:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_toggleRemainingCharactersLabelVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_resizeRemainingCharactersLabel;
- (long long)_charactersRemaining:(id)arg1;
- (void)_updateCharactersRemainingCountAnimated:(_Bool)arg1;
- (void)_layOutPinnedViews;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

