//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FB_RTCVideoDecoder-Protocol.h"

@class NSString;

@interface FB_RTCWrappedNativeVideoDecoder : NSObject <FB_RTCVideoDecoder>
{
    unique_ptr_8ce5ae0d _wrappedDecoder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)implementationName;
- (long long)decode:(id)arg1 missingFrames:(_Bool)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
- (long long)releaseDecoder;
- (long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
- (long long)startDecodeWithNumberOfCores:(int)arg1;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (unique_ptr_8ce5ae0d)releaseWrappedDecoder;
- (id)initWithNativeDecoder:(unique_ptr_8ce5ae0d)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

