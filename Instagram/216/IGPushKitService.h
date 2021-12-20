//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPushNotificationRegisterListener-Protocol.h"
#import "PKPushRegistryDelegate-Protocol.h"

@class NSData, NSSet, NSString, PKPushRegistry;

@interface IGPushKitService : NSObject <PKPushRegistryDelegate, IGPushNotificationRegisterListener>
{
    CDUnknownBlockType _pushHandlingBlock;
    CDUnknownBlockType _coldStartBlock;
    PKPushRegistry *_pushRegistry;
    NSSet *_supportedTypes;
    _Bool _canRegisterPushToken;
    NSData *_voipPushToken;
}

- (void).cxx_destruct;
- (void)_handlePayload:(id)arg1 type:(id)arg2;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)_registerPushTokenIfNecessary;
- (void)registerWithNotificationSettings:(id)arg1;
- (void)registerPushKitTokenIfPresent;
- (id)initWithPushHandlingBlock:(CDUnknownBlockType)arg1 coldStartBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
