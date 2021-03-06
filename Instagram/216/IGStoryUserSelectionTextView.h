//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class IGTapButton, NSString, UIColor, UITextField, UIVisualEffectView;
@protocol IGStoryUserSelectionTextViewDelegate;

@interface IGStoryUserSelectionTextView : UIView <UITextFieldDelegate>
{
    UITextField *_searchField;
    IGTapButton *_clearButton;
    UIVisualEffectView *_blurredBackgroundView;
    _Bool _hasInputAccessoryView;
    _Bool _clearButtonVisible;
    id <IGStoryUserSelectionTextViewDelegate> _delegate;
    NSString *_currentText;
    UIColor *_textColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *currentText; // @synthesize currentText=_currentText;
@property(nonatomic) __weak id <IGStoryUserSelectionTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapClearButton;
- (void)_setClearButtonVisible:(_Bool)arg1;
- (void)_searchFieldDidChange;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(retain, nonatomic) UIView *inputAccessoryView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

