//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol FBReachabilityListener <NSObject>

@optional
- (void)latencyStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)uploadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)downloadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
@end

