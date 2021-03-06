//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGPresenceManagerListener-Protocol.h"

@class IGPresenceManager, NSString;
@protocol IGCoPresenceSignalingDelegate;

@interface IGCoPresenceSignalingService : NSObject <IGPresenceManagerListener>
{
    IGPresenceManager *_presenceManager;
    id <IGCoPresenceSignalingDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)presenceManager:(id)arg1 didReceiveThreadPresenceUpdates:(id)arg2;
- (void)presenceManager:(id)arg1 didReceiveSnapshot:(id)arg2;
- (void)presenceManager:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)stopListeningForUpdates;
- (void)startListeningForUpdates;
- (void)setDelegate:(id)arg1;
- (id)initWithPresenceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

