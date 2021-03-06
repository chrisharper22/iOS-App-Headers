//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRegistrationEmailConfirmationViewControllerDelegate-Protocol.h"
#import "IGRegistrationStepControllerProtocol-Protocol.h"

@class IGRegistrationFlowContext, IGRegistrationSecondaryAccountRegistrar, NSString;
@protocol IGRegistrationCoordinatorProtocol;

@interface IGRegistrationEmailConfirmationStepController : NSObject <IGRegistrationEmailConfirmationViewControllerDelegate, IGRegistrationStepControllerProtocol>
{
    IGRegistrationFlowContext *_context;
    IGRegistrationSecondaryAccountRegistrar *_sacRegistrar;
    id <IGRegistrationCoordinatorProtocol> coordinator;
}

+ (_Bool)isValidForContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (id)_sacRegistrar;
- (void)emailConfirmationViewControllerDidTapErrorDialogCancelButton:(id)arg1 errorMessage:(id)arg2;
- (void)emailConfirmationViewControllerDidTapRetryRegistrationDialogButton:(id)arg1 errorMessage:(id)arg2;
- (void)emailConfirmationViewController:(id)arg1 confirmLinkDidSucceed:(_Bool)arg2 errorMessage:(id)arg3;
- (void)emailConfirmationViewController:(id)arg1 didVerifyEmailAndReturnForceSignUpCode:(id)arg2;
- (void)emailConfirmationViewController:(id)arg1 verificationCodeResentToEmail:(id)arg2;
- (void)emailConfirmationViewControllerDidFailAdvance:(id)arg1;
- (void)emailConfirmationViewControllerDidTapResendButton:(id)arg1;
- (void)emailConfirmationViewControllerDidTapNextButton:(id)arg1;
- (void)emailConfirmationViewControllerDidTapBackButton:(id)arg1;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

