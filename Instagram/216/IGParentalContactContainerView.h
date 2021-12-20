//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IGCoreTextView, IGParentalConsentMultiTextView, IGTextButton, IGTextFieldWithErrorMessage, NSString, UIScrollView;
@protocol IGParentalContactContainerViewDelegate;

@interface IGParentalContactContainerView : UIView <UIGestureRecognizerDelegate, UITextFieldDelegate>
{
    UIScrollView *_contentView;
    IGCoreTextView *_titleView;
    IGParentalConsentMultiTextView *_textView;
    IGTextFieldWithErrorMessage *_emailTextField;
    IGTextButton *_submitButton;
    UIView *_separatorView;
    id <IGParentalContactContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGParentalContactContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_textDidChange;
- (void)_dismissKeyboard;
- (void)_submitButtonTapped;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)adjustViewWithKeyboardFrame:(struct CGRect)arg1 duration:(double)arg2;
- (void)showInlineErrorMessage:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

