//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSNumber;

@interface IGLiveRoomLoggingSessionTracker : NSObject
{
    long long _guestJoinCounter;
    long long _guestInviteAttempt;
    CDStruct_1b6d18a9 _currentCobroadcastSessionDuration;
    CDStruct_1b6d18a9 _totalCobroadcastDuration;
    NSMutableSet *_joinedGuestIds;
    NSMutableDictionary *_inviteTrackerMap;
    NSNumber *_endScreenImpressionTime;
    NSArray *_currentInviteTrackers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *endScreenImpressionTime; // @synthesize endScreenImpressionTime=_endScreenImpressionTime;
@property(readonly, nonatomic) NSArray *currentInviteTrackers; // @synthesize currentInviteTrackers=_currentInviteTrackers;
- (void)_endCobroadcastSession;
- (void)markEndScreenImpression;
- (void)notifyEndBroadastSession;
- (void)notifyGuestLeftWithUser:(id)arg1;
- (void)notifyGuestJoinedWithUser:(id)arg1;
- (void)notifyGuestInviteSentToGuest:(id)arg1;
- (void)notifyGuestSelected:(id)arg1 source:(id)arg2;
- (void)notifyAudioUpdateWithDuration:(CDStruct_1b6d18a9)arg1;
- (id)_getInviteTrackerForGuest:(id)arg1 createIfNotExists:(_Bool)arg2;
- (id)inviteTrackerForUser:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 totalCobroadcastDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentCobroadcastSessionDuration;
@property(readonly, nonatomic) long long guestInviteAttempt;
@property(readonly, nonatomic) long long guestJoinCounter;
@property(readonly, nonatomic) long long currentGuestCount; // @dynamic currentGuestCount;
@property(readonly, nonatomic) long long uniqueGuestCount;
- (id)init;

@end

