//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "THStatusBackgroundFetchDataProviderDelegate-Protocol.h"
#import "THStatusExpirationServiceDelegate-Protocol.h"
#import "THStatusRealtimeDataProviderDelegate-Protocol.h"
#import "THStatusServiceQuerying-Protocol.h"

@class FBProxyAnnouncer, NSString, THAPIClient, THStatusBackgroundFetchDataProvider, THStatusExpirationService, THStatusRealtimeDataProvider, THStatusStore;
@protocol THStatusServiceListener;

@interface THStatusService : NSObject <THStatusBackgroundFetchDataProviderDelegate, THStatusExpirationServiceDelegate, THStatusRealtimeDataProviderDelegate, THStatusServiceQuerying>
{
    NSString *_userPk;
    THAPIClient *_apiClient;
    THStatusStore *_statusStore;
    THStatusExpirationService *_expirationService;
    THStatusBackgroundFetchDataProvider *_backgroundFetchDataProvider;
    THStatusRealtimeDataProvider *_realtimeDataProvider;
    FBProxyAnnouncer<THStatusServiceListener> *_announcer;
}

- (void).cxx_destruct;
- (void)_filterAndUpdateUserPkToStatusesMap;
- (void)_filterAndUpdateWithUserPkToStatusesMap:(id)arg1;
- (void)_filterAndUpdateStatuses:(id)arg1 forUserPk:(id)arg2;
- (void)_applicationWillEnterForeground;
- (void)expirationServiceTimerDidFire:(id)arg1;
- (void)realtimeDataProvider:(id)arg1 didReceiveUpdateForUserPk:(id)arg2 withStatuses:(id)arg3;
- (void)backgroundFetchDataProvider:(id)arg1 didFetchUserPkToStatusesMap:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)updateStatusesForCurrentUser:(id)arg1;
- (id)statusWithStatusPk:(id)arg1;
- (id)statusesByUserPk;
- (id)statusesByUserPkForUsers:(id)arg1;
- (id)statusesForUserPk:(id)arg1;
- (void)fetchStatuses;
- (void)setStatus:(id)arg1;
- (void)handleStatusPayload:(id)arg1;
- (id)initWithUserPk:(id)arg1 apiClient:(id)arg2 userStore:(id)arg3 realtimeMqttClient:(id)arg4 diskManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

