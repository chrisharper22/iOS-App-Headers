//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGQuantumSignalsExternalLoggingDelegate-Protocol.h>
#import <FBSharedFramework/IGQuantumSignalsMediaTrackerDelegate-Protocol.h>
#import <FBSharedFramework/IGQuantumSignalsMediaViewTracking-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGQuantumSignalsMediaVPVDTracker, IGQuantumSignalsModelBuilder, NSString;
@protocol IGQuantumSignalsAnnouncer, IGUserFeatureSets;

@interface IGQuantumSignalsService : NSObject <IGUserSessionEndingObject, IGQuantumSignalsMediaTrackerDelegate, IGQuantumSignalsMediaViewTracking, IGQuantumSignalsExternalLoggingDelegate>
{
    id <IGQuantumSignalsAnnouncer> _announcer;
    IGQuantumSignalsModelBuilder *_modelBuilder;
    id <IGUserFeatureSets> _featureSets;
    IGQuantumSignalsMediaVPVDTracker *_mediaVPVDTracker;
    _Bool _isQuantumSignalsLoggingEnabled;
}

- (void).cxx_destruct;
- (void)userSessionWillEnd;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)didUpdateTimespent:(double)arg1 maxPercentVisible:(id)arg2 itemType:(unsigned long long)arg3 mediaId:(id)arg4 containerModule:(id)arg5 itemId:(id)arg6 inventorySource:(id)arg7;
- (void)trackViewpointActionForMediaView:(id)arg1 containerModule:(id)arg2 modelPK:(id)arg3 itemId:(id)arg4 inventorySource:(id)arg5 itemType:(unsigned long long)arg6 viewpointLevel:(long long)arg7;
- (void)logExternalEventWithContainerModule:(id)arg1 itemType:(unsigned long long)arg2 itemId:(id)arg3;
- (void)didTapXoutWithContainerModule:(id)arg1 inventorySource:(id)arg2 authorId:(id)arg3 itemId:(id)arg4 itemType:(unsigned long long)arg5 mediaIds:(id)arg6 xoutTimeStamp:(double)arg7 xoutMediaId:(id)arg8 reason:(id)arg9;
- (void)updateSeenStateModelWithItemId:(id)arg1 mediaId:(id)arg2 adPlatformMetadata:(id)arg3 containerModule:(id)arg4 inventorySource:(id)arg5 itemType:(unsigned long long)arg6 timespent:(double)arg7 maxPercentVisible:(id)arg8;
- (void)didTapLikeButtonWithItemId:(id)arg1 authorId:(id)arg2 containerModule:(id)arg3 inventorySource:(id)arg4 timestamp:(double)arg5 itemType:(unsigned long long)arg6 mediaIds:(id)arg7 tapMediaId:(id)arg8 isLike:(_Bool)arg9;
- (void)didTapCTAWithItemId:(id)arg1 authorId:(id)arg2 containerModule:(id)arg3 inventorySource:(id)arg4 timestamp:(double)arg5 itemType:(unsigned long long)arg6 mediaIds:(id)arg7 tapMediaId:(id)arg8;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithfeatureSets:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

