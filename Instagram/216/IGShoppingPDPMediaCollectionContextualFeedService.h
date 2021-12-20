//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGContextualFeedService-Protocol.h"
#import "IGFeedStatusViewDataSource-Protocol.h"

@class IGShoppingMediaCollectionModel, IGStatefulNetworker, NSString;
@protocol IGContextualFeedServiceDelegate;

@interface IGShoppingPDPMediaCollectionContextualFeedService : NSObject <IGContextualFeedService, IGFeedStatusViewDataSource>
{
    IGShoppingMediaCollectionModel *_model;
    IGStatefulNetworker *_networker;
    id <IGContextualFeedServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGContextualFeedServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_networkFetchStateChanged:(id)arg1;
- (void)_networkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (_Bool)_fetchWithAction:(long long)arg1;
- (id)rightBarButtonItemsWithViewController:(id)arg1;
- (void)removePivot:(id)arg1;
- (id)authorizationErrorMessageDetail;
- (id)authorizationErrorMessage;
- (id)emptyFeedModel;
- (id)errorMessage;
- (unsigned long long)itemCount;
- (long long)authorizationError;
- (_Bool)loadedOnce;
- (long long)status;
- (id)sessionTracker;
- (id)posts;
- (id)allItemsVisibleAfter:(id)arg1;
- (_Bool)moreAvailable;
- (_Bool)isFetchingMore;
- (_Bool)isFullyLoaded;
- (_Bool)fetchMoreItems;
- (_Bool)fetchData;
- (id)initWithUserSession:(id)arg1 mediaCollection:(id)arg2 collectionType:(long long)arg3 merchant:(id)arg4 productItem:(id)arg5 media:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

