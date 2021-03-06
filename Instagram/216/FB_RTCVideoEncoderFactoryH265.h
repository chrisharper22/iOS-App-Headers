//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FB_RTCVideoEncoderFactory-Protocol.h"

@class NSString;

@interface FB_RTCVideoEncoderFactoryH265 : NSObject <FB_RTCVideoEncoderFactory>
{
}

+ (_Bool)IsH265CodecSupported;
+ (_Bool)NonCachedIsH265CodecSupported;
- (id)createEncoder:(id)arg1;
- (id)supportedCodecs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

