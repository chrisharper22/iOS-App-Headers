//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGVideoCallInviteListHeaderViewDataSource, NSArray;

@protocol IGVideoCallInviteListHeaderViewViewModelDelegate <NSObject>
- (void)videoCallInviteListHeaderViewDataSource:(IGVideoCallInviteListHeaderViewDataSource *)arg1 failedToAddItems:(NSArray *)arg2;
- (void)videoCallInviteListHeaderViewDidUpdateDataSource:(IGVideoCallInviteListHeaderViewDataSource *)arg1 withAddedItems:(NSArray *)arg2;
@end

