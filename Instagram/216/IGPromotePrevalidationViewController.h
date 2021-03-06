//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGBusinessErrorViewDelegate-Protocol.h"
#import "IGBusinessFacebookConnectOrClaimPageFlowUIDelegate-Protocol.h"
#import "IGPromoteFlowManagerNavigationProtocol-Protocol.h"

@class IGBoostPostLogger, IGBottomButtonsView, IGBusinessErrorView, IGBusinessFacebookConnectOrClaimPageFlow, IGBusinessFacebookPageClaimService, IGPromoteDataStore, IGPromoteErrorDataModel, IGPromoteLoginHelper, IGUserSession, NSString, UIActivityIndicatorView;
@protocol IGPromotePrevalidationViewControllerDelegate;

@interface IGPromotePrevalidationViewController : IGPromoteViewController <IGBusinessErrorViewDelegate, IGBusinessFacebookConnectOrClaimPageFlowUIDelegate, IGPromoteFlowManagerNavigationProtocol>
{
    IGUserSession *_userSession;
    IGPromoteDataStore *_dataStore;
    IGBoostPostLogger *_logger;
    IGPromoteErrorDataModel *_promoteError;
    IGBusinessFacebookPageClaimService *_pageClaimService;
    IGPromoteLoginHelper *_promoteLoginHelper;
    IGBusinessErrorView *_prevalidationErrorView;
    IGBottomButtonsView *_bottomButtonsView;
    UIActivityIndicatorView *_spinner;
    long long _viewState;
    long long _currentSubflow;
    IGBusinessFacebookConnectOrClaimPageFlow *_connectPageFlow;
    id <IGPromotePrevalidationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromotePrevalidationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldPopViewControllerWithDismissViewControllers;
- (void)_onBackBarButtonTapped;
- (void)_onCancleBarButtonTapped;
- (void)errorView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)errorViewDidTapButton:(id)arg1;
- (void)_clearTokenAndReLoginToFBIfNeeded;
- (void)_openWebViewWithURL:(id)arg1;
- (void)_resetViewAndFetchError;
- (void)_setupNavigationTitle;
- (void)_setupBottomButtonsView;
- (void)_setupAndShowErrorView;
- (void)_setFailureHanlderOnWhatsAppAccountDataFetchFailure;
- (void)_setSuccessHandlerOnWhatsAppAccountDataFetchSuccessWithInitDataModel:(id)arg1 prefillInfoDataModel:(id)arg2 prefilledAudienceDataModel:(id)arg3 prefilledReachEstimationDataModel:(id)arg4 couponDataModel:(id)arg5 initAudienceDataModelList:(id)arg6;
- (_Bool)_hasWALink;
- (void)_fetchWhatsAppAccountDataIfNeeded;
- (void)_prevalidateAndFetchInitData;
- (void)_setViewState:(long long)arg1;
- (void)businessFacebookConnectPageFlow:(id)arg1 didSelectAction:(long long)arg2 uiPreparationBlock:(CDUnknownBlockType)arg3;
- (void)businessFacebookConnectPageFlow:(id)arg1 didFinishAction:(long long)arg2;
- (void)businessFacebookConnectPageFlow:(id)arg1 didFailWithError:(id)arg2;
- (void)businessFacebookConnectPageFlowDidDismiss:(id)arg1;
- (void)_showDynamicDescriptorSelfResolutionPage;
- (void)_showSettleAccountPage;
- (void)_getVerified;
- (void)_requestAccountReview;
- (void)_createAndClaimPageCompletionHandlerWithError:(id)arg1 loggingAction:(id)arg2;
- (void)_termsLinkTappedWithURL:(id)arg1;
- (void)_changeAdAccount;
- (void)_publishPage;
- (id)_createLoggerFromUserSession:(id)arg1 forStep:(id)arg2;
- (void)_createPage;
- (void)_claimPage;
- (id)_bottomButtonsViewStyle:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 dataStore:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

