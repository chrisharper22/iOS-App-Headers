//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedPreviewHandlerDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGMediaThumbnailSectionControllerDelegate-Protocol.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#import "IGMediaUpdatedForAllListener-Protocol.h"
#import "IGProfileTabViewController-Protocol.h"
#import "IGRefreshControlContentInsetDataSource-Protocol.h"
#import "IGTVChannelDataSourceListener-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"
#import "IGUserUpdatedListener-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGFeedPreviewHandler, IGFeedScrollViewAnnouncer, IGListAdapter, IGProfileTabCollectionView, IGRefreshControl, IGUser, IGUserSession, NSArray, NSString;
@protocol IGProfileVideoGridViewControllerDelegate, IGTVChannelDataSourceType;

@interface IGProfileVideoGridViewController : IGViewController <IGFeedPreviewHandlerDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGMediaThumbnailSectionControllerDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGMediaUpdatedForAllListener, IGRefreshControlContentInsetDataSource, IGTransitionZoomFromCapable, IGUserUpdatedListener, IGTVChannelDataSourceListener, UICollectionViewDelegate, IGProfileTabViewController>
{
    IGUserSession *_userSession;
    IGUser *_user;
    id <IGProfileVideoGridViewControllerDelegate> _delegate;
    id <IGTVChannelDataSourceType> _channelDataSource;
    _Bool _isLoading;
    IGRefreshControl *_refreshControl;
    IGProfileTabCollectionView *_collectionView;
    IGFeedScrollViewAnnouncer *_feedScrollViewAnnouncer;
    IGListAdapter *_listAdapter;
    IGFeedPreviewHandler *_previewHandler;
    _Bool _largeThumbnails;
    NSArray *_channelDataSourceItems;
    _Bool _disablePullToRefresh;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disablePullToRefresh; // @synthesize disablePullToRefresh=_disablePullToRefresh;
- (id)_mediaThumbnailSectionController;
- (id)_emptyFeedSectionConfigForIsUserPrivate:(_Bool)arg1;
- (void)_pullToRefreshControlValueChanged:(id)arg1;
- (void)_tryLoadMore;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (void)previewHandlerDidTapSaveOrUnsave:(id)arg1 shouldSave:(_Bool)arg2 productItem:(id)arg3;
- (id)previewHandler:(id)arg1 previewActionsForMedia:(id)arg2 defaultActionProvider:(CDUnknownBlockType)arg3 loggingExtra:(id)arg4;
- (id)hashtagModelForPreviewHandler:(id)arg1;
- (id)previewHandler:(id)arg1 loggingExtrasForMedia:(id)arg2 atIndexPath:(id)arg3;
- (void)mediaWasUpdated:(id)arg1 withChange:(long long)arg2;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (double)idleTopContentInsetForRefreshControl:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)prepareForReuse;
- (void)willResignSelectedPageInDynamicPageViewController;
- (void)didBecomeSelectedPageInDynamicPageViewController;
- (id)scrollViewAnnouncer;
- (id)scrollView;
- (void)parentWillDisappearWithIsBeingRemovedFromStack:(_Bool)arg1;
- (void)setRefreshControlBackgroundColor:(id)arg1;
- (void)updateContentInsets;
- (_Bool)disableNavigationEvent;
- (struct UIEdgeInsets)preferredContentInsets;
- (id)_igtvAnalyticsModuleSuffix;
- (id)analyticsModule;
- (void)userWasUpdated:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)channelDataSourceDidUpdate:(id)arg1 fromAction:(long long)arg2 error:(id)arg3;
- (void)channelDataSourceWillUpdate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUser:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
