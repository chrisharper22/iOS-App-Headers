//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGBrowserHistoryHeaderCollectionViewCellDelegate-Protocol.h"
#import "IGBrowserHistoryLinkCollectionViewCellDelegate-Protocol.h"
#import "IGEmptyFeedViewDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListSingleSectionControllerDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGBrowserHistoryLinkInfo, IGBrowserHistoryViewModelAdapter, IGFeedScrollViewAnnouncer, IGListAdapter, NSString, UIActivityIndicatorView, UICollectionView, UIView;
@protocol IGBrowserHistoryLinkHandlerDelegate;

@interface IGBrowserHistoryViewController : IGViewController <IGBrowserHistoryHeaderCollectionViewCellDelegate, IGBrowserHistoryLinkCollectionViewCellDelegate, IGEmptyFeedViewDelegate, IGFeedScrollViewListener, IGListAdapterDataSource, IGListSingleSectionControllerDelegate, IGGestureHandler>
{
    IGBrowserHistoryLinkInfo *_currentSwipedOpenLink;
    IGBrowserHistoryViewModelAdapter *_viewModelAdapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGListAdapter *_listAdapter;
    UIActivityIndicatorView *_loadingActivityIndicatorView;
    UICollectionView *_collectionView;
    UIView *_activityIndicatorBackgroundView;
    id <IGBrowserHistoryLinkHandlerDelegate> _linkHandlerDelegate;
    IGActionableConfirmationToastController *_toastController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGActionableConfirmationToastController *toastController; // @synthesize toastController=_toastController;
@property(nonatomic) __weak id <IGBrowserHistoryLinkHandlerDelegate> linkHandlerDelegate; // @synthesize linkHandlerDelegate=_linkHandlerDelegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)linkCollectionViewCell:(id)arg1 didSwipeOpen:(_Bool)arg2 withLinkInfoModel:(id)arg3;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (void)linkCollectionViewCellDidTapHideButton:(id)arg1 withLinkInfoModel:(id)arg2;
- (void)_presentBrowserWithURL:(id)arg1 linkInfo:(id)arg2;
- (void)didPressPrimaryActionButton:(id)arg1;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)_loadMoreIfScrollViewIsNearBottom;
- (void)_launchDataPolicyUrl;
- (void)_hideActionViewOfPreviousOpenedCell;
- (void)_toggleLoadingIndicator:(_Bool)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModelAdapter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

