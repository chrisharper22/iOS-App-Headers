//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRegistrationNUXCALConnectViewControllerDelegate-Protocol.h"
#import "IGRegistrationNUXCALDisclosureViewControllerDelegate-Protocol.h"
#import "IGRegistrationStepControllerProtocol-Protocol.h"

@class IGRegistrationFlowContext, NSString;
@protocol IGRegistrationCoordinatorProtocol;

@interface IGRegistrationCALAccountsStepController : NSObject <IGRegistrationNUXCALConnectViewControllerDelegate, IGRegistrationNUXCALDisclosureViewControllerDelegate, IGRegistrationStepControllerProtocol>
{
    IGRegistrationFlowContext *_context;
    id <IGRegistrationCoordinatorProtocol> _coordinator;
}

+ (_Bool)isValidForContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationCoordinatorProtocol> coordinator; // @synthesize coordinator=_coordinator;
- (void)secondCalVCDidTapSecondaryButton:(id)arg1;
- (void)secondCalVCDidTapPrimaryButton:(id)arg1;
- (void)secondCalVCDidCompleteLinkMutation:(id)arg1 success:(_Bool)arg2;
- (void)calVCDidTapSecondaryButton:(id)arg1;
- (void)calVCDidTapPrimaryButton:(id)arg1;
- (void)calVCDidTapSeeAllLinkedAccountsButton:(id)arg1;
- (void)calVCDidTapBackButton:(id)arg1;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

