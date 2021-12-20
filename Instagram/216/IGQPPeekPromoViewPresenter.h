//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGQPBasePresenter.h"

#import "IGQPPeekPromoDisclaimerViewControllerDelegate-Protocol.h"

@class IGPartialModalSheetViewController, IGQPCreative, IGQPPeekPromoDisclaimerViewController, IGUserSession, NSString;
@protocol IGVideoCallViewController;

@interface IGQPPeekPromoViewPresenter : IGQPBasePresenter <IGQPPeekPromoDisclaimerViewControllerDelegate>
{
    id <IGVideoCallViewController> _viewController;
    IGPartialModalSheetViewController *_igqpPeekPromoLearnMoreDisclaimerContainerViewController;
    IGQPPeekPromoDisclaimerViewController *_igqpPeekPromoLearnMoreDisclaimerViewController;
    IGQPCreative *_lastQPCreative;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)onWatchButtonTapped:(id)arg1;
- (void)onDismissButtonTapped:(id)arg1;
- (double)_toastDuration;
- (void)_handleDismissAction:(_Bool)arg1 swipeToDismiss:(_Bool)arg2;
- (void)_handleSecondaryAction:(id)arg1;
- (void)_handlePrimaryAction:(id)arg1;
- (_Bool)presentForTriggerID:(id)arg1 fromViewController:(id)arg2;
- (void)dismissCurrentPromotion;
- (id)qpSurfaceID;
- (int)qpType;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
