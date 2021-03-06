//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUpcomingEventReminderStore, IGUpcomingEventStore, NSArray;
@protocol IGAPIClient, IGUpcomingEventServiceAnnouncer;

@interface IGUpcomingEventService : NSObject
{
    id <IGUpcomingEventServiceAnnouncer> _announcer;
    id <IGAPIClient> _apiClient;
    IGUpcomingEventStore *_store;
    IGUpcomingEventReminderStore *_reminderStore;
    NSArray *_upcomingEvents;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *upcomingEvents; // @synthesize upcomingEvents=_upcomingEvents;
- (void)addListener:(id)arg1;
- (void)deleteUpcomingEvent:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)editUpcomingEvent:(id)arg1 title:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 uploadMetadata:(id)arg5 showOnProfile:(_Bool)arg6 successHandler:(CDUnknownBlockType)arg7 failureHandler:(CDUnknownBlockType)arg8;
- (void)createUpcomingEventWithTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 uploadMetadata:(id)arg4 showOnProfile:(_Bool)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (void)fetchUpcomingEventsForSurface:(id)arg1 eventCategoryType:(unsigned long long)arg2;
- (id)initWithServiceAnnouncer:(id)arg1 apiClient:(id)arg2 upcomingEventStore:(id)arg3 upcomingEventReminderStore:(id)arg4;

@end

