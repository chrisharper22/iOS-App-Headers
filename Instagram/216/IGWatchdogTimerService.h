//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBWatchdogTimer, IGWatchdogConfig, IGWatchdogExpiryHandler;

@interface IGWatchdogTimerService : NSObject
{
    IGWatchdogConfig *_watchdogTimerConfig;
    FBWatchdogTimer *_watchdogTimer;
    IGWatchdogExpiryHandler *_watchdogExpiryHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGWatchdogExpiryHandler *watchdogExpiryHandler; // @synthesize watchdogExpiryHandler=_watchdogExpiryHandler;
@property(readonly, nonatomic) FBWatchdogTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(readonly, nonatomic) IGWatchdogConfig *watchdogTimerConfig; // @synthesize watchdogTimerConfig=_watchdogTimerConfig;
- (void)_updateOnSessionChange:(id)arg1;
- (void)startWatchdogTimer;
- (_Bool)stalledInPreviousSession;
- (id)initWithWatchdogTimer:(id)arg1 watchdogExpiryHandler:(id)arg2 watchdogConfig:(id)arg3;

@end

