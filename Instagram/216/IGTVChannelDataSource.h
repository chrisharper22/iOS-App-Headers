//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNetworkSourceDelegate-Protocol.h"
#import "IGTVChannelDataSourceType-Protocol.h"

@class IGNetworkSource, IGTVChannelDataSourceListenerHack, IGTVSeenStateStore, IGUser, IGValues, NSArray, NSNumber, NSOrderedSet, NSString, NSURL, _TtC36IGTVDestinationClientConfigsProvider36IGTVDestinationClientConfigsProvider;
@protocol IGTVChannelDataSourceAnnouncer;

@interface IGTVChannelDataSource : NSObject <IGNetworkSourceDelegate, IGTVChannelDataSourceType>
{
    _Bool _refreshPending;
    IGTVSeenStateStore *_tvSeenStateStore;
    IGNetworkSource *_networkSource;
    id <IGTVChannelDataSourceAnnouncer> _announcer;
    NSString *_prependMediaId;
    NSString *_adPagingToken;
    NSNumber *_approximateTotalVideos;
    _Bool _moreAvailable;
    _Bool _fetchInMultiplesOfThree;
    NSOrderedSet *_itemsOrderedSet;
    _TtC36IGTVDestinationClientConfigsProvider36IGTVDestinationClientConfigsProvider *_destinationClientConfigsProvider;
    IGTVChannelDataSourceListenerHack *_listenerHack;
    NSString *_collectionID;
    NSString *_fetchPath;
    _Bool _ignoreSaveAction;
    _Bool _ignoreRemoveFromWatchHistoryAction;
    IGValues *_liveBroadcastValues;
    _Bool _hasFetchedOnce;
    _Bool _failed;
    _Bool _deleted;
    _Bool _hasPostLiveItems;
    NSString *_channelPK;
    NSString *_type;
    NSString *_title;
    NSString *_chainingSeedMediaId;
    NSString *_parentMediaPK;
    NSString *_startAtMediaPK;
    IGUser *_user;
    NSString *_subtitle;
    NSURL *_coverPhotoUrl;
    NSString *_maxId;
    NSArray *_liveItems;
    long long _channelType;
}

+ (id)dataSourceForPostLiveWithUserSession:(id)arg1;
+ (id)dataSourceForLiveNowWithUserSession:(id)arg1;
+ (id)dataSourceForActivityCenter:(id)arg1 userSession:(id)arg2 items:(id)arg3;
+ (id)dataSourceForDeletedMedia:(id)arg1 userSession:(id)arg2 items:(id)arg3;
+ (id)dataSourceForRecentHashtagWithUserSession:(id)arg1 tagDisplayName:(id)arg2 channelPK:(id)arg3;
+ (id)dataSourceClonedFromWatchHistoryDataSource:(id)arg1 userSession:(id)arg2;
+ (id)dataSourceIgnoringRemoveFromWatchHistoryActionClonedFromWatchHistoryDataSource:(id)arg1 userSession:(id)arg2;
+ (id)dataSourceClonedFromSaveDataSource:(id)arg1 userSession:(id)arg2;
+ (id)dataSourceIgnoringSaveActionsClonedFromSaveDataSource:(id)arg1 userSession:(id)arg2;
+ (id)dataSourceForWatchHistoryWithUserSession:(id)arg1;
+ (id)dataSourceForSeriesWithInfo:(id)arg1 userSession:(id)arg2;
+ (id)dataSourceForChainingMediaPK:(id)arg1 userSession:(id)arg2 channelPrefix:(id)arg3 initialMaxID:(id)arg4;
+ (id)dataSourceForChainingFromFeedPreviewsWithMediaPK:(id)arg1 userSession:(id)arg2 isIGTVMedia:(_Bool)arg3;
+ (id)dataSourceForChainingFromShoppingVideoWithMediaPK:(id)arg1 userSession:(id)arg2;
+ (id)dataSourceForAdaptiveChainingMediaPK:(id)arg1 userSession:(id)arg2 initialMaxID:(id)arg3;
+ (id)_dataSourceForUserChannel:(id)arg1 userSession:(id)arg2 items:(id)arg3 channelPK:(id)arg4 type:(id)arg5;
+ (id)dataSourceForChainingMediaPK:(id)arg1 userSession:(id)arg2;
+ (id)_dataSourceForUserChannel:(id)arg1 userSession:(id)arg2 items:(id)arg3 channelPK:(id)arg4;
+ (id)dataSourceForUserChannel:(id)arg1 userSession:(id)arg2 items:(id)arg3;
+ (id)dataSourceForVideoOnlyUserChannel:(id)arg1 userSession:(id)arg2 items:(id)arg3;
+ (id)dataSourceForIGTVOnlyUserChannel:(id)arg1 userSession:(id)arg2 items:(id)arg3 type:(id)arg4;
+ (id)dataSourceForIGTVOnlyUserChannel:(id)arg1 userSession:(id)arg2 items:(id)arg3;
+ (id)dataSourceForYouWithUserSession:(id)arg1;
+ (id)dataSourceForSaveWithUserSession:(id)arg1 initialSaveItemPK:(id)arg2 items:(id)arg3 fetchPath:(id)arg4;
+ (id)dataSourceClonedFromSaveDataSource:(id)arg1 startMediaPk:(id)arg2 collectionId:(id)arg3 fetchPath:(id)arg4 userSession:(id)arg5;
+ (id)dataSourceForSaveCollectionWithUserSession:(id)arg1 collectionPK:(id)arg2 initialSaveItemPK:(id)arg3 items:(id)arg4 fetchPath:(id)arg5;
+ (id)dataSourceWithTVSeenStateStore:(id)arg1 mediaDeletedAnnouncer:(id)arg2 mediaHiddenAnnouncer:(id)arg3 tvSeriesDeleteAnnouncer:(id)arg4 tvSeriesEditAnnouncer:(id)arg5 tvUploadStatusAnnouncer:(id)arg6 savedItemStatusAnnouncer:(id)arg7 feedItemCollectionAnnouncer:(id)arg8 tvWatchHistoryBulkRemoveAnnouncer:(id)arg9 destinationClientConfigsProvider:(id)arg10 networker:(id)arg11 objectStores:(id)arg12 currentUser:(id)arg13 prependMediaId:(id)arg14 initialResponse:(id)arg15 liveBroadcastValues:(id)arg16;
+ (id)dataSourceWithUserSession:(id)arg1 initialResponse:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long channelType; // @synthesize channelType=_channelType;
@property(readonly, copy, nonatomic) NSArray *liveItems; // @synthesize liveItems=_liveItems;
@property(readonly, copy, nonatomic) NSString *maxId; // @synthesize maxId=_maxId;
@property(readonly, nonatomic) _Bool hasPostLiveItems; // @synthesize hasPostLiveItems=_hasPostLiveItems;
@property(readonly, copy, nonatomic) NSURL *coverPhotoUrl; // @synthesize coverPhotoUrl=_coverPhotoUrl;
@property(readonly, nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *startAtMediaPK; // @synthesize startAtMediaPK=_startAtMediaPK;
@property(readonly, copy, nonatomic) NSString *parentMediaPK; // @synthesize parentMediaPK=_parentMediaPK;
@property(readonly, copy, nonatomic) NSString *chainingSeedMediaId; // @synthesize chainingSeedMediaId=_chainingSeedMediaId;
@property(readonly, nonatomic) _Bool failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) _Bool hasFetchedOnce; // @synthesize hasFetchedOnce=_hasFetchedOnce;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *channelPK; // @synthesize channelPK=_channelPK;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
- (_Bool)_isMoreAvailable;
- (void)_announceUpdatedWithAction:(long long)arg1 error:(id)arg2;
- (void)_announceUpdatedWithAction:(long long)arg1;
- (void)_handleSuccessfulResponse:(id)arg1 shouldClearExistingItems:(_Bool)arg2;
- (void)_handleFeedItemsRemovedFromWatchHistory:(id)arg1;
- (void)_handleFeedItemRemovedFromAllSaved:(id)arg1;
- (void)_handleFeedItemUnsaved:(id)arg1 collectionIDs:(id)arg2;
- (void)_handleFeedItemSavedToAllPostsCollection:(id)arg1;
- (void)_handleFeedItemSaved:(id)arg1 collectionIDs:(id)arg2;
- (void)_handleFeedItemUploaded:(id)arg1;
- (void)_handleFeedItemAdded:(id)arg1 toSeriesWithId:(id)arg2;
- (void)_handleFeedItemRemoved:(id)arg1 fromSeriesWithId:(id)arg2;
- (void)_handleSeriesEditedWithId:(id)arg1 title:(id)arg2 seriesDescription:(id)arg3;
- (void)_handleSeriesDeletedWithId:(id)arg1;
- (void)_handleFeedItemHidden:(id)arg1;
- (void)_handleFeedItemDeleted:(id)arg1;
- (_Bool)hasValidItems;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)refresh;
@property(readonly, nonatomic) _Bool canLoadMore;
@property(readonly, nonatomic) _Bool loading;
- (void)fetchIfNeeded;
@property(readonly, copy, nonatomic) NSNumber *approximateCountOfItems;
@property(readonly, copy, nonatomic) NSArray *items;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTVSeenStateStore:(id)arg1 mediaDeletedAnnouncer:(id)arg2 mediaHiddenAnnouncer:(id)arg3 tvSeriesDeleteAnnouncer:(id)arg4 tvSeriesEditAnnouncer:(id)arg5 tvUploadStatusAnnouncer:(id)arg6 savedItemStatusAnnouncer:(id)arg7 feedItemCollectionAnnouncer:(id)arg8 tvWatchHistoryBulkRemoveAnnouncer:(id)arg9 destinationClientConfigsProvider:(id)arg10 networker:(id)arg11 objectStores:(id)arg12 currentUser:(id)arg13 prependMediaId:(id)arg14 chainingSeedMediaId:(id)arg15 parentMediaPK:(id)arg16 startAtMediaPK:(id)arg17 channelPK:(id)arg18 type:(id)arg19 title:(id)arg20 items:(id)arg21 liveItems:(id)arg22 user:(id)arg23 subtitle:(id)arg24 coverPhotoUrl:(id)arg25 approximateTotalVideos:(id)arg26 initialMaxId:(id)arg27 moreAvailable:(_Bool)arg28 adPagingToken:(id)arg29 collectionID:(id)arg30 fetchPath:(id)arg31 ignoreSaveAction:(_Bool)arg32 ignoreRemoveFromWatchHistoryAction:(_Bool)arg33 liveBroadcastValues:(id)arg34;
- (id)initWithUserSession:(id)arg1 prependMediaId:(id)arg2 chainingSeedMediaId:(id)arg3 parentMediaPK:(id)arg4 startAtMediaPK:(id)arg5 channelPK:(id)arg6 type:(id)arg7 title:(id)arg8 items:(id)arg9 liveItems:(id)arg10 user:(id)arg11 subtitle:(id)arg12 coverPhotoUrl:(id)arg13 approximateTotalVideos:(id)arg14 initialMaxId:(id)arg15 moreAvailable:(_Bool)arg16 adPagingToken:(id)arg17 collectionID:(id)arg18 fetchPath:(id)arg19 ignoreSaveAction:(_Bool)arg20 ignoreRemoveFromWatchHistoryAction:(_Bool)arg21 liveBroadcastValues:(id)arg22;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

