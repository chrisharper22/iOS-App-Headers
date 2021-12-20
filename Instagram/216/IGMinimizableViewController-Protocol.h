//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGMinimizedViewerSafeAreaListener-Protocol.h"
#import "NSObject-Protocol.h"

@class IGMinimizableMode, IGMinimizedViewerPresenter, NSString, UIView, UIViewController;
@protocol IGMinimizableViewControllerAnnouncer;

@protocol IGMinimizableViewController <NSObject, IGMinimizedViewerSafeAreaListener>
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) UIView *viewpointViewWhenMinimized;
@property(readonly, nonatomic) UIView *viewpointViewWhenMaximized;
@property(readonly, nonatomic) UIViewController *viewControllerForStatusBarStyleWhenMaximized;
@property(readonly, nonatomic) UIViewController *viewControllerForStatusBarHiddenWhenMaximized;
@property(readonly, nonatomic) id <IGMinimizableViewControllerAnnouncer> minimizableAnnouncer;
@property(readonly, nonatomic) _Bool shouldAnnounceNavigationEventWhenMaximized;
@property(readonly, nonatomic) double presentationPriority;
@property(readonly, nonatomic) IGMinimizableMode *mode;
@property(nonatomic) _Bool beingDismissedByMinimizedViewerPresenter;
@property(nonatomic) _Bool beingPresentedByMinimizedViewerPresenter;
@property(nonatomic) __weak IGMinimizedViewerPresenter *presenter;
- (void)dismissMinimizableViewControllerAnimated:(_Bool)arg1;
- (_Bool)minimizeAnimated:(_Bool)arg1;
- (_Bool)maximizeAnimated:(_Bool)arg1;
@end

