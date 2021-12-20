//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGTextFieldDelegate-Protocol.h"

@class IGCoreTextView, IGEditProfileParams, IGInformativeTextView, IGStyledString, IGUserSession, NSMutableDictionary, NSString, UIBarButtonItem, UILabel, UIView;
@protocol IGEditProfileUsernameViewControllerDelegate;

@interface IGEditProfileUsernameViewController : IGViewController <IGTextFieldDelegate, IGCoreTextLinkHandler>
{
    UIView *_usernameContainerView;
    IGInformativeTextView *_usernameTextView;
    IGCoreTextView *_bottomMessageView;
    IGStyledString *_styledBottomMessage;
    UILabel *_disclaimerLabel;
    UIBarButtonItem *_rightBarButtonItem;
    IGUserSession *_userSession;
    _Bool _isPresentedInOnboardingChecklist;
    IGEditProfileParams *_usernameEditParams;
    _Bool _hasTrustedUsername;
    NSMutableDictionary *_editProfileRequestParameters;
    _Bool _showSyncedUsernameReminder;
    id <IGEditProfileUsernameViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGEditProfileUsernameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_confirmSubmitUpdatedUsername;
- (void)_submitUpdatedUsername;
- (_Bool)_isPendingReview;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (Optional_3f778f9c)_targetIdentityInfo;
- (void)_logPersonalUsernameReminderImpression;
- (void)_logBizUsernameReminderImpression;
- (void)_fetchUsernameReminderForBCI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 username:(id)arg2 trustedUsername:(id)arg3 holdingDays:(long long)arg4 usernameEditParams:(id)arg5 editProfileRequestParameters:(id)arg6 isPresentedInOnboardingChecklist:(_Bool)arg7 showSyncedUsernameReminder:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
