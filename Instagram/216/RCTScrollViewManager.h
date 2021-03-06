//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTViewManager.h"

@interface RCTScrollViewManager : RCTViewManager
{
}

+ (const struct RCTMethodInfo *)__rct_export__1874;
+ (const struct RCTMethodInfo *)__rct_export__1703;
+ (const struct RCTMethodInfo *)__rct_export__1532;
+ (const struct RCTMethodInfo *)__rct_export__1361;
+ (const struct RCTMethodInfo *)__rct_export__1170;
+ (id)propConfigShadow_overflow;
+ (id)propConfig_contentInsetAdjustmentBehavior;
+ (id)propConfig_automaticallyAdjustsScrollIndicatorInsets;
+ (id)propConfig_inverted;
+ (id)propConfig_onMomentumScrollEnd;
+ (id)propConfig_onMomentumScrollBegin;
+ (id)propConfig_onScrollEndDrag;
+ (id)propConfig_onScrollToTop;
+ (id)propConfig_onScroll;
+ (id)propConfig_onScrollBeginDrag;
+ (id)propConfig_contentOffset;
+ (id)propConfig_snapToAlignment;
+ (id)propConfig_snapToEnd;
+ (id)propConfig_snapToStart;
+ (id)propConfig_snapToOffsets;
+ (id)propConfig_disableIntervalMomentum;
+ (id)propConfig_snapToInterval;
+ (id)propConfig_scrollToOverflowEnabled;
+ (id)propConfig_scrollIndicatorInsets;
+ (id)propConfig_contentInset;
+ (id)propConfig_zoomScale;
+ (id)propConfig_scrollEventThrottle;
+ (id)propConfig_showsVerticalScrollIndicator;
+ (id)propConfig_showsHorizontalScrollIndicator;
+ (id)propConfig_scrollsToTop;
+ (id)propConfig_pinchGestureEnabled;
+ (id)propConfig_pagingEnabled;
+ (id)propConfig_scrollEnabled;
+ (id)propConfig_minimumZoomScale;
+ (id)propConfig_maximumZoomScale;
+ (id)propConfig_keyboardDismissMode;
+ (id)propConfig_indicatorStyle;
+ (id)propConfig_directionalLockEnabled;
+ (id)propConfig_decelerationRate;
+ (id)propConfig_automaticallyAdjustKeyboardInsets;
+ (id)propConfig_automaticallyAdjustContentInsets;
+ (id)propConfig_maintainVisibleContentPosition;
+ (id)propConfig_centerContent;
+ (id)propConfig_canCancelContentTouches;
+ (id)propConfig_bouncesZoom;
+ (id)propConfig_bounces;
+ (id)propConfig_alwaysBounceVertical;
+ (id)propConfig_alwaysBounceHorizontal;
+ (void)load;
+ (id)moduleName;
- (void)flashScrollIndicators:(id)arg1;
- (void)zoomToRect:(id)arg1 withRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)scrollToEnd:(id)arg1 animated:(_Bool)arg2;
- (void)scrollTo:(id)arg1 offsetX:(double)arg2 offsetY:(double)arg3 animated:(_Bool)arg4;
- (void)getContentSize:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)set_overflow:(id)arg1 forShadowView:(id)arg2;
- (id)view;

@end

