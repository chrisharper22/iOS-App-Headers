//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGPaginatedFeedVideoStateInformant, UICollectionViewCell;

@protocol IGPaginatedFeedVideoStateInformantDelegate <NSObject>
- (void)videoStateInformant:(IGPaginatedFeedVideoStateInformant *)arg1 didObserveVideoStateUpdateForCell:(UICollectionViewCell *)arg2 videoTimeSpent:(double)arg3 videoDuration:(double)arg4;
- (void)videoStateInformant:(IGPaginatedFeedVideoStateInformant *)arg1 didObserveVideoLoopingForCell:(UICollectionViewCell *)arg2;
@end

