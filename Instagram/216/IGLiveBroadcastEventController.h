//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IGLiveBroadcastEventController : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_broadcastEventVersionDictionary;
}

- (void).cxx_destruct;
- (void)sendEvent:(long long)arg1 broadcastId:(id)arg2 guestId:(id)arg3 networker:(id)arg4 currentOffsetFromVideoStart:(double)arg5 logger:(id)arg6;
- (id)init;

@end

