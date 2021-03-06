//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGDiscoveryRelatedHorizontalCardCellDelegate-Protocol.h"
#import "IGDiscoveryRelatedHorizontalMediaSelectionDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"

@class IGCollectionViewDelegatePreviewingProxy, IGDiscoveryGridItem, IGFeedPreviewHandler, IGListAdapter, IGUserSession, NSString;
@protocol IGDiscoveryGridLoggingProvider, IGDiscoveryRelatedHorizontalCardSectionControllerDelegate, IGDiscoverySectionLoggingProvider;

@interface IGDiscoveryRelatedHorizontalCardSectionController : IGListSectionController <IGListAdapterDataSource, IGDiscoveryRelatedHorizontalMediaSelectionDelegate, IGDiscoveryRelatedHorizontalCardCellDelegate>
{
    IGUserSession *_userSession;
    IGDiscoveryGridItem *_gridItem;
    IGListAdapter *_listAdapter;
    IGFeedPreviewHandler *_previewHandler;
    IGCollectionViewDelegatePreviewingProxy *_previewProxy;
    id <IGDiscoverySectionLoggingProvider> _loggingProvider;
    id <IGDiscoveryGridLoggingProvider> _gridLoggingProvider;
    id <IGDiscoveryRelatedHorizontalCardSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_adjustBottomInset;
- (_Bool)_adjustTopInset;
- (CDStruct_3d581f42)_insetConfig;
- (void)discoveryRelatedHorizontalCardCellDidSelectSeeAll:(id)arg1;
- (void)sectionController:(id)arg1 didSelectItem:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 loggingProvider:(id)arg2 gridLoggingProvider:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

