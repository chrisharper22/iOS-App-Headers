//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGListSectionController, NSArray;
@protocol IGSideTrayDataSource, IGSideTrayItemSectionController;

@protocol IGSideTrayDataSourceDelegate <NSObject>
- (void)sideTrayDataSource:(id <IGSideTrayDataSource>)arg1 objectsDidUpdate:(NSArray *)arg2;
- (void)sideTrayDataSource:(id <IGSideTrayDataSource>)arg1 reloadSectionController:(IGListSectionController<IGSideTrayItemSectionController> *)arg2;
- (void)sideTrayDataSource:(id <IGSideTrayDataSource>)arg1 sectionController:(IGListSectionController<IGSideTrayItemSectionController> *)arg2 didUpdateBadgeCount:(long long)arg3;
@end

