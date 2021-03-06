//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet;

@interface IGAddPartnerStateMachine : NSObject
{
    NSOrderedSet *_selectedSponsorPartners;
    NSMutableOrderedSet *_pendingUsersToAdd;
    NSMutableOrderedSet *_pendingUsersToRemove;
}

- (void).cxx_destruct;
- (void)clearPendingEntries;
- (_Bool)_isUserPendingRemoval:(id)arg1;
- (_Bool)_isUserPendingAddition:(id)arg1;
- (_Bool)hasPendingUsers;
- (_Bool)hasPendingUsersToRemove;
- (_Bool)hasPendingUsersToAdd;
- (id)_getCalculatedResultsOrderedSetWithLimit:(unsigned long long)arg1;
- (id)getCalculatedResultsOrderedSet;
- (id)getPendingUsersToRemoveOrderedSet;
- (id)getPendingUsersToAddOrderedSet;
- (void)removePendingUser:(id)arg1;
- (void)addPendingUser:(id)arg1;
- (void)_trimMutableOrderedSet:(id)arg1 limit:(long long)arg2;
- (id)getSelectedSponsorPartners;
- (void)configureWithSelectedSponsorPartners:(id)arg1;
- (id)initWithSelectedPartnerSponsors:(id)arg1;

@end

