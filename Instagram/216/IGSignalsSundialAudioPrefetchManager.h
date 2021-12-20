//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSundialAudioFeedPrefetchManaging-Protocol.h"

@class IGGCPUController, IGSignalsProduct, IGSundialAudioFeedPrefetchConfig, NSMutableDictionary, NSString;
@protocol FBKeyValueDataStore, IGSundialAudioFeedPrefetchManagerDelegate;

@interface IGSignalsSundialAudioPrefetchManager : NSObject <IGSundialAudioFeedPrefetchManaging>
{
    id <IGSundialAudioFeedPrefetchManagerDelegate> _prefetchDelegate;
    IGSundialAudioFeedPrefetchConfig *_prefetchConfig;
    NSMutableDictionary *_scoreMap;
    IGGCPUController *_gCPUController;
    id <FBKeyValueDataStore> _userDefaults;
    long long _cacheExpirationInSeconds;
    double _lastVisitionTimestamp;
    _Bool _enabled;
    IGSignalsProduct *_signalProduct;
    NSMutableDictionary *_lockedAudioPages;
}

- (void).cxx_destruct;
- (void)onVisitedAudioPage:(id)arg1;
- (void)onLoopPlayback:(id)arg1;
- (void)onFollowCreator:(id)arg1;
- (void)onOpenComments:(id)arg1;
- (void)onOpenShareSheet:(id)arg1;
- (void)onOpenProfile:(id)arg1;
- (void)onSave:(id)arg1;
- (void)onLike:(id)arg1;
- (void)_getModelForSundialVideo:(id)arg1 modelBlock:(CDUnknownBlockType)arg2;
- (void)_scoreDidUpdated:(long long)arg1 audioId:(id)arg2;
- (void)_enablePrefetch;
- (id)initWithGCPUController:(id)arg1 prefetchDelegate:(id)arg2 prefetchConfig:(id)arg3 userDefaults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
