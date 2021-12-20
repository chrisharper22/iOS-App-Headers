//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGDiscoveryInterestKeywordHeaderCellDelegate-Protocol.h"
#import "IGDiscoveryMediaSectionControllerSelectionDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGCollectionViewDelegatePreviewingProxy, IGDiscoveryGridItem, IGFeedPreviewHandler, IGListAdapter, IGPlaybackCoordinator, IGUserSession, NSString;
@protocol IGDiscoveryBreatherFullBleedSectionControllerDelegate, IGDiscoveryGridLoggingProvider, IGDiscoverySectionLoggingProvider, IGGridItemPositionProvider;

@interface IGDiscoveryBreatherFullBleedSectionController : IGListSectionController <IGListAdapterDataSource, IGDiscoveryMediaSectionControllerSelectionDelegate, IGDiscoveryInterestKeywordHeaderCellDelegate>
{
    IGUserSession *_userSession;
    struct IGGridLayoutConfiguration _layoutConfig;
    IGPlaybackCoordinator *_playbackCoordinator;
    id <IGDiscoverySectionLoggingProvider> _loggingProvider;
    id <IGDiscoveryBreatherFullBleedSectionControllerDelegate> _delegate;
    id <IGDiscoveryGridLoggingProvider> _gridLoggingProvider;
    id <IGGridItemPositionProvider> _gridPositionProvider;
    IGDiscoveryGridItem *_gridItem;
    IGListAdapter *_listAdapter;
    IGFeedPreviewHandler *_previewHandler;
    IGCollectionViewDelegatePreviewingProxy *_previewProxy;
}

- (void).cxx_destruct;
- (void)_didSelectRelatedItemSection;
- (id)_titleForIndex:(long long)arg1;
- (void)headerCellDidSelectSeeAll:(id)arg1;
- (void)mediaSectionController:(id)arg1 didSelectItem:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
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

