//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGBatteryLevelListener-Protocol.h"

@class IGBatteryLevelAnnouncerManager, NSString, NSUserDefaults;
@protocol IGAnalyticsEventLoggingProtocol, IGBatteryLevelLoggerDelegate;

@interface IGBatteryLevelLogger : NSObject <IGBatteryLevelListener>
{
    _Bool _batteryLowLastSession;
    _Bool _batteryLow;
    IGBatteryLevelAnnouncerManager *_manager;
    double _currentBatteryLevel;
    NSUserDefaults *_userDefaults;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGBatteryLevelLoggerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBatteryLevelLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_writeDeviceBatteryInfoToDiskWithLevel:(double)arg1;
- (void)batteryDidChangeLevel:(double)arg1;
- (void)removeBatteryInfoData;
- (id)getBatteryInfoData;
- (_Bool)wasLowBatteryLastSession;
- (void)_logCurrentBatteryLevelToServerIfNecessary:(double)arg1;
- (id)initWithLoggingToDiskEnabled:(_Bool)arg1 loggingToServerUponInitializationEnabled:(_Bool)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

