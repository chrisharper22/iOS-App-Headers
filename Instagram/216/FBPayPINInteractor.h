//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBPayAuthTicketIDCaching, FBPaySecurityPINAPIService;

@interface FBPayPINInteractor : NSObject
{
    id <FBPaySecurityPINAPIService> _pinNetworkService;
    id <FBPayAuthTicketIDCaching> _authTicketIDCache;
    NSString *_paymentType;
    NSString *_targetAccountID;
    NSString *_authenticationFlowType;
}

- (void).cxx_destruct;
- (void)saveAuthTicketIDs:(id)arg1;
- (void)updateToNewPINStatus:(id)arg1 usingCurrentPIN:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)verifyPIN:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)resetWithPassword:(id)arg1 newPIN:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)resetWithPIN:(id)arg1 newPIN:(id)arg2 verifiedPINReponse:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)createPIN:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)verifyPINStatusWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 authenticationFlowType:(id)arg2 targetAccountID:(id)arg3;

@end
