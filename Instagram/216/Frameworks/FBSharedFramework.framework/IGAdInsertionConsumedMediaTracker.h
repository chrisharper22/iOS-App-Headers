//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAdInsertionTrackerProtocol-Protocol.h>

@class IGAdPlatformExperimentConfigs, NSMutableDictionary, NSString;
@protocol IGAdInsertionMediaTrackerDelegate, IGAdInsertionMediaViewTrackerDataSource, IGAdPlatformStatesSnapshot;

@interface IGAdInsertionConsumedMediaTracker : NSObject <IGAdInsertionTrackerProtocol>
{
    CDStruct_72499660 _consumedMediaCounter;
    CDStruct_72499660 _consumedMediaContainerCounter;
    IGAdPlatformExperimentConfigs *_adPlatformExperimentConfigs;
    NSMutableDictionary *_lastSeenSponsoredItemDicts;
    id <IGAdPlatformStatesSnapshot> _adPlatformStatesSnapshot;
    id <IGAdInsertionMediaViewTrackerDataSource> _mediaViewTrackerDataSource;
    id <IGAdInsertionMediaTrackerDelegate> _mediaViewTrackerDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAdInsertionMediaTrackerDelegate> mediaViewTrackerDelegate; // @synthesize mediaViewTrackerDelegate=_mediaViewTrackerDelegate;
@property(nonatomic) __weak id <IGAdInsertionMediaViewTrackerDataSource> mediaViewTrackerDataSource; // @synthesize mediaViewTrackerDataSource=_mediaViewTrackerDataSource;
- (id)lastSeenSponsoredItemOfType:(unsigned long long)arg1;
- (long long)consumedMediaContainerCountForAdSlotSincePreviousItemType:(unsigned long long)arg1;
- (long long)consumedMediaCountForAdSlotSincePreviousItemType:(unsigned long long)arg1;
- (long long)consumedMediaContainerCountSincePreviousItemType:(unsigned long long)arg1;
- (long long)consumedMediaCountSincePreviousItemType:(unsigned long long)arg1;
- (void)resetAdSlotConsumptionStates;
- (void)resetTrackingStates;
- (void)viewpointExitedActionForMediaView:(id)arg1 itemType:(unsigned long long)arg2 modelPK:(id)arg3 containerModelPK:(id)arg4 adPlatformMetadata:(id)arg5 inventorySource:(id)arg6 context:(id)arg7;
- (void)viewpointUpdatedActionForMediaView:(id)arg1 itemType:(unsigned long long)arg2 modelPK:(id)arg3 containerModelPK:(id)arg4 adPlatformMetadata:(id)arg5 inventorySource:(id)arg6 context:(id)arg7;
- (void)viewpointEnteredActionForMediaView:(id)arg1 itemType:(unsigned long long)arg2 modelPK:(id)arg3 containerModelPK:(id)arg4 adPlatformMetadata:(id)arg5 inventorySource:(id)arg6 context:(id)arg7;
- (id)initWithAdPlatformToolbox:(id)arg1 adPlatformStatesSnapshot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

