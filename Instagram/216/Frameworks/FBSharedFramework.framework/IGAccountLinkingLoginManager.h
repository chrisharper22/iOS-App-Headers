//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAuthHeaderStore, IGAuthService, IGLoginDeferredAccountManager;
@protocol IGAccountLinkingLoginAnnouncer, IGUserReading;

@interface IGAccountLinkingLoginManager : NSObject
{
    id <IGUserReading> _userReader;
    IGAuthHeaderStore *_authHeaderStore;
    IGAuthService *_authService;
    IGLoginDeferredAccountManager *_deferredAccountManager;
    id <IGAccountLinkingLoginAnnouncer> _announcer;
}

- (void).cxx_destruct;
- (void)_logDataWithEventName:(id)arg1 extraDict:(id)arg2;
- (void)_logInChildAccountsWithSessions:(id)arg1 accountLinker:(id)arg2;
- (void)_storeLoggedInAccountsWithAccountInfoDicts:(id)arg1 accountLinker:(id)arg2;
- (void)addListener:(id)arg1;
- (void)_logOneLoginResponseReceivedEventWithUserPKs:(id)arg1 waterfallID:(id)arg2 requestID:(id)arg3;
- (void)loginChildAccountsInBackgroundWithNonce:(id)arg1 networker:(id)arg2 accountLinker:(id)arg3;
- (id)initWithUserReader:(id)arg1 authHeaderStore:(id)arg2 authService:(id)arg3 loginDeferredAccountManager:(id)arg4;

@end
