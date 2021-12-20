//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGInsightsMediaThumbnailViewModel, IGMedia, IGPromoteMediaGridViewController, NSArray, NSError;

@protocol IGPromoteMediaGridViewControllerDelegate <NSObject>
- (IGMedia *)promoteMediaGridViewController:(IGPromoteMediaGridViewController *)arg1 feedItemForMedia:(IGInsightsMediaThumbnailViewModel *)arg2;
- (void)promoteMediaGridViewController:(IGPromoteMediaGridViewController *)arg1 didSelectMedia:(IGInsightsMediaThumbnailViewModel *)arg2 atIndex:(long long)arg3 isEligible:(_Bool)arg4;
- (void)promoteMediaGridViewController:(IGPromoteMediaGridViewController *)arg1 didReceiveMedia:(NSArray *)arg2 isRefresh:(_Bool)arg3 isFullList:(_Bool)arg4 isEligible:(_Bool)arg5 error:(NSError *)arg6;
@end
