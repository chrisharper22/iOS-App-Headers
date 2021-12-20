//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectThreadViewTimestampAnimator, NSIndexPath, UICollectionViewCell;

@protocol IGDirectThreadViewTimestampAnimatorDelegate <NSObject>
- (_Bool)timestampAnimatorShouldRespectOtherGestureRecognizers:(IGDirectThreadViewTimestampAnimator *)arg1;
- (void)timestampAnimatorDidBeginSliding:(IGDirectThreadViewTimestampAnimator *)arg1;
- (_Bool)timestampAnimatorShouldReceiveTouchWithIndexPath:(NSIndexPath *)arg1;
- (_Bool)timestampAnimator:(IGDirectThreadViewTimestampAnimator *)arg1 shouldSlideCell:(UICollectionViewCell *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

