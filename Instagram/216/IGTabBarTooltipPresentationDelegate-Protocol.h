//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTabBarTooltipConfig, UIView;
@protocol IGTabBarTooltipCollapsible;

@protocol IGTabBarTooltipPresentationDelegate <NSObject>
- (UIView<IGTabBarTooltipCollapsible> *)collapsibleViewForTabBarTooltipType:(long long)arg1;
- (void)didTapTabBarTooltipType:(long long)arg1;
- (void)didEndDisplayingTabBarTooltipType:(long long)arg1;
- (void)willDisplayTabBarTooltipType:(long long)arg1;
- (IGTabBarTooltipConfig *)tooltipConfigForTabBarTooltipType:(long long)arg1;
- (_Bool)canCurrentlyDisplayTabBarTooltipType:(long long)arg1;
@end
