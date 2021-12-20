//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGBMRTCCallEndedModel, IGConditionalExecutor;
@protocol IGSubscriptionToken;

@interface IGVideoCallSimpleStateProvider : NSObject
{
    _Bool _selfJoined;
    IGConditionalExecutor *_selfJoinedExecutor;
    _Bool _callConnected;
    IGConditionalExecutor *_callConnectedExecutor;
    IGConditionalExecutor *_callEndedExecutor;
    id <IGSubscriptionToken> _subscriptionToken;
    IGBMRTCCallEndedModel *_callEndedModel;
}

- (void).cxx_destruct;
- (void)_handleModelUpdated:(id)arg1;
- (void)onCallEnded:(CDUnknownBlockType)arg1;
- (void)onConnectedToPeer:(CDUnknownBlockType)arg1;
- (void)onSelfJoinedCall:(CDUnknownBlockType)arg1;
- (id)initWithCallModelPipe:(id)arg1;

@end
