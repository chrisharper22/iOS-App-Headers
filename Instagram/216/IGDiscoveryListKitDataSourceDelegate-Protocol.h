//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDiscoveryBreatherCardSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryBreatherFullBleedSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryBreatherSectionDelegate-Protocol.h"
#import "IGDiscoveryChannelSectionControllerSelectionDelegate-Protocol.h"
#import "IGDiscoveryHighConfidenceModuleSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryInterestKeywordsSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryMediaSectionControllerSelectionDelegate-Protocol.h"
#import "IGDiscoveryRecommendationCoverSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryRelatedHorizontalCardSectionControllerDelegate-Protocol.h"
#import "IGDiscoveryTopReelsSectionControllerDelegate-Protocol.h"

@class IGDiscoveryGridDataStore, IGDiscoveryListKitDataSource, NSArray;

@protocol IGDiscoveryListKitDataSourceDelegate <IGDiscoveryBreatherSectionDelegate, IGDiscoveryBreatherCardSectionControllerDelegate, IGDiscoveryBreatherFullBleedSectionControllerDelegate, IGDiscoveryHighConfidenceModuleSectionControllerDelegate, IGDiscoveryRelatedHorizontalCardSectionControllerDelegate, IGDiscoveryMediaSectionControllerSelectionDelegate, IGDiscoveryRecommendationCoverSectionControllerDelegate, IGDiscoveryChannelSectionControllerSelectionDelegate, IGDiscoveryInterestKeywordsSectionControllerDelegate, IGDiscoveryTopReelsSectionControllerDelegate>
- (NSArray *)emptyStateModelsForListKitDataSource:(IGDiscoveryListKitDataSource *)arg1;
- (IGDiscoveryGridDataStore *)gridDataStoreForListKitDataSource:(IGDiscoveryListKitDataSource *)arg1;
@end
