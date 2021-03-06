//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, QPPersistedCounterStore;
@protocol QPConfigurationProfile;

@interface QPCounterCatalog : NSObject
{
    QPPersistedCounterStore *_qpCounterPersistedStore;
    NSDictionary *_qpSurfaceEntries;
    id <QPConfigurationProfile> _configurationProfile;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *qpSurfaceEntries; // @synthesize qpSurfaceEntries=_qpSurfaceEntries;
@property(readonly, copy, nonatomic) QPPersistedCounterStore *qpCounterPersistedStore; // @synthesize qpCounterPersistedStore=_qpCounterPersistedStore;
- (id)_dataStoreEntryByQPNuxID:(id)arg1;
- (_Bool)lastEvent:(long long)arg1 nuxID:(id)arg2 qpID:(id)arg3 withinTimeInterval:(double)arg4;
- (id)_recordListForQPNuxID:(id)arg1 event:(long long)arg2 promotionID:(id)arg3;
- (void)resetRecordsForEvent:(long long)arg1 nuxID:(id)arg2 qpID:(id)arg3;
- (void)recordForEvent:(long long)arg1 nuxID:(id)arg2 timestamp:(id)arg3 qpID:(id)arg4;
- (long long)countForEvent:(long long)arg1 nuxID:(id)arg2 qpID:(id)arg3;
- (id)lastOccurrenceTimeForEvent:(long long)arg1 nuxID:(id)arg2 qpID:(id)arg3;
- (id)initWithConfigurationProfile:(id)arg1 appName:(long long)arg2 loggedInAccountID:(id)arg3 familySharedUserDefaults:(id)arg4;

@end

