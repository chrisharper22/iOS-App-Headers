//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDirectDataSubscriptionPipe.h>

#import <FBSharedFramework/IGDirectDataSubscriptionListener-Protocol.h>

@class NSString;
@protocol IGSubscriptionToken;

@interface IGDirectComposableDataSubscriptionPipe5 : IGDirectDataSubscriptionPipe <IGDirectDataSubscriptionListener>
{
    IGDirectDataSubscriptionPipe *_subscriptionPipe1;
    IGDirectDataSubscriptionPipe *_subscriptionPipe2;
    IGDirectDataSubscriptionPipe *_subscriptionPipe3;
    IGDirectDataSubscriptionPipe *_subscriptionPipe4;
    IGDirectDataSubscriptionPipe *_subscriptionPipe5;
    id <IGSubscriptionToken> _subscription1Token;
    id <IGSubscriptionToken> _subscription2Token;
    id <IGSubscriptionToken> _subscription3Token;
    id <IGSubscriptionToken> _subscription4Token;
    id <IGSubscriptionToken> _subscription5Token;
    CDUnknownBlockType _reduceBlock;
}

- (void).cxx_destruct;
- (id)parentInputPipes;
- (void)didReceiveError:(id)arg1 fromSubscriptionPipe:(id)arg2;
- (void)didReceiveValue:(id)arg1 fromSubscriptionPipe:(id)arg2;
- (void)dataSubscriptionPipeDidRemoveLastSubscriber;
- (void)dataSubscriptionPipeWillAddFirstSubscriber;
- (id)initWithSubscriptionPipe1:(id)arg1 subscriptionPipe2:(id)arg2 subscriptionPipe3:(id)arg3 subscriptionPipe4:(id)arg4 subscriptionPipe5:(id)arg5 reduceBlock:(CDUnknownBlockType)arg6 loggingTag:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

