//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBPayFormCellViewModelDelegate-Protocol.h"
#import "FBPaymentsW3CClientVerificationView-Protocol.h"

@class FBPayFormCardNumberCellViewModel, FBPayFormSecurityCodeCellViewModel, FBPayFormTextFieldViewCell, NSAttributedString, NSString, UIButton, UILabel, UIStackView;
@protocol FBPayViewStyleConfiguring, FBPaymentsW3CClientCardVerificationViewDelegate;

@interface FBPaymentsW3CClientCardVerificationView : UIView <FBPayFormCellViewModelDelegate, FBPaymentsW3CClientVerificationView>
{
    long long _state;
    id <FBPayViewStyleConfiguring> _styleConfiguring;
    UIStackView *_stackView;
    UIView *_headerView;
    FBPayFormSecurityCodeCellViewModel *_securityCodeCellViewModel;
    FBPayFormTextFieldViewCell *_securityCodeTextField;
    FBPayFormCardNumberCellViewModel *_cardNumberCellViewModel;
    FBPayFormTextFieldViewCell *_cardNumberTextField;
    UILabel *_errorText;
    UIButton *_continueButton;
    NSString *_cardTitle;
    NSString *_lastFourDigits;
    long long _cardAssociation;
    _Bool _isDeviceBound;
    NSAttributedString *_errorString;
    id <FBPaymentsW3CClientCardVerificationViewDelegate> _delegate;
}

+ (long long)paymentMethodFromCardAssociation:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPaymentsW3CClientCardVerificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)continueButtonWasToucedUpInside;
- (void)fbpayFormCellViewModelDidUpdate:(id)arg1;
- (void)fbpayFormCellViewModelDidCompleteEdit:(id)arg1;
- (_Bool)isCardNumberCompleted;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)hideErrorText;
- (void)showErrorText;
- (void)setupErrorLabel;
- (void)setupContinueButton;
- (void)setupSecurityCodeTextField;
- (void)setupCardNumberTextField;
- (void)setupTopHeaderView;
- (void)setupStackViewConstraints;
- (void)setupStackView;
- (void)setupContainingConstraints;
- (void)setupAppearance;
- (void)setErrorText:(id)arg1;
- (void)setState:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lastFourDigits:(id)arg2 cardTitle:(id)arg3 cardAssociation:(long long)arg4 isDeviceBound:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

