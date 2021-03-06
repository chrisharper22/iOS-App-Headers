//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGActivityStorySectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "IGNetworkSourceDelegate-Protocol.h"
#import "IGTooltipViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGActivityFeedLogger, IGListAdapter, IGNetworkSource, IGRefreshControl, IGTooltipView, IGUserSession, NSOrderedSet, NSString, UICollectionView;
@protocol IGActivityBrandedContentNotificationsViewControllerDelegate;

@interface IGActivityBrandedContentNotificationsViewController : IGViewController <IGListAdapterDataSource, IGListAdapterDelegate, IGNetworkSourceDelegate, UIScrollViewDelegate, IGActivityStorySectionControllerDelegate, IGTooltipViewDelegate>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGActivityFeedLogger *_brandedContentActivityLogger;
    IGNetworkSource *_networkSource;
    IGRefreshControl *_refreshControl;
    NSOrderedSet *_brandedContentStories;
    IGTooltipView *_tooltipView;
    id <IGActivityBrandedContentNotificationsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGActivityBrandedContentNotificationsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_presentIntroductoryNuxForShoppingFromCreatorsIfNeeded;
- (void)_removeTooltipView;
- (void)_navigateToTabBarPostingFromTooltip;
- (id)_buildMonetizationInboxEmptyView;
- (id)_buildBrandedContentEmptyView;
- (void)_showEmptyView;
- (void)_onFetchFailed:(id)arg1;
- (void)_reloadDataFromPullToRefresh;
- (void)_fetchData;
- (void)didTapTooltipView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)navState;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4 requestTag:(id)arg5;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3 requestTag:(id)arg4;
- (void)storySectionController:(id)arg1 removedFollowRequestForStory:(id)arg2;
- (void)storySectionController:(id)arg1 didRemoveUserFromPostFromStory:(id)arg2;
- (void)storySectionController:(id)arg1 removedFollowerForStory:(id)arg2;
- (void)deleteCommentForSectionController:(id)arg1 forStory:(id)arg2 entryPoint:(long long)arg3;
- (void)hideStoryForSectionController:(id)arg1 forStory:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

