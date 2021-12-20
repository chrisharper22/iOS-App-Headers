//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGVideoConfig : NSObject
{
    _Bool _reversed;
    _Bool _writeFragmentedMP4;
    _Bool _keyframeOnSegmentStart;
    _Bool _readHDR;
    _Bool _writeHDR;
    unsigned int _pixelFormat;
    double _bitrate;
    NSString *_codec;
    double _maxKeyFrameIntervalDuration;
    struct CGSize _size;
    CDStruct_1b6d18a9 _frameDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool writeHDR; // @synthesize writeHDR=_writeHDR;
@property(readonly, nonatomic) _Bool readHDR; // @synthesize readHDR=_readHDR;
@property(readonly, nonatomic) _Bool keyframeOnSegmentStart; // @synthesize keyframeOnSegmentStart=_keyframeOnSegmentStart;
@property(readonly, nonatomic) _Bool writeFragmentedMP4; // @synthesize writeFragmentedMP4=_writeFragmentedMP4;
@property(readonly, nonatomic) double maxKeyFrameIntervalDuration; // @synthesize maxKeyFrameIntervalDuration=_maxKeyFrameIntervalDuration;
@property(readonly, nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly, copy, nonatomic) NSString *codec; // @synthesize codec=_codec;
@property(readonly, nonatomic) double bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(unsigned int)arg2 bitrate:(double)arg3 codec:(id)arg4 frameDuration:(CDStruct_1b6d18a9)arg5 reversed:(_Bool)arg6 maxKeyFrameIntervalDuration:(double)arg7 writeFragmentedMP4:(_Bool)arg8 keyframeOnSegmentStart:(_Bool)arg9 readHDR:(_Bool)arg10 writeHDR:(_Bool)arg11;

@end

