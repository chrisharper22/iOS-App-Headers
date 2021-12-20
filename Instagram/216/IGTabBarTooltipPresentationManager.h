//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNewsPresentationDelegate-Protocol.h"
#import "IGTooltipViewDelegate-Protocol.h"

@class IGActivityToastData, IGTooltipView, IGUnreadBubbleView, IGUserSession, NSMapTable, NSNumber, NSString, UIView;
@protocol IGTabBarTooltipCollapsible, IGTabBarTooltipPresentationDelegate;

@interface IGTabBarTooltipPresentationManager : NSObject <IGTooltipViewDelegate, IGNewsPresentationDelegate>
{
    IGUserSession *_userSession;
    UIView *_containingView;
    UIView<IGTabBarTooltipCollapsible> *_collapsingNumberedBadgeView;
    id <IGTabBarTooltipPresentationDelegate> _delegate;
    IGActivityToastData *_activityToastData;
    IGTooltipView *_activityToastView;
    NSString *_profileToastText;
    IGTooltipView *_profileToastView;
    NSString *_directToastText;
    IGTooltipView *_directToastView;
    IGTooltipView *_reelsToastView;
    IGTooltipView *_shopToastView;
    IGUnreadBubbleView *_transitionaryBadgeView;
    NSNumber *_currentlyPresentedTooltipType;
    NSMapTable *_displayBlocksForSelectors;
}

- (void).cxx_destruct;
- (void)didTapTooltipView:(id)arg1;
- (void)_didEndDisplayingTooltipView:(id)arg1;
- (void)_collapseTooltipViewToBadge:(id)arg1 collapsibleView:(id)arg2 badgeCount:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_hideTooltipView:(id)arg1 animated:(_Bool)arg2 dismissedByUser:(_Bool)arg3 collapsibleView:(id)arg4 badgeCount:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_displayTooltipExpansionAnimationForTooltipView:(id)arg1 presentationDuration:(double)arg2 collapsibleView:(id)arg3 badgeCount:(long long)arg4 presentationConfig:(id)arg5 completionSelector:(SEL)arg6;
- (void)_resetCurrentCollapsibleView;
- (void)_clearTransitionaryBadgeView;
- (void)_displayTooltipViewAndDispatchTooltipHiding:(id)arg1 animated:(_Bool)arg2 presentationDelay:(double)arg3 presentationDuration:(double)arg4 presentationConfig:(id)arg5 completionSelector:(SEL)arg6;
- (void)_displayTooltipView:(id)arg1 forTooltipType:(long long)arg2 presentationDuration:(double)arg3 presentationConfig:(id)arg4 completionSelector:(SEL)arg5;
- (void)_layoutToastView:(id)arg1 tabBarTooltipType:(long long)arg2;
- (double)_activityToastPresentationDuration;
- (void)_hideProfileToastAnimated:(_Bool)arg1 dismissedByUser:(_Bool)arg2 collapsibleView:(id)arg3 badgeCount:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_hideProfileToast:(id)arg1;
- (void)_layoutProfileToast;
- (void)_displayProfileToastWithToastText:(id)arg1 toastPresentationDuration:(double)arg2;
- (void)_displaySuppressedProfileToastWhenAppropriate;
- (void)_hideDirectToastAnimated:(_Bool)arg1 dismissedByUser:(_Bool)arg2 collapsibleView:(id)arg3 badgeCount:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_hideDirectToast:(id)arg1;
- (void)_layoutDirectToast;
- (void)_displayDirectToastWithToastText:(id)arg1 toastPresentationDuration:(double)arg2;
- (void)_displaySuppressedDirectToastWhenAppropriate;
- (void)_hideShopToast;
- (void)_displayShopToast;
- (_Bool)_displaySuppressedShopToastWhenAppropriate;
- (void)_hideReelsToast;
- (void)_displayReelsToastWithTooltipType:(long long)arg1;
- (_Bool)_displaySuppressedReelsToastWhenAppropriateWithTooltipType:(long long)arg1;
- (void)_hideActivityToastAnimated:(_Bool)arg1 dismissedByUser:(_Bool)arg2 collapsibleView:(id)arg3 badgeCount:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_hideActivityToast:(id)arg1;
- (id)_activityTooltipPresentationConfigWithToastData:(id)arg1 onlyShowComments:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_displayActivityToastWithToastData:(id)arg1 toastPresentationDuration:(double)arg2 onlyShowComments:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_layoutActivityToast;
- (void)_displaySuppressedActivityToastWhenAppropriate;
- (void)_cleanupPresentingTooltip;
- (void)hideActivityToastAnimated:(_Bool)arg1;
- (void)hideAllToastsAnimated:(_Bool)arg1;
- (void)_hideToastForSurfaceIfNecessary:(id)arg1 whenNavigatingToSurface:(id)arg2 tabBarController:(id)arg3;
- (void)tabBarControllerDidPushViewOverFeed:(id)arg1;
- (void)tabBarController:(id)arg1 didUpdateToSurface:(id)arg2;
- (void)relayoutTooltips;
- (void)adjustTooltipsByOffset:(double)arg1;
- (_Bool)queueShopToastForDisplay;
- (_Bool)queueSundialToastForDisplayWithTooltipType:(long long)arg1;
- (void)queueDirectToastDataForDisplay:(id)arg1;
- (void)queueProfileToastDataForDisplay:(id)arg1;
- (void)queueActivityToastDataForDisplay:(id)arg1;
- (void)_displaySuppressedTabBarTooltipWhenAppropriate:(long long)arg1;
- (_Bool)_showingTabBarTooltipType:(long long)arg1;
- (id)_tooltipViewForTooltipType:(long long)arg1;
- (void)_scheduleDisplayBlockForSelector:(SEL)arg1;
- (void)_cancelDisplayBlockForSelector:(SEL)arg1;
- (_Bool)_canCurrentlyDisplayTabBarTooltipType:(long long)arg1;
- (void)newsSurfaceDidAppear;
- (_Bool)isDisplayingActivityTooltip;
- (id)initWithUserSession:(id)arg1 containingView:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
