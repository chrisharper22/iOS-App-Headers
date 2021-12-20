//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGPrivateStoryListCollectionViewCellDelegate-Protocol.h"
#import "IGPrivateStoryListsUpdateListener-Protocol.h"
#import "IGStoryAudienceSelectionViewControllerDelegate-Protocol.h"
#import "IGTitleAndActionSectionControllerDelegate-Protocol.h"

@class IGBottomButtonsView, IGListAdapter, IGPrivateStoryList, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGPrivateStoryListsViewControllerDelegate;

@interface IGPrivateStoryListsViewController : IGViewController <IGListAdapterDataSource, IGTitleAndActionSectionControllerDelegate, IGPrivateStoryListCollectionViewCellDelegate, IGStoryAudienceSelectionViewControllerDelegate, IGPrivateStoryListsUpdateListener, IGGestureHandler>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGBottomButtonsView *_footerButton;
    IGListAdapter *_listAdapter;
    _Bool _isLoading;
    struct CGSize _emptyListContentSize;
    NSArray *_privateLists;
    IGPrivateStoryList *_selectedList;
    id <IGPrivateStoryListsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPrivateStoryListsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didUpdateSelectedPrivateList;
- (void)didUpdatePrivateLists:(id)arg1;
- (void)didUpdateMembersForPrivateList:(id)arg1 members:(id)arg2;
- (void)audienceSelectionViewControllerDidTapDeletePrivateStoryList:(id)arg1 privateStoryList:(id)arg2;
- (void)audienceSelectionViewControllerWillDismissWithMembers:(id)arg1;
- (void)audienceSelectionViewControllerDidTapShare:(id)arg1 privateStoryListID:(id)arg2;
- (void)audienceSelectionViewControllerDidTapDoneButton:(id)arg1;
- (void)audienceSelectionViewControllerDidTapBackButton:(id)arg1;
- (void)_pushViewController:(id)arg1;
- (void)_openCreatePrivateListViewController;
- (void)_openAudienceSelectionForList:(id)arg1;
- (void)_updateFooter;
- (void)_setupFooter;
- (void)_setupCollectionView;
- (void)_reloadCollectionView;
- (void)_handlePrivateListsFetchResponse:(id)arg1;
- (void)_fetchPrivateLists;
- (void)_didTapFooterButton;
- (void)_addListButtonTapped;
- (void)_backButtonTapped;
- (void)didSelectCellForList:(id)arg1;
- (void)didTapSubtitleForList:(id)arg1;
- (void)titleAndActionSectionController:(id)arg1 didSelectActionForViewModel:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 emptyListContentSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

