//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSNumber, NSString;

@interface FBPayVerifyPINStatusResponse : NSObject
{
    NSNumber *_legacyNonceEnabled;
    NSNumber *_clientAuthEnabled;
    NSString *_fbpayPINStatus;
    NSArray *_authTickets;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSArray *authTickets; // @synthesize authTickets=_authTickets;
@property(readonly, copy, nonatomic) NSString *fbpayPINStatus; // @synthesize fbpayPINStatus=_fbpayPINStatus;
@property(readonly, copy, nonatomic) NSNumber *clientAuthEnabled; // @synthesize clientAuthEnabled=_clientAuthEnabled;
@property(readonly, copy, nonatomic) NSNumber *legacyNonceEnabled; // @synthesize legacyNonceEnabled=_legacyNonceEnabled;
- (id)initWithPINStatus:(id)arg1 legacyNonceEnabled:(id)arg2 clientAuthEnabled:(id)arg3 authTickets:(id)arg4 error:(id)arg5;

@end

