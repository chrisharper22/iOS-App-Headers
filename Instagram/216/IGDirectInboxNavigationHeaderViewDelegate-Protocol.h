//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectInboxNavigationHeaderView;

@protocol IGDirectInboxNavigationHeaderViewDelegate <NSObject>
- (void)headerDidTapStatus;
- (void)headerDidTapEdit:(IGDirectInboxNavigationHeaderView *)arg1;
- (void)headerDidTapCancel:(IGDirectInboxNavigationHeaderView *)arg1;
- (void)headerDidTapMessage:(IGDirectInboxNavigationHeaderView *)arg1;
- (void)headerDidTapVideoCall:(IGDirectInboxNavigationHeaderView *)arg1;
- (void)headerDidTapRooms:(IGDirectInboxNavigationHeaderView *)arg1;
- (void)headerDidTapMultiSelect:(IGDirectInboxNavigationHeaderView *)arg1;
- (void)headerDidTapBack:(IGDirectInboxNavigationHeaderView *)arg1;
@end

