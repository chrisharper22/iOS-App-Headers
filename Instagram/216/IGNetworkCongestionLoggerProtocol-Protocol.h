//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGNetworkingRequest, IGRequestPolicy;

@protocol IGNetworkCongestionLoggerProtocol <NSObject>
- (void)requestFinished:(IGNetworkingRequest *)arg1 endTime:(double)arg2 bytesReceived:(unsigned long long)arg3;
- (void)requestStarted:(IGNetworkingRequest *)arg1 policy:(IGRequestPolicy *)arg2 startTime:(double)arg3;
@end

