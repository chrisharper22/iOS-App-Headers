//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FNFDashFetchRange, FNFDashTrackMetadata, FNFDynamicVideoLibraryData, NSDictionary, NSError, NSString, NSURL;
@protocol FNFDashHeading;

@protocol FNFDashRepresentable
- (_Bool)isPredictionDisabled;
- (long long)latestSegmentAvailable;
- (int)prefetchedSegmentsCount;
- (double)suggestedPlaybackRateWithPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)manifestTimeForChunkSequenceIndex:(int)arg1;
- (NSString *)typeString;
- (void)updatesStopped;
- (int)lastChunkIdAvailable;
- (unsigned int)chunkDurationMs;
- (_Bool)updateOnErrorIsFatal:(NSError *)arg1 atSequenceIndex:(int)arg2 recoverySegmentId:(int)arg3;
- (NSString *)resourceHost;
- (_Bool)containsABRPolicyTag:(NSString *)arg1;
- (_Bool)dynamicQualityDropped;
- (unsigned int)maxBandwidth;
- (unsigned int)bandwidth;
- (struct CGSize)videoSize;
- (NSString *)qualityLabel;
- (NSURL *)urlForPrefetchCacheForChunkSequenceIndex:(int)arg1;
- (void)removeTimelinesWithMaxSequenceIndex:(int)arg1;
- (void)resetTimelines;
- (void)updateWithDVLData:(FNFDynamicVideoLibraryData *)arg1;
- (_Bool)updateWithTrackMetadata:(FNFDashTrackMetadata *)arg1 isFinalUpdate:(_Bool)arg2 playbackTime:(CDStruct_1b6d18a9)arg3 currentSequenceIndex:(int)arg4 firstUnfetchedSequenceIndex:(int)arg5;
- (FNFDashFetchRange *)fetchRangeForChunkSequenceIndex:(int)arg1;
- (FNFDashFetchRange *)fetchRangeForHeader;
- (int)sequenceIndexForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)absoluteEndTimeForChunkSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)absoluteStartTimeForChunkSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)endTimePositionForChunkSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)startTimePositionForChunkSequenceIndex:(int)arg1;
- (int)numberOfChunks;
- (NSString *)audioChannelConfiguration;
- (NSString *)audioCodecDescription;
- (NSDictionary *)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (NSString *)projection;
- (CDStruct_1b6d18a9)duration;
- (id <FNFDashHeading>)header;
- (_Bool)isDefault;
- (NSString *)tagset;
- (NSString *)manifestExperimentDescription;
- (NSString *)encodingTag;
- (NSString *)codecString;
- (unsigned long long)codecFormat;
- (NSString *)representationId;
@end
