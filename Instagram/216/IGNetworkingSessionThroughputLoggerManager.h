//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGNetworkingSessionThroughputLogger;

@interface IGNetworkingSessionThroughputLoggerManager : NSObject
{
    IGNetworkingSessionThroughputLogger *_currentSessionThroughputLogger;
}

- (void).cxx_destruct;
- (void)_setCurrentSessionBandwidthLoggerAndStartSessionWithUserSession:(id)arg1 bandwidthRecorder:(id)arg2;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (void)userDidUpdateWithUserSession:(id)arg1 bandwidthRecorder:(id)arg2;
- (void)appDidStartUpWithUserSession:(id)arg1 bandwidthRecorder:(id)arg2;

@end
