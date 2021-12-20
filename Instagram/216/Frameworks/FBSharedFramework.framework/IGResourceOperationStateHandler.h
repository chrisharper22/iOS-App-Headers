//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBStateMachineDelegate-Protocol.h>

@class FBStateMachine, NSString;
@protocol IGResourceOperation, IGResourceOperationStateAnnouncer;

@interface IGResourceOperationStateHandler : NSObject <FBStateMachineDelegate>
{
    FBStateMachine *_stateMachine;
    id <IGResourceOperation> _operation;
    id <IGResourceOperationStateAnnouncer> _announcer;
}

- (void).cxx_destruct;
- (void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)transitionToState:(id)arg1;
- (id)currentState;
- (id)initWithOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

