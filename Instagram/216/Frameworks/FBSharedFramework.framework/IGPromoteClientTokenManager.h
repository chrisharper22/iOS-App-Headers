//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAnalyticsStructuredLogger, IGUserDefaults;
@protocol IGUserLauncherSetProviding;

@interface IGPromoteClientTokenManager : NSObject
{
    IGUserDefaults *_userDefaults;
    id <IGUserLauncherSetProviding> _launcherSet;
    IGAnalyticsStructuredLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAnalyticsStructuredLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <IGUserLauncherSetProviding> launcherSet; // @synthesize launcherSet=_launcherSet;
@property(readonly, nonatomic) IGUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)_logCachedPromoteClientTokenClearedWithFbUserId:(id)arg1;
- (void)_logCachedPromoteClientTokenFetchedWithFbUserId:(id)arg1;
- (void)_logAuthCancelled;
- (void)_logAuthCompletedWithError;
- (void)_logAuthCompletedWithSuccess;
- (void)_logAuthStarted;
- (id)_readOldPromoteClientTokenFromUserDefaults;
- (id)_readPromoteClientTokenFromUserDefaults;
- (void)_handleRequestAccessTokenWithResponse:(id)arg1 withError:(id)arg2 accessTokenCallbackWithTokenState:(CDUnknownBlockType)arg3;
- (void)_persistPromoteClientToken:(id)arg1;
- (void)clearPromoteClientTokenPostLaunch;
- (void)_clearOldPromoteClientToken;
- (void)clearPromoteClientToken;
- (id)promoteClientToken;
- (void)requestAccessTokenWithUserSession:(id)arg1 forceLogin:(_Bool)arg2 fromViewController:(id)arg3 accessTokenCallbackWithTokenState:(CDUnknownBlockType)arg4;
- (id)initWithUserDefaults:(id)arg1 launcherSet:(id)arg2 logger:(id)arg3;

@end

