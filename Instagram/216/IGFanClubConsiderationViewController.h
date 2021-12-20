//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGGestureHandler-Protocol.h"

@class FBInAppPurchaseStoreManager, IGAsyncTask, IGCoreTextView, IGFanClubBenefitView, IGFanClubConsiderationViewModel, IGFanClubIAPLoggerHelper, IGImageView, IGProfilePictureImageView, IGTapButton, IGUser, IGUserSession, NSString, UIActivityIndicatorView, UILabel;

@interface IGFanClubConsiderationViewController : IGViewController <IGCoreTextLinkHandler, IGGestureHandler>
{
    IGFanClubConsiderationViewModel *_viewModel;
    IGUserSession *_userSession;
    IGUser *_creator;
    IGProfilePictureImageView *_profileImageView;
    IGImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGTapButton *_primaryButton;
    IGCoreTextView *_learnMoreTextView;
    UILabel *_benefitsTitleLabel;
    IGFanClubBenefitView *_badgeBenefitView;
    IGFanClubBenefitView *_exclusiveStoryBenefitView;
    IGFanClubBenefitView *_exclusiveLiveBenefitView;
    IGAsyncTask *_fanClubInfoQuery;
    UIActivityIndicatorView *_loadingSpinner;
    FBInAppPurchaseStoreManager *_storeManager;
    NSString *_mockedPriceSKU;
    NSString *_productTierID;
    NSString *_productID;
    NSString *_quoteID;
    NSString *_fanClubID;
    _Bool _isPaymentProcessing;
    IGFanClubIAPLoggerHelper *_loggerHelper;
}

- (void).cxx_destruct;
- (void)_parseFanClubAndUpdateWithResponseResult:(id)arg1;
- (void)_retryVerificationWithErrorCode:(long long)arg1;
- (void)_showDebugDialogWithTitle:(id)arg1 description:(id)arg2;
- (void)_handleTransactionFailureWithError:(id)arg1;
- (void)_queryFanClub;
- (void)_handlePurchaseVerificationSuccess;
- (void)_buyProduct:(id)arg1 missingProducts:(id)arg2;
- (void)_requestProductsAndPurchaseWithQuoteResult:(id)arg1 status:(id)arg2;
- (void)_navigateToMembershipSettings:(id)arg1;
- (void)_createQuoteMutationWithSuccessHandler:(CDUnknownBlockType)arg1;
- (void)_setButtonWithTextColor:(id)arg1 text:(id)arg2 buttonColor:(id)arg3 borderColor:(id)arg4 borderWidth:(double)arg5 state:(unsigned long long)arg6;
- (void)_updatePrimaryButtonTitle:(id)arg1 titleColor:(id)arg2 state:(unsigned long long)arg3;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)_loadingSpinnerStopAnimating;
- (void)_loadingSpinnerStartAnimating;
- (void)_setupLoadingSpinner;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_didTapShowSubscriberList;
- (void)_didTapSubscribeButton;
- (void)_didTapManageButton;
- (void)_backButtonTapped;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFanClubConsiderationViewModel:(id)arg1 creator:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

