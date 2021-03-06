//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRegistrationCoordinatorProtocol-Protocol.h"

@class IGNUXFlowCoordinator, IGNavigationController, IGRegistrationFlowContext, IGRegistrationStepProvider, NSDictionary, NSString;
@protocol IGRegistrationFlowCoordinatorDelegate;

@interface IGRegistrationFlowCoordinator : NSObject <IGRegistrationCoordinatorProtocol>
{
    IGRegistrationStepProvider *_stepProvider;
    IGNUXFlowCoordinator *_flowCoordinator;
    NSDictionary *_originalFacebookInfo;
    _Bool _isSwitchingUsers;
    id <IGRegistrationFlowCoordinatorDelegate> _delegate;
    IGRegistrationFlowContext *_context;
    IGNavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) IGRegistrationFlowContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <IGRegistrationFlowCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didGoBackShouldPopViewController:(_Bool)arg1;
- (void)_processStepController:(id)arg1;
- (void)_processNextStep;
- (void)stepController:(id)arg1 resetPasswordWithBundle:(id)arg2;
- (void)stepController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
- (void)stepControllerDidDecideGoToCALStep:(id)arg1;
- (_Bool)stepControllerPreviousStepIsContactPointStep:(id)arg1;
- (_Bool)stepControllerPreviousStepIsCALStep:(id)arg1;
- (void)stepControllerProSignupDidGoBack:(id)arg1;
- (void)stepControllerProSignupContinueAsProfessional:(id)arg1;
- (void)stepControllerProSignupContinueAsPersonal:(id)arg1;
- (void)stepController:(id)arg1 didRequestLoginWithUsername:(id)arg2 password:(id)arg3;
- (void)stepControllerDidGetBlockedByWeakPassword:(id)arg1;
- (void)stepController:(id)arg1 didTriggerMovingBackToVC:(id)arg2;
- (void)stepControllerDidAttemptUnderageSignUp:(id)arg1;
- (void)stepControllerDidGetBlockedByGDPR:(id)arg1;
- (void)stepControllerDidSwitchToContactPointFlow:(id)arg1;
- (void)stepController:(id)arg1 didCompleteRegistrationWithUserSession:(id)arg2;
- (void)stepControllerDidRestartRegistration;
- (void)stepControllerDidFailRegistration;
- (void)stepControllerDidTriggerGoingBackToUsernameStep;
- (void)stepControllerDidGoBack:(id)arg1;
- (void)stepControllerDidSwitchToSignInFlow:(id)arg1;
- (void)stepControllerDidCompleteStep:(id)arg1;
- (void)restartFlow;
- (void)startFlowAfterEmailConfirmation;
- (void)startFlow;
- (id)initWithContext:(id)arg1 isSwitchingUsers:(_Bool)arg2 navigationController:(id)arg3 stepProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

