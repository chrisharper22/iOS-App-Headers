//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDeviceSession, IGSessionTracker, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGShoppingActivityFeedLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _eventLogger;
    IGDeviceSession *_deviceSession;
    NSString *_analyticsModule;
    NSString *_priorAnalyticsModule;
    IGSessionTracker *_shoppingSessionTracker;
    _Bool _hasLoggedActivityFeedLoad;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasLoggedActivityFeedLoad; // @synthesize hasLoggedActivityFeedLoad=_hasLoggedActivityFeedLoad;
- (void)logNotificationSettingsButtonSubimpression;
- (void)logNotificationSettingsButtonImpression;
- (void)logTapOnNotificationsSettingsButton;
- (void)logActivityFeedLoadEventWithStories:(id)arg1;
- (void)logActivityFeedAbandoned;
- (void)logActivityFeedImpression;
- (id)initWithEventLogger:(id)arg1 deviceSession:(id)arg2 analyticsModule:(id)arg3 priorAnalyticsModule:(id)arg4 shoppingSessionTracker:(id)arg5;

@end

