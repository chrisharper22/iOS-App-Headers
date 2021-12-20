//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGDPRConsentParentalApprovalViewDelegate-Protocol.h"

@class IGGDPRConsentContext, IGGDPRConsentDataSource, IGGDPRConsentLayoutSpec, IGGDPRConsentLogger, IGGDPRConsentNavigationPresenter, IGGDPRConsentParentalApprovalView, IGUserSession, NSString;
@protocol IGAPIClient;

@interface IGGDPRConsentParentalApprovalViewController : IGViewController <IGGDPRConsentParentalApprovalViewDelegate>
{
    IGUserSession *_userSession;
    IGGDPRConsentDataSource *_consentDataSource;
    IGGDPRConsentContext *_consentContext;
    IGGDPRConsentParentalApprovalView *_parentalApprovalView;
    IGGDPRConsentLogger *_logger;
    IGGDPRConsentLayoutSpec *_layoutSpec;
    id <IGAPIClient> _networker;
    IGGDPRConsentNavigationPresenter *_presenter;
}

- (void).cxx_destruct;
- (void)GDPRConsentParentalApprovalViewDidTapGetPermissionButton;
- (void)GDPRConsentParentalApprovalViewDidTapSkipButton;
- (void)onCancelModal;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)_configureParentalApprovalView;
- (void)_configureWithConsentContext;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 consentContext:(id)arg2 consentDataSource:(id)arg3 networker:(id)arg4 navigationPresenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

