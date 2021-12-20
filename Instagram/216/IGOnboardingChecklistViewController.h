//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDismissableViewController-Protocol.h"
#import "IGEmbeddedListViewControllerDelegate-Protocol.h"
#import "IGProAccountOnboardingChecklistSectionControllerDelegate-Protocol.h"
#import "IGProOnboardingChecklistCompletedStepsControllerDelegate-Protocol.h"

@class IG4BLogger, IGBottomButtonsView, IGEmbeddedListViewController, IGHeadlineView, IGProOnboardingChecklistCompletedStepsController, IGProOnboardingChecklistLogger, IGProOnboardingChecklistViewModel, IGStoryConfettiAnimationController, IGUserSession, NSString, UIActivityIndicatorView;
@protocol IGOnboardingChecklistViewControllerDelegate;

@interface IGOnboardingChecklistViewController : IGViewController <IGDismissableViewController, IGEmbeddedListViewControllerDelegate, IGProAccountOnboardingChecklistSectionControllerDelegate, IGProOnboardingChecklistCompletedStepsControllerDelegate>
{
    IGUserSession *_userSession;
    IG4BLogger *_logger;
    IGEmbeddedListViewController *_embeddedListViewController;
    UIActivityIndicatorView *_emptyView;
    IGStoryConfettiAnimationController *_confettiAnimationController;
    IGProOnboardingChecklistViewModel *_viewModel;
    IGProOnboardingChecklistLogger *_proOnboardingChecklistLogger;
    NSString *_entryPoint;
    IGProOnboardingChecklistCompletedStepsController *_proOnboardingChecklistCompletedStepsController;
    IGBottomButtonsView *_bottomButtonView;
    _Bool _didCancelModal;
    _Bool _didStartFromRenewActivation;
    id <IGOnboardingChecklistViewControllerDelegate> _delegate;
    IGHeadlineView *_headlineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGHeadlineView *headlineView; // @synthesize headlineView=_headlineView;
@property(nonatomic) __weak id <IGOnboardingChecklistViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logSubmitErrorWithError:(id)arg1;
- (void)proOnboardingChecklistStepControllerDidUpdateShouldShowConfetti:(_Bool)arg1;
- (void)didDismissViewController;
- (void)onCancelModal;
- (void)proAccountOnboardingChecklistController:(id)arg1 didTapViewModel:(id)arg2;
- (void)embeddedListViewController:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)embeddedListViewController:(id)arg1 scrollReachedEnd:(id)arg2;
- (id)embeddedListViewController:(id)arg1 sectionControllerForViewModel:(id)arg2;
- (void)_markOnboardingChecklistAsOpened;
- (void)_didTapOnboardingChecklistAlertButtonCancel;
- (void)_handleOnboardingChecklistSkipWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_didTapOnboardingChecklistAlertButtonSkip;
- (void)_didTapSkipBottomButton;
- (void)_didTapDoneBottomButton;
- (id)_bottomButtonViewStyle;
- (void)_setupBottomButtonView;
- (void)_setupEmbeddedListViewController;
- (void)_setupHeaderView;
- (void)_setupNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)_showConfettiAnimation;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 viewModel:(id)arg3 entryPoint:(id)arg4 didStartFromRenewActivation:(_Bool)arg5 proOnboardingChecklistCompletedStepsController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
