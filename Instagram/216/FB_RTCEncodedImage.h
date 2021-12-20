//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface FB_RTCEncodedImage : NSObject
{
    unsigned char _flags;
    _Bool _completeFrame;
    int _encodedWidth;
    int _encodedHeight;
    unsigned int _timeStamp;
    NSData *_buffer;
    long long _captureTimeMs;
    long long _ntpTimeMs;
    long long _encodeStartMs;
    long long _encodeFinishMs;
    unsigned long long _frameType;
    long long _rotation;
    NSNumber *_qp;
    unsigned long long _contentType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSNumber *qp; // @synthesize qp=_qp;
@property(nonatomic) _Bool completeFrame; // @synthesize completeFrame=_completeFrame;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long frameType; // @synthesize frameType=_frameType;
@property(nonatomic) long long encodeFinishMs; // @synthesize encodeFinishMs=_encodeFinishMs;
@property(nonatomic) long long encodeStartMs; // @synthesize encodeStartMs=_encodeStartMs;
@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(nonatomic) long long ntpTimeMs; // @synthesize ntpTimeMs=_ntpTimeMs;
@property(nonatomic) long long captureTimeMs; // @synthesize captureTimeMs=_captureTimeMs;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int encodedHeight; // @synthesize encodedHeight=_encodedHeight;
@property(nonatomic) int encodedWidth; // @synthesize encodedWidth=_encodedWidth;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
- (struct EncodedImage)nativeEncodedImage;
- (id)initWithNativeEncodedImage:(const void *)arg1;

@end

