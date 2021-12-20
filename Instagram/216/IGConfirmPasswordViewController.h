//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGConfirmPasswordViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGConfirmPasswordView, IGUserSession, NSString;

@interface IGConfirmPasswordViewController : IGGroupedTableViewController <IGConfirmPasswordViewDelegate, UIGestureRecognizerDelegate>
{
    IGUserSession *_userSession;
    NSString *_email;
    IGConfirmPasswordView *_passwordView;
}

- (void).cxx_destruct;
- (void)didTapNextButton;
- (void)confirmPasswordViewDidChangeTextField:(id)arg1;
- (void)didTapGetHelpButton;
- (void)_revertNavigationItemStatus;
- (void)_hideKeyboard;
- (void)_handleRequestError:(id)arg1 error:(id)arg2;
- (void)_validateAndSubmit;
- (void)_dismiss;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 email:(id)arg2 sessionId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

