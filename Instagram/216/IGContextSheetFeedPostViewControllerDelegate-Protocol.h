//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGContextSheetFeedPostViewController, IGFeedPostStickerTapModel, IGUser;

@protocol IGContextSheetFeedPostViewControllerDelegate <NSObject>
- (void)contextSheetFeedPostViewControllerDidTapFollowButton:(IGContextSheetFeedPostViewController *)arg1 user:(IGUser *)arg2 userAction:(long long)arg3;
- (void)contextSheetFeedPostViewControllerWillNavigateToLandingPage:(IGContextSheetFeedPostViewController *)arg1 feedPostStickerTapModel:(IGFeedPostStickerTapModel *)arg2;
@end

