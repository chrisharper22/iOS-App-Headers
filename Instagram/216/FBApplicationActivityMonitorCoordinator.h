//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBActivityMonitor, NSNotificationCenter, UIApplication;

@interface FBApplicationActivityMonitorCoordinator : NSObject
{
    FBActivityMonitor *_activityMonitor;
    NSNotificationCenter *_notificationCenter;
    UIApplication *_application;
    _Bool _useNotificationLifecycleEvents;
    _Bool _observed;
}

- (void).cxx_destruct;
- (void)_applicationBackgroundRefreshStatusDidChange;
- (void)_applicationDidReceiveMemoryWarning;
- (void)applicationWillEnterForegroundWithState:(long long)arg1;
- (void)applicationDidFinishLaunchingWithState:(long long)arg1 options:(id)arg2;
- (void)applicationWillTerminateWithState:(long long)arg1;
- (void)applicationDidEnterBackgroundWithState:(long long)arg1;
- (void)applicationWillResignActiveWithState:(long long)arg1;
- (void)applicationDidBecomeActiveWithState:(long long)arg1;
- (void)observeApplicationSynchronously:(_Bool)arg1;
- (void)observeApplication;
- (id)initWithActivityMonitor:(id)arg1 application:(id)arg2 notificationCenter:(id)arg3 useNotificationLifecycleEvents:(_Bool)arg4;
- (id)initWithActivityMonitor:(id)arg1 application:(id)arg2 useNotificationLifecycleEvents:(_Bool)arg3;
- (id)initWithActivityMonitor:(id)arg1 application:(id)arg2;

@end

