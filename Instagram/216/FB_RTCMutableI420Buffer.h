//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FB_RTCI420Buffer.h"

#import "FB_RTCMutableI420Buffer-Protocol.h"

@class NSString;

@interface FB_RTCMutableI420Buffer : FB_RTCI420Buffer <FB_RTCMutableI420Buffer>
{
}

@property(readonly, nonatomic) char *mutableDataV;
@property(readonly, nonatomic) char *mutableDataU;
@property(readonly, nonatomic) char *mutableDataY;

// Remaining properties
@property(readonly, nonatomic) int chromaHeight;
@property(readonly, nonatomic) int chromaWidth;
@property(readonly, nonatomic) const char *dataU;
@property(readonly, nonatomic) const char *dataV;
@property(readonly, nonatomic) const char *dataY;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int strideU;
@property(readonly, nonatomic) int strideV;
@property(readonly, nonatomic) int strideY;
@property(readonly) Class superclass;
@property(readonly, nonatomic) int width;

@end

