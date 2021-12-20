//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IGFeedItemMediaCell, IGFeedVideoPreviewThumbnailView, IGMedia, IGModernFeedOverlayEvent;
@protocol IGModernFeedAudioCompatible><IGModernFeedVideoCellType;

@protocol IGModernFeedVideoCellDelegate
- (void)modernFeedVideoCell:(IGFeedItemMediaCell<IGModernFeedAudioCompatible><IGModernFeedVideoCellType> *)arg1 didTapThumbnail:(IGFeedVideoPreviewThumbnailView *)arg2 forMedia:(IGMedia *)arg3;
- (void)modernFeedVideoCellDidFireDwellDetectionTimer:(IGFeedItemMediaCell<IGModernFeedAudioCompatible><IGModernFeedVideoCellType> *)arg1;
- (void)modernFeedVideoCell:(IGFeedItemMediaCell<IGModernFeedAudioCompatible><IGModernFeedVideoCellType> *)arg1 didObserveOverlayEvent:(IGModernFeedOverlayEvent *)arg2;
- (void)modernFeedVideoCellDidObserveSwipeToShare:(IGFeedItemMediaCell<IGModernFeedAudioCompatible><IGModernFeedVideoCellType> *)arg1;
- (void)modernFeedVideoCellDidObserveDoubleTap:(IGFeedItemMediaCell<IGModernFeedAudioCompatible><IGModernFeedVideoCellType> *)arg1;
- (void)modernFeedVideoCellDidObserveSingleTap:(IGFeedItemMediaCell<IGModernFeedAudioCompatible><IGModernFeedVideoCellType> *)arg1;
@end

