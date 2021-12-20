//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGViewControllerAnnouncer, NSString, UIBarButtonItem, UIViewController;
@protocol IGTabBarControllerType;

@protocol IGViewControllerType <NSObject>
+ (_Bool)isNavigationGestureOriginNearScreenEdge:(struct CGPoint)arg1;
@property(nonatomic) _Bool ig_modalInPresentation;
@property(nonatomic) _Bool isDisplayedInPopover;
- (_Bool)freezeKeyboardDuringPopAnimation;
- (_Bool)showKeyboardFullyVisibleDuringPushAnimation;
- (_Bool)allowsEnterNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)setRightBarButtonItem:(UIBarButtonItem *)arg1;
- (void)setLeftBarButtonItem:(UIBarButtonItem *)arg1;
- (void)showModalDismissButtonWithTitle:(NSString *)arg1 side:(long long)arg2;
- (IGViewControllerAnnouncer *)announcer;
- (UIViewController<IGTabBarControllerType> *)igTabBarController;
- (_Bool)wantsLayoutOnKeyboardChanges;
- (long long)preferredBarAppearance;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersNavigationBarDividerHidden;
@end

