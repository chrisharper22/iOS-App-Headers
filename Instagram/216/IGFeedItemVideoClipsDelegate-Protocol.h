//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedItemVideoView;

@protocol IGFeedItemVideoClipsDelegate <NSObject>
- (void)feedItemVideoClipsReplayTapped:(IGFeedItemVideoView *)arg1;
- (void)feedItemVideoClipsMediaTapped:(IGFeedItemVideoView *)arg1 shouldLogTap:(_Bool)arg2;
- (void)feedItemVideoClipsTriggerPrefetch:(IGFeedItemVideoView *)arg1;
- (void)feedItemVideoClipsWatchMoreTapped:(IGFeedItemVideoView *)arg1;
- (void)feedItemVideoClipsIndicatorTapped:(IGFeedItemVideoView *)arg1;
@end

