//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNotificationBarProtocol-Protocol.h>
#import <FBSharedFramework/IGNotificationBarRootViewControllerDelegate-Protocol.h>

@class FBTimer, IGNotificationBarRootViewController, IGPassthroughWindow, NSString, UIWindow;
@protocol IGNotificationBarAnnouncer;

@interface IGNotificationBar : NSObject <IGNotificationBarRootViewControllerDelegate, IGNotificationBarProtocol>
{
    CDUnknownBlockType _block;
    id <IGNotificationBarAnnouncer> _announcer;
    IGNotificationBarRootViewController *_viewController;
    IGPassthroughWindow *_window;
    UIWindow *_previousKeyWindow;
    FBTimer *_hideTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_stopTimerAndHideNotificationBar;
- (void)_invalidateTimer;
- (void)_startTimer;
- (void)_notifyWithAction:(unsigned long long)arg1;
- (void)_showWithImage:(id)arg1 attributedTitle:(id)arg2 attributedSubtitle:(id)arg3 attributedBody:(id)arg4 options:(CDStruct_d29f4384)arg5 block:(CDUnknownBlockType)arg6;
- (void)_setupIfNeeded;
- (void)notificationBarDidPullDown:(id)arg1;
- (void)notificationBarShouldBecomeKeyWindow:(id)arg1;
- (void)notificationBar:(id)arg1 didTapWithAction:(unsigned long long)arg2;
- (void)notificationBarDidDismiss:(id)arg1;
- (void)notificationBarDidBeginPan:(id)arg1;
- (void)notificationBar:(id)arg1 didAnimateVisible:(_Bool)arg2;
- (void)notificationBar:(id)arg1 willAnimateVisible:(_Bool)arg2;
- (void)layoutWithNeedsImmediateLayout:(_Bool)arg1;
- (_Bool)isNotificationBarVisible;
- (void)hideNotification;
- (void)showWithImage:(id)arg1 attributedTitle:(id)arg2 attributedSubtitle:(id)arg3 attributedBody:(id)arg4 actionSource:(unsigned long long)arg5 options:(CDStruct_d29f4384)arg6 block:(CDUnknownBlockType)arg7 notificationHandler:(id)arg8;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

