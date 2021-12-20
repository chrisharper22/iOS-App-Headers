//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayFormViewModel.h>

#import "FBPayFormCardNumberCellViewModelDelegate-Protocol.h"
#import "FBPayFormViewLifeCycleDelegate-Protocol.h"

@class FBPayCardBillingAddress, FBPayExpressCheckoutOneTimeCheckoutModel, FBPayFormFieldsForCountry, FBPayFormHeaderConfiguration, FBPayFormSecurityCodeCellViewModel, FBPayPaymentMethod, NSArray, NSString;
@protocol FBPayUPLLoggingAPI, FBPayViewStyleConfiguring;

@interface FBPayComponentPaymentMethodFormViewModel : FBPayFormViewModel <FBPayFormViewLifeCycleDelegate, FBPayFormCardNumberCellViewModelDelegate>
{
    NSArray *_cardFormFields;
    NSArray *_billingAddressFormFields;
    NSString *_billingAddressCountryCode;
    FBPayFormFieldsForCountry *_formFieldsForCountry;
    NSArray *_availableCardTypes;
    FBPayFormHeaderConfiguration *_headerConfiguration;
    FBPayFormHeaderConfiguration *_billingAddressHeaderConfiguration;
    _Bool _shouldCollectFullBillingAddress;
    FBPayCardBillingAddress *_billingAddress;
    FBPayPaymentMethod *_paymentMethod;
    FBPayFormSecurityCodeCellViewModel *_securityCodeCellViewModel;
    long long _mutationType;
    FBPayExpressCheckoutOneTimeCheckoutModel *_oneTimeCheckoutModel;
    id <FBPayUPLLoggingAPI> _logger;
    id <FBPayViewStyleConfiguring> _viewStyleConfiguring;
}

- (void).cxx_destruct;
- (void)cardNumberCellViewModelDidUpdate:(id)arg1;
- (void)fbpayFormViewControllerViewDidAppear:(id)arg1;
- (void)fbpayFormViewControllerViewDidLoad:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)_logUPLEvent:(id)arg1;
- (void)save;
- (_Bool)hasUnsavedUserInputData;
- (id)mutationRequestToExecute;
- (_Bool)_didUserHaveFormChanges;
- (void)_onRemoveCard;
- (id)_billingAddressSectionConfiguration:(id)arg1;
- (id)_configurationWithPaymentMethod:(id)arg1;
- (void)reload;
- (id)initWithHeaderConfiguration:(id)arg1 billingAddressHeaderConfiguration:(id)arg2 shouldCollectFullBillingAddress:(_Bool)arg3 cardFormFields:(id)arg4 formFieldsForCountry:(id)arg5 availableCardTypes:(id)arg6 paymentMethod:(id)arg7 oneTimeCheckoutModel:(id)arg8 logger:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
