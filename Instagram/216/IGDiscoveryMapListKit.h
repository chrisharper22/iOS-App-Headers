//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDiscoveryMapEffectsNetegoSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryMapGuidesSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryMapLocationListSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryMapSearchCategoriesSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryMapSearchEmptySectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListDisplayDelegate-Protocol.h"

@class IGDiscoveryMapLoggingContext, IGDiscoveryMapSearchFlowLayout, IGListAdapter, IGUserSession, NSArray, NSNumber, NSString, UICollectionView;
@protocol IGDiscoveryMapListKitConfigurationProvider, IGDiscoveryMapListKitDelegate;

@interface IGDiscoveryMapListKit : NSObject <IGDiscoveryMapGuidesSectionControllerDelegate, IGDiscoveryMapLocationListSectionControllerDelegate, IGDiscoveryMapSearchCategoriesSectionControllerDelegate, IGDiscoveryMapSearchEmptySectionControllerDelegate, IGDiscoveryMapEffectsNetegoSectionControllerDelegate, IGListAdapterDataSource, IGListDisplayDelegate>
{
    IGUserSession *_userSession;
    IGDiscoveryMapLoggingContext *_loggingContext;
    NSString *_analyticsModule;
    id <IGDiscoveryMapListKitConfigurationProvider> _configurationProvider;
    IGDiscoveryMapSearchFlowLayout *_flowLayout;
    _Bool _isLoading;
    _Bool _locationsNeedHydrating;
    NSArray *_mapPins;
    NSArray *_refinements;
    NSArray *_guideResponses;
    NSNumber *_guidesIndex;
    id <IGDiscoveryMapListKitDelegate> _delegate;
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <IGDiscoveryMapListKitDelegate> delegate; // @synthesize delegate=_delegate;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)effectsNetegoSectionControllerdidTapSeeAll:(id)arg1;
- (void)effectsNetegoSectionController:(id)arg1 didSelectEffectPreview:(id)arg2 effectRadius:(id)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)discoveryMapSearchEmptySectionControllerDidTapExploreNearby:(id)arg1;
- (void)categoriesSectionController:(id)arg1 didSelectRefinement:(id)arg2;
- (void)discoveryMapLocationListSectionController:(id)arg1 didTapAvatar:(id)arg2 forMapPin:(id)arg3;
- (void)discoveryMapLocationListSectionController:(id)arg1 didSelectForMapPin:(id)arg2 mapPinPreviewMedia:(id)arg3;
- (void)guidesSectionController:(id)arg1 didSelectGuide:(id)arg2;
- (void)updateWithFetchedStoriesForLocationIds:(id)arg1;
- (void)updateWithHydratedMapPins:(id)arg1;
- (void)setMapPins:(id)arg1 refinements:(id)arg2 guideResponses:(id)arg3 guidesIndex:(id)arg4;
- (void)setIsLoading:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 loggingContext:(id)arg3 analyticsModule:(id)arg4 configurationProvider:(id)arg5 locationsNeedHydrating:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

