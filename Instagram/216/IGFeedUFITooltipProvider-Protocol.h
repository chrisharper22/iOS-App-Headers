//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IGFeedItemUFICell, IGTooltipView, IGUFIButton;

@protocol IGFeedUFITooltipProvider
- (void)tooltipDidShow;
- (IGTooltipView *)tooltipView;
- (IGUFIButton *)tooltipTargetButtonFromCell:(IGFeedItemUFICell *)arg1;
- (_Bool)isEligible;
@end

