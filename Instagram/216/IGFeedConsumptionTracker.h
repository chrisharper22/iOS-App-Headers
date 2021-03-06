//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGApplicationStateInfoProvider-Protocol.h"
#import "IGFeedStateInfoProvider-Protocol.h"

@class IGMainFeedStateLoggingInfo, IGSeenStateStore, NSArray, NSMutableSet, NSString;

@interface IGFeedConsumptionTracker : NSObject <IGFeedStateInfoProvider, IGApplicationStateInfoProvider>
{
    _Bool _applicationWillBecomeActive;
    IGMainFeedStateLoggingInfo *_currentStateInfo;
    IGMainFeedStateLoggingInfo *_previousStateInfo;
    NSMutableSet *_interactionEvents;
    NSString *_userPK;
    long long _startupOrigin;
    IGSeenStateStore *_seenStateStore;
    _Bool _feedWillAppearWithUnseenFirstItem;
    NSArray *_feedItems;
    NSArray *_mediaItems;
}

+ (id)_loadInfoWithUser:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(readonly, nonatomic) _Bool feedWillAppearWithUnseenFirstItem; // @synthesize feedWillAppearWithUnseenFirstItem=_feedWillAppearWithUnseenFirstItem;
@property(readonly, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
- (void)visibleSectionsChangedWithFirstSectionIndex:(id)arg1 lastSectionIndex:(id)arg2;
- (void)didInteract:(unsigned long long)arg1;
- (void)reloadRequestBeganWithInfo:(id)arg1;
- (void)reloadRequestFinished;
- (void)_saveInfo;
- (void)_loadInfo;
- (void)didEnterForegroundWithTimeSinceBackground:(double)arg1;
- (void)_didGoOnscreen;
- (void)_didGoOffscreenWithPreviousStateInfo:(id)arg1;
- (id)applicationStateInfoFromState:(long long)arg1;
@property(readonly, nonatomic) IGMainFeedStateLoggingInfo *applicationStateInfo;
@property(readonly, nonatomic) IGMainFeedStateLoggingInfo *feedStateInfo;
- (unsigned long long)nextVisibility;
- (void)_updateOnscreenState;
- (unsigned long long)mediaIndexOfMedia:(id)arg1;
- (id)_unseenIndexes;
- (void)feedUpdateToFeedItems:(id)arg1;
- (void)feedLoadedWithFeedItems:(id)arg1 withFetchAction:(long long)arg2;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)applicationDidLaunchWithStartupOrigin:(long long)arg1;
- (void)viewWillAppear;
- (void)_applicationWillBecomeActive;
- (id)initWithUserPK:(id)arg1 seenStateStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

