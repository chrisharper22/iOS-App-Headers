//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface PTUSBChannel : NSObject
{
    NSObject<OS_dispatch_io> *channel_;
    NSObject<OS_dispatch_queue> *queue_;
    unsigned int nextPacketTag_;
    NSMutableDictionary *responseQueue_;
    _Bool autoReadPackets_;
    _Bool isReadingPackets_;
}

+ (id)packetDictionaryWithPacketType:(id)arg1 payload:(id)arg2;
- (void).cxx_destruct;
- (void)stop;
- (void)cancel;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendDispatchData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendPacket:(id)arg1 tag:(unsigned int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendPacketOfType:(unsigned int)arg1 overProtocol:(unsigned int)arg2 tag:(unsigned int)arg3 payload:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)scheduleReadPacketWithCallback:(CDUnknownBlockType)arg1;
- (void)scheduleReadPacketWithBroadcastHandler:(CDUnknownBlockType)arg1;
- (void)setNeedsReadingPacket;
- (void)sendRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned int)nextPacketTag;
- (_Bool)errorFromPlistResponse:(id)arg1 error:(id *)arg2;
- (void)listenWithBroadcastHandler:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)openOnQueue:(id)arg1 error:(id *)arg2 onEnd:(CDUnknownBlockType)arg3;
@property(readonly) int fileDescriptor;
@property(readonly) NSObject<OS_dispatch_io> *dispatchChannel;
- (_Bool)valid;
- (void)dealloc;
- (id)init;

@end

