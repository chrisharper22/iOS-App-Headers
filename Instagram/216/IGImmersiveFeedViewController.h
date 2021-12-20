//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGFeedScrollViewListener-Protocol.h"
#import "IGSundialViewerInteractionCompatibleType-Protocol.h"
#import "IGTransitionZoomToCapable-Protocol.h"

@class MISSING_TYPE;

@interface IGImmersiveFeedViewController : IGViewController <IGFeedScrollViewListener, IGFeedNetworkSourceDelegate, IGTransitionZoomToCapable, IGSundialViewerInteractionCompatibleType>
{
    MISSING_TYPE *feedNetworkSource;
    MISSING_TYPE *userSession;
    MISSING_TYPE *sessionID;
    MISSING_TYPE *listAdapter;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *navigationBar;
    MISSING_TYPE *$__lazy_storage_$_feedComponents;
}

- (void).cxx_destruct;
- (id)initWithAnalyticsModule:(id)arg1 performanceListener:(id)arg2;
- (id)initWithPerformanceListener:(id)arg1;
- (void)dismissButtonTapped;
- (_Bool)sundialViewerInteractionCoordinatorShouldInterceptSingleTapGesture;
- (void)sundialViewerInteractionCoordinatorDidObserveInterceptedSingleTapGesture;
- (struct CGPoint)menuViewBottomCenter;
- (void)sundialViewerInteractionCoordinatorDidObserveLongPressGesture:(id)arg1;
- (void)didCompleteAnimationTransition;
- (id)transitionZoomItemOverrideOnExit;
- (id)transitionZoomViewToItem:(id)arg1;
- (_Bool)shouldZoomToTransition;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (long long)preferredBarAppearance;
- (_Bool)prefersNavigationBarHidden;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeedNetworkSource:(id)arg1 title:(id)arg2 sessionID:(id)arg3 userSession:(id)arg4 analyticsModule:(id)arg5;

@end

