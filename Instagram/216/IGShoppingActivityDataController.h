//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStatefulNetworker, IGStatefulNetworkerFetchState, NSArray;
@protocol IGAPIClient, IGRequestToken, IGShoppingActivityDataControllerAnnouncer;

@interface IGShoppingActivityDataController : NSObject
{
    id <IGShoppingActivityDataControllerAnnouncer> _announcer;
    id <IGAPIClient> _apiClient;
    IGStatefulNetworker *_feedNetworker;
    id <IGRequestToken> _badgeCountRequestToken;
    long long _lastLoadSource;
    long long _hiddenStoryGroupIndex;
    long long _hiddenStoryIndexInGroup;
    _Bool _badgeCountFetchHasCompletedOnce;
    NSArray *_storyGroups;
    IGStatefulNetworkerFetchState *_activityFeedFetchState;
    unsigned long long _badgeCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) _Bool badgeCountFetchHasCompletedOnce; // @synthesize badgeCountFetchHasCompletedOnce=_badgeCountFetchHasCompletedOnce;
@property(readonly, nonatomic) IGStatefulNetworkerFetchState *activityFeedFetchState; // @synthesize activityFeedFetchState=_activityFeedFetchState;
@property(readonly, copy, nonatomic) NSArray *storyGroups; // @synthesize storyGroups=_storyGroups;
- (void)_updateBadgeCount:(unsigned long long)arg1;
- (void)_handleFeedFetchStateUpdated:(id)arg1;
- (void)_handleLoadedFeedResponse:(id)arg1;
@property(readonly, nonatomic) long long loadSource;
- (void)markActivityFeedContentAsSeen;
- (id)allStories;
- (void)undoHideStory:(id)arg1;
- (void)hideStory:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)fetchBadgeCount;
- (_Bool)prefetchActivityFeed;
- (_Bool)fetchActivityFeed:(_Bool)arg1;
- (id)initWithAPIClient:(id)arg1 objectStores:(id)arg2;

@end
