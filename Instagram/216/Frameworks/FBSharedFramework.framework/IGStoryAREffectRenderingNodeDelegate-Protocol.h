//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStoryAREffectRenderingNode;

@protocol IGStoryAREffectRenderingNodeDelegate <NSObject>
- (void)arEffectRenderingNode:(IGStoryAREffectRenderingNode *)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)arEffectRenderingNode:(IGStoryAREffectRenderingNode *)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)arEffectRenderingNode:(IGStoryAREffectRenderingNode *)arg1 didDisplayVideoFrame:(struct __CVBuffer *)arg2 forPlaybackTime:(double)arg3;
- (void)arEffectRenderingNodeDidPlayToEnd:(IGStoryAREffectRenderingNode *)arg1;
@end

