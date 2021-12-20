//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMPOutput-Protocol.h>

@class FBMPBaseConsumerPort, NSString;

@interface FBMPDataCapturer : NSObject <FBMPOutput>
{
    Class _dataType;
    FBMPBaseConsumerPort *_port;
    struct FBMPDataCapturerCompletionContext _captureCompletionContext;
    struct mutex _lock;
    unsigned long long _dataId;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long dataId; // @synthesize dataId=_dataId;
- (void)_captureData:(id)arg1 context:(const struct FBMPDataCapturerCompletionContext *)arg2;
- (_Bool)_isCapturingDataWithContext:(const struct FBMPDataCapturerCompletionContext *)arg1;
- (void)captureDataWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleData:(id)arg1 withUniqueId:(unsigned long long)arg2;
- (id)consumerPorts;
- (id)initWithDataType:(Class)arg1 dataId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

