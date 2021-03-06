//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedScrollViewListener-Protocol.h>

@class IGCollapsibleNavigationBarControllerConfig, IGCustomHeaderView, IGNavigationBar, NSString, UIView, UIViewController;
@protocol IGCollapsibleNavigationBarControllerDelegate, IGCollapsibleNavigationViewType, IGScrollableViewControllerProtocol;

@interface IGCollapsibleNavigationBarController : NSObject <IGFeedScrollViewListener>
{
    UIView *_hostingView;
    UIView<IGCollapsibleNavigationViewType> *_headerView;
    IGNavigationBar *_navigationBar;
    IGCustomHeaderView *_customNavBar;
    IGCollapsibleNavigationBarControllerConfig *_config;
    CDStruct_8eea7b7b _scrollState;
    struct {
        double expandedHeaderHeight;
        double collapsedHeaderHeight;
    } _sizeCache;
    double _headerViewUpdateTimestamp;
    double _headerViewPercentageCollapsed;
    double _percentageCollapsed;
    id <IGCollapsibleNavigationBarControllerDelegate> _delegate;
    UIViewController<IGScrollableViewControllerProtocol> *_connectedViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController<IGScrollableViewControllerProtocol> *connectedViewController; // @synthesize connectedViewController=_connectedViewController;
@property(nonatomic) __weak id <IGCollapsibleNavigationBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double percentageCollapsed; // @synthesize percentageCollapsed=_percentageCollapsed;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 finalizedTargetContentOffset:(struct CGPoint)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)_shouldAdjustPercentCollapsedWithScrollState:(CDStruct_8eea7b7b)arg1 scrollView:(id)arg2;
- (double)_heightForHeaderAtPercentCollapsed:(double)arg1;
- (double)_headerTravelDistance;
- (double)_totalTravelDistance;
- (void)_updateNavigationBarPercentCollapsed:(double)arg1 headerViewPercentCollapsed:(double)arg2;
- (double)_navBarHeight;
- (id)_navigationBar;
- (void)layoutHeaderViews;
@property(readonly, nonatomic) double collapsedHeaderHeight;
@property(readonly, nonatomic) double expandedHeaderHeight;
@property(readonly, nonatomic) double headerHeightAdjustment;
@property(readonly, nonatomic) _Bool hasHeaderView;
@property(readonly, nonatomic) _Bool isFullyShowing;
@property(nonatomic, getter=isCollapsed) _Bool collapsed;
- (id)initWithHostingView:(id)arg1 customNavBar:(id)arg2 config:(id)arg3 headerView:(id)arg4;
- (id)initWithHostingView:(id)arg1 navigationBar:(id)arg2 config:(id)arg3 headerView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

