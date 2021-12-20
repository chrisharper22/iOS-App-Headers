//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGPaginatedFeedFocusProvider-Protocol.h"
#import "IGPaginatedFeedGestureCoordinatorDelegate-Protocol.h"
#import "IGPaginatedFeedLayoutDelegate-Protocol.h"
#import "IGPaginatedFeedLayoutIndexPathProvider-Protocol.h"
#import "IGPaginatedFeedVideoStateInformantDelegate-Protocol.h"

@class IGPaginatedFeedFocusCoordinator, IGPaginatedFeedFocusCoordinatorDimmingConfiguration, IGPaginatedFeedGestureCoordinator, IGPaginatedFeedLayout, IGPaginatedFeedVideoStateInformant, NSIndexPath, NSMutableDictionary, NSString, UICollectionView, UISelectionFeedbackGenerator;
@protocol IGPaginatedFeedControllerDelegate, IGPaginatedFeedPageDefinition;

@interface IGPaginatedFeedController : NSObject <IGFeedScrollViewListener, IGPaginatedFeedLayoutIndexPathProvider, IGPaginatedFeedFocusProvider, IGPaginatedFeedLayoutDelegate, IGPaginatedFeedGestureCoordinatorDelegate, IGPaginatedFeedVideoStateInformantDelegate>
{
    id <IGPaginatedFeedPageDefinition> _pageDefinition;
    IGPaginatedFeedLayout *_layout;
    IGPaginatedFeedFocusCoordinator *_focusCoordinator;
    IGPaginatedFeedGestureCoordinator *_gestureCoordinator;
    IGPaginatedFeedFocusCoordinatorDimmingConfiguration *_dimmingConfiguration;
    NSIndexPath *_currentIndexPath;
    NSIndexPath *_anchoredIndexPath;
    NSMutableDictionary *_adjacentIndexPathCache;
    NSMutableDictionary *_incrementedIndexPathCache;
    NSMutableDictionary *_decrementedIndexPathCache;
    NSMutableDictionary *_pageIndexPathCache;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    IGPaginatedFeedVideoStateInformant *_videoStateInformant;
    UICollectionView *_collectionView;
    _Bool _enableAutoAdvance;
    _Bool _enableAutoAdvanceHaptics;
    _Bool _prioritizeForwardMomentum;
    _Bool _hideScrollBar;
    id <IGPaginatedFeedControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPaginatedFeedControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_lastIndexPath;
- (id)_decrementedPageIndexPath:(id)arg1;
- (id)_incrementedPageIndexPath:(id)arg1;
- (id)_pageIndexPathForIndexPath:(id)arg1;
- (id)_indexPathsAddingAdjacentPageIndexPaths:(id)arg1;
- (id)_focusedAndAdjacentPageRangeMap;
- (void)paginatedFeedLayout:(id)arg1 willScrollToIndexPath:(id)arg2;
- (void)paginatedFeedLayoutDidInvalidate:(id)arg1;
- (void)videoStateInformant:(id)arg1 didObserveVideoStateUpdateForCell:(id)arg2 videoTimeSpent:(double)arg3 videoDuration:(double)arg4;
- (void)videoStateInformant:(id)arg1 didObserveVideoLoopingForCell:(id)arg2;
- (void)gestureCoordinator:(id)arg1 didRecieveTapForUnfocusedItemAtIndexPath:(id)arg2;
- (id)currentFocusRange;
- (id)candidateAnchorIndexPaths;
- (id)anchoredIndexPath;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) double maximumFreescrollingSpeed;
@property(nonatomic) _Bool disableBottomAnchors;
- (void)scrollToNextItemForCell:(id)arg1;
- (_Bool)currentPageContainsPrimaryContent;
- (_Bool)currentPageContainsCell:(id)arg1;
- (void)setLayoutConfigurationProvider:(id)arg1;
- (void)beginPagination:(id)arg1 videoCellManager:(id)arg2 playbackCoordinator:(id)arg3;
- (id)initWithPageDefinition:(id)arg1 scrollAnnouncer:(id)arg2 launcherSet:(id)arg3 enableAutoAdvance:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
