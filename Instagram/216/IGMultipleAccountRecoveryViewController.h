//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGMultipleAccountRecoverySectionControllerDelegate-Protocol.h"
#import "IGMultipleAccountRecoveryViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGAuthenticator, IGListAdapter, IGMultipleAccountRecoveryView, IGNUXLayoutSpec, IGRegistrationLogger, IGVerifyMultipleUsersContext, NSMutableOrderedSet, NSString;
@protocol IGAuthenticationFlowDismissDelegate, IGMultipleAccountRecoveryViewControllerDelegate, IGUserLauncherSetProviding;

@interface IGMultipleAccountRecoveryViewController : IGViewController <IGListAdapterDataSource, IGMultipleAccountRecoverySectionControllerDelegate, IGMultipleAccountRecoveryViewDelegate, UIScrollViewDelegate>
{
    IGVerifyMultipleUsersContext *_verifyContext;
    IGNUXLayoutSpec *_layoutSpec;
    IGAuthenticator *_authenticator;
    IGRegistrationLogger *_logger;
    IGMultipleAccountRecoveryView *_containerView;
    IGListAdapter *_listAdapter;
    _Bool _hasLoggedOutUsers;
    long long _numLoggedInUsers;
    NSMutableOrderedSet *_usersToRecover;
    id <IGAuthenticationFlowDismissDelegate> _flowDismissDelegate;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    NSString *_step;
    id <IGMultipleAccountRecoveryViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGMultipleAccountRecoveryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateButtonText;
- (void)_loginUsers:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)multipleAccountRecoveryViewDidTapBackButton:(id)arg1;
- (void)multipleAccountRecoveryView:(id)arg1 didTapURL:(id)arg2;
- (void)multipleAccountRecoveryViewDidTapLogInButton:(id)arg1;
- (void)sectionController:(id)arg1 didToggleSelect:(_Bool)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVerifyMultipleUsersContext:(id)arg1 layoutSpec:(id)arg2 authenticator:(id)arg3 logger:(id)arg4 flowDismissDelegate:(id)arg5 launcherSetProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

