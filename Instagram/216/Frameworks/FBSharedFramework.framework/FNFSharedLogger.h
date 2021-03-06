//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFPlayerStateUpdateListener-Protocol.h>
#import <FBSharedFramework/FNFSharedLoggerProtocol-Protocol.h>

@class FNFPlayer, NSMutableArray, NSString;
@protocol FBAnalyticsLogging, FNFVideoLoggingDataProvider;

@interface FNFSharedLogger : NSObject <FNFPlayerStateUpdateListener, FNFSharedLoggerProtocol>
{
    FNFPlayer *_player;
    NSMutableArray *_eventsList;
    id <FBAnalyticsLogging> _logger;
    long long _currentMediaId;
    id <FNFVideoLoggingDataProvider> _videoLoggingDataProvider;
    CDStruct_ce0fb163 _config;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)playerStateUpdatedForVideoStallEndedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForVideoStallStartedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForBackgroundLongStallingEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForStallEndedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForStatusUpdatedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForRateUpdatedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlayerStalledEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlayerItemTimeLoadedChangedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlayerItemDurationChangedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlayerItemDidWarnEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlayerItemDidFailEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlayerDidSeekToTimeEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlaybackTimeUpdatedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlaybackEndedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlaybackDidUnDryEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForPlaybackDidDryOutEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForMutedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForLayerDidLayoutSubLayersEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForIsReadyForDisplayEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2 playContext:(id)arg3;
- (void)playerStateUpdatedForFrameLoggingEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForFrameDidRender:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForFrameDidDisplayEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForDidStartPlayEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2 playContext:(id)arg3;
- (void)playerStateUpdatedForDidSetShowCaptionsEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForDidRequestPlayingEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2 playContext:(id)arg3;
- (void)playerStateUpdatedForDidPauseEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2 pauseContext:(id)arg3;
- (void)playerStateUpdatedForCurrentItemUpdatedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (void)playerStateUpdatedForAssetRepresentationIDChangedEvent:(struct FNFPlayerState)arg1 loggingContext:(id)arg2;
- (id)playerStateUpdateCallbackQueue;
- (void)_logPlayerInitialTagsWithPlayerTime:(CDStruct_1b6d18a9)arg1;
- (void)_clearEventsList;
- (void)_addEvent:(id)arg1;
- (struct TmediaplaybackrequiredmetadatapayloadType)requiredMetadata;
- (void)logTagsChangedWithInitialProductExtras:(Optional_008fc322)arg1 dynamicProductExtras:(Optional_269585c6)arg2 playerTime:(CDStruct_1b6d18a9)arg3 isInitial:(_Bool)arg4;
- (void)_logVideoEvents;
- (void)onProductExtrasStateChanged:(struct TmediaplaybackdynamicproductextrasType)arg1;
- (void)_resetLogger;
- (void)_setCurrentMediaID:(id)arg1 module:(id)arg2 videoLoggingDataProvider:(id)arg3;
- (void)setCurrentMediaID:(id)arg1 module:(id)arg2 videoLoggingDataProvider:(id)arg3;
- (id)initWithFNFPlayer:(id)arg1 logger:(id)arg2 config:(CDStruct_ce0fb163)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

