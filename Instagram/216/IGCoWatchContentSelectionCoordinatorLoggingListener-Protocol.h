//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCoWatchContentSelectionCoordinator, IGCoWatchFacebookVideo, IGCoWatchFeedItem, NSString;

@protocol IGCoWatchContentSelectionCoordinatorLoggingListener <NSObject>
- (void)coWatchContentSelectionCoordinatorDidTapBrowseMoreButton:(IGCoWatchContentSelectionCoordinator *)arg1;
- (void)coWatchContentSelectionCoordinatorDidShowBrowseMoreButton:(IGCoWatchContentSelectionCoordinator *)arg1;
- (void)coWatchContentSelectionCoordinator:(IGCoWatchContentSelectionCoordinator *)arg1 didSelectFacebookVideo:(IGCoWatchFacebookVideo *)arg2 contentSource:(NSString *)arg3;
- (void)coWatchContentSelectionCoordinator:(IGCoWatchContentSelectionCoordinator *)arg1 didSelectTab:(NSString *)arg2;
- (void)coWatchContentSelectionCoordinatorDidPresent:(IGCoWatchContentSelectionCoordinator *)arg1;
- (void)coWatchContentSelectionCoordinatorDidDismiss:(IGCoWatchContentSelectionCoordinator *)arg1;
- (void)coWatchContentSelectionCoordinator:(IGCoWatchContentSelectionCoordinator *)arg1 didSelectItem:(IGCoWatchFeedItem *)arg2 contentIndex:(unsigned long long)arg3 contentSource:(NSString *)arg4;
@end
