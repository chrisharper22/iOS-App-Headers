//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGVideoAdFullScreenCell, UIButton;

@protocol IGVideoAdFullScreenCellDelegate <NSObject>
- (void)videoAdCellDidTapReshare:(IGVideoAdFullScreenCell *)arg1;
- (void)videoAdCellDidTapCommentFromUFI:(IGVideoAdFullScreenCell *)arg1;
- (void)videoAdCellDidTapLike:(IGVideoAdFullScreenCell *)arg1 isDoubleTap:(_Bool)arg2;
- (void)videoAdCellDidSwipeUp:(IGVideoAdFullScreenCell *)arg1;
- (void)ctaViewDidTapOnCTA:(UIButton *)arg1 isNewTappableCTA:(_Bool)arg2;
@end
