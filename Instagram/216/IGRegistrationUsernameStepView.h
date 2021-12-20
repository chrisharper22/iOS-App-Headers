//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAccessFooterViewDelegate-Protocol.h"

@class IGAccessFooterView, IGRegistrationBackgroundView, IGRegistrationNextButton, IGRegistrationUsernameField, IGRegistrationUsernameScrollView, IGRegistrationUsernameViewController, NSString, UIButton, UILabel;

@interface IGRegistrationUsernameStepView : UIView <IGAccessFooterViewDelegate>
{
    UIButton *_backButton;
    UIButton *_dismissButton;
    IGAccessFooterView *_footerView;
    IGRegistrationUsernameScrollView *_usernameScrollView;
    IGRegistrationBackgroundView *_backgroundView;
    IGRegistrationUsernameViewController *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGRegistrationUsernameViewController *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGRegistrationUsernameScrollView *usernameScrollView; // @synthesize usernameScrollView=_usernameScrollView;
- (void)accessFooterViewDidTapSecondaryButton:(id)arg1;
- (void)accessFooterViewDidTapPrimaryButton:(id)arg1;
- (void)hideUsernameSuggestions;
- (void)showUsernameSuggestions:(id)arg1 forUsername:(id)arg2;
- (void)hideTermView;
- (void)hideInlineError;
- (void)showInlineError:(id)arg1;
@property(readonly, nonatomic) UIButton *refreshButton;
@property(readonly, nonatomic) IGRegistrationNextButton *nextButton;
@property(readonly, nonatomic) IGRegistrationUsernameField *usernameField;
@property(readonly, nonatomic) UILabel *usernameDescriptionLabel;
@property(readonly, nonatomic) UILabel *usernameLabel;
- (double)nextButtonMaxY;
- (void)scrollViewScrollToPoint:(struct CGPoint)arg1;
- (void)restoreScrollViewPosition;
- (void)_didTapDismissButton;
- (void)_didTapBackButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 layoutSpec:(id)arg3 tosVersion:(id)arg4 topButtonType:(unsigned long long)arg5 showFooterView:(_Bool)arg6 showTermView:(_Bool)arg7 title:(id)arg8 subtitle:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
