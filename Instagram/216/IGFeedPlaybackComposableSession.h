//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedPlaybackCompatible-Protocol.h"
#import "IGPlaybackCoordinating-Protocol.h"

@class IGFeedPlaybackEventRelay, MISSING_TYPE, UICollectionViewCell;

@interface IGFeedPlaybackComposableSession : NSObject <IGFeedPlaybackCompatible, IGPlaybackCoordinating>
{
    MISSING_TYPE *composingCell;
    MISSING_TYPE *$__lazy_storage_$_opaqueAnnouncer;
    MISSING_TYPE *internalSession;
}

+ (void)setEventRelayKey:(unsigned char)arg1;
+ (unsigned char)eventRelayKey;
- (void).cxx_destruct;
- (id)init;
- (void)coordinate:(CDUnknownBlockType)arg1 withContext:(id)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (id)sessionKeysWithPredicate:(id)arg1;
- (id)sessionForKey:(id)arg1;
- (void)updatePlayback;
- (void)removeSession:(id)arg1;
- (id)addSession:(id)arg1 forPlaybackView:(id)arg2;
- (void)applyCoordinatedEvent:(long long)arg1 withContext:(id)arg2;
- (id)playbackEligibility;
- (void)willAttachToCoordinator:(id)arg1;
- (id)initWithCell:(id)arg1 strategy:(id)arg2 launcherSet:(id)arg3;
@property(nonatomic, readonly) IGFeedPlaybackEventRelay *eventRelay;
- (void)addVideoListener:(id)arg1;
@property(nonatomic, readonly) _Bool shouldRequireStricterPlaybackThreshold;
@property(nonatomic, readonly) UICollectionViewCell *managedFeedCell;

@end

