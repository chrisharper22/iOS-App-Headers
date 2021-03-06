//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAuthenticationResult, IGLoginAccount, IGOneTapLoginManager;

@protocol IGOneTapLoginManagerDelegate <NSObject>
- (void)oneTapLoginManager:(IGOneTapLoginManager *)arg1 didTriggerLoginForPersistentAccount:(IGLoginAccount *)arg2;
- (void)oneTapLoginManager:(IGOneTapLoginManager *)arg1 didFinishAuthenticationWithResult:(IGAuthenticationResult *)arg2 account:(IGLoginAccount *)arg3;
- (void)oneTapLoginManagerDidSwitchToPasswordAfterBiometricsFailure:(IGOneTapLoginManager *)arg1;
- (void)oneTapLoginManager:(IGOneTapLoginManager *)arg1 didBeginAuthenticatingAccount:(IGLoginAccount *)arg2;
@end

