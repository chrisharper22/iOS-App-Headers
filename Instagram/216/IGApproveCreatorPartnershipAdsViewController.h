//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGPendingCreatorPartnershipAdItemSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGStoryViewerPresentationController, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGApproveCreatorPartnershipAdsViewController : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPendingCreatorPartnershipAdItemSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    NSArray *_sectionItems;
    IGStoryViewerPresentationController *_storyViewerPresentationController;
    NSString *_mediaId;
    NSString *_priorModule;
}

- (void).cxx_destruct;
- (void)_updatePendingAdListForRemovedAdItemItem:(id)arg1;
- (void)creatorPartnershipAdItemSectionController:(id)arg1 didTapRejectActionButtonWithAdViewModel:(id)arg2;
- (void)creatorPartnershipAdItemSectionController:(id)arg1 didTapImagePreviewWithAdViewModel:(id)arg2;
- (void)creatorPartnershipAdItemSectionController:(id)arg1 didTapApproveActionButtonWithAdViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_fetchPendingAdItemsForApproval;
- (void)viewWillLayoutSubviews;
- (id)analyticsModule;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 mediaId:(id)arg2 priorModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

