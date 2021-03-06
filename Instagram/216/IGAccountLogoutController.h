//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAccountStoreCoordinator, IGConfirmPhoneHelper, IGOneTapLoginLoggingHelper, IGUserSession, UIViewController;
@protocol IGAccountLogoutControllerDelegate;

@interface IGAccountLogoutController : NSObject
{
    UIViewController *_alertViewPresenter;
    IGAccountStoreCoordinator *_accountStoreCoordinator;
    IGConfirmPhoneHelper *_confirmPhoneHelper;
    IGOneTapLoginLoggingHelper *_oneTapLoggingHelper;
    id <IGAccountLogoutControllerDelegate> _delegate;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGAccountLogoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeAccountPksFromSSOBlocklist:(id)arg1;
- (void)_tryConfirmContactPointWithPhoneNumber:(id)arg1 email:(id)arg2 logoutBlock:(CDUnknownBlockType)arg3;
- (void)_tryToShowContactPointDialogWithLogoutBlock:(CDUnknownBlockType)arg1;
- (void)_saveOneTapLoginCredentialsToKeychainWithData:(id)arg1 withAuthHeader:(id)arg2;
- (void)_showDoubleDialogForMultipleAccounts:(_Bool)arg1 withLogoutBlock:(CDUnknownBlockType)arg2;
- (void)_showDoubleDialogForLogoutAccountUnitPKs:(id)arg1 withLogoutBlock:(CDUnknownBlockType)arg2;
- (void)_showDoubleLogoutDialogForAccountGroupWithMainAccount:(id)arg1 logoutBlock:(CDUnknownBlockType)arg2;
- (void)_showSimpleLogoutDialogForAccountGroupWithLogoutBlock:(CDUnknownBlockType)arg1;
- (void)_showSimpleLogoutDialogForMultipleUnitsWithLogoutBlock:(CDUnknownBlockType)arg1 logoutAccountUnitPKs:(id)arg2;
- (void)_showSimpleLogoutDialogForMultipleAccounts:(_Bool)arg1 withLogoutBlock:(CDUnknownBlockType)arg2;
- (void)_logoutSingleUserWithOneTapLoginEnabled:(_Bool)arg1 logoutEntryPoint:(long long)arg2;
- (void)_performAccountGroupLogoutWithOneTapLoginEnabledAccountPKs:(id)arg1 logoutEntryPoint:(long long)arg2;
- (void)_performLogoutMultipleUnitsWithOneTapLoginEnabled:(id)arg1 logoutAccountUnitPKs:(id)arg2 logoutEntryPoint:(long long)arg3;
- (void)_performLogoutWithOneTapLoginEnabled:(_Bool)arg1 logoutEntryPoint:(long long)arg2;
- (void)fetchContactPointsForCurrentUserIfNecessary;
- (void)showDirectAppLogoutAlertViewForAllUsersWithUIUpdateBlock:(CDUnknownBlockType)arg1;
- (void)showDirectAppLogoutAlertViewForCurrentUserWithUIUpdateBlock:(CDUnknownBlockType)arg1;
- (void)showLogoutAlertViewForCurrentUserWithMultipleUnitsWithUIUpdateBlock:(CDUnknownBlockType)arg1 logoutAccountUnitPKs:(id)arg2 logoutEntryPoint:(long long)arg3;
- (void)showAccountGroupLogoutAlertViewForCurrentUserWithUIUpdateBlock:(CDUnknownBlockType)arg1 logoutEntryPoint:(long long)arg2;
- (void)showLogoutAlertViewForAllUsersIfMultipleWithUIUpdateBlock:(CDUnknownBlockType)arg1 logoutEntryPoint:(long long)arg2;
- (void)showLogoutAlertViewForCurrentUserIfMultipleWithUIUpdateBlock:(CDUnknownBlockType)arg1 logoutEntryPoint:(long long)arg2;
- (void)showLogoutAlertViewForCurrentUserIfSingleWithUIUpdateBlock:(CDUnknownBlockType)arg1 logoutEntryPoint:(long long)arg2;
- (id)initWithUserSession:(id)arg1 alertViewPresenter:(id)arg2;

@end

