//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedItemPageVideoCell;

@protocol IGFeedItemPageVideoCellDelegate <NSObject>
- (void)videoCellIGTVOverlayDisplayed:(IGFeedItemPageVideoCell *)arg1;
- (void)videoCellIGTVMediaTapped:(IGFeedItemPageVideoCell *)arg1 shouldLogTap:(_Bool)arg2;
- (void)videoCellIGTVKeepWatchingTapped:(IGFeedItemPageVideoCell *)arg1;
- (void)videoCellIGTVIndicatorTapped:(IGFeedItemPageVideoCell *)arg1;
- (void)videoCellTagTapped:(IGFeedItemPageVideoCell *)arg1;
- (void)videoCell:(IGFeedItemPageVideoCell *)arg1 didToggleAudio:(_Bool)arg2;
- (void)videoCellDidSingleTap:(IGFeedItemPageVideoCell *)arg1;
- (void)videoCellDidDoubleTap:(IGFeedItemPageVideoCell *)arg1;
- (void)videoCellDidLoadImage:(IGFeedItemPageVideoCell *)arg1;
@end

