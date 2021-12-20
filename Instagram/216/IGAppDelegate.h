//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIApplicationDelegate-Protocol.h"

@class AppServicesManager, NSString, UIWindow;
@protocol IGAppCoordinatorProtocol;

@interface IGAppDelegate : NSObject <UIApplicationDelegate>
{
    AppServicesManager *_appServicesManager;
    _Bool _handledOpenWithURLInDidFinishLaunching;
    id <IGAppCoordinatorProtocol> _appCoordinator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGAppCoordinatorProtocol> appCoordinator; // @synthesize appCoordinator=_appCoordinator;
@property(nonatomic) _Bool handledOpenWithURLInDidFinishLaunching; // @synthesize handledOpenWithURLInDidFinishLaunching=_handledOpenWithURLInDidFinishLaunching;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)_handleURLFromLaunchOptionsForApplication:(id)arg1 launchOptions:(id)arg2;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
@property(retain, nonatomic) UIWindow *window;
- (_Bool)pushKitEnabled;
- (id)generateAppServicesManager;
- (id)applicationAppServicesHost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

