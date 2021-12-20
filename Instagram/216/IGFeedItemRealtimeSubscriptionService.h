//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRealtimeServerPayloadHandler-Protocol.h"
#import "IGUserSessionEndingObject-Protocol.h"

@class IGFeedItemRealtimeSubscriptionData, IGMedia, IGRealtimeMqttClient, NSDate, NSMapTable, NSString;

@interface IGFeedItemRealtimeSubscriptionService : NSObject <IGRealtimeServerPayloadHandler, IGUserSessionEndingObject>
{
    IGFeedItemRealtimeSubscriptionData *_activeSubscription;
    IGMedia *_pendingFeedItem;
    _Bool _enabled;
    _Bool _subscribeWhenNotScrolling;
    struct {
        _Bool enableLikeCountUpdate;
        _Bool enableCommentCountUpdate;
        _Bool enableVideoViewCountUpdate;
    } _configuration;
    IGRealtimeMqttClient *_realtimeClient;
    NSMapTable *_feedItemListenerByMediaId;
    NSDate *_lastCallTime;
    double _period;
}

- (void).cxx_destruct;
- (void)_startSubscriptionWithData:(id)arg1;
- (id)_subscriptionDataFromFeedItem:(id)arg1;
- (id)_getSubscriptionTopic:(id)arg1;
- (void)_reset;
- (void)_unsubscribeActiveSubscription;
- (void)_didEnterBackground;
- (void)userSessionWillEnd;
- (void)handlePayload:(id)arg1;
- (void)addListener:(id)arg1 onFeedItem:(id)arg2;
- (void)removeRealtimeSubscriptionForMedia:(id)arg1;
- (void)addRealtimeSubscriptionForMedia:(id)arg1;
- (void)startSubscriptionIfNeeded;
- (void)dealloc;
- (id)initWithRealtimeClient:(id)arg1 launcherSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
