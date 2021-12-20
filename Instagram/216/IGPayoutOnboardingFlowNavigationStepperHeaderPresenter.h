//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPayoutOnboardingFlowStepperHeaderPresenter-Protocol.h"

@class IGStepperHeaderControl, IGUserSession, NSArray, NSString;

@interface IGPayoutOnboardingFlowNavigationStepperHeaderPresenter : NSObject <IGPayoutOnboardingFlowStepperHeaderPresenter>
{
    NSArray *_payoutFlowViewControllerClasses;
    IGStepperHeaderControl *_stepperHeaderControl;
    IGUserSession *_userSession;
    long long _ownerType;
}

- (void).cxx_destruct;
@property(nonatomic) long long ownerType; // @synthesize ownerType=_ownerType;
- (void)_updateStepToViewController:(id)arg1;
- (void)setupStepperHeaderForViewController:(id)arg1 withTopOffset:(double)arg2;
- (void)setStepperHeaderViewControllerSteps:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
