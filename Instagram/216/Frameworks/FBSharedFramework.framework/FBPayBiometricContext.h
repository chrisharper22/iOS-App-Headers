//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPayAuthTicket, NSString;

@interface FBPayBiometricContext : NSObject
{
    FBPayAuthTicket *_authTicket;
    NSString *_paymentType;
    NSString *_pinCode;
    NSString *_fallbackTitle;
    NSString *_localizedReason;
    NSString *_loggingSessionId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *loggingSessionId; // @synthesize loggingSessionId=_loggingSessionId;
@property(readonly, copy, nonatomic) NSString *localizedReason; // @synthesize localizedReason=_localizedReason;
@property(readonly, copy, nonatomic) NSString *fallbackTitle; // @synthesize fallbackTitle=_fallbackTitle;
@property(readonly, copy, nonatomic) NSString *pinCode; // @synthesize pinCode=_pinCode;
@property(readonly, copy, nonatomic) NSString *paymentType; // @synthesize paymentType=_paymentType;
@property(readonly, copy, nonatomic) FBPayAuthTicket *authTicket; // @synthesize authTicket=_authTicket;
- (id)initWithAuthTicket:(id)arg1 paymentType:(id)arg2 pinCode:(id)arg3 fallbackTitle:(id)arg4 localizedReason:(id)arg5 loggingSessionId:(id)arg6;

@end

