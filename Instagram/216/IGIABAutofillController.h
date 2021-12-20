//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPaymentsW3CClientDelegate-Protocol.h"
#import "IABAutofillControllerConforming-Protocol.h"
#import "IABAutofillCoordinatorDelegate-Protocol.h"
#import "IGIABApplyAutofillBottomSheetViewControllerDelegate-Protocol.h"
#import "IGIABApplyPaymentAutofillBottomSheetViewControllerDelegate-Protocol.h"
#import "IGIABAutofillAboutAutofillViewControllerDelegate-Protocol.h"
#import "IGIABAutofillDataManagerDelegate-Protocol.h"
#import "IGIABAutofillEditViewControllerDelegate-Protocol.h"
#import "IGIABOverwriteAutofillBottomSheetViewControllerDelegate-Protocol.h"
#import "IGIABSaveAutofillBottomSheetViewControllerDelegate-Protocol.h"
#import "IGIABSoftKeyboardControllerDelegate-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"

@class FBPaymentsW3CClientMaskedCard, FBPaymentsW3CClientPaymentRequest, IABAutofillCoordinator, IABAutofillDataStore, IGIABAutofillDataManager, IGIABAutofillEditViewController, IGIABAutofillSoftKeyboardViewController, IGNavigationController, IGPartialModalSheetViewController, IGUserSession, NSDate, NSString, UIViewController;
@protocol FBPaymentsW3CClientProtocol, IGIABAutofillControllerDelegate><IABAutofillControllerDelegate;

@interface IGIABAutofillController : NSObject <IABAutofillCoordinatorDelegate, IGIABAutofillDataManagerDelegate, IGIABApplyAutofillBottomSheetViewControllerDelegate, IGIABApplyPaymentAutofillBottomSheetViewControllerDelegate, IGIABSaveAutofillBottomSheetViewControllerDelegate, IGIABOverwriteAutofillBottomSheetViewControllerDelegate, IGIABAutofillEditViewControllerDelegate, IGIABAutofillAboutAutofillViewControllerDelegate, IGPartialModalSheetListener, FBPaymentsW3CClientDelegate, IGIABSoftKeyboardControllerDelegate, IABAutofillControllerConforming>
{
    IGUserSession *_userSession;
    IABAutofillCoordinator *_autofillCoordinator;
    IGIABAutofillDataManager *_autofillDataManager;
    IABAutofillDataStore *_autofillDataStore;
    IGPartialModalSheetViewController *_bottomSheet;
    IGIABAutofillEditViewController *_editForm;
    IGNavigationController *_wrappedEditForm;
    IGIABAutofillSoftKeyboardViewController *_iabSoftKeyboardController;
    NSDate *_lastBottomSheetDismissTime;
    UIViewController<IGIABAutofillControllerDelegate><IABAutofillControllerDelegate> *_hostViewController;
    _Bool _isAutofillEnabled;
    _Bool _isPaymentAutofillEnabled;
    _Bool _isPaymentAutofillAnalyticsOnlyEnabled;
    _Bool _shouldShowAdsUsageConsent;
    _Bool _shouldAlwaysShowAdsUsageConsent;
    _Bool _shouldLogExposureAtFirstPaymentFormInteraction;
    _Bool _hasPromptedContactAutofillOptIn;
    _Bool _hasSecondaryNavigation;
    _Bool _shouldUseSoftKeyboard;
    _Bool _isUserEligibleToSeeOCCPDisclosure;
    FBPaymentsW3CClientPaymentRequest *_fbPayPaymentRequest;
    FBPaymentsW3CClientMaskedCard *_acceptedPaymentCard;
    id <FBPaymentsW3CClientProtocol> _fbPaymentClient;
}

+ (id)supportedMessageNames;
- (void).cxx_destruct;
@property(retain) id <FBPaymentsW3CClientProtocol> fbPaymentClient; // @synthesize fbPaymentClient=_fbPaymentClient;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)softKeyboardDidPressButton;
- (void)softKeyboardDidTapCell:(id)arg1;
- (id)_paymentAutofillBottomSheetViewModelForBottomSheetType:(unsigned long long)arg1;
- (unsigned long long)_autofillConsecutiveNegInteractionOperationForStateEnabled:(_Bool)arg1;
- (_Bool)_shouldShowAdsUsageConsentInBottomSheet;
- (void)_openAutofillDataEditFormWithAutofillDataFromBottomSheet:(id)arg1;
- (void)_addNewCardWithPaymentAutofillSaveCardFlow:(unsigned long long)arg1 paymentAutofillData:(id)arg2;
- (void)_handlePaymentAutofillDeclineAddNewCard;
- (void)_handlePaymentAutofillDeclineOptIn;
- (void)_handlePaymentAutofillAcceptSaveCardFlow:(unsigned long long)arg1 userInteraction:(unsigned long long)arg2 paymentBottomSheetViewModel:(id)arg3;
- (void)_handleEditAutofillDataViewControllerEventsWithAutofillData:(id)arg1 shouldDismiss:(_Bool)arg2;
- (void)_handleLinkedText:(id)arg1;
- (void)_dismissSoftKeyboard;
- (void)_dismissBottomSheet;
- (void)_presentSoftKeyboard;
- (void)_presentBottomSheet;
- (void)iabAboutAutofillViewController:(id)arg1 didTapOnLinkedText:(id)arg2;
- (void)autofillEditViewControllerDidChangeOptOutToggleState:(_Bool)arg1;
- (void)autofillEditViewControllerDidCancel;
- (void)autofillEditViewControllerDidDelete;
- (void)autofillEditViewControllerDidSave:(id)arg1;
- (void)overwriteAutofillBottomSheetViewControllerDidEdit;
- (void)overwriteAutofillBottomSheetViewControllerDidDecline;
- (void)overwriteAutofillBottomSheetViewControllerDidAccept;
- (void)autofillOptInBottomSheetViewControllerDidTapOnLinkedText:(id)arg1;
- (void)autofillOptInBottomSheetViewControllerDidEdit;
- (void)autofillOptInBottomSheetViewControllerDidDeclineWithType:(unsigned long long)arg1 viewModel:(id)arg2;
- (void)autofillOptInBottomSheetViewControllerDidAcceptWithType:(unsigned long long)arg1 viewModel:(id)arg2;
- (void)applyPaymentAutofillBottomSheetViewControllerDidTapOnLinkedText:(id)arg1;
- (void)applyPaymentAutofillBottomSheetViewControllerDidDeclineWithUserInteractionType:(unsigned long long)arg1;
- (void)applyPaymentAutofillBottomSheetViewControllerDidAcceptCard:(id)arg1 userInteractionType:(unsigned long long)arg2 viewModel:(id)arg3;
- (void)applyAutofillBottomSheetViewControllerDidTapOnLinkedText:(id)arg1;
- (void)applyAutofillBottomSheetViewControllerDidEdit;
- (void)applyAutofillBottomSheetViewControllerDidDeclineWithViewModel:(id)arg1;
- (void)applyAutofillBottomSheetViewControllerDidAcceptWithViewModel:(id)arg1;
- (void)_handlePaymentAutofillUsageFlowWithCard:(id)arg1;
- (void)_handlePaymentCardSaveResponse:(id)arg1 saveCardFlow:(unsigned long long)arg2;
- (void)_fetchPaymentCredentialsFromFBPay;
- (void)maskedCardsFetchedWithError:(id)arg1;
- (void)maskedCardsWereFetched:(id)arg1;
- (void)paymentRequestDidComplete:(id)arg1 withError:(id)arg2;
- (void)autofillDataManager:(id)arg1 didDeleteAutofillDataWithSuccess:(_Bool)arg2;
- (void)autofillDataManager:(id)arg1 didMutateAutofillData:(id)arg2 success:(_Bool)arg3;
- (void)autofillDataManager:(id)arg1 didFetchUserOptOutResult:(id)arg2;
- (void)autofillDataManager:(id)arg1 didFetchDomainOptOutResult:(id)arg2 forDomain:(id)arg3;
- (void)autofillDataManager:(id)arg1 didFetchAutofillData:(id)arg2;
- (_Bool)autofillCoordinatorDidRequestIsBottomSheetInPlace;
- (void)autofillCoordinatorDidRequestHandleFirstPaymentFormInteraction;
- (void)autofillCoordinatorSetHasAutofillInteraction;
- (void)autofillCoordinatorDidRequestLoggingEvent:(struct IabAutofillInteractionEventNoBuilder)arg1;
- (void)autofillCoordinatorDidRequestDisplayToastType:(unsigned long long)arg1;
- (void)autofillCoordinatorDidRequestSavingAutofillDataToServer:(id)arg1;
- (void)autofillCoordinatorDidRequestPresentPaymentBottomSheet:(unsigned long long)arg1;
- (void)autofillCoordinatorDidRequestPresentBottomSheet:(unsigned long long)arg1;
- (_Bool)supportsCallback;
- (_Bool)requireHttps;
- (_Bool)requireDomainToBeWhitelisted;
- (_Bool)requireDelegateSetUp;
- (_Bool)requireAppId;
- (void)handleScriptMessageFromWebView:(id)arg1 messageOrigin:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
- (_Bool)shouldAvoidiFrameCheckForOriginHost:(id)arg1 messageName:(id)arg2 messageParams:(id)arg3;
- (_Bool)shouldInjectJSWithURL:(id)arg1;
- (void)setHasSecondaryNavigation:(_Bool)arg1;
- (void)injectScriptIntoWebView:(id)arg1;
- (void)fetchAutofillData;
- (void)fetchUserOptOutResult;
- (void)fetchDomainOptOutResult:(id)arg1;
- (void)updateContactAutofillFbpayDisclosureShownValue;
- (void)openLearnMoreAboutAutofillViewControllerWithNavigationController:(id)arg1;
- (void)setUserPaymentAutofillStateEnabled:(_Bool)arg1;
- (void)setUserContactAutofillStateEnabled:(_Bool)arg1;
- (id)viewModelForBrowserSettings;
- (void)openManagePaymentMethodsViewControllerWithNavigationController:(id)arg1;
- (void)openAutofillDataEditFormWithNavigationController:(id)arg1 includeHeaderView:(_Bool)arg2;
- (void)resetFormInterationStatus;
- (void)setDomLoadedTime;
- (id)initWithSession:(id)arg1 iabSessionID:(id)arg2 hostViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

