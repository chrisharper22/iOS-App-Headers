//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRegistrationAccountLinkingWelcomeViewControllerDelegate-Protocol.h"
#import "IGRegistrationStepControllerProtocol-Protocol.h"

@class IGRegistrationAccountLinkingWelcomeViewController, IGRegistrationFlowContext, NSString;
@protocol IGRegistrationCoordinatorProtocol;

@interface IGRegistrationAccountLinkingSACWelcomeStepController : NSObject <IGRegistrationAccountLinkingWelcomeViewControllerDelegate, IGRegistrationStepControllerProtocol>
{
    IGRegistrationFlowContext *_context;
    IGRegistrationAccountLinkingWelcomeViewController *_viewController;
    id <IGRegistrationCoordinatorProtocol> coordinator;
}

+ (_Bool)isValidForContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (void)registrationAccountLinkingWelcomeViewControllerDidTapTermLabel:(id)arg1;
- (void)registrationAccountLinkingWelcomeViewControllerDidTapContactPointButton:(id)arg1;
- (void)registrationAccountLinkingWelcomeViewControllerDidTapNextButton:(id)arg1;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

