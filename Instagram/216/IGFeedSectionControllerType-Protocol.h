//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGFeedSectionControllerDimmingProtocol-Protocol.h"
#import "IGFeedSectionControllerDirectSharingProtocol-Protocol.h"
#import "IGFeedSectionControllerIntentAwareAdsProtocol-Protocol.h"
#import "IGHasCTAPresenterContext-Protocol.h"
#import "IGTransitionZoomListCapable-Protocol.h"

@class IGFeedItemLocationInfo, IGFeedItemPageCellState, IGFeedItemRow, IGListSectionController, IGMedia, IGVideoPlaybackLoggingConfig, NSArray, NSIndexSet, NSSet, UICollectionViewCell;
@protocol IGFeedConfigurationType, IGFeedSectionControllerActionDelegate, IGFeedSectionControllerAdsInfoProviding, IGFeedSectionControllerIntentAwareAdsDelegate, IGFeedSectionControllerRowVisibilityDelegate;

@protocol IGFeedSectionControllerType <IGFeedSectionControllerDirectSharingProtocol, IGFeedSectionControllerIntentAwareAdsProtocol, IGFeedSectionControllerDimmingProtocol, IGHasCTAPresenterContext, IGTransitionZoomListCapable>
@property(nonatomic) double prependedFloatingHeaderHeight;
@property(nonatomic) long long itemPositionInFeed;
@property(nonatomic) __weak id <IGFeedSectionControllerAdsInfoProviding> adsInfoProvider;
@property(nonatomic) __weak id <IGFeedSectionControllerIntentAwareAdsDelegate> intentAwareAdsDelegate;
@property(nonatomic) __weak id <IGFeedSectionControllerActionDelegate> actionDelegate;
@property(nonatomic) __weak id <IGFeedSectionControllerRowVisibilityDelegate> rowVisibilityDelegate;
@property(copy, nonatomic) NSSet *feedItemChangeNotificationsToIgnore;
- (NSArray *)pagingIndexesForPaginatedFeed;
- (double)topOffsetAdjustmentInPaginatedFeed;
- (void)configureCustomCollectionAndBatchHandler:(IGListSectionController *)arg1;
- (IGVideoPlaybackLoggingConfig *)videoPlaybackLoggingConfig;
- (void)mediaHiddenListenerRemoveAnnouncerForMedia:(IGMedia *)arg1;
- (void)setOverviewMode:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)animateHeartAndPerformLikeWithLocationInfo:(IGFeedItemLocationInfo *)arg1;
- (void)resetDisplayingDelayedCTA;
- (void)pauseDisplayingDelayedCTA;
- (void)displayCTARowWithDelay:(double)arg1;
- (double)inlineComposerTriggerDelay;
- (void)displayInlineComposer;
- (IGFeedItemRow *)rowForCellAtIndex:(long long)arg1;
- (NSIndexSet *)textCellIndexes;
- (long long)shoppingCTACellIndex;
- (long long)ctaCellIndex;
- (long long)viewsCellIndex;
- (long long)socialContextTextIndex;
- (long long)timestampIndex;
- (long long)moreCommentIndex;
- (long long)captionCellIndex;
- (long long)headerCellIndex;
- (long long)wytSurveyCellIndex;
- (long long)ufiCellIndex;
- (long long)gatedMediaCellIndex;
- (long long)mediaCellIndex;
- (UICollectionViewCell *)mediaCell;
- (id <IGFeedConfigurationType>)feedConfiguration;
- (IGFeedItemPageCellState *)pageCellState;
@end

