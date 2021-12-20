//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLocation, IGLocationMainFeedDataController, IGLocationMainFeedDataStore, NSError;

@protocol IGLocationMainFeedDataControllerDelegate <NSObject>
- (void)locationMainFeedSingleDataController:(IGLocationMainFeedDataController *)arg1 feedType:(long long)arg2 didFailWithError:(NSError *)arg3;
- (void)locationMainFeedDataController:(IGLocationMainFeedDataController *)arg1 didGetLocation:(IGLocation *)arg2;
- (void)locationMainFeedDataController:(IGLocationMainFeedDataController *)arg1 didFetchDataModelOfType:(long long)arg2 inDataStore:(IGLocationMainFeedDataStore *)arg3 isLoadMore:(_Bool)arg4;
@end

