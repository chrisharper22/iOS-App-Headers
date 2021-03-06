//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol FBMessagePowerupKeyframesDelegate;

@protocol FBMessagePowerupSupporting <NSObject>
- (void)configureWithViewModel:(CDStruct_ca0fb78e)arg1;
- (_Bool)shouldBringMessageCellToFrontOfMessageList;
- (void)playAnimationWithThreadForegroundView:(UIView *)arg1 threadBackgroundView:(UIView *)arg2 composerMinY:(double)arg3 keyframesDelegate:(id <FBMessagePowerupKeyframesDelegate>)arg4 useHapticFeedback:(_Bool)arg5;
- (void)resetAnimation;
- (void)layoutEffect;
@end

