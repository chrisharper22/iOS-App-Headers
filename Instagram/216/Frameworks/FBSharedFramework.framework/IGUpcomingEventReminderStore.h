//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol IGUpcomingEventReminderAnnouncer;

@interface IGUpcomingEventReminderStore : NSObject
{
    NSMutableDictionary *_upcomingEventIDToReminderStatus;
    id <IGUpcomingEventReminderAnnouncer> _announcer;
}

- (void).cxx_destruct;
- (void)addListener:(id)arg1;
- (_Bool)reminderStatusForUpcomingEventID:(id)arg1;
- (void)updateReminderStatusforParsedUpcomingEvent:(id)arg1;
- (void)updateReminderStatus:(_Bool)arg1 forUpcomingEvent:(id)arg2 reminderActionType:(long long)arg3;
- (id)initWithReminderAnnouncer:(id)arg1;

@end

