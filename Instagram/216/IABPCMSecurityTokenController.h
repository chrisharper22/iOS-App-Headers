//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACSRedemptionDelegate-Protocol.h"

@class ACSRedeemableToken, NSString;
@protocol ACSClientConforming;

@interface IABPCMSecurityTokenController : NSObject <ACSRedemptionDelegate>
{
    id <ACSClientConforming> _securityTokenProvider;
    ACSRedeemableToken *_fetchedToken;
}

- (void).cxx_destruct;
- (_Bool)_cachedTokenExists;
- (void)redeemDidSucceedWithRedeemableToken:(id)arg1;
- (void)redeemDidFailWithError:(id)arg1;
- (id)getCombinedSecurityTokenWithData:(id)arg1 withExistingToken:(id)arg2;
- (id)clientSideACSTokenFromCacheWithData:(id)arg1;
- (void)preFetchClientSecurityTokensIfNeeded;
- (id)initWithSecurityTokenProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
