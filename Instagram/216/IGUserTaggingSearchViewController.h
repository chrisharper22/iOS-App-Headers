//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGSearchBarDelegate-Protocol.h"
#import "IGShareServiceConfigureManagerDelegate-Protocol.h"
#import "IGTaggingSearchControllerType-Protocol.h"
#import "IGTaggingSearchDataSourceDelegate-Protocol.h"
#import "IGTaggingSearchResultSectionControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGListAdapter, IGSearchAnalyticsLogger, IGSearchBarWithCancel, IGSearchSession, IGShareServiceConfigureManager, IGUserSession, NSString, UICollectionView;
@protocol IGTaggingSearchDataSource, IGTaggingSearchViewControllerDelegate, IGTaggingViewConfiguration;

@interface IGUserTaggingSearchViewController : IGViewController <UICollectionViewDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGSearchBarDelegate, IGTaggingSearchResultSectionControllerDelegate, IGTaggingSearchDataSourceDelegate, UIScrollViewDelegate, IGEmptyFeedViewDelegate, IGShareServiceConfigureManagerDelegate, IGTaggingSearchControllerType>
{
    _Bool _searchLoggingEnabled;
    IGSearchAnalyticsLogger *_searchLogger;
    IGSearchSession *_searchSession;
    _Bool _hasError;
    id <IGTaggingSearchViewControllerDelegate> _delegate;
    IGUserSession *_userSession;
    id <IGTaggingViewConfiguration> _taggingConfig;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGSearchBarWithCancel *_searchBarWithCancel;
    id <IGTaggingSearchDataSource> _searchDataSource;
    IGShareServiceConfigureManager *_serviceConfigManager;
    NSString *_priorModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) IGShareServiceConfigureManager *serviceConfigManager; // @synthesize serviceConfigManager=_serviceConfigManager;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(readonly, nonatomic) id <IGTaggingSearchDataSource> searchDataSource; // @synthesize searchDataSource=_searchDataSource;
@property(readonly, nonatomic) IGSearchBarWithCancel *searchBarWithCancel; // @synthesize searchBarWithCancel=_searchBarWithCancel;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <IGTaggingViewConfiguration> taggingConfig; // @synthesize taggingConfig=_taggingConfig;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGTaggingSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_igUserListWithPosition:(id)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFailLoginForService:(long long)arg2;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (id)viewControllerForShareConfiguration;
- (void)reloadData;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (id)_viewModelsForIGUserList:(id)arg1;
- (_Bool)_isNearBottomInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_didSelectViewModel:(id)arg1;
- (void)taggingSearchResultSectionControllerDidSelectObject:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)taggingSearchDataSourceDidFailLoading;
- (void)taggingSearchDataSourceDidUpdateResults;
- (void)taggingSearchDataSourceDidStartLoading;
- (void)_searchBarCancelButtonTapped;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_logSearchSessionIfNeccessaryWithQueryText:(id)arg1;
- (long long)preferredTabBarBehavior;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)_setUpCollectionViewAndListAdapter;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 taggingConfig:(id)arg2 isTaggingCollaborator:(_Bool)arg3 priorModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

