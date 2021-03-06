//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class FBPayPINLoadingCircleView, NSNumber, NSString, UIImageView, UILabel, UITextField;
@protocol FBPaySecurityTextFieldViewDataSource, FBPaySecurityTextFieldViewDelegate;

@interface FBPaySecurityTextFieldView : UIView <UITextFieldDelegate>
{
    UILabel *_topLabel;
    UITextField *_textField;
    UIImageView *_iconImageView;
    FBPayPINLoadingCircleView *_loadingView;
    UIView *_textFieldUnderlineView;
    UILabel *_errorPromptLabel;
    long long _currentStep;
    _Bool _iconHidden;
    id <FBPaySecurityTextFieldViewDataSource> _dataSource;
    id <FBPaySecurityTextFieldViewDelegate> _delegate;
    NSNumber *_maxNumberOfCharacters;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool iconHidden; // @synthesize iconHidden=_iconHidden;
@property(nonatomic) __weak NSNumber *maxNumberOfCharacters; // @synthesize maxNumberOfCharacters=_maxNumberOfCharacters;
@property(nonatomic) __weak id <FBPaySecurityTextFieldViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FBPaySecurityTextFieldViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)finishLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)startLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideErrorMessage;
- (void)showError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resetTextField;
- (void)_resetTextFieldIfNeeded;
- (void)reloadView;
- (void)setKeyboardType:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *text;
- (id)_constraintsForErrorPromptLabel;
- (id)_constraintsForUnderlineView;
- (id)_constraintsForLoadingView;
- (id)_constraintsForIconImageView;
- (id)_constraintsForTextField;
- (id)_constraintsForTopLabel;
- (void)_setupConstraints;
- (void)_setupErrorPrompt;
- (void)_setupUnderlineView;
- (void)_setupTextField;
- (void)_setupLoadingView;
- (void)_setupLoadLockIcon;
- (void)_setupLeftIconImageView;
- (void)_setupTopLabel;
- (void)_setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

