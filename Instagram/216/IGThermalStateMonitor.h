//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGApplicationStateReader, NSNotificationCenter, NSProcessInfo, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGScheduler;

@interface IGThermalStateMonitor : NSObject
{
    IGApplicationStateReader *_applicationStateReader;
    NSProcessInfo *_processInfo;
    NSNotificationCenter *_notificationCenter;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGScheduler> _scheduler;
    _Bool _isMonitoring;
    long long _currentThermalState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long currentThermalState; // @synthesize currentThermalState=_currentThermalState;
- (void)_logThermalStateWithApplicationStateName:(id)arg1;
- (void)_setThermalStateInExceptionHandler;
- (void)_updateThermalStateOnSerialQueue;
@property(readonly, nonatomic) NSString *currentThermalStateName;
- (_Bool)isMonitoring;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)initWithApplicationStateReader:(id)arg1 processInfo:(id)arg2 notificationCenter:(id)arg3 analyticsLogger:(id)arg4 scheduler:(id)arg5;
- (id)initWithApplication:(id)arg1 processInfo:(id)arg2 notificationCenter:(id)arg3 analyticsLogger:(id)arg4 serialQueue:(id)arg5;

@end

