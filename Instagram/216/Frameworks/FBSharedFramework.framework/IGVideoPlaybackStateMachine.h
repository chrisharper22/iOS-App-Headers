//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBStateMachine;

@interface IGVideoPlaybackStateMachine : NSObject
{
    FBStateMachine *_stateMachine;
}

- (void).cxx_destruct;
- (_Bool)reasonRequired;
- (_Bool)supportsAudioStateChanged;
- (void)transitionToState:(long long)arg1;
- (_Bool)canTransitionToState:(long long)arg1;
- (long long)currentState;
- (id)init;

@end

