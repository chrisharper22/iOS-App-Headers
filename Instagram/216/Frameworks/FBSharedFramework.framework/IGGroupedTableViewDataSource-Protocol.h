//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/UITableViewDataSource-Protocol.h>

@class NSString, UITableView;

@protocol IGGroupedTableViewDataSource <UITableViewDataSource>

@optional
- (void)tableView:(UITableView *)arg1 didTapHeaderActionInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 actionTitleForHeaderInSection:(long long)arg2;
- (NSString *)tableView:(UITableView *)arg1 subtitleForHeaderInSection:(long long)arg2;
@end

