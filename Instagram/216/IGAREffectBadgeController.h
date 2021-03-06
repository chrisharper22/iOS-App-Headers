//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAREffectDownloaderBadgingListener-Protocol.h"
#import "IGNetworkSourceDelegate-Protocol.h"

@class IGAREffectDownloader, IGNetworkSource, IGUserDefaults, NSArray, NSMutableDictionary, NSString;

@interface IGAREffectBadgeController : NSObject <IGAREffectDownloaderBadgingListener, IGNetworkSourceDelegate>
{
    IGAREffectDownloader *_arEffectDownloader;
    NSArray *_newAREffectIDs;
    long long _newAREffectCount;
    IGUserDefaults *_userDefaults;
    NSMutableDictionary *_arEffectIDStates;
    IGNetworkSource *_arEffectBadgeNetworkSource;
}

- (void).cxx_destruct;
- (void)syncSeenStates;
- (void)markAREffectUsed:(id)arg1;
- (long long)badgeStateForAREffect:(id)arg1;
- (void)markNewAREffectsAsViewed;
- (long long)numberOfNewAREffects;
- (void)didFetchAREffects:(id)arg1 arEffectDownloader:(id)arg2;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
- (void)dealloc;
- (id)initWithAREffectDownloader:(id)arg1 networker:(id)arg2 userDefaults:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

