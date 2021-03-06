//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShoppingHomeSectionFetchServiceDelegate-Protocol.h"
#import "IGShoppingHomeSectionFetching-Protocol.h"
#import "IGShoppingReconsiderationDataControllerListener-Protocol.h"

@class IGDeviceSession, IGModuleResourceGraph, IGObjectStores, IGSearchSession, IGShoppingCartDataController, IGShoppingDropsCollectionReminderStore, IGShoppingHomeConfiguration, IGShoppingHomeDataModel, IGShoppingHomeRichDestinationModel, IGShoppingHomeSectionFetchService, IGShoppingHomeUserFlowLogger, IGShoppingObjectsCache, IGShoppingRecentlyViewedProductTrackingService, IGShoppingReconsiderationDataController, IGStatefulNetworker, IGStatefulNetworkerFetchState, IGUser, IGUserDefaults, IGUserSession, NSString;
@protocol IGAPIClient, IGAdInsertionProtocol><IGAdInsertionMediaViewTracking><IGAdPlatformStatesProviding><IGAdPlatformExternalEventLoggingProtocol, IGAnalyticsEventLoggingProtocol, IGMediaUpdatedForAllAnnouncer, IGPrefetchManaging, IGSaveStatusAnnouncer, IGShoppingHomeServiceDelegate, IGSupervisedFeaturesProvider, IGUserFeatureSets;

@interface IGShoppingHomeService : NSObject <IGShoppingReconsiderationDataControllerListener, IGShoppingHomeSectionFetchServiceDelegate, IGShoppingHomeSectionFetching>
{
    IGUserSession *_userSession;
    IGObjectStores *_objectStores;
    IGDeviceSession *_deviceSession;
    IGShoppingCartDataController *_shoppingCartDataController;
    IGStatefulNetworker *_shoppingFeedNetworker;
    IGShoppingHomeDataModel *_dataModel;
    id <IGAnalyticsEventLoggingProtocol> _eventLogger;
    id <IGSaveStatusAnnouncer> _saveStatusAnnouncer;
    id <IGMediaUpdatedForAllAnnouncer> _mediaUpdatedForAllAnnouncer;
    id <IGAPIClient> _networker;
    id <IGUserFeatureSets> _featureSet;
    id <IGSupervisedFeaturesProvider> _supervisedFeaturesProvider;
    id <IGPrefetchManaging> _prefetchManager;
    IGShoppingHomeUserFlowLogger *_prefetchUserFlowLogger;
    IGShoppingDropsCollectionReminderStore *_collectionReminderStore;
    IGModuleResourceGraph *_resourceGraph;
    IGShoppingObjectsCache *_memoryCache;
    IGUserDefaults *_userDefaults;
    IGShoppingHomeSectionFetchService *_sectionFetchService;
    IGUser *_currentUser;
    _Bool _canFetchAsyncSectionContents;
    IGSearchSession *_searchSession;
    IGShoppingRecentlyViewedProductTrackingService *_recentlyViewedTrackingService;
    IGShoppingHomeConfiguration *_inFlightConfiguration;
    _Bool _isAdInvalidationEnabled;
    id <IGAdInsertionProtocol><IGAdInsertionMediaViewTracking><IGAdPlatformStatesProviding><IGAdPlatformExternalEventLoggingProtocol> _adInsertionHandler;
    IGShoppingReconsiderationDataController *_checkerTileDataController;
    IGShoppingHomeRichDestinationModel *_richDestination;
    id <IGShoppingHomeServiceDelegate> _delegate;
    long long _initialLoadSource;
}

+ (id)filteredShoppingHomeService:(id)arg1 richDestination:(id)arg2 searchSession:(id)arg3;
+ (id)mainShoppingHomeService:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long initialLoadSource; // @synthesize initialLoadSource=_initialLoadSource;
@property(nonatomic) __weak id <IGShoppingHomeServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) IGShoppingHomeDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(readonly, nonatomic) IGShoppingHomeRichDestinationModel *richDestination; // @synthesize richDestination=_richDestination;
- (void)fetchRealtimeTraySectionWithIdentifier:(id)arg1;
- (void)fetchMerchantPreviewSectionWithIdentifier:(id)arg1;
- (void)fetchChannelHscrollSectionWithViewModel:(id)arg1;
- (void)cancelAllSectionRequests;
- (id)fetchStateForSectionWithDataModel:(id)arg1;
- (void)fetchDataForSectionWithIdentifier:(id)arg1;
- (void)fetchDataForSectionWithDataModel:(id)arg1;
- (void)shoppingHomeSectionFetchService:(id)arg1 didFetchUpdatedSectionDataModel:(id)arg2;
- (void)shoppingHomeSectionFetchService:(id)arg1 didUpdateFetchState:(id)arg2 forSectionWithDataModel:(id)arg3;
- (void)shoppingReconsiderationDataController:(id)arg1 sourceProvider:(id)arg2 didUpdateFetchState:(id)arg3;
- (void)shoppingReconsiderationDataController:(id)arg1 sourceProvider:(id)arg2 didUpdateItems:(id)arg3 withUpdateType:(id)arg4;
- (id)_invalidateAndDeliverSponsoredItemsForResponse:(id)arg1 action:(long long)arg2;
- (void)_updateReconsiderationItemsWithLocalUpdates;
- (id)_updatedReconsiderationDataModelWithLocalUpdates:(id)arg1;
- (void)_attemptFetchAsyncSectionContents;
- (void)_updateModuleGraph;
- (void)_cacheDataModelInMemory:(id)arg1;
- (void)_networkResponseLoaded:(id)arg1 requestConfigurationAction:(long long)arg2;
- (void)_parseContentTileSaveStatusesFromResponse:(id)arg1;
- (void)_updateSaveStatusWithRichDestination:(id)arg1 dropsMetadata:(id)arg2;
- (void)_parseSaveStatusesFromResponse:(id)arg1;
@property(readonly, nonatomic) IGShoppingReconsiderationDataController *checkerTileDataController; // @synthesize checkerTileDataController=_checkerTileDataController;
- (void)startFetchingAsyncSectionContents;
- (void)updateDataModel:(id)arg1;
- (void)requestFeedWithAction:(long long)arg1 configuration:(id)arg2 isPullToRefresh:(_Bool)arg3;
@property(readonly, copy, nonatomic) IGStatefulNetworkerFetchState *fetchState;
- (id)initWithUserSession:(id)arg1 richDestination:(id)arg2 searchSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

