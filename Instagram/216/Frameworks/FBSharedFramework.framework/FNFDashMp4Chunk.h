//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashFraming-Protocol.h>

@class FNFDashBaseDecodeContainer, FNFDashFetchRange, FNFDashMp4Header, FNFDashMp4StreamReader, NSDictionary, NSMutableArray, NSMutableData, NSString;

@interface FNFDashMp4Chunk : NSObject <FNFDashFraming>
{
    unsigned char _fetchState;
    NSMutableData *_fetchBuffer;
    FNFDashMp4StreamReader *_streamReader;
    unsigned long long _streamReaderParseOffset;
    struct FNFMP4MoovAtomProvider _atomProvider;
    FNFDashMp4Header *_header;
    CDStruct_1b6d18a9 _baseDecodeTime;
    struct vector<FNFDashFrameMetadata, std::allocator<FNFDashFrameMetadata>> _frames;
    int _availableFramesCount;
    int _currentFrameIndex;
    struct opaqueCMFormatDescription *_videoFormatDescription;
    unsigned long long _failureReason;
    _Bool _currentFoundKeyframe;
    long long _currentDts;
    long long _currentAbsoluteDts;
    int _moofIndex;
    int _sampleIndex;
    int _trunIndex;
    unsigned long long _offset;
    unsigned long long _codecFormat;
    _Bool _testOnlyAllowLastFrameToAdvance;
    NSString *_extraMessage;
    unsigned char _extraMessageType;
    double _extraMessageStartTime;
    double _extraMessageEndTime;
    FNFDashBaseDecodeContainer *_decodeTime;
    FNFDashBaseDecodeContainer *_nextDecodeTime;
    _Bool _md5Check;
    _Bool _md5CheckPartial;
    _Bool _enableEditListSupport;
    _Bool _enableEmsgParsingV2;
    NSDictionary *_md5;
    double _startTimestamp;
    double _endTimestamp;
    CDStruct_1b6d18a9 _duration;
    NSMutableArray *_emsgs;
    _Bool _allFramesRetrieved;
    unsigned char _parseState;
    int _sequenceIndex;
    FNFDashFetchRange *_fetchRange;
    long long _track;
    NSString *_representationId;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned char parseState; // @synthesize parseState=_parseState;
@property(nonatomic) int sequenceIndex; // @synthesize sequenceIndex=_sequenceIndex;
@property(copy, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
@property(nonatomic) long long track; // @synthesize track=_track;
@property(retain, nonatomic) FNFDashFetchRange *fetchRange; // @synthesize fetchRange=_fetchRange;
@property(nonatomic) _Bool allFramesRetrieved; // @synthesize allFramesRetrieved=_allFramesRetrieved;
- (void)_TESTONLY_allowAdvanceToLastFrame;
- (long long)_TESTONLY_framesAvailable;
- (long long)_TESTONLY_frameCount;
- (void)_generateMD5;
- (void)_updateAvailableFramesCount;
- (void)_populateFramesFromMoofAtom:(const void *)arg1;
- (void)_processEmsgAtoms:(const void *)arg1;
- (void)_parse;
- (void)_resetFrameParse;
- (CDStruct_1b6d18a9)_computeEndBaseDecodeTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) double segmentEndTimestamp;
@property(readonly, nonatomic) double segmentStartTimestamp;
- (unsigned long long)codecFormat;
- (id)parseError;
- (id)endBaseDecodeTime;
- (id)fetchUrl;
- (int)emsgCount;
- (id)emsgs;
- (_Bool)enableEmsgParsingV2;
- (double)extraMessageEndTime;
- (double)extraMessageStartTime;
- (unsigned char)extraMessageType;
- (id)extraMessage;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *videoFormatDescription;
- (void)updateVideoFormat;
- (void)setHeader:(id)arg1;
- (_Bool)shouldResetToBeginning;
- (_Bool)hasMoreFrames;
- (void)advanceFrame;
- (id)rawChunkHeader;
- (const char *)currentFrameData;
- (CDStruct_72d0e578)currentFrameMetadata;
- (CDStruct_1b6d18a9)latestTimeLoaded;
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
- (id)initForSequenceIndex:(int)arg1 track:(long long)arg2;
- (id)initForSequenceIndex:(int)arg1 baseDecodeTime:(CDStruct_1b6d18a9)arg2 decodeTime:(id)arg3 md5Check:(_Bool)arg4 md5CheckPartial:(_Bool)arg5 enableEditListSupport:(_Bool)arg6 enableEmsgParsingV2:(_Bool)arg7 codecFormat:(unsigned long long)arg8 track:(long long)arg9;

@end
