//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTwoFactorLoginApprovalViewDelegate-Protocol.h"

@class IGTwoFactorLoginApprovalModel, IGTwoFactorLoginApprovalView, IGUserSession, NSString, UIActivityIndicatorView;

@interface IGTwoFactorLoginApprovalViewController : IGViewController <IGTwoFactorLoginApprovalViewDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorLoginApprovalView *_loginApprovalView;
    UIActivityIndicatorView *_loadingIndicatorView;
    IGTwoFactorLoginApprovalModel *_loginApprovalModel;
    unsigned long long _loginApprovalAction;
    unsigned long long _loginApprovalStatus;
}

- (void).cxx_destruct;
- (void)_sendDenyLoginRequest;
- (void)_sendApproveLoginRequest;
- (void)_showDenyConfirmationDialog;
- (void)_showApproveConfirmationDialog;
- (void)_showUnavailableLoginRequestToast;
- (void)_fetchLoginRequestReviewStatus;
- (void)twoFactorLoginApprovalViewDidDenyRequest:(id)arg1;
- (void)twoFactorLoginApprovalViewDidApproveRequest:(id)arg1;
- (void)twoFactorLoginApprovalViewDidTapOnLoginActivity:(id)arg1;
- (void)twoFactorLoginApprovalViewDidTapOnSecuritySettings:(id)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 loginApprovalModel:(id)arg2 loginApprovalAction:(unsigned long long)arg3 loginApprovalStatus:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

