//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGPayoutBlurbTableViewCellDelegate-Protocol.h"
#import "IGPayoutSelectorOptionsViewControllerDelegate-Protocol.h"
#import "IGPayoutTextFieldTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IGKeyboardObserver, IGMonetizationPlatformAddressDataModel, IGMonetizationPlatformFinancialEntityDataModel, IGPayoutHubEditScreenLogging, IGPayoutOnboardingHeaderView, IGUserSession, NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UITableView;
@protocol IGPayoutConfirmLegalOwnerViewControllerDelegate, IGPayoutOnboardingFlowStepperHeaderPresenter;

@interface IGPayoutConfirmLegalOwnerViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGPayoutSelectorOptionsViewControllerDelegate, IGPayoutTextFieldTableViewCellDelegate, IGPayoutBlurbTableViewCellDelegate>
{
    IGUserSession *_userSession;
    id <IGPayoutConfirmLegalOwnerViewControllerDelegate> _delegate;
    IGPayoutOnboardingHeaderView *_headerView;
    UITableView *_tableView;
    UIActivityIndicatorView *_loadingIndicator;
    NSArray *_igPayoutOnboardingLegalOwnerFields;
    NSMutableArray *_formValues;
    NSMutableArray *_formErrors;
    IGKeyboardObserver *_keyboardObserver;
    double _keyboardBottomInset;
    _Bool _areFieldsValidated;
    NSArray *_states;
    NSString *_country;
    IGMonetizationPlatformFinancialEntityDataModel *_dataModel;
    IGMonetizationPlatformAddressDataModel *_addressDataModel;
    _Bool _isOnboarding;
    IGPayoutHubEditScreenLogging *_editLogger;
    long long _productType;
    long long _businessType;
    long long _origin;
    NSString *_errorMessage;
    id <IGPayoutOnboardingFlowStepperHeaderPresenter> _stepperHeaderPresenter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPayoutOnboardingFlowStepperHeaderPresenter> stepperHeaderPresenter; // @synthesize stepperHeaderPresenter=_stepperHeaderPresenter;
- (void)_handleNetworkRequestFailureCustomError:(id)arg1;
- (void)_validateAddressWithSuccessCompletion:(CDUnknownBlockType)arg1 errorCompletion:(CDUnknownBlockType)arg2;
- (id)_handleGraphQLResponseForKey:(id)arg1 result:(id)arg2 index:(long long)arg3;
- (void)_reloadIfNecessary;
- (void)_setError:(id)arg1 onIndex:(long long)arg2;
- (void)_validateInputWithSuccessCompletion:(CDUnknownBlockType)arg1 errorCompletion:(CDUnknownBlockType)arg2;
- (void)_setLoading:(_Bool)arg1;
- (id)_formValueForField:(long long)arg1;
- (id)_createOwnerInfo;
- (void)_onNextButtonTapped:(id)arg1;
- (void)_onBackButtonTapped;
- (void)_setupTableView;
- (void)_setNavigationBarItems;
- (void)_fetchStates:(CDUnknownBlockType)arg1;
- (void)_updateStates;
- (void)_prefillFieldsFromExistingOwnerInfo:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)payoutBlurbTableViewCell:(id)arg1 didTapLink:(id)arg2;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)payoutSelectorOptionsViewControllerDidSelectOption:(id)arg1 identifier:(long long)arg2 index:(long long)arg3;
- (void)payoutTextFieldDidEndEditingWithText:(id)arg1 identifier:(long long)arg2;
- (void)payoutTextFieldDidUpdateWithText:(id)arg1 identifier:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)analyticsModule;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 origin:(long long)arg2 delegate:(id)arg3 productType:(long long)arg4 dataModel:(id)arg5;
- (id)initWithUserSession:(id)arg1 origin:(long long)arg2 delegate:(id)arg3 productType:(long long)arg4 businessType:(long long)arg5 flowType:(long long)arg6 states:(id)arg7 country:(id)arg8 existingOwnerInfo:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

