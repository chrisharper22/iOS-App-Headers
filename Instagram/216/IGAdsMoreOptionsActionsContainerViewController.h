//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAdsMoreOptionsActionReasonsViewControllerDelegate-Protocol.h"
#import "IGAdsMoreOptionsActionsViewControllerDelegate-Protocol.h"
#import "IGAdsMoreOptionsAdsWinbackViewControllerDelegate-Protocol.h"
#import "IGAdsMoreOptionsThankYouViewControllerDelegate-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGNavigationControllerDelegate-Protocol.h"

@class IGAdsMoreOptionsActionReasonsListModel, IGAdsMoreOptionsActionsViewController, IGAdsWinbackLogger, IGAsyncTask, IGMoreOptionsActionModelType, IGNavigationController, IGUserSession, NSString;
@protocol IGAdsMoreOptionsActionsContainerViewControllerDelegate;

@interface IGAdsMoreOptionsActionsContainerViewController : IGViewController <IGAdsMoreOptionsActionsViewControllerDelegate, IGNavigationControllerDelegate, IGAdsMoreOptionsActionReasonsViewControllerDelegate, IGAdsMoreOptionsThankYouViewControllerDelegate, IGAdsMoreOptionsAdsWinbackViewControllerDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGMoreOptionsActionModelType *_actionType;
    IGNavigationController *_adsActionsNavController;
    IGAdsMoreOptionsActionsViewController *_adsActionsViewController;
    long long _step;
    IGAsyncTask *_reasonsListRequest;
    IGAdsMoreOptionsActionReasonsListModel *_currentReasonsList;
    _Bool _isSpanFullScreen;
    _Bool _isSubmitEnabledInReasonsFlow;
    IGAdsWinbackLogger *_adsWinbackLogger;
    id <IGAdsMoreOptionsActionsContainerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAdsMoreOptionsActionsContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_sheetPartialHeightForStep:(long long)arg1;
- (void)_updateHeightIfNecessary;
- (id)_reasonsViewControllerFromAdsAction:(id)arg1;
- (void)_pushAdsIPViolationWebViewControllerWithSponsoredInfoProvider:(id)arg1;
- (id)_createAdsActionViewControllerWithAdsAction:(id)arg1;
- (void)_showAdWinbackViewController:(unsigned long long)arg1;
- (void)_showThankYouViewControllerForAdsAction:(id)arg1;
- (void)adsMoreOptionsAdsWinbackViewController:(id)arg1 didTapHowWeUseThisActivityButton:(id)arg2;
- (void)adsMoreOptionsAdsWinbackViewController:(id)arg1 didTapUpdateTrackingSettingsButton:(id)arg2;
- (void)adsMoreOptionsThankYouViewController:(id)arg1 didTapAboutAdsButton:(id)arg2 withActionModel:(id)arg3;
- (void)adsActionReasonsViewController:(id)arg1 didSelectReason:(id)arg2 actionReasonsListModel:(id)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)adsActionsViewController:(id)arg1 didSelectAdsAction:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 actionType:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

