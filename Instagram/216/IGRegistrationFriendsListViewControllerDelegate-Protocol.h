//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGRegistrationFriendsListViewController, NSArray, NSError;

@protocol IGRegistrationFriendsListViewControllerDelegate <NSObject>
- (void)findFriendsListVC:(IGRegistrationFriendsListViewController *)arg1 didFailToLoadUsersWithError:(NSError *)arg2;
- (void)findFriendsListVC:(IGRegistrationFriendsListViewController *)arg1 didLoadUsers:(NSArray *)arg2;
- (void)findFriendsListVC:(IGRegistrationFriendsListViewController *)arg1 didFollowTopAccountsWithCount:(long long)arg2;
- (void)findFriendsListVCDidUnfollow:(IGRegistrationFriendsListViewController *)arg1;
- (void)findFriendsListVCDidFollow:(IGRegistrationFriendsListViewController *)arg1;
@end

