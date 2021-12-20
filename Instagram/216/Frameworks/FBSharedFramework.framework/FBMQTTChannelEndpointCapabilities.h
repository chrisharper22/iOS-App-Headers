//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBMQTTChannelCoordinating, OS_dispatch_queue;

@interface FBMQTTChannelEndpointCapabilities : NSObject
{
    id <FBMQTTChannelCoordinating> _mqttChannelCoordinator;
    struct mutex _mutex;
    unsigned long long _flags;
    _Bool _isUsed;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)removeCapabilities:(unsigned long long)arg1 andSendUpdate:(_Bool)arg2;
- (void)removeCapabilities:(unsigned long long)arg1;
- (_Bool)addCapabilities:(unsigned long long)arg1 andSendUpdate:(_Bool)arg2;
- (void)addCapabilities:(unsigned long long)arg1;
- (unsigned long long)getCapabilities;
- (void)updateCapabilities;
- (void)forceUpdateCapabilities;
- (id)initWithMQTTChannelCoordinator:(id)arg1 queue:(id)arg2;

@end
