//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGServiceHelperProtocol-Protocol.h>

@class IGUserDefaults, NSString, OAToken;
@protocol IGAPIClient, IGTwitterOAuthAnnouncer;

@interface IGTwitterOAuthHelper : NSObject <IGServiceHelperProtocol>
{
    _Bool _initialized;
    id <IGTwitterOAuthAnnouncer> _twitterOAuthAnnouncer;
    _Bool _isAvailableForSharing;
    _Bool _wantsToShare;
    _Bool _disabled;
    OAToken *_accessToken;
    NSString *_detailText;
    IGUserDefaults *_sessionUserDefaults;
    id <IGAPIClient> _networker;
}

+ (id)shortServiceName;
+ (id)sharedHelperForUserSession:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) OAToken *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool wantsToShare; // @synthesize wantsToShare=_wantsToShare;
@property(nonatomic) _Bool isAvailableForSharing; // @synthesize isAvailableForSharing=_isAvailableForSharing;
- (id)_deserializeToToken:(id)arg1;
- (id)_serializeToken:(id)arg1;
- (void)_loadTokensIfNecessary;
- (void)authControllerLoginFailed:(id)arg1;
- (void)authControllerLoginSucceeded:(id)arg1 withTokenKey:(id)arg2 secret:(id)arg3 username:(id)arg4;
- (void)logoutAndUnlink;
- (void)logout;
- (id)viewControllerForAdvancedOptionsWithUserSession:(id)arg1;
- (id)sharingInfo;
- (void)setupServerLinkage:(id)arg1;
- (id)shareKey;
- (_Bool)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (_Bool)requiresLocationCoordinate;
- (_Bool)supportsCrosspostingWith:(id)arg1 forMediaType:(long long)arg2;
- (_Bool)supportsMediaType:(long long)arg1;
- (_Bool)isAvailableInCurrentLocale;
- (_Bool)isConfiguredForCrossPosting;
- (_Bool)shouldUseSubtitleCellStyle;
- (_Bool)hidden;
- (_Bool)isConfiguredOnlyOnServer;
- (_Bool)isConfigured;
- (id)serviceName;
- (id)initWithSessionUserDefaults:(id)arg1 networker:(id)arg2 twitterOAuthAnnouncer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

