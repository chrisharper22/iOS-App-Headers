//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBLifecycleEventBatchWriter, FBTimer, NSMutableArray, NSString;
@protocol FBAnalyticsLogging, OS_dispatch_queue;

@interface FBLifecycle : NSObject
{
    struct {
        long long batchSize;
        double updateInterval;
        _Bool rusageEnabled;
        _Bool extendedMemoryEnabled;
        _Bool crashResistanceEnabled;
        _Bool instanceMetricsEnabled;
        unsigned int liveInstanceCountBeforeReporting;
        struct unordered_map<Class, int, std::hash<Class>, std::equal_to<Class>, std::allocator<std::pair<const Class, int>>> instanceCountLimitMap;
        CDUnknownBlockType metricsPlugin;
        _Bool lifecycleNotificationsHandledExternally;
    } _configuration;
    id <FBAnalyticsLogging> _logger;
    NSObject<OS_dispatch_queue> *_samplingQueue;
    FBTimer *_allModesTimer;
    struct vector<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder, std::allocator<StructuredLogger::IosLifecycleLifecycleEventsTypeNoBuilder>> _loggingEvents;
    FBLifecycleEventBatchWriter *_eventWriter;
    struct atomic<UIApplicationState> _appState;
    struct shared_timed_mutex _navigationLock;
    NSString *_navigationModule;
    NSString *_navigationViewController;
    NSMutableArray *_userPerceptibleScopeNames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_memoryPressureNotification:(id)arg1;
- (void)_memoryLimitNotification:(id)arg1;
- (void)notifyWillResignActive;
- (void)notifyDidBecomeActive;
- (void)notifyDidEnterBackground;
- (void)notifyWillEnterForeground;
- (void)notifyDidFinishLaunching;
- (void)_appStateChangedWithNotificationNamed:(id)arg1;
- (void)notifyOfLoggerChangeWithStructuredLogger:(id)arg1;
- (void)notifyOfSessionChangeWithIdentifier:(id)arg1;
- (void)notifyOfUserPerceptibleClose:(id)arg1 metadata:(id)arg2;
- (void)notifyOfUserPerceptibleOpen:(id)arg1 metadata:(id)arg2;
- (void)notifyOfNavigationToViewControllerWithClassNamed:(id)arg1 module:(id)arg2;
- (void)_heartbeat;
- (id)initWithStructuredLogger:(id)arg1 configuration:(const void *)arg2;

@end
