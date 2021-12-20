//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAdBrandSafetySlotTrackerProtocol-Protocol.h>

@class IGAdInsertionMediaViewTracker, IGAdPlatformEventCenter, IGAdPlatformSlotFillRate, IGAdPlatformToolbox, NSString;

@interface IGAdSlotsTracker : NSObject <IGAdBrandSafetySlotTrackerProtocol>
{
    IGAdInsertionMediaViewTracker *_mediaTracker;
    IGAdPlatformEventCenter *_adPlatformEventCenter;
    IGAdPlatformToolbox *_adPlatformToolbox;
    IGAdPlatformSlotFillRate *_slotFillRate;
    long long _largestCheckedBrandSafetyIndex;
    _Bool _didUpdateHP1Slot;
}

- (void).cxx_destruct;
- (long long)largestCheckedBrandSafetyIndex;
- (void)updateBrandSafetySlotCountWithIsBrandSafe:(_Bool)arg1 insertionIndex:(long long)arg2;
- (void)updateMockEventCenter:(id)arg1;
- (void)_postSFRValueChangeEvent;
- (void)_updateSlotCountForItemType:(unsigned long long)arg1;
- (void)resetStates;
- (id)slotFillRate;
- (void)trackInsertedSponsoredItem:(id)arg1;
- (void)calculateAdSlotsWithInsertionAttemptSponsoredItem:(id)arg1 eligibleOrganicId:(id)arg2 gapRuleEnforcer:(id)arg3 insertionPositionCalculator:(id)arg4 adInsertionDataSource:(id)arg5;
- (id)initWithAdPlatformEventCenter:(id)arg1 mediaTracker:(id)arg2 adPlatformToolbox:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
