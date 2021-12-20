//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGCustomViewController-Protocol.h>
#import <FBSharedFramework/IGGestureHandler-Protocol.h>
#import <FBSharedFramework/IGPageViewControllerDataSource-Protocol.h>
#import <FBSharedFramework/IGPageViewControllerDelegate-Protocol.h>

@class IGPageViewController, IGSegmentedTabControl, NSArray, NSString, UIColor, UIView, UIViewController;
@protocol IGSegmentedTabPageViewControllerDelegate;

@interface IGSegmentedTabPageViewController : IGViewController <IGPageViewControllerDataSource, IGPageViewControllerDelegate, IGCustomViewController, IGGestureHandler>
{
    UIColor *_backgroundColor;
    IGPageViewController *_pageViewController;
    long long _tabControlOptions;
    IGSegmentedTabControl *_tabControl;
    UIView *_navigationTitleView;
    _Bool _didNavigateViaTap;
    _Bool _shouldDisableNavigationEvent;
    _Bool _swipingDisabled;
    _Bool _shouldAdjustContentViewControllerFrameForTabControl;
    _Bool _preferredContentInsetsAssumeSmallParentContainer;
    id <IGSegmentedTabPageViewControllerDelegate> _delegate;
    NSArray *_contentViewControllers;
    double _tabControlTopInset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool preferredContentInsetsAssumeSmallParentContainer; // @synthesize preferredContentInsetsAssumeSmallParentContainer=_preferredContentInsetsAssumeSmallParentContainer;
@property(nonatomic) _Bool shouldAdjustContentViewControllerFrameForTabControl; // @synthesize shouldAdjustContentViewControllerFrameForTabControl=_shouldAdjustContentViewControllerFrameForTabControl;
@property(nonatomic) double tabControlTopInset; // @synthesize tabControlTopInset=_tabControlTopInset;
@property(nonatomic) _Bool swipingDisabled; // @synthesize swipingDisabled=_swipingDisabled;
@property(readonly, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(nonatomic) __weak id <IGSegmentedTabPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)pageViewController:(id)arg1 didChangeCurrentViewController:(id)arg2 toController:(id)arg3 atIndex:(long long)arg4;
- (void)pageViewControllerWillBeginDragging:(id)arg1;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (void)_updateAccessibilityElements;
- (void)_tabControlValueChanged:(id)arg1;
- (id)_viewControllerAtIndex:(long long)arg1;
- (void)_reloadTabs;
- (_Bool)disableNavigationEvent;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)reloadTabControlData;
- (struct CGRect)frameForTabControlSegment:(long long)arg1;
- (void)setCurrentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setShouldDisableSimultaneousPanGestureRecognizers:(_Bool)arg1;
- (void)setShouldDisableChildScrollViewsWhilePanning:(_Bool)arg1;
@property(readonly, nonatomic) UIViewController *currentViewController;
@property(readonly, nonatomic) UIView *tabControl;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (struct UIEdgeInsets)_preferredContentInsetsWithoutTabControl;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)ig_keyViewControllers;
- (struct CGSize)preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)initWithContentViewControllers:(id)arg1 backgroundColor:(id)arg2 tabControlConfig:(id)arg3 shouldDisableNavigationEvents:(_Bool)arg4 analyticsModule:(id)arg5;
- (id)initWithContentViewControllers:(id)arg1 tabControlConfig:(id)arg2 shouldDisableNavigationEvents:(_Bool)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
