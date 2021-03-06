//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGLoginAPI : NSObject
{
}

+ (id)_loginBuilderWithUserID:(id)arg1 nonce:(id)arg2 isUsingCloudNonce:(_Bool)arg3 stopDeletionToken:(id)arg4 authHeader:(id)arg5 isSwitchingUsers:(_Bool)arg6;
+ (id)loginRequestWithUserID:(id)arg1 forceLogoutLoginToken:(id)arg2;
+ (id)loginRequestWithQuery:(id)arg1 verificationCode:(id)arg2 source:(id)arg3;
+ (id)loginRequestWithUserIDs:(id)arg1 multiUserRecoverToken:(id)arg2 contactType:(id)arg3;
+ (id)loginRequestWithUserID:(id)arg1 multiUserRecoverToken:(id)arg2 contactType:(id)arg3;
+ (id)loginRequestWithUserID:(id)arg1 vettedPhoneToken:(id)arg2 source:(id)arg3;
+ (id)loginRequestWithInstagramAuthorizationToken:(id)arg1;
+ (id)loginRequestWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 verificationCode:(id)arg3 trustThisDevice:(_Bool)arg4 verificationMethod:(unsigned long long)arg5 trustedNotificationPollingNonces:(id)arg6;
+ (id)loginRequestWithUserID:(id)arg1 reactivationToken:(id)arg2 source:(id)arg3;
+ (id)loginRequestWithUserID:(id)arg1 stopDeletionToken:(id)arg2 source:(id)arg3 reminderTime:(id)arg4;
+ (id)loginRequestWithUsername:(id)arg1 password:(id)arg2 attempts:(unsigned long long)arg3 stopDeletionToken:(id)arg4;
+ (id)loginRequestWithUsername:(id)arg1 password:(id)arg2 isRegLogin:(_Bool)arg3 attempts:(unsigned long long)arg4;
+ (id)loginRequestWithUserID:(id)arg1 token:(id)arg2 source:(id)arg3 autoSend:(id)arg4 isBypassLogin:(_Bool)arg5;
+ (id)loginRequestWithUserID:(id)arg1 nonce:(id)arg2 cloudID:(id)arg3 cloudNonce:(id)arg4 stopDeletionToken:(id)arg5 authHeader:(id)arg6 isSwitchingUsers:(_Bool)arg7;
+ (id)loginRequestWithUserID:(id)arg1 nonce:(id)arg2 stopDeletionToken:(id)arg3 authHeader:(id)arg4 isSwitchingUsers:(_Bool)arg5;

@end

