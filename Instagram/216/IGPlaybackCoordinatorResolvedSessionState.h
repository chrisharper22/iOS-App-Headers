//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGPlaybackCoordinatorResolvedSessionState : NSObject
{
    long long _playbackState;
    long long _volunteeredState;
}

@property(readonly, nonatomic) long long volunteeredState; // @synthesize volunteeredState=_volunteeredState;
@property(readonly, nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
- (id)initWithPlaybackState:(long long)arg1 volunteeredState:(long long)arg2;
- (id)initWithPlaybackState:(long long)arg1;

@end

