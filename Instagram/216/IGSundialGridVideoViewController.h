//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#import "IGRefreshControlContentInsetDataSource-Protocol.h"
#import "IGSundialGridNoNetworkSectionControllerDelegate-Protocol.h"
#import "IGSundialGridVideoSectionControllerDelegate-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IGFeedScrollViewAnnouncer, IGListAdapter, IGRefreshControl, IGUser, IGUserSession, NSArray, NSMutableArray, NSString, UICollectionView, UIColor, UIScrollView, UIView;
@protocol IGSundialFeedSource, IGSundialGridPerformanceLogger, IGSundialGridVideoViewControllerDelegate, IGSundialViewerCTADelegate, IGSundialViewerProtocol;

@interface IGSundialGridVideoViewController : UIViewController <IGFeedNetworkSourceDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGMediaThumbnailSectionControllerSelectionDelegate, IGRefreshControlContentInsetDataSource, IGSundialGridNoNetworkSectionControllerDelegate, IGSundialGridVideoSectionControllerDelegate, IGTransitionZoomFromCapable, UICollectionViewDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    Class _collectionViewClass;
    double _gridTopInset;
    _Bool _pullToRefreshEnabled;
    IGRefreshControl *_refreshControl;
    id <IGSundialGridPerformanceLogger> _perfLogger;
    _Bool _hideMediaOnLikeReverted;
    _Bool _viewerTabBarHidden;
    _Bool _viewerCameraButtonHidden;
    _Bool _animatedThumbnailEnabled;
    id <IGSundialGridVideoViewControllerDelegate> _delegate;
    id <IGSundialViewerProtocol> _viewerDelegate;
    id <IGSundialViewerCTADelegate> _viewerCTADelegate;
    id <IGSundialFeedSource> _videoFeed;
    UIView *_emptyView;
    UICollectionView *_collectionView;
    IGListAdapter *_adapter;
    IGFeedScrollViewAnnouncer *_feedScrollViewAnnouncer;
    long long _entryPoint;
    NSArray *_injectedListItems;
    IGUser *_user;
    long long _loadingState;
    NSString *_productName;
    NSString *_surface;
    NSString *_pivotPageSeededMediaId;
    NSMutableArray *_mediaList;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(copy, nonatomic) NSString *pivotPageSeededMediaId; // @synthesize pivotPageSeededMediaId=_pivotPageSeededMediaId;
@property(copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) _Bool animatedThumbnailEnabled; // @synthesize animatedThumbnailEnabled=_animatedThumbnailEnabled;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool viewerCameraButtonHidden; // @synthesize viewerCameraButtonHidden=_viewerCameraButtonHidden;
@property(nonatomic) _Bool viewerTabBarHidden; // @synthesize viewerTabBarHidden=_viewerTabBarHidden;
@property(nonatomic) _Bool hideMediaOnLikeReverted; // @synthesize hideMediaOnLikeReverted=_hideMediaOnLikeReverted;
@property(copy, nonatomic) NSArray *injectedListItems; // @synthesize injectedListItems=_injectedListItems;
@property(nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGFeedScrollViewAnnouncer *feedScrollViewAnnouncer; // @synthesize feedScrollViewAnnouncer=_feedScrollViewAnnouncer;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) id <IGSundialFeedSource> videoFeed; // @synthesize videoFeed=_videoFeed;
@property(nonatomic) __weak id <IGSundialViewerCTADelegate> viewerCTADelegate; // @synthesize viewerCTADelegate=_viewerCTADelegate;
@property(nonatomic) __weak id <IGSundialViewerProtocol> viewerDelegate; // @synthesize viewerDelegate=_viewerDelegate;
@property(nonatomic) __weak id <IGSundialGridVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (void)sundialGridVideoSectionControllerDidChangeCoverPhoto:(id)arg1;
- (void)sundialGridVideoSectionController:(id)arg1 didLikeRevertedMedia:(id)arg2;
- (void)sundialGridVideoSectionController:(id)arg1 didSelectVideo:(id)arg2;
- (void)sundialGridNoNetworkSectionControllerDidTapRefreshButton:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_refreshControlValueChanged:(id)arg1;
- (double)idleTopContentInsetForRefreshControl:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)setInjectedListItems:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(nonatomic) double refreshControlTopInset;
@property(retain, nonatomic) UIColor *refreshControlBackgroundColor;
- (void)_updateContentInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)_initWithVideoFeed:(id)arg1 userSession:(id)arg2 collectionViewClass:(Class)arg3 gridTopInset:(double)arg4 pullToRefreshEnabled:(_Bool)arg5 perfLogger:(id)arg6;
- (id)initWithVideoFeed:(id)arg1 userSession:(id)arg2 collectionViewClass:(Class)arg3 gridTopInset:(double)arg4 perfLogger:(id)arg5;
- (id)initWithoutPullToRefreshUsingVideoFeed:(id)arg1 userSession:(id)arg2 perfLogger:(id)arg3;
- (id)initWithVideoFeed:(id)arg1 userSession:(id)arg2 perfLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

