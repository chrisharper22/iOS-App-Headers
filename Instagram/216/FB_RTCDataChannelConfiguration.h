//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FB_RTCDataChannelConfiguration : NSObject
{
    struct DataChannelInit _nativeDataChannelInit;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct DataChannelInit nativeDataChannelInit; // @synthesize nativeDataChannelInit=_nativeDataChannelInit;
@property(nonatomic) int channelId;
@property(nonatomic) int streamId;
@property(nonatomic) _Bool isNegotiated;
@property(retain, nonatomic) NSString *protocol;
@property(nonatomic) int maxRetransmits;
@property(nonatomic) int maxPacketLifeTime;
@property(nonatomic) long long maxRetransmitTimeMs;
@property(nonatomic) _Bool isOrdered;

@end

