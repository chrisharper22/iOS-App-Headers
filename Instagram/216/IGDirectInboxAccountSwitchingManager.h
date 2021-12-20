//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSwitchUsersControllerDelegate-Protocol.h"

@class IGOneTapLoginSwitchErrorManager, IGProfileTitleViewController, IGUserSession, NSString, UIViewController;
@protocol IGAccountSwitcherPresenting;

@interface IGDirectInboxAccountSwitchingManager : NSObject <IGSwitchUsersControllerDelegate>
{
    IGProfileTitleViewController *_profileTitleViewController;
    UIViewController *_accountSwitcherPresentingViewController;
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    id <IGAccountSwitcherPresenting> _accountSwitcherPresenter;
    IGOneTapLoginSwitchErrorManager *_accountSwitcherErrorManager;
}

- (void).cxx_destruct;
- (void)switchUsersControllerDidSelectRowWithCurrentUser:(id)arg1;
- (void)switchUsersControllerDidSelectAddAccountRow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithOneTapLoginSwitchAccount:(id)arg2;
- (void)switchUsersController:(id)arg1 tableViewDidSelectRowWithUser:(id)arg2;
- (void)hideSwitchControl;
- (id)accountSwitchingTitleViewForViewController:(id)arg1 rightBarButtonItems:(id)arg2 leftBarButtonItems:(id)arg3;
- (void)refreshAccountSwitcher;
- (id)initWithUserSession:(id)arg1 accountSwitcherPresenter:(id)arg2 analyticsModule:(id)arg3;
- (_Bool)shouldShowAccountSwitcher;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
