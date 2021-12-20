//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGProOnboardingChecklistLearnProfessionalToolsViewControllerDelegate-Protocol.h"

@class IG4BLogger, IGProFlowNavigationPresenter, IGProOnboardingChecklistLearnProfessionalToolsViewController, IGProOnboardingChecklistStepItemModel, IGUserSession, NSString;
@protocol IGProOnboardingChecklistLearnProfessionalToolsFlowDelegate;

@interface IGProOnboardingChecklistLearnProfessionalToolsFlow : NSObject <IGProOnboardingChecklistLearnProfessionalToolsViewControllerDelegate>
{
    IGUserSession *_userSession;
    IG4BLogger *_flowLogger;
    IGProOnboardingChecklistLearnProfessionalToolsViewController *_learnProfessionToolsViewController;
    IGProFlowNavigationPresenter *_flowPresenter;
    id <IGProOnboardingChecklistLearnProfessionalToolsFlowDelegate> _delegate;
    IGProOnboardingChecklistStepItemModel *_stepItem;
}

- (void).cxx_destruct;
- (void)proOnboardingChecklistLearnProfessionalToolsCompletionViewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)start;
- (id)initWithFlowPresenter:(id)arg1 userSession:(id)arg2 stepItem:(id)arg3 logger:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

