//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGraphQLService, IGUserDefaults;
@protocol IGUserLauncherSetProviding;

@interface IGFXCALNativeAuthTokenVerifier : NSObject
{
    IGGraphQLService *_graphQLService;
    IGUserDefaults *_sessionUserDefaults;
    id <IGUserLauncherSetProviding> _launcherSet;
}

- (void).cxx_destruct;
- (void)_updateCacheWithResponse:(id)arg1;
- (void)_clearCacheValue;
- (void)_fetchVerificationStatusWithToken:(id)arg1;
- (_Bool)isNativeTokenEligible;
- (void)fetchVerificationStatusFromServer;
- (id)initWithGraphQLService:(id)arg1 sessionUserDefaults:(id)arg2 launcherSet:(id)arg3;

@end

