//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedUpcomingEventViewControllerDelegate-Protocol.h"
#import "IGUpcomingEventDetailsViewControllerEditDelegate-Protocol.h"
#import "IGUpcomingEventsListViewControllerDelegate-Protocol.h"

@class IGUpcomingEventsViewerLogger, IGUser, IGUserSession, NSString, UIViewController;
@protocol IGProfileUpcomingEventControllerDelegate;

@interface IGProfileUpcomingEventController : NSObject <IGUpcomingEventDetailsViewControllerEditDelegate, IGUpcomingEventsListViewControllerDelegate, IGFeedUpcomingEventViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGUser *_mediaAuthor;
    UIViewController *_viewController;
    NSString *_analyticsModule;
    IGUpcomingEventsViewerLogger *_upcomingEventsLogger;
    id <IGProfileUpcomingEventControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGProfileUpcomingEventControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)upcomingEventViewController:(id)arg1 didHandleEditButtonTapWithUpcomingEvent:(id)arg2;
- (void)upcomingEventViewControllerDidTapOpenLiveNotificationSettings:(id)arg1;
- (void)upcomingEventViewControllerDidTapOpenSettings;
- (void)upcomingEventViewControllerDidTapViewPostButton:(id)arg1;
- (id)upcomingEventsListViewControllerFundraiserSectionController:(id)arg1;
- (id)upcomingEventsListViewController:(id)arg1 profileUpcomingEventsSectionControllerForUpcomingEventId:(id)arg2;
- (void)upcomingEventDetailsViewController:(id)arg1 didDeleteUpcomingEvent:(id)arg2;
- (void)upcomingEventDetailsViewController:(id)arg1 didEditUpcomingEvent:(id)arg2;
- (void)_presentReminderForUpcomingEvent:(id)arg1;
- (void)_shareAsPostTappedWithUpcomingEvent:(id)arg1;
- (void)_editButtonTappedWithUpcomingEvent:(id)arg1;
- (void)_presentShareAsPostActionSheetForUpcomingEvent:(id)arg1;
- (_Bool)_hasFundraiser;
- (id)_upcomingEventForId:(id)arg1;
- (void)presentMultipleEventSheet;
- (void)handleProfileUpcomingEventSectionTapForUpcomingEventId:(id)arg1;
- (void)presentUpcomingEventSheetForUpcomingEventId:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 userSession:(id)arg2 mediaAuthor:(id)arg3 analyticsModule:(id)arg4 upcomingEventsLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
