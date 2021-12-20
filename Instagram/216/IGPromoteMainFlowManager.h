//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNavigationControllerDelegate-Protocol.h"
#import "IGNavigationCustomTransitionDelegate-Protocol.h"
#import "IGPromoteAudienceViewControllerDelegate-Protocol.h"
#import "IGPromoteBudgetAndDurationViewControllerDelegate-Protocol.h"
#import "IGPromoteDestinationViewControllerDelegate-Protocol.h"
#import "IGPromotePrevalidationViewControllerDelegate-Protocol.h"
#import "IGPromoteReviewViewControllerDelegate-Protocol.h"
#import "IGTokenlessPromoteDialogViewControllerDelegate-Protocol.h"
#import "IGTokenlessPromotePro2ProBlockingViewControllerDelegate-Protocol.h"

@class IGBoostPostLogger, IGNavigationController, IGPromoteAudienceViewController, IGPromoteBudgetAndDurationViewController, IGPromoteDataStore, IGPromoteDestinationViewController, IGPromoteFlowPathManager, IGPromoteLoginResponseDataModel, IGPromoteMainFlowNavigationStepperHeaderController, IGPromoteReviewViewController, IGTokenlessPromoteDialogViewController, IGTokenlessPromotePro2ProBlockingViewController, IGUserSession, NSArray, NSString, UIViewController;

@interface IGPromoteMainFlowManager : NSObject <IGPromoteDestinationViewControllerDelegate, IGPromoteReviewViewControllerDelegate, IGPromoteAudienceViewControllerDelegate, IGPromoteBudgetAndDurationViewControllerDelegate, IGPromotePrevalidationViewControllerDelegate, IGNavigationControllerDelegate, IGNavigationCustomTransitionDelegate, IGTokenlessPromoteDialogViewControllerDelegate, IGTokenlessPromotePro2ProBlockingViewControllerDelegate>
{
    IGNavigationController *_navigationController;
    UIViewController *_viewController;
    IGUserSession *_userSession;
    IGBoostPostLogger *_logger;
    NSString *_mediaId;
    _Bool _isSubflow;
    NSString *_couponOfferId;
    long long _destinationType;
    NSString *_aymtChannel;
    _Bool _isCTWAUpsell;
    IGPromoteDataStore *_dataStore;
    NSArray *_originalNavigationStack;
    _Bool _shouldPostToProfileFromDarkPost;
    IGPromoteLoginResponseDataModel *_loginResponseDataModel;
    IGPromoteDestinationViewController *_destinationViewController;
    IGPromoteAudienceViewController *_audienceViewController;
    IGPromoteBudgetAndDurationViewController *_budgetAndDurationViewController;
    IGPromoteReviewViewController *_reviewViewController;
    IGTokenlessPromoteDialogViewController *_tokenlessPromoteDialogViewController;
    IGTokenlessPromotePro2ProBlockingViewController *_tokenlessPromotePro2ProBlockingViewController;
    IGPromoteMainFlowNavigationStepperHeaderController *_stepperHeaderPresenter;
    long long _entryPoint;
    IGPromoteFlowPathManager *_flowPathManager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGPromoteFlowPathManager *flowPathManager; // @synthesize flowPathManager=_flowPathManager;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_asyncIntegrityValidationWithStep:(id)arg1;
- (void)_presentRootViewControllerInFlow:(id)arg1 toNavigationStack:(id)arg2 animated:(_Bool)arg3;
- (void)_updateAudiencesForRegulatedCategories;
- (void)_prefillForStreamlinedOrDraftPromoteWithDataModel:(id)arg1 prefilledAudienceDataModel:(id)arg2 prefilledReachEstimationDataModel:(id)arg3;
- (long long)_flowTypeFromBoostingStatusString:(id)arg1;
- (void)_handleExpressAudienceFetchingFailure:(id)arg1;
- (void)_handleExpressAudienceFetchingResult:(id)arg1;
- (void)promotePrevalidationViewController:(id)arg1 didFinishWithInitDataModel:(id)arg2 prefillInfoDataModel:(id)arg3 prefilledAudienceDataModel:(id)arg4 prefilledReachEstimationDataModel:(id)arg5 couponDataModel:(id)arg6 initAudienceDataModelList:(id)arg7;
- (void)promotePrevalidationViewControllerDidTapBackBarButton:(id)arg1;
- (void)promotePrevalidationViewControllerDidTapCancelBarButton:(id)arg1;
- (void)promotePro2ProBlockingViewControllerLoginFailed:(id)arg1;
- (void)promotePro2ProBlockingViewControllerDidTapCancel:(id)arg1;
- (void)promotePro2ProBlockingViewControllerPresentPromoteOldFlowNextStep:(id)arg1 loginResponseDataModel:(id)arg2;
- (void)promotePro2ProBlockingViewControllerPresentTPDisclosureNextStep:(id)arg1 loginResponseDataModel:(id)arg2;
- (void)promotePro2ProProDisclosureShouldSetUpCALOnUnsuccessfulLogin:(id)arg1;
- (void)promotePro2ProProDisclosureShouldSetUpCALOnSuccessfulLogin:(id)arg1;
- (void)promotePro2ProOnUnsuccessfulLogin:(id)arg1;
- (void)promotePro2ProNonAdminViewControllerNextStep:(id)arg1;
- (void)promoteTokenlessPromoteViewControllerNextStep:(id)arg1;
- (void)promoteTokenlessPromoteViewControllerDidTapCancelBarButton:(id)arg1 screenState:(long long)arg2;
- (void)promoteReviewViewControllerDidConfirmSiepRestrictionAlertDialog:(id)arg1;
- (void)promoteReviewViewControllerDidTapBudgetAndDurationCell:(id)arg1;
- (void)promoteReviewViewControllerDidTapAudienceCell:(id)arg1;
- (void)promoteReviewViewControllerDidTapDestinationCell:(id)arg1;
- (void)promoteReviewViewController:(id)arg1 didCreatePromoteWithCompletion:(CDUnknownBlockType)arg2;
- (void)promoteReviewViewControllerDidTapCancelBarButton:(id)arg1;
- (void)promoteReviewViewControllerDidTapBackBarButton:(id)arg1;
- (void)promoteBudgetAndDurationViewControllerDidTapNextBarButton:(id)arg1;
- (void)promoteBudgetAndDurationViewControllerDidTapSaveBarButton:(id)arg1;
- (void)promoteBudgetAndDurationViewControllerDidTapBackBarButton:(id)arg1;
- (void)promoteAudienceViewController:(id)arg1 didExitCreateAndEditAudienceFlowWithManager:(id)arg2;
- (void)promoteAudienceViewController:(id)arg1 willLaunchCreateAndEditAudienceFlowWithManager:(id)arg2;
- (void)promoteAudienceViewControllerDidTapNextBarButton:(id)arg1;
- (void)promoteAudienceViewControllerDidTapSaveBarButton:(id)arg1;
- (void)promoteAudienceViewControllerDidTapBackBarButton:(id)arg1;
- (void)promoteAudienceViewControllerDidTapDoneBarButton:(id)arg1;
- (id)promoteLastPromoteFlowStepAttemptedStringForLogging;
- (_Bool)promoteDestinationViewControllershouldShowSaveDraftActionSheet:(id)arg1;
- (void)promoteDestinationViewControllerDidTapCancelBarButton:(id)arg1;
- (void)promoteDestinationViewControllerDidTapSaveBarButton:(id)arg1;
- (void)promoteDestinationViewControllerDidTapBackBarButton:(id)arg1;
- (void)promoteDestinationViewControllerDidTapNextBarButton:(id)arg1;
- (void)_presentReviewStep;
- (void)_presentTokenlessPromoteStep;
- (void)_presentPro2ProStep;
- (void)_presentBudgetAndDurationStep;
- (void)_presentAudienceStep;
- (void)_presentDestinationStep;
- (void)_presentPrevalidationStep;
- (void)_popTopViewController;
- (void)_releaseViewControllers;
- (void)_endStepsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_endSteps;
- (void)_presentStep:(long long)arg1;
- (void)setShouldPostToProfileFromDarkPost;
- (void)launchPromoteFlow;
- (id)initWithController:(id)arg1 logger:(id)arg2 userSession:(id)arg3 mediaId:(id)arg4 isSubflow:(_Bool)arg5 couponOfferId:(id)arg6 destinationType:(long long)arg7 entryPoint:(long long)arg8 aymtChannel:(id)arg9 isCTWAUpsell:(_Bool)arg10 succeedLoginState:(unsigned long long)arg11 loginResponseDataModel:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
