//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectDataSubscriptionPublishing-Protocol.h"

@class IGLiveAudioState, NSString;
@protocol IGDirectDataSubscriptionPublishingDelegate;

@interface IGLiveMediaStatePublisher : NSObject <IGDirectDataSubscriptionPublishing>
{
    IGLiveAudioState *_muteState;
    id <IGDirectDataSubscriptionPublishingDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)publisherInputsForDebugging;
- (void)stopListeningForUpdates;
- (void)startListeningForUpdatesWithDelegate:(id)arg1;
- (void)toggleAudioEnabled;
- (void)setAudioEnabled:(_Bool)arg1;
- (id)initWithAudioEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

