//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FB_RTCVideoDecoder-Protocol.h"

@class NSString;

@interface FB_RTCVideoDecoderH265 : NSObject <FB_RTCVideoDecoder>
{
    struct opaqueCMFormatDescription *_videoFormat;
    struct OpaqueVTDecompressionSession *_decompressionSession;
    CDUnknownBlockType _callback;
    _Bool _resetDecompressionSessionUponAsyncError;
    int _maxConsecDecompressionSessionResets;
    int _numConsecDecompressionSessionResets;
    int _error;
}

- (void).cxx_destruct;
- (id)implementationName;
- (void)setVideoFormat:(struct opaqueCMFormatDescription *)arg1;
- (void)destroyDecompressionSession;
- (void)configureDecompressionSession;
- (int)resetDecompressionSession;
- (long long)releaseDecoder;
- (void)setError:(int)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (long long)decode:(id)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
- (_Bool)shouldResetDecompressionSession;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)startDecodeWithNumberOfCores:(int)arg1;
- (void)dealloc;
- (id)initWithSetting:(_Bool)arg1 h265AsyncErrorMaxResets:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

