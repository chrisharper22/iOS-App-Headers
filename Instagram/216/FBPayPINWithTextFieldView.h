//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBPayPINView.h"

#import "FBPayAuthenticationNavigationViewDataSource-Protocol.h"
#import "FBPayAuthenticationNavigationViewDelegate-Protocol.h"
#import "FBPayCredentialAuthHeaderViewDelegate-Protocol.h"
#import "FBPayPINDescriptionViewDataSource-Protocol.h"
#import "FBPayPINDescriptionViewDelegate-Protocol.h"
#import "FBPayPINHeaderTitleViewDataSource-Protocol.h"
#import "FBPaySecurityPINTextFieldViewDataSource-Protocol.h"
#import "FBPaySecurityPINTextFieldViewDelegate-Protocol.h"

@class FBPayAuthenticationNavigationView, FBPayCredentialAuthHeaderView, FBPaySecurityPINTextFieldView, NSString;
@protocol FBPayPINViewDataSource, FBPayPINViewDelegate;

@interface FBPayPINWithTextFieldView : FBPayPINView <FBPayAuthenticationNavigationViewDelegate, FBPayAuthenticationNavigationViewDataSource, FBPayPINHeaderTitleViewDataSource, FBPaySecurityPINTextFieldViewDataSource, FBPaySecurityPINTextFieldViewDelegate, FBPayPINDescriptionViewDataSource, FBPayPINDescriptionViewDelegate, FBPayCredentialAuthHeaderViewDelegate>
{
    FBPayAuthenticationNavigationView *_navigationView;
    FBPayCredentialAuthHeaderView *_authHeaderView;
    FBPaySecurityPINTextFieldView *_securityTextField;
    id <FBPayPINViewDelegate> _delegate;
    id <FBPayPINViewDataSource> _dataSource;
}

- (void).cxx_destruct;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)credentialAuthHeaderViewDidTapHeaderLink:(id)arg1;
- (void)credentialAuthHeaderViewTermsButton:(id)arg1;
- (void)securityTextFieldViewDidTapBackSpace:(id)arg1;
- (void)securityTextFieldView:(id)arg1 didTapOnNumber:(unsigned long long)arg2;
- (_Bool)isTextFieldViewInTestMode:(id)arg1;
- (long long)securityTextFieldViewUserStep:(id)arg1;
- (id)securityTextFieldViewTitle:(id)arg1;
- (void)descriptionViewDidTapLearnMoreLink:(id)arg1;
- (_Bool)descriptionViewShouldShowLearnMoreLink:(id)arg1;
- (id)descriptionViewText:(id)arg1;
- (long long)pinHeaderTitleViewCurrentUserStep:(id)arg1;
- (id)pinHeaderTitleView:(id)arg1 textForUserStep:(long long)arg2;
- (void)navigationViewDidTapLeftButton:(id)arg1;
- (void)navigationViewDidTapRightButton:(id)arg1;
- (id)navigationViewRightButtonTitle:(id)arg1;
- (id)navigationViewTitle:(id)arg1;
- (void)_updateLayoutAnimated;
- (void)finishLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)startLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideErrorMessage;
- (void)showError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reloadViewAnimated;
- (void)reloadView;
- (id)_constraintsForSecurityTextFieldView;
- (id)_constraintsForHeaderView;
- (id)_constraintsForNavigationView;
- (void)_setupConstraints;
- (void)_setupSecurityTextFieldView;
- (void)_setupHeaderView;
- (void)_setupNavigationView;
- (void)_setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

