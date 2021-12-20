//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGSearchCollectionViewCellDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGBrandedContentPartnersListViewControllerDelegate;

@interface IGBrandedContentPartnersListViewController : IGViewController <IGListAdapterDataSource, IGSearchCollectionViewCellDelegate>
{
    NSArray *_listModel;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    id <IGBrandedContentPartnersListViewControllerDelegate> _delegate;
    unsigned long long _originalUserInterfaceStyle;
}

- (void).cxx_destruct;
- (void)_onBackButtonTapped;
- (void)searchCollectionViewCellDidTapCellDestructionButton:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidTapCellButton:(id)arg1 viewModel:(id)arg2;
- (void)searchCollectionViewCellDidTapAvatar:(id)arg1 viewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)updateListModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)initWithUserSession:(id)arg1 listModel:(id)arg2 delegate:(id)arg3 title:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

