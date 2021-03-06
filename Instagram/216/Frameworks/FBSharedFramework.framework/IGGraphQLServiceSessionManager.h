//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGraphQLService;

@interface IGGraphQLServiceSessionManager : NSObject
{
    IGGraphQLService *_graphQLServiceNoAuth;
    IGGraphQLService *_graphQLServiceFBAuth;
    IGGraphQLService *_graphQLServiceBusinessUserAuth;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGGraphQLService *graphQLServiceBusinessUserAuth; // @synthesize graphQLServiceBusinessUserAuth=_graphQLServiceBusinessUserAuth;
@property(readonly, nonatomic) IGGraphQLService *graphQLServiceFBAuth; // @synthesize graphQLServiceFBAuth=_graphQLServiceFBAuth;
@property(readonly, nonatomic) IGGraphQLService *graphQLServiceNoAuth; // @synthesize graphQLServiceNoAuth=_graphQLServiceNoAuth;
- (id)initWithNetworker:(id)arg1 launcherSet:(id)arg2 graphQLCache:(id)arg3 reauthenticator:(id)arg4 facebookHelper:(id)arg5 userPK:(id)arg6 sessionUserDefaults:(id)arg7 graphQLRegionHintStore:(id)arg8 eligibilityHelperProvider:(id)arg9;

@end

