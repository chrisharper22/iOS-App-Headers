//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGTwoFactorSetupLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_sessionId;
    NSString *_flowId;
}

- (void).cxx_destruct;
- (void)generateNewSetupFlowId;
- (void)logSetupComplete;
- (void)logCodeVerificationFailureWithView:(id)arg1 reason:(id)arg2;
- (void)logCodeResendFailureWithView:(id)arg1 reason:(id)arg2;
- (void)logWithView:(id)arg1 isSMSEnabled:(id)arg2 isTOTPEnabled:(id)arg3;
- (void)logWithAction:(id)arg1 view:(id)arg2 url:(id)arg3 verificationCode:(id)arg4 phoneNumber:(id)arg5;
- (void)logEntryWithEntryPoint:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

