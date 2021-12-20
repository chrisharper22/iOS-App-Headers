//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAuthenticationLoginManager, IGUserSession, NSDictionary, NSError, NSNotification, NSString;

@protocol IGAuthenticationLoginManagerDelegate <NSObject>
- (void)loginManager:(IGAuthenticationLoginManager *)arg1 authenticationFailureWithError:(NSError *)arg2 responseDict:(NSDictionary *)arg3 notification:(NSNotification *)arg4 currentUserSession:(IGUserSession *)arg5;
- (void)loginManagerAttemptToLoginFailed:(IGAuthenticationLoginManager *)arg1;
- (void)loginManager:(IGAuthenticationLoginManager *)arg1 didAttemptToLoginWithUsername:(NSString *)arg2;
- (void)loginManager:(IGAuthenticationLoginManager *)arg1 biometricsLoginFailedForUsername:(NSString *)arg2;
- (void)loginManager:(IGAuthenticationLoginManager *)arg1 didAttemptToLoginFromLink:(_Bool)arg2;
- (void)loginManager:(IGAuthenticationLoginManager *)arg1 didAttemptToLoginWithUsernameAndPassword:(_Bool)arg2;
@end

