//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSwitchUsersController, IGUser;

@protocol IGSwitchUsersControllerFavoritesDelegate <NSObject>
- (void)switchUserController:(IGSwitchUsersController *)arg1 didTapCloseFriendsButtonForUser:(IGUser *)arg2;
- (void)switchUserController:(IGSwitchUsersController *)arg1 didTapFollowersButtonForUser:(IGUser *)arg2;
@end

