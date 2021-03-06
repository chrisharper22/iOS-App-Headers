//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGAvatarGridAdapterDelegate-Protocol.h>
#import <FBSharedFramework/IGAvatarGridProxyManagerListener-Protocol.h>
#import <FBSharedFramework/IGListAdapterDelegate-Protocol.h>
#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegate-Protocol.h>

@class IGAvatarAdapterDataSource, IGListAdapter, IGSearchBar, IGUserSession, NSArray, NSDictionary, NSMutableSet, NSString, UICollectionView;
@protocol IGAvatarGridViewControllerDelegate;

@interface IGAvatarGridViewController : IGViewController <UICollectionViewDelegate, IGListAdapterDelegate, IGAvatarGridAdapterDelegate, IGAvatarGridProxyManagerListener, IGSearchBarDelegate>
{
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    NSString *_surface;
    long long _entryPoint;
    IGAvatarAdapterDataSource *_listAdapterDataSource;
    NSMutableSet *_seenStickerIds;
    id <IGAvatarGridViewControllerDelegate> _delegate;
    IGSearchBar *_searchBar;
    UICollectionView *_collectionView;
    NSDictionary *_stickerMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *stickerMap; // @synthesize stickerMap=_stickerMap;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <IGAvatarGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_getSearchBarMaxY;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (void)avatarGridManagerDidDeleteAvatar;
- (void)avatarGridManagerDidUpdateAvatar;
- (void)didFailToFetchAvatars;
- (void)didFetchAvatars:(id)arg1;
- (void)didStartFetchingAvatars;
- (void)avatarDataSource:(id)arg1 didClickStaticSticker:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)_reloadContentWithItems:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *items;
- (void)viewDidLayoutSubviews;
- (void)_configureSearchBar;
- (void)viewDidLoad;
- (id)initWithAnalyticsModule:(id)arg1 userSession:(id)arg2 entryPoint:(long long)arg3 items:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

