//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphQLService, IGAnalyticsSessionIdProvider, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGUserLauncherSet;

@interface IGPostSessionSurveyManager : NSObject
{
    double _sessionStartTime;
    id <IGUserLauncherSet> _launcherSet;
    FBGraphQLService *_graphQLServices;
    NSString *_userPK;
    IGAnalyticsSessionIdProvider *_sessionIdProvider;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)_removeInvalidatedNotification;
- (_Bool)_isNotInCooldown;
- (void)_generateLocalNotificationWithURL:(id)arg1 rootId:(id)arg2 leafId:(id)arg3;
- (void)_appBackgrounded:(id)arg1;
- (void)_appForegrounded:(id)arg1;
- (id)initWithDependencies:(id)arg1;

@end

