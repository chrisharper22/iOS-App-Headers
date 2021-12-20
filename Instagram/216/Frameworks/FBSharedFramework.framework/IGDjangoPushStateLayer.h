//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkLayer-Protocol.h>

@class IGDjangoPushStateHandler, NSString;
@protocol IGNetworkLayer;

@interface IGDjangoPushStateLayer : NSObject <IGNetworkLayer>
{
    id <IGNetworkLayer> _nextLayer;
    IGDjangoPushStateHandler *_djangoPushStateHandler;
    _Bool _enablePushPhaseLogging;
}

- (void).cxx_destruct;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbacks:(id)arg3;
- (id)initWithNextLayer:(id)arg1 withHandler:(id)arg2 enablePushPhaseLogging:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

