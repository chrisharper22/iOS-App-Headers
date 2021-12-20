//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGContextualFeedService-Protocol.h"
#import "IGFeedStatusViewDataSource-Protocol.h"
#import "IGHashtagNetworkerDelegate-Protocol.h"
#import "IGHashtagProductPivotsFetcherDelegate-Protocol.h"

@class IGHashtagFeedDataStore, IGHashtagModel, IGHashtagNetworker, IGHashtagProductPivotsFetcher, IGSessionTracker, IGUserSession, NSString;
@protocol IGContextualFeedServiceDelegate;

@interface IGHashtagContextualFeedService : NSObject <IGHashtagNetworkerDelegate, IGHashtagProductPivotsFetcherDelegate, IGContextualFeedService, IGFeedStatusViewDataSource>
{
    IGUserSession *_userSession;
    IGHashtagNetworker *_hashtagNetworker;
    IGSessionTracker *_sessionTracker;
    IGHashtagModel *_hashtagModel;
    NSString *_targetMediaId;
    IGHashtagProductPivotsFetcher *_productPivotsFetcher;
    id <IGContextualFeedServiceDelegate> delegate;
    IGHashtagFeedDataStore *_dataStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGHashtagFeedDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) __weak id <IGContextualFeedServiceDelegate> delegate; // @synthesize delegate;
- (void)_fetchMoreProductPivots;
- (id)_requestConfigWithFetchAction:(long long)arg1 paginationModel:(id)arg2;
- (void)hashtagProductPivotsFetcher:(id)arg1 didLoadProductPivots:(id)arg2 hashtagFeedType:(long long)arg3 config:(id)arg4;
- (void)hashtagNetworker:(id)arg1 didFailDataRequest:(id)arg2 networkRequestType:(long long)arg3 config:(id)arg4;
- (void)hashtagNetworker:(id)arg1 didCompleteHeaderEYMFRequestRequest:(id)arg2;
- (void)hashtagNetworker:(id)arg1 didCompleteReelRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didCompleteMainFeedRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didCompleteInfoRequest:(id)arg2 config:(id)arg3;
- (void)hashtagNetworker:(id)arg1 didStartLoadingWithConfig:(id)arg2 networkRequestType:(long long)arg3;
- (void)removePivot:(id)arg1;
- (id)authorizationErrorMessageDetail;
- (id)authorizationErrorMessage;
- (id)emptyFeedModel;
- (unsigned long long)itemCount;
- (_Bool)moreAvailable;
- (_Bool)loadedOnce;
- (long long)status;
- (id)rightBarButtonItemsWithViewController:(id)arg1;
- (id)errorMessage;
- (long long)authorizationError;
- (id)sessionTracker;
- (id)posts;
- (id)allItemsVisibleAfter:(id)arg1;
- (_Bool)isFetchingMore;
- (_Bool)isFullyLoaded;
- (_Bool)fetchMoreItems;
- (_Bool)fetchData;
- (id)initWithUserSession:(id)arg1 sessionTracker:(id)arg2 hashtagModel:(id)arg3 dataStore:(id)arg4 targetMediaId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

