//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBInvalidating-Protocol.h>

@class NSMutableDictionary, NSNotificationCenter, NSString;
@protocol FBMQTTInterface;

@interface FBMessagingMailboxMQTTContext : NSObject <FBInvalidating>
{
    NSNotificationCenter *_center;
    id <FBMQTTInterface> _mqttInterface;
    CDUnknownBlockType _mqttInterfaceProvider;
    NSMutableDictionary *_tokenToPublisher;
    CDUnknownFunctionPointerType _rtMQTTListener;
    id _rtmqttListenerContext;
    NSMutableDictionary *_topicToMqttListener;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)topicToMqttListener;
- (void)unregisterMQTTListenerForTopic:(id)arg1;
- (void)registerMQTTListenerForTopic:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)publisherForToken:(unsigned long long)arg1;
- (void)removePublisher:(unsigned long long)arg1;
- (void)addPublisherForToken:(id)arg1 token:(unsigned long long)arg2;
- (void)_mqttConnectStatusDidChange:(id)arg1;
- (void)executeListenerCalbackWithState:(int)arg1;
- (void)configureWithListener:(CDUnknownFunctionPointerType)arg1 context:(id)arg2;
@property(readonly, nonatomic) id <FBMQTTInterface> mqttInterface;
- (id)initWithNotificationCenter:(id)arg1 mqttInterfaceProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

