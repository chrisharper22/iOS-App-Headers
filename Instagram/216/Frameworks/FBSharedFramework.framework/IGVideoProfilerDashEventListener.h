//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFNFVideoProfilerDashEventListener-Protocol.h>
#import <FBSharedFramework/IGVideoPlaybackStateListener-Protocol.h>

@class IGFNFSelectedQualityProvider, IGVideoProfilerDashMetadata, IGVideoProfilerQPLLogger, IGVideoProfilerStaticPlaybackData, NSString;
@protocol IGVideoPlaybackDataProvider;

@interface IGVideoProfilerDashEventListener : NSObject <IGFNFVideoProfilerDashEventListener, IGVideoPlaybackStateListener>
{
    IGVideoProfilerQPLLogger *_videoProfilerLogger;
    _Bool _shouldLogAudioEvents;
    IGFNFSelectedQualityProvider *_selectedQualityProvider;
    _Bool _shouldLogQualityChangedEvent;
    id <IGVideoPlaybackDataProvider> _playbackDataProvider;
    IGVideoProfilerStaticPlaybackData *_staticPlaybackData;
    NSString *_mediaId;
    IGVideoProfilerDashMetadata *_dashMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGVideoProfilerDashMetadata *dashMetadata; // @synthesize dashMetadata=_dashMetadata;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(retain, nonatomic) IGVideoProfilerStaticPlaybackData *staticPlaybackData; // @synthesize staticPlaybackData=_staticPlaybackData;
@property(nonatomic) __weak id <IGVideoPlaybackDataProvider> playbackDataProvider; // @synthesize playbackDataProvider=_playbackDataProvider;
- (void)_logVideoProfilerState:(long long)arg1;
- (void)videoWithMediaId:(id)arg1 transitionFromState:(long long)arg2 toState:(long long)arg3;
- (void)chunkFetchCompleted:(id)arg1 playerMetadata:(id)arg2 trackType:(long long)arg3;
- (void)chunkFetchStarted:(id)arg1 playerMetadata:(id)arg2 trackType:(long long)arg3;
- (void)availableQualitiesChanged:(id)arg1;
- (void)videoRepresentationIdChanged:(id)arg1;
- (id)_nonnullStaticPlaybackData;
- (void)dealloc;
- (id)initWithMediaId:(id)arg1 videoProfilerLogger:(id)arg2 shoudLogAudioEvents:(_Bool)arg3 selectedQualityProvider:(id)arg4 shouldLogQualityChangedEvent:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
