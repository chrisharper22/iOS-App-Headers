//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNavigationEventListener-Protocol.h>

@class IGNavigationEventData, NSString;
@protocol IGNavigationEventLogging, IGSessionChainProvider;

@interface IGNavigationEventManager : NSObject <IGNavigationEventListener>
{
    id <IGNavigationEventLogging> _logger;
    id <IGSessionChainProvider> _chainingManager;
    IGNavigationEventData *_lastNavigationEvent;
}

+ (id)currentModule;
+ (id)lastKNavigationEvents:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IGNavigationEventData *lastNavigationEvent; // @synthesize lastNavigationEvent=_lastNavigationEvent;
@property(retain, nonatomic) id <IGSessionChainProvider> chainingManager; // @synthesize chainingManager=_chainingManager;
@property(retain, nonatomic) id <IGNavigationEventLogging> logger; // @synthesize logger=_logger;
- (void)_logNavigationEvent;
- (void)_mergeCurrentNavigationEventWithNavigationInfo:(id)arg1;
- (void)_flushCurrentNavigationEventForAppearingViewController:(id)arg1;
- (void)_handleNavigationViaClickPoint:(id)arg1 extraInfo:(id)arg2;
- (void)_handleNavigationViaClickPoint:(id)arg1;
- (void)_urlTapped:(id)arg1;
- (void)_moreTapped:(id)arg1;
- (void)_commentButtonTapped:(id)arg1;
- (void)_locationTapped:(id)arg1;
- (void)_userTapped:(id)arg1;
- (void)viewControllerDidDeallocWithAnalyticsModule:(id)arg1;
- (void)viewControllerDidDisappear:(id)arg1 withEventData:(id)arg2;
- (void)viewControllerWillDisappear:(id)arg1;
- (void)viewControllerWillAppear:(id)arg1;
- (void)viewControllerDidAppear:(id)arg1 withEventData:(id)arg2;
- (void)viewControllerDidUpdate:(id)arg1 updateExtras:(id)arg2;
- (void)_logAppStateEvent:(unsigned long long)arg1 moduleKey:(id)arg2;
- (void)_handleWillLaunchExternalApp:(id)arg1;
- (void)_handleAppDidBackground:(id)arg1;
- (void)_handleAppWillResignActive:(id)arg1;
- (void)_handleAppDidForeground:(id)arg1;
- (void)_addNavigationEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

