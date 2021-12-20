//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStoryMediaNode;

@protocol IGStoryMediaNodeDelegate <NSObject>
- (void)storyMediaNodeDidPlayVideoToEnd:(IGStoryMediaNode *)arg1;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 effectivePlaybackRateDidChange:(double)arg2;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 didUpdateToPlaybackTime:(double)arg2;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 didDisplayVideoFrame:(struct __CVBuffer *)arg2 withPreferredTransform:(struct CGAffineTransform)arg3 forPlaybackTime:(double)arg4;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 didUpdatePreviewImageLoadingState:(_Bool)arg2;
- (void)storyMediaNode:(IGStoryMediaNode *)arg1 didUpdateLoadingState:(_Bool)arg2;
@end
