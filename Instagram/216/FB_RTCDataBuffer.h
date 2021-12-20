//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface FB_RTCDataBuffer : NSObject
{
    struct unique_ptr<webrtc::DataBuffer, std::default_delete<webrtc::DataBuffer>> _dataBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const void *nativeDataBuffer;
- (id)initWithNativeBuffer:(const void *)arg1;
@property(readonly, nonatomic) _Bool isBinary;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1 isBinary:(_Bool)arg2;

@end

