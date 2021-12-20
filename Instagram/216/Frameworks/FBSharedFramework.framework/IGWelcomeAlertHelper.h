//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGWelcomeAlertHelper : NSObject
{
}

+ (id)_genButtonsForValues:(id)arg1;
+ (_Bool)presentAlertViewForError:(id)arg1 response:(id)arg2 stepName:(id)arg3 callbackResolver:(CDUnknownBlockType)arg4;
+ (_Bool)presentAlertViewForError:(id)arg1 response:(id)arg2 stepName:(id)arg3 attributedDescriptionText:(id)arg4 footerText:(id)arg5 delegate:(id)arg6 callbackResolver:(CDUnknownBlockType)arg7 isIGDS:(_Bool)arg8;
+ (id)defaultBuilderForPath:(id)arg1;
+ (void)sendPasswordResetRequestWithNetworker:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
+ (void)sendRecoveryForOmniContactPoint:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)verifyMultipleUsersRecoverWithCode:(id)arg1 contactPoint:(id)arg2 contactType:(id)arg3 networker:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;
+ (void)sendLoginSMSForUsername:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)sendLoginSMSForPhoneNumber:(id)arg1 prefilledPhoneNumber:(id)arg2 networker:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
+ (void)sendLoginEmailForUsernameOrEmail:(id)arg1 prefilledEmail:(id)arg2 networker:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
+ (void)sendLoginEmailForUsername:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)sendPasswordResetEmailForUser:(id)arg1 networker:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)lookupEmailForUsername:(id)arg1 isRecoverySkipped:(_Bool)arg2 networker:(id)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;

@end

