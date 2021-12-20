//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FBMQTTAnalyticsLogger;

@interface FBMQTTClientActivityLogger : NSObject
{
    NSString *_appSessionId;
    NSString *_networkSessionId;
    NSString *_mqttSessionId;
    id <FBMQTTAnalyticsLogger> _analyticsLogger;
    double _lastActivityTime;
}

- (void).cxx_destruct;
@property double lastActivityTime; // @synthesize lastActivityTime=_lastActivityTime;
- (void)_setIdleTime:(long long)arg1 dictionary:(id)arg2;
- (void)logActivity:(long long)arg1 direction:(id)arg2 payloadSize:(unsigned long long)arg3 originalSize:(id)arg4 inBackground:(_Bool)arg5 extra:(id)arg6;
- (id)initWithAppSessionId:(id)arg1 networkSessionId:(id)arg2 mqttSessionId:(id)arg3 analyticsLogger:(id)arg4;

@end

