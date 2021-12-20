//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface FBMQTTConfigurations : FBValueObject <NSCopying, NSCoding>
{
    long long _responseTimeout;
    long long _pingResponseTimeout;
    long long _connectTimeout;
    long long _maxFastReconnectAttempt;
    long long _fastReconnectInterval;
    long long _minBgReconnectInterval;
    long long _maxDisconnectOnBgPing;
    long long _reconnectBgBackoffInterval;
    long long _publishTimeout;
    long long _initialReachableDelay;
    long long _initialUnreachableDelay;
    long long _maxDelay;
}

@property(readonly, nonatomic) long long maxDelay; // @synthesize maxDelay=_maxDelay;
@property(readonly, nonatomic) long long initialUnreachableDelay; // @synthesize initialUnreachableDelay=_initialUnreachableDelay;
@property(readonly, nonatomic) long long initialReachableDelay; // @synthesize initialReachableDelay=_initialReachableDelay;
@property(readonly, nonatomic) long long publishTimeout; // @synthesize publishTimeout=_publishTimeout;
@property(readonly, nonatomic) long long reconnectBgBackoffInterval; // @synthesize reconnectBgBackoffInterval=_reconnectBgBackoffInterval;
@property(readonly, nonatomic) long long maxDisconnectOnBgPing; // @synthesize maxDisconnectOnBgPing=_maxDisconnectOnBgPing;
@property(readonly, nonatomic) long long minBgReconnectInterval; // @synthesize minBgReconnectInterval=_minBgReconnectInterval;
@property(readonly, nonatomic) long long fastReconnectInterval; // @synthesize fastReconnectInterval=_fastReconnectInterval;
@property(readonly, nonatomic) long long maxFastReconnectAttempt; // @synthesize maxFastReconnectAttempt=_maxFastReconnectAttempt;
@property(readonly, nonatomic) long long connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(readonly, nonatomic) long long pingResponseTimeout; // @synthesize pingResponseTimeout=_pingResponseTimeout;
@property(readonly, nonatomic) long long responseTimeout; // @synthesize responseTimeout=_responseTimeout;
- (id)initWithResponseTimeout:(long long)arg1 pingResponseTimeout:(long long)arg2 connectTimeout:(long long)arg3 maxFastReconnectAttempt:(long long)arg4 fastReconnectInterval:(long long)arg5 minBgReconnectInterval:(long long)arg6 maxDisconnectOnBgPing:(long long)arg7 reconnectBgBackoffInterval:(long long)arg8 publishTimeout:(long long)arg9 initialReachableDelay:(long long)arg10 initialUnreachableDelay:(long long)arg11 maxDelay:(long long)arg12;

@end

