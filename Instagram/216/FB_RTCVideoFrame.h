//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FB_RTCVideoFrameBuffer;

@interface FB_RTCVideoFrame : NSObject
{
    long long _rotation;
    long long _timeStampNs;
    int _qp;
    int timeStamp;
    id <FB_RTCVideoFrameBuffer> _buffer;
}

- (void).cxx_destruct;
@property(nonatomic) int qp; // @synthesize qp=_qp;
@property(nonatomic) int timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) id <FB_RTCVideoFrameBuffer> buffer; // @synthesize buffer=_buffer;
- (id)initWithBuffer:(id)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 rotation:(long long)arg8 timeStampNs:(long long)arg9;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)newI420VideoFrame;
@property(readonly, nonatomic) long long timeStampNs;
@property(readonly, nonatomic) long long rotation;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;

@end

