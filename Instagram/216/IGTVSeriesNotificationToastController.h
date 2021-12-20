//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGActionableConfirmationToastController, IGUserSession, NSString, UIView;

@interface IGTVSeriesNotificationToastController : NSObject
{
    IGUserSession *_userSession;
    IGActionableConfirmationToastController *_toastController;
    UIView *_containerView;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)_presentNotificationsSheetForUser:(id)arg1 fromViewController:(id)arg2;
- (void)_showIGTVNotificationsOnToastForUser:(id)arg1 fromViewController:(id)arg2;
- (void)_turnOnIGTVNotificationsFromToastForUser:(id)arg1 fromViewController:(id)arg2 attributingSeriesId:(id)arg3;
- (void)_showFollowingToastForUser:(id)arg1 fromViewController:(id)arg2 attributingSeriesId:(id)arg3;
- (void)_showCurrentToastWithTapActionBlock:(CDUnknownBlockType)arg1;
- (void)showToastFromEntryPoint:(long long)arg1 viewController:(id)arg2 forUser:(id)arg3 attributingSeriesId:(id)arg4;
- (void)updateContainerView:(id)arg1 bottomInset:(double)arg2;
- (id)initWithUserSession:(id)arg1 containerView:(id)arg2 bottomInset:(double)arg3 analyticsModule:(id)arg4;

@end

