//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPayPINContext;

@interface FBPayResetPINWithPasswordLoggerInteractor : NSObject
{
    FBPayPINContext *_fbpayPINContext;
}

- (void).cxx_destruct;
- (void)logTappedForgotPassword;
- (void)logTappedToContinueInReset;
- (void)logTappedToLeaveResetFlow;
- (void)logResetPINDisplayForOperation:(long long)arg1;
- (id)initWithContext:(id)arg1;

@end
