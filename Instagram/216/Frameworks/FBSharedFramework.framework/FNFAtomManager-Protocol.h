//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FNFDataBlockDistributor, NSDictionary, NSString;
@protocol FNFAtomManagerDelegate;

@protocol FNFAtomManager
- (unsigned long long)currentOffsetForTrack:(long long)arg1;
- (unsigned long long)timescale;
- (struct CGAffineTransform)preferredTransform;
- (CDStruct_1b6d18a9)nextAbsoluteAudioTime;
- (void)advanceFrameForTrack:(long long)arg1;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (CDStruct_1b6d18a9)duration;
- (NSDictionary *)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (struct opaqueCMFormatDescription *)formatDesc;
- (NSString *)audioCodec;
- (_Bool)containsAudio;
- (_Bool)trackHasMoreFrames:(long long)arg1 isFullyDownloaded:(_Bool)arg2;
- (struct FNFSeekStatus)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldResetAssetToBeginning;
- (unsigned long long)offsetForTimeInSeconds:(float)arg1 track:(long long)arg2;
- (void)createNewDataBlockDistributors;
- (FNFDataBlockDistributor *)dataBlockDistributorForTrack:(long long)arg1;
- (_Bool)offsetIsAtLeastLargestOffset:(unsigned long long)arg1 track:(long long)arg2;
- (CDStruct_1b6d18a9)timeLoadedForOffset:(unsigned long long)arg1 track:(long long)arg2;
- (_Bool)parsedHeaders;
- (_Bool)parsedHeaderForTrack:(long long)arg1;
- (CDStruct_1b6d18a9)videoTrackDuration;
- (CDStruct_1b6d18a9)currentVideoPts;
- (_Bool)moovAtomSizeParsedFromFile;
- (unsigned long long)moovAtomSize;
- (void)parseAtomForTrack:(long long)arg1;
- (void)setDelegate:(id <FNFAtomManagerDelegate>)arg1;
@end

