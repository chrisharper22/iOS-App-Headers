//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGVideoProfilerQPLLogger : NSObject
{
    long long _sequenceNumber;
}

+ (unsigned long long)_instanceKeyWithVideoId:(id)arg1 playerId:(id)arg2 representationId:(id)arg3;
+ (unsigned long long)_instanceKeyWithVideoId:(id)arg1 playerId:(id)arg2;
- (long long)_nextSequenceNumber;
- (void)logVideoQualitiesEventWithVideoId:(id)arg1 playerId:(id)arg2 timeMs:(long long)arg3 availableQualities:(id)arg4;
- (void)_sendHTTPTransferEventMarkerForInstanceKey:(unsigned long long)arg1 withAnnotations:(id)arg2;
- (void)_sendNetworkTransferInformationForInstanceKey:(unsigned long long)arg1 withDefaultAnnotations:(id)arg2 forResponseMetadata:(id)arg3;
- (void)_sendCacheTransferInformationForInstanceKey:(unsigned long long)arg1 withDefaultAnnotations:(id)arg2 forResponseMetadata:(id)arg3;
- (void)logFetchCompletedWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 bufferDurationMs:(long long)arg4 responseMetadata:(id)arg5 isPrefetch:(_Bool)arg6 startTime:(CDStruct_1b6d18a9)arg7 duration:(CDStruct_1b6d18a9)arg8 qualityLabel:(id)arg9 url:(id)arg10 bitrate:(long long)arg11 bandwidthEstimate:(long long)arg12 streamType:(long long)arg13;
- (void)logFetchCompletedWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 bufferDurationMs:(long long)arg4 qualityMetadata:(id)arg5 streamType:(long long)arg6;
- (void)logQualitySelectedEventWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 videoDurationMs:(long long)arg4 videoPositionMs:(long long)arg5 currentQuality:(id)arg6 selectionMetadata:(id)arg7;
- (void)logStallEndWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 videoPositionMs:(long long)arg4 currentQuality:(id)arg5 streamingFormat:(id)arg6 isLive:(_Bool)arg7 loomTraceID:(id)arg8;
- (void)logStallStartWithVideoId:(id)arg1 playerId:(id)arg2 playerOrigin:(id)arg3 videoPositionMs:(long long)arg4 currentQuality:(id)arg5 streamingFormat:(id)arg6 isLive:(_Bool)arg7 loomTraceID:(id)arg8;
- (void)logVideoPlaybackState:(long long)arg1 videoId:(id)arg2 playReason:(long long)arg3 playerOrigin:(id)arg4 playerId:(id)arg5 videoPositionMs:(long long)arg6 videoDurationMs:(long long)arg7 videoBufferPositionMs:(long long)arg8 currentQuality:(id)arg9 nextQuality:(id)arg10 streamingFormat:(id)arg11 isLive:(_Bool)arg12 loomTraceID:(id)arg13;
- (void)logVideoPlaybackState:(long long)arg1 videoId:(id)arg2 playReason:(long long)arg3 playerOrigin:(id)arg4 playerId:(id)arg5 videoPositionMs:(long long)arg6 videoDurationMs:(long long)arg7 videoBufferPositionMs:(long long)arg8 currentQuality:(id)arg9 streamingFormat:(id)arg10 isLive:(_Bool)arg11 loomTraceID:(id)arg12;

@end
