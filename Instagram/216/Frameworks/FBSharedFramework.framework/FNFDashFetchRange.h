//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface FNFDashFetchRange : NSObject
{
    unsigned char _type;
    _Bool _isPredictive;
    _Bool _isLiveHead;
    int _length;
    int _startSequenceIndex;
    int _endSequenceIndex;
    NSURL *_url;
    long long _offset;
    NSDictionary *_httpRequestHeaders;
    long long _startSegmentIdentifier;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) int endSequenceIndex; // @synthesize endSequenceIndex=_endSequenceIndex;
@property(readonly, nonatomic) int startSequenceIndex; // @synthesize startSequenceIndex=_startSequenceIndex;
@property(readonly, nonatomic) long long startSegmentIdentifier; // @synthesize startSegmentIdentifier=_startSegmentIdentifier;
@property(readonly, nonatomic) _Bool isLiveHead; // @synthesize isLiveHead=_isLiveHead;
@property(readonly, nonatomic) _Bool isPredictive; // @synthesize isPredictive=_isPredictive;
@property(copy, nonatomic) NSDictionary *httpRequestHeaders; // @synthesize httpRequestHeaders=_httpRequestHeaders;
@property(readonly, nonatomic) int length; // @synthesize length=_length;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (long long)endOffset;
- (id)rangeWithStartTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (id)initWithType:(unsigned char)arg1 url:(id)arg2 offset:(long long)arg3 length:(int)arg4 startTime:(CDStruct_1b6d18a9)arg5 duration:(CDStruct_1b6d18a9)arg6 httpRequestHeaders:(id)arg7 isPredictive:(_Bool)arg8 isLiveHead:(_Bool)arg9 startSegmentIdentifier:(long long)arg10 startSequenceIndex:(int)arg11 endSequenceIndex:(int)arg12;

@end

