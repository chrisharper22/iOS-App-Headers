//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FB_RTCEncodedImage, FB_RTCVideoEncoderSettings, NSString;
@protocol FB_RTCCodecSpecificInfo;

@protocol FB_RTCVideoDecoder <NSObject>
- (NSString *)implementationName;
- (long long)decode:(FB_RTCEncodedImage *)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id <FB_RTCCodecSpecificInfo>)arg3 renderTimeMs:(long long)arg4;
- (long long)releaseDecoder;
- (long long)startDecodeWithSettings:(FB_RTCVideoEncoderSettings *)arg1 numberOfCores:(int)arg2;
- (void)setCallback:(void (^)(FB_RTCVideoFrame *))arg1;

@optional
- (long long)startDecodeWithNumberOfCores:(int)arg1;
@end

