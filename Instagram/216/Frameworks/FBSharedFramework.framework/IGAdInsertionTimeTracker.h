//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAdInsertionTrackerProtocol-Protocol.h>

@class NSCache, NSString;
@protocol IGAdInsertionMediaTrackerDelegate, IGUserLauncherSet;

@interface IGAdInsertionTimeTracker : NSObject <IGAdInsertionTrackerProtocol>
{
    unsigned long long _adInsertionSurface;
    id <IGUserLauncherSet> _launcherSet;
    double _timeSpentSinceLastSeenAd;
    double _timeSpentSinceLastSeenAdForAdSlots;
    NSCache *_lastMediaViewPointTimeSpent;
    double _offsetTimer;
    id <IGAdInsertionMediaTrackerDelegate> _mediaViewTrackerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAdInsertionMediaTrackerDelegate> mediaViewTrackerDelegate; // @synthesize mediaViewTrackerDelegate=_mediaViewTrackerDelegate;
- (void)_resetTimespentSinceLastAdForItemType:(unsigned long long)arg1;
- (void)_viewpointUpdatedOnVpvdForItemType:(unsigned long long)arg1 modelPK:(id)arg2 containerModelPK:(id)arg3 adPlatformMetadata:(id)arg4 inventorySource:(id)arg5 context:(id)arg6;
- (void)_setInitialTrackingStates;
- (double)timeSinceLastSeenSponsoredItemForAdSlot;
- (double)timeSinceLastSeenSponsoredItem;
- (void)resetAdSlotConsumptionStates;
- (void)resetTrackingStates;
- (void)viewpointExitedActionForMediaView:(id)arg1 itemType:(unsigned long long)arg2 modelPK:(id)arg3 containerModelPK:(id)arg4 adPlatformMetadata:(id)arg5 inventorySource:(id)arg6 context:(id)arg7;
- (void)viewpointUpdatedActionForMediaView:(id)arg1 itemType:(unsigned long long)arg2 modelPK:(id)arg3 containerModelPK:(id)arg4 adPlatformMetadata:(id)arg5 inventorySource:(id)arg6 context:(id)arg7;
- (void)viewpointEnteredActionForMediaView:(id)arg1 itemType:(unsigned long long)arg2 modelPK:(id)arg3 containerModelPK:(id)arg4 adPlatformMetadata:(id)arg5 inventorySource:(id)arg6 context:(id)arg7;
- (id)initWithAdPlatformToolbox:(id)arg1 adPlatformEventCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
