//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDeviceSession, IGDiskManager, IGQPAppConfiguration, IGUserDefaults, NSString;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGQPWebViewDismissedAnnouncer, IGUserLauncherSet;

@interface IGQuickPromotionCoordinatorSessionDeps : NSObject
{
    NSString *_userPk;
    id <IGAPIClient> _networker;
    IGDiskManager *_diskManager;
    IGUserDefaults *_sessionUserDefaults;
    IGDeviceSession *_deviceSession;
    IGQPAppConfiguration *_qpAppConfiguration;
    id <IGQPWebViewDismissedAnnouncer> _qpWebViewDismissedAnnouncer;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGUserLauncherSet> _launcherSet;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGUserLauncherSet> launcherSet; // @synthesize launcherSet=_launcherSet;
@property(readonly, nonatomic) id <IGAnalyticsEventLoggingProtocol> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <IGQPWebViewDismissedAnnouncer> qpWebViewDismissedAnnouncer; // @synthesize qpWebViewDismissedAnnouncer=_qpWebViewDismissedAnnouncer;
@property(readonly, nonatomic) IGQPAppConfiguration *qpAppConfiguration; // @synthesize qpAppConfiguration=_qpAppConfiguration;
@property(readonly, nonatomic) IGDeviceSession *deviceSession; // @synthesize deviceSession=_deviceSession;
@property(readonly, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(readonly, nonatomic) IGDiskManager *diskManager; // @synthesize diskManager=_diskManager;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) NSString *userPk; // @synthesize userPk=_userPk;
- (id)initWithUserPk:(id)arg1 networker:(id)arg2 diskManager:(id)arg3 sessionUserDefaults:(id)arg4 deviceSession:(id)arg5 qpAppConfiguration:(id)arg6 qpWebViewDismissedAnnouncer:(id)arg7 analyticsLogger:(id)arg8 launcherSet:(id)arg9;

@end

