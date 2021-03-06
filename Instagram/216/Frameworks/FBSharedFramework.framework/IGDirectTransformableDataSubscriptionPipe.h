//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDirectDataSubscriptionPipe.h>

#import <FBSharedFramework/IGDirectDataSubscriptionListener-Protocol.h>

@class NSString;
@protocol IGSubscriptionToken;

@interface IGDirectTransformableDataSubscriptionPipe : IGDirectDataSubscriptionPipe <IGDirectDataSubscriptionListener>
{
    IGDirectDataSubscriptionPipe *_subscriptionPipe;
    id <IGSubscriptionToken> _subscriptionToken;
    CDUnknownBlockType _transformBlock;
}

- (void).cxx_destruct;
- (id)parentInputPipes;
- (void)didReceiveError:(id)arg1 fromSubscriptionPipe:(id)arg2;
- (void)didReceiveValue:(id)arg1 fromSubscriptionPipe:(id)arg2;
- (void)dataSubscriptionPipeDidRemoveLastSubscriber;
- (void)dataSubscriptionPipeWillAddFirstSubscriber;
- (id)initWithSubscriptionPipe:(id)arg1 transformBlock:(CDUnknownBlockType)arg2 loggingTag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

