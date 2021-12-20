//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectDataSubscriptionPublishing-Protocol.h"
#import "IGDirectInboxCellSelectStateListener-Protocol.h"
#import "IGPresenceManagerListener-Protocol.h"

@class IGPresenceManager, NSString;
@protocol IGDirectDataSubscriptionPublishingDelegate, IGDirectInboxCellSelectStateCoordinating;

@interface IGDirectMsysSecureInboxAccessorySubscriptionPublisher : NSObject <IGPresenceManagerListener, IGDirectInboxCellSelectStateListener, IGDirectDataSubscriptionPublishing>
{
    IGPresenceManager *_presenceManager;
    id <IGDirectInboxCellSelectStateCoordinating> _cellSelectStateCoordinating;
    id <IGDirectDataSubscriptionPublishingDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_announceUpdate;
- (void)directInboxCellSelectedCellsDidUpdate;
- (void)directInboxCellSelectActionBarVisibilityDidUpdate;
- (void)directInboxCellSelectStateDidUpdate:(long long)arg1;
- (void)presenceManager:(id)arg1 didReceiveThreadPresenceUpdates:(id)arg2;
- (void)presenceManager:(id)arg1 didReceiveSnapshot:(id)arg2;
- (void)presenceManager:(id)arg1 didReceiveUpdate:(id)arg2;
- (id)publisherInputsForDebugging;
- (void)stopListeningForUpdates;
- (void)startListeningForUpdatesWithDelegate:(id)arg1;
- (id)initWithPresenceManager:(id)arg1 cellSelectStateCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
