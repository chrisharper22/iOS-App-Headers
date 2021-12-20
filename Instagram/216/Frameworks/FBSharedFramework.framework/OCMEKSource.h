//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OCMEKSubscriptionToken;

@interface OCMEKSource : NSObject
{
    _Bool _tearingDown;
    CDUnknownBlockType _didSubscribe;
    NSMutableArray *_subscribers;
    OCMEKSubscriptionToken *_token;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) OCMEKSubscriptionToken *token; // @synthesize token=_token;
@property(retain, nonatomic) NSMutableArray *subscribers; // @synthesize subscribers=_subscribers;
@property(copy, nonatomic) CDUnknownBlockType didSubscribe; // @synthesize didSubscribe=_didSubscribe;
@property(getter=isTearingDown) _Bool tearingDown; // @synthesize tearingDown=_tearingDown;
- (id)subscribeToEvent:(id)arg1 attachedTo:(id)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)subscribeToEvent:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)subscribeToEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)subscribe:(id)arg1;
- (void)_stopSubscription;
- (void)didStopSubscribing;
- (void)didSubscribeWithToken:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)_tearDown;
- (void)_performBlockOnEachSubscriber:(CDUnknownBlockType)arg1;
- (void)_invalidateIfNoSubscribers;
- (void)sourceWillAddNewSubscribers;
- (void)sourceDidRemoveAllSubscribers;
- (id)init;

@end
