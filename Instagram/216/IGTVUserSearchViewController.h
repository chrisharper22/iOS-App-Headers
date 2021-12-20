//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGSearchResultSectionControllerDelegate-Protocol.h"
#import "IGTVSearchDataSourceListener-Protocol.h"
#import "IGTVSearchViewControllerProtocol-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGFeedScrollViewAnnouncer, IGListAdapter, IGSearchTypeaheadPerformanceLogger, IGTVUserSearchDataSource, IGUserSession, NSString, UICollectionView;
@protocol IGTVUserSearchViewControllerDelegate;

@interface IGTVUserSearchViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGTVSearchDataSourceListener, UICollectionViewDelegate, IGSearchResultSectionControllerDelegate, IGTVSearchViewControllerProtocol>
{
    IGUserSession *_userSession;
    id <IGTVUserSearchViewControllerDelegate> _delegate;
    IGTVUserSearchDataSource *_dataSource;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    NSString *_searchSessionId;
    IGSearchTypeaheadPerformanceLogger *_searchPerfLogger;
    NSString *_currentSearchText;
    _Bool _tabsEnabled;
}

- (void).cxx_destruct;
- (void)_didSelectItemAtIndexPath:(id)arg1;
- (void)searchResultSectionController:(id)arg1 didTapDestructionButtonOfCell:(id)arg2;
- (void)searchResultSectionController:(id)arg1 didTapActionButtonOfCell:(id)arg2;
- (void)searchResultSectionController:(id)arg1 didTapAvatarOfCell:(id)arg2;
- (void)searchDataSource:(id)arg1 didUpdateResults:(id)arg2 isEmptyQuery:(_Bool)arg3 isCachedQuery:(_Bool)arg4;
- (void)searchDataSourceDidThrottleNetworkRequest:(id)arg1 searchQuery:(id)arg2;
- (void)searchDataSourceDidDiscardFetchedResults:(id)arg1 searchQuery:(id)arg2 numResults:(long long)arg3;
- (void)searchDataSourceDidCompleteFetch:(id)arg1 searchQuery:(id)arg2 numResults:(long long)arg3;
- (void)searchDataSourceDidFailFetch:(id)arg1 searchQuery:(id)arg2;
- (void)searchDataSourceDidStartFetch:(id)arg1 searchQuery:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)title;
- (void)updateContentInsetsForTabsEnabled:(_Bool)arg1;
- (void)updateForSearchText:(id)arg1;
@property(readonly, nonatomic) unsigned long long searchTabType;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 showHeaders:(_Bool)arg2 searchSessionId:(id)arg3 searchPerfLogger:(id)arg4 analyticsModule:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
