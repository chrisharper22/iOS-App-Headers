//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerDataSource-Protocol.h>

@class IGNetworkSource, IGObjectDiskStorage, IGSpinnerLabelViewModel, IGStoryRecentStickerStore, IGStoryStickerDataSourceConfiguration, IGUserSession, NSArray, NSDate, NSDictionary, NSString;
@protocol IGStickerTraySectionActionHandler, IGStoryStickerDataSourceDelegate;

@interface IGStoryStickerDataSource : NSObject <IGNetworkSourceDelegate, IGStoryStickerDataSource>
{
    IGUserSession *_userSession;
    IGNetworkSource *_creativeAssetsNetworkSource;
    NSDate *_storyCreationDate;
    NSDate *_archivedMediaDate;
    IGSpinnerLabelViewModel *_spinnerModel;
    NSArray *_emojisAndLabels;
    _Bool _didLoadStickersFromCache;
    _Bool _didLoadStickersFromNetwork;
    _Bool _useStickerTrayRefreshEndpoint;
    IGObjectDiskStorage *_storageStoryStickers;
    unsigned long long _dataSourceType;
    _Bool _isStickerSearchAllowed;
    id <IGStoryStickerDataSourceDelegate> _delegate;
    id <IGStickerTraySectionActionHandler> _sectionActionHandler;
    NSArray *_items;
    IGStoryStickerDataSourceConfiguration *_configuration;
    IGStoryRecentStickerStore *_recentStickerStore;
    NSString *_stickerVersionID;
    NSDictionary *_loggingData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, nonatomic) unsigned long long dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(readonly, nonatomic) NSString *stickerVersionID; // @synthesize stickerVersionID=_stickerVersionID;
@property(readonly, nonatomic) IGStoryRecentStickerStore *recentStickerStore; // @synthesize recentStickerStore=_recentStickerStore;
@property(readonly, nonatomic) _Bool isStickerSearchAllowed; // @synthesize isStickerSearchAllowed=_isStickerSearchAllowed;
@property(retain, nonatomic) IGStoryStickerDataSourceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <IGStickerTraySectionActionHandler> sectionActionHandler; // @synthesize sectionActionHandler=_sectionActionHandler;
@property(nonatomic) __weak id <IGStoryStickerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_stopNetworkPerformanceLoggerWithIsSuccess:(_Bool)arg1;
- (void)_startNetworkPerformanceLogger;
- (id)_applyClientSideUpdatesForStickers:(id)arg1;
- (void)_handleCreativeStickerTrayResponseLoaded:(id)arg1;
- (void)_handleCreativeAssetsResponseLoaded:(id)arg1;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
- (void)_handleCachedStickersResponse:(id)arg1;
- (void)_fetchCachedAssets;
@property(readonly, nonatomic) NSArray *loggingFeaturedStickers;
@property(readonly, nonatomic) NSArray *loggingOtherStickers;
@property(readonly, nonatomic) NSArray *recentStickers;
- (void)updateMemoriesStickerWithDate:(id)arg1;
- (void)updateTimeStickerWithDate:(id)arg1;
- (void)fetchCreativeAssets;
- (id)initWithUserSession:(id)arg1 withDataSourceType:(unsigned long long)arg2 configuration:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
