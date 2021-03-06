//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveBroadcast, IGStoryDataController, NSError, NSString;

@protocol IGStoryDataControllerBroadcastItemListener <NSObject>
- (void)storyDataController:(IGStoryDataController *)arg1 didReturnNoBroadcastItemResultsForUserPK:(NSString *)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(IGStoryDataController *)arg1 fetchBroadcastItemsDidFailWithError:(NSError *)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(IGStoryDataController *)arg1 didDeleteBroadcast:(IGLiveBroadcast *)arg2 updateDuration:(double)arg3;
- (void)storyDataController:(IGStoryDataController *)arg1 didUpdateBroadcast:(IGLiveBroadcast *)arg2 updateDuration:(double)arg3;
@end

