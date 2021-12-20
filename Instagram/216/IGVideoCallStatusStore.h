//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol IGVideoCallStatusStoreAnnouncer;

@interface IGVideoCallStatusStore : NSObject
{
    NSMutableDictionary *_callStateStore;
    NSMutableDictionary *_callStartTimeStore;
    id <IGVideoCallStatusStoreAnnouncer> _announcer;
}

+ (id)statusStoreForUserPk:(id)arg1;
- (void).cxx_destruct;
- (void)_setCallStartTime:(id)arg1 forVideoCallKey:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)currentStatus;
- (id)timeStampForVideoCallKey:(id)arg1 hasActiveCall:(_Bool)arg2;
- (long long)statusForVideoCallKey:(id)arg1;
- (void)_updateCallStatus:(id)arg1 status:(long long)arg2;
- (void)setCallStatusUnknown:(id)arg1;
- (void)setCallStatusRingProcessed:(id)arg1;
- (void)setCallStatusEnded:(id)arg1;
- (id)init;

@end

