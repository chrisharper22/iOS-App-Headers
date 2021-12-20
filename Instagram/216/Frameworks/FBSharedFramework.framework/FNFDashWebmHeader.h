//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashHeading-Protocol.h>

@class FNFDashFetchRange, NSData, NSDictionary, NSString;

@interface FNFDashWebmHeader : NSObject <FNFDashHeading>
{
    unsigned char _fetchState;
    struct FNFDashWebmSegment _segment;
    NSData *_encodedInitSegment;
    int _trackIndex;
    int _bytesFetched;
    struct opaqueCMFormatDescription *_videoFormatDescription;
    unsigned char _parseState;
    FNFDashFetchRange *_fetchRange;
    long long _track;
    NSString *_representationId;
}

+ (CDStruct_1b6d18a9)_createCMTimeFromNanoSecond:(long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned char parseState; // @synthesize parseState=_parseState;
@property(retain, nonatomic) NSString *representationId; // @synthesize representationId=_representationId;
@property(nonatomic) long long track; // @synthesize track=_track;
@property(retain, nonatomic) FNFDashFetchRange *fetchRange; // @synthesize fetchRange=_fetchRange;
@property(readonly, nonatomic) void *segment;
- (id)rawHeader;
- (float)rotationAngle;
- (_Bool)hasEncodedData;
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
- (struct __CFDictionary *)_createVideoFormatDescriptionExtensions:(const struct VideoTrack *)arg1;
- (int)remainingFetchSize;
- (void)appendFetchedData:(id)arg1;
- (void)resetFetch;
- (_Bool)fetchStarted;
- (void)startFetchWithRange:(id)arg1 representationId:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithEncodedInitSegment:(id)arg1 track:(long long)arg2;

@end

