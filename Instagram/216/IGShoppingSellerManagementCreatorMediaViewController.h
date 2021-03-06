//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGShoppingSellerCreatorMediaNetworkSourceDelegate-Protocol.h"
#import "IGShoppingSellerEphemeralCreatorMediaNetworkSourceListener-Protocol.h"
#import "IGShoppingSellerManagementCreatorMediaFilterManagerDelegate-Protocol.h"
#import "IGShoppingSellerManagementCreatorMediaViewAdapterDelegate-Protocol.h"

@class IGFeedStarterKit, IGQuickPromotionCoordinator, IGResultsFilterModelsMetadata, IGSessionTracker, IGShoppingSellerCreatorMediaNetworkSource, IGShoppingSellerEphemeralCreatorMediaNetworkSource, IGShoppingSellerManagementCreatorMediaFilterManager, IGShoppingSellerManagementCreatorMediaLogger, IGShoppingSellerManagementCreatorMediaViewAdapter, IGUserSession, NSString;

@interface IGShoppingSellerManagementCreatorMediaViewController : IGViewController <IGShoppingSellerCreatorMediaNetworkSourceDelegate, IGShoppingSellerManagementCreatorMediaViewAdapterDelegate, IGShoppingSellerEphemeralCreatorMediaNetworkSourceListener, IGShoppingSellerManagementCreatorMediaFilterManagerDelegate>
{
    IGUserSession *_userSession;
    IGShoppingSellerCreatorMediaNetworkSource *_mediaNetworkSource;
    IGShoppingSellerEphemeralCreatorMediaNetworkSource *_ephemeralMediaNetworkSource;
    IGFeedStarterKit *_feedStarterKit;
    IGShoppingSellerManagementCreatorMediaViewAdapter *_viewAdapter;
    IGShoppingSellerManagementCreatorMediaFilterManager *_filterManager;
    IGResultsFilterModelsMetadata *_filterMetadata;
    IGQuickPromotionCoordinator *_qpCoordinator;
    IGShoppingSellerManagementCreatorMediaLogger *_logger;
    IGSessionTracker *_shoppingSessionTracker;
    NSString *_priorModule;
}

- (void).cxx_destruct;
- (void)_reloadData;
- (void)shoppingFilterManager:(id)arg1 didApplyFiltersWithMetadata:(id)arg2;
- (void)creatorMediaViewAdapter:(id)arg1 didTapMedia:(id)arg2;
- (void)creatorMediaViewAdapterDidTapFilterMediaButton:(id)arg1;
- (void)creatorMediaViewAdapterDidTapSeeAllEphemeralMediaButton:(id)arg1;
- (void)creatorMediaNetworkSourceDidUpdate:(id)arg1;
- (void)ephemeralCreatorMediaNetworkSourceDidUpdate:(id)arg1 isInitialLoad:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)title;
- (id)initWithUserSession:(id)arg1 priorModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

