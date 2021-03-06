//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDiscoveryGridViewController, IGDiscoveryHighConfidenceModuleModel, IGDiscoveryRecommendationCoverModel, IGKeywordSearchModel, NSArray;

@protocol IGDiscoveryGridViewControllerDelegate <NSObject>
- (NSArray *)emptyStateModelsForDiscoveryGridViewController:(IGDiscoveryGridViewController *)arg1;
- (void)discoveryGridViewController:(IGDiscoveryGridViewController *)arg1 didSelectCellWithHCMModel:(IGDiscoveryHighConfidenceModuleModel *)arg2;
- (void)discoveryGridViewController:(IGDiscoveryGridViewController *)arg1 didSelectCellWithInterestKeyword:(IGKeywordSearchModel *)arg2;
- (void)discoveryGridViewController:(IGDiscoveryGridViewController *)arg1 didSelectCellWithViewModel:(IGDiscoveryRecommendationCoverModel *)arg2;
- (void)discoveryGridViewController:(IGDiscoveryGridViewController *)arg1 didCompleteRequestWithResponse:(id)arg2;
@end

