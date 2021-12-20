//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashHeading-Protocol.h>

@class FNFDashFetchRange, FNFDashMp4StreamReader, NSData, NSDictionary, NSMutableData, NSString;

@interface FNFDashMp4Header : NSObject <FNFDashHeading>
{
    unsigned char _fetchState;
    NSMutableData *_fetchBuffer;
    FNFDashMp4StreamReader *_streamReader;
    NSData *_encodedInitSegment;
    struct FNFMP4MoovAtom _moovAtom;
    struct FNFMP4SidxAtom _sidxAtom;
    _Bool _sidxAtomParsed;
    int _trackIndex;
    CDStruct_1b6d18a9 _duration;
    int _timescale;
    struct opaqueCMFormatDescription *_videoFormatDescription;
    NSString *_videoCodecDescription;
    struct AudioStreamBasicDescription _asbd;
    NSDictionary *_audioStreamExtraParameters;
    NSString *_audioCodecDescription;
    _Bool _enableDashMp4RotationSupport;
    _Bool _enableHevcSupport;
    _Bool _disableEsdsObjectType5;
    _Bool _supportMultiParamSets;
    _Bool _disableFormatChanges;
    unsigned char _parseState;
    FNFDashFetchRange *_fetchRange;
    long long _track;
    NSString *_representationId;
    vector_b42bd36b _editListPreProcessedSegmentDuration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned char parseState; // @synthesize parseState=_parseState;
@property(retain, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
@property(nonatomic) long long track; // @synthesize track=_track;
@property(retain, nonatomic) FNFDashFetchRange *fetchRange; // @synthesize fetchRange=_fetchRange;
@property(readonly, nonatomic) vector_b42bd36b editListPreProcessedSegmentDuration; // @synthesize editListPreProcessedSegmentDuration=_editListPreProcessedSegmentDuration;
@property(readonly, nonatomic) _Bool disableFormatChanges; // @synthesize disableFormatChanges=_disableFormatChanges;
- (void)_parse;
- (float)rotationAngle;
@property(readonly, nonatomic) int naluLengthSize;
@property(readonly, nonatomic) const void *moovAtom;
- (_Bool)hasEncodedData;
- (id)rawHeader;
- (CDStruct_1b6d18a9)endTimePositionForSequenceIndex:(int)arg1;
- (CDStruct_1b6d18a9)startTimePositionForSequenceIndex:(int)arg1;
- (int)lengthForSequenceIndex:(int)arg1;
- (long long)offsetForSequenceIndex:(int)arg1;
- (int)numberOfChunks;
@property(readonly, nonatomic) NSString *audioCodecDescription;
@property(readonly, nonatomic) NSDictionary *audioStreamExtraParameters;
@property(readonly, nonatomic) struct AudioStreamBasicDescription asbd;
@property(readonly, nonatomic) NSString *videoCodecDescription;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *videoFormatDescription;
@property(readonly, nonatomic) int timescale;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) int trackIndex;
- (_Bool)parseSucceeded;
- (id)currentMD5;
- (_Bool)fetchCompleted;
- (void)finishFetch;
- (int)remainingFetchSize;
- (void)appendFetchedData:(id)arg1;
- (void)resetFetch;
- (_Bool)fetchStarted;
- (void)startFetchWithRange:(id)arg1 representationId:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithEncodedInitSegment:(id)arg1 track:(long long)arg2 config:(struct FNFDashConfig)arg3;
- (id)initWithTrack:(long long)arg1;

@end

