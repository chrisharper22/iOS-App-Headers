//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimer;
@protocol OS_dispatch_queue;

@interface FBAssistantStellaBusMessageTracker : NSObject
{
    unsigned int _sequence;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_deliveryExpiryTimer;
    NSMutableDictionary *_deliveryHandlerLookup;
    NSMutableDictionary *_deliveryExpiryLookup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *deliveryExpiryLookup; // @synthesize deliveryExpiryLookup=_deliveryExpiryLookup;
@property(retain, nonatomic) NSMutableDictionary *deliveryHandlerLookup; // @synthesize deliveryHandlerLookup=_deliveryHandlerLookup;
@property(retain, nonatomic) NSTimer *deliveryExpiryTimer; // @synthesize deliveryExpiryTimer=_deliveryExpiryTimer;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)scheduledTimeoutTimer;
- (void)armOrDisarmExpiryTimer;
- (void)fireDeliveryExpiryHandlers;
- (void)fireDeliveryHandlerForIdentifier:(unsigned int)arg1 withStatus:(unsigned long long)arg2;
- (void)fireDeliveryHandlerForIdentifier:(unsigned int)arg1;
- (unsigned int)trackDeliveryWithExpiry:(double)arg1 deliveryHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

@end

