//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBPayFormViewModel.h>

#import "FBPayFormCardNumberCellViewModelDelegate-Protocol.h"
#import "FBPayFormViewLifeCycleDelegate-Protocol.h"

@class FBPayAccountContext, FBPayFormCardNumberCellViewModel, FBPayFormFieldsForCountry, FBPayFormSecurityCodeCellViewModel, FBPayPaymentMethod, NSString;

@interface FBPayPaymentMethodFormViewModel : FBPayFormViewModel <FBPayFormViewLifeCycleDelegate, FBPayFormCardNumberCellViewModelDelegate>
{
    FBPayPaymentMethod *_paymentMethod;
    FBPayAccountContext *_fbpayContext;
    FBPayFormCardNumberCellViewModel *_cardNumberCellViewModel;
    FBPayFormSecurityCodeCellViewModel *_securityCodeCellViewModel;
    FBPayFormFieldsForCountry *_formFieldsForCountry;
    long long _paymentType;
    _Bool _shouldHideCardholderName;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
- (id)subtitle;
- (id)title;
- (void)_logUPLEventWithName:(id)arg1 targetName:(id)arg2 viewName:(id)arg3 paymentMethodId:(id)arg4;
- (void)_logEventWithName:(long long)arg1 paymentMethodId:(id)arg2;
- (id)_configurationWithPaymentMethod:(id)arg1 paymentType:(long long)arg2 formFieldsForCountry:(id)arg3 fbpayContext:(id)arg4;
- (void)_updateViewLayoutForFormFields:(id)arg1 withLayout:(id)arg2 withFormCellViewModels:(id)arg3 paymentMethod:(id)arg4;
- (void)_updateViewForDefaultFormFieldsWithLayout:(id)arg1 withFormCellViewModels:(id)arg2 paymentMethod:(id)arg3 formFieldsForCountry:(id)arg4;
- (void)_onError:(id)arg1 mutationType:(long long)arg2;
- (void)_onSuccess:(long long)arg1 paymentMethodId:(id)arg2;
- (void)_onDeletePaymentMethod;
- (void)cardNumberCellViewModelDidUpdate:(id)arg1;
- (void)fbpayFormViewControllerViewDidAppear:(id)arg1;
- (void)fbpayFormViewControllerViewDidLoad:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)reload;
- (void)save;
- (id)initWithPaymentMethod:(id)arg1 title:(id)arg2 paymentType:(long long)arg3 formFieldsForCountry:(id)arg4 shouldHideCardholderName:(_Bool)arg5 fbpayContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

