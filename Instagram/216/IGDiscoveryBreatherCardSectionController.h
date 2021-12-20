//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGDiscoveryBreatherHeaderCellDelegate-Protocol.h"
#import "IGDiscoveryBreatherTombstoneCellDelegate-Protocol.h"
#import "IGDiscoveryMediaSectionControllerSelectionDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListSupplementaryViewSource-Protocol.h"
#import "IGTopicUpdatedListener-Protocol.h"

@class IGCollectionViewDelegatePreviewingProxy, IGDiscoveryGridItem, IGFeedPreviewHandler, IGListAdapter, IGPlaybackCoordinator, IGTopic, IGUserSession, NSString;
@protocol IGDiscoveryBreatherCardSectionControllerDelegate, IGDiscoveryGridLoggingProvider, IGDiscoverySectionLoggingProvider, IGGridItemPositionProvider;

@interface IGDiscoveryBreatherCardSectionController : IGListSectionController <IGListAdapterDataSource, IGDiscoveryMediaSectionControllerSelectionDelegate, IGDiscoveryBreatherHeaderCellDelegate, IGDiscoveryBreatherTombstoneCellDelegate, IGTopicUpdatedListener, IGListSupplementaryViewSource>
{
    IGUserSession *_userSession;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGPlaybackCoordinator *_playbackCoordinator;
    id <IGDiscoverySectionLoggingProvider> _loggingProvider;
    id <IGDiscoveryBreatherCardSectionControllerDelegate> _delegate;
    id <IGDiscoveryGridLoggingProvider> _gridLoggingProvider;
    id <IGGridItemPositionProvider> _gridPositionProvider;
    IGDiscoveryGridItem *_gridItem;
    IGListAdapter *_listAdapter;
    IGFeedPreviewHandler *_previewHandler;
    IGCollectionViewDelegatePreviewingProxy *_previewProxy;
    IGTopic *_topic;
    _Bool _isPositiveControlsEnabled;
    _Bool _isNegativeControlsEnabled;
    _Bool _animatesControlsBackground;
    _Bool _showTombstone;
}

- (void).cxx_destruct;
- (id)_tombstoneTitle;
- (id)_useHeaderViewAtIndex:(long long)arg1;
- (void)_hideBreatherWithEventType:(long long)arg1;
- (id)_mapToTopicsCacheIfNeeded:(id)arg1;
- (void)_reloadSection;
- (void)_subscribeToTopicUpdates;
- (void)_unsubscribeFromTopicUpdates;
- (void)topicUpdated:(id)arg1;
- (void)discoveryBreatherTombstoneCellDidTapUndo:(id)arg1;
- (void)discoveryBreatherHeaderCellHideTapped:(id)arg1;
- (void)discoveryBreatherHeaderCellInterestedToggled:(id)arg1;
- (void)discoveryBreatherHeaderCellTitleTapped:(id)arg1;
- (void)mediaSectionController:(id)arg1 didSelectItem:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (id)supplementaryViewSource;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2 playbackCoordinator:(id)arg3 loggingProvider:(id)arg4 delegate:(id)arg5 gridLoggingProvider:(id)arg6 gridPositionProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
