//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGExploreDataController, IGExploreNetworkFetchState, IGExploreTopicStore;

@protocol IGExploreDataControllerListener <NSObject>
- (void)exploreDataController:(IGExploreDataController *)arg1 didUpdateTopicsFetchState:(IGExploreNetworkFetchState *)arg2;
- (void)exploreDataController:(IGExploreDataController *)arg1 didUpdateTopicStore:(IGExploreTopicStore *)arg2 previousTopicStore:(IGExploreTopicStore *)arg3;
@end
