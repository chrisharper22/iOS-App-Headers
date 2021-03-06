//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMPInput-Protocol.h>

@class FBMPBaseProducerPort, NSArray, NSString;

@interface FBMPSingleInput : NSObject <FBMPInput>
{
    FBMPBaseProducerPort *_port;
    unsigned long long _dataCounter;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)sessionDisconnectedPort:(id)arg1 context:(id)arg2;
- (void)sessionConnectedPort:(id)arg1 context:(id)arg2;
- (void)sessionWillStop:(id)arg1;
- (void)sessionWillStart:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *producerPorts;
- (void)produceError:(id)arg1;
- (void)produceData:(id)arg1;
- (id)initWithDataType:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

