//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIView;

@protocol IGDirectHscrollXMAMessageCellDelegate <NSObject>
- (void)didTapOnPlayPauseButton:(UIView *)arg1;
- (void)didTapOnCtaButtonWithActionURL:(NSURL *)arg1 postbackPayload:(NSString *)arg2 actionTitle:(NSString *)arg3 indexId:(long long)arg4 itemType:(long long)arg5;
- (void)didTapOnViewWithTargetUrl:(NSURL *)arg1 indexId:(long long)arg2;
@end

