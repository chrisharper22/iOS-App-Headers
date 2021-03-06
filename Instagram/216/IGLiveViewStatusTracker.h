//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface IGLiveViewStatusTracker : NSObject
{
    NSMutableDictionary *_viewStatusByBroadcastIds;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (void)clearViewStatusForNonactiveBroadcasts;
- (_Bool)isViewStatusActiveForBroadcastId:(id)arg1;
- (long long)viewStatusForBroadcastId:(id)arg1;
- (void)setViewStatus:(long long)arg1 forBroadcastId:(id)arg2;
- (id)init;

@end

