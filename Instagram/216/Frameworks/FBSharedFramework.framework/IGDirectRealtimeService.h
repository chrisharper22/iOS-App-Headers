//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectRealtimeIrisDeltaListener-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGDirectRealtimeDeltaOperationHandler, IGDirectRealtimeIrisDeltaHandler, IGDirectRealtimeIrisDeltaSequenceIdTracker, IGDirectRealtimeIrisLoggingCoordinator, IGDirectRealtimeIrisSyncStatusTracker, IGDirectRealtimeNotificationOperationHandler, IGDirectRealtimeOrderedIrisDeltaListenerForwarder, IGDirectRealtimePatchEventPreprocessor, IGRealtimeMqttClient, NSString;
@protocol IGContentFilterSyncServiceProtocol, IGDirectRealtimeServiceAnnouncer, IGDirectTypingStatusReceiving;

@interface IGDirectRealtimeService : NSObject <IGDirectRealtimeIrisDeltaListener, IGUserSessionEndingObject>
{
    id <IGDirectTypingStatusReceiving> _directTypingStatusReceiver;
    IGDirectRealtimePatchEventPreprocessor *_patchEventPreprocessor;
    IGRealtimeMqttClient *_realtimeClient;
    IGDirectRealtimeNotificationOperationHandler *_notificationOperationHandler;
    IGDirectRealtimeDeltaOperationHandler *_deltaOperationHandler;
    IGDirectRealtimeIrisDeltaHandler *_irisDeltaHandler;
    IGDirectRealtimeOrderedIrisDeltaListenerForwarder *_orderedIrisDeltaListenerForwarder;
    IGDirectRealtimeIrisLoggingCoordinator *_irisLoggingCoordinator;
    IGDirectRealtimeIrisSyncStatusTracker *_syncStatusTracker;
    id <IGDirectRealtimeServiceAnnouncer> _serviceAnnouncer;
    IGDirectRealtimeIrisDeltaSequenceIdTracker *_sequenceIdTracker;
    id <IGContentFilterSyncServiceProtocol> _contentFilterSyncService;
}

- (void).cxx_destruct;
- (void)userSessionWillEnd;
- (void)_cleanupListeners;
- (void)irisDeltaHandlerDroppedDeltaSilently:(id)arg1;
- (void)irisDeltaHandlerDidApplyDelta:(id)arg1;
- (void)irisDeltaHandlerDidReceiveDelta:(id)arg1;
- (id)irisSyncStatusProvider;
- (void)connect;
- (void)_setupIrisDeltaHandlingWithUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

