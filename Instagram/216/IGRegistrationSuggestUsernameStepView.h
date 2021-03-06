//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAccessFooterViewDelegate-Protocol.h"

@class IGAccessFooterView, IGCoreTextView, IGNUXLayoutSpec, IGRegistrationNextButton, NSString, UIButton, UILabel;
@protocol IGRegistrationSuggestUsernameViewDelegate;

@interface IGRegistrationSuggestUsernameStepView : UIView <IGAccessFooterViewDelegate>
{
    UILabel *_usernameLabel;
    UILabel *_usernameDescriptionLabel;
    UIButton *_changeUsernameButton;
    id <IGRegistrationSuggestUsernameViewDelegate> _delegate;
    IGNUXLayoutSpec *_layoutSpec;
    IGAccessFooterView *_footerView;
    IGRegistrationNextButton *_suggestUsernameNextButton;
    IGCoreTextView *_termView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCoreTextView *termView; // @synthesize termView=_termView;
@property(readonly, nonatomic) IGRegistrationNextButton *suggestUsernameNextButton; // @synthesize suggestUsernameNextButton=_suggestUsernameNextButton;
- (void)accessFooterViewDidTapSecondaryButton:(id)arg1;
- (void)accessFooterViewDidTapPrimaryButton:(id)arg1;
- (void)_didTapChangeUsernameButton;
- (void)_didTapNextButton;
- (id)_createChangeUsernameButton;
- (id)_createNextButtonWithTitle:(id)arg1;
- (id)_createUsernameDescriptionLabelWithLayoutSpec:(id)arg1 welcomeSubheaderText:(id)arg2;
- (id)_createUsernameLabelWithLayoutSpec:(id)arg1 welcomeHeaderText:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 layoutSpec:(id)arg3 welcomeHeaderText:(id)arg4 welcomeSubheaderText:(id)arg5 signUpButtonText:(id)arg6 tosVersion:(id)arg7 showChangeUsernameButton:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

