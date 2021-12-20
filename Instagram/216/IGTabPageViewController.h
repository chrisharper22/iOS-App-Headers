//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGCustomViewController-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGPageViewControllerDataSource-Protocol.h"
#import "IGPageViewControllerDelegate-Protocol.h"
#import "IGTabControlDelegate-Protocol.h"

@class IGPageViewController, IGTabControl, NSArray, NSString, UIScrollView, UIView, UIViewController;
@protocol IGTabPageViewControllerDelegate;

@interface IGTabPageViewController : IGViewController <IGCustomViewController, IGGestureHandler, IGPageViewControllerDataSource, IGPageViewControllerDelegate, IGTabControlDelegate>
{
    UIScrollView *_tabControlScrollView;
    _Bool _disableScrollAnimationOnTabSwitch;
    _Bool _swipingDisabled;
    _Bool _showSingleTab;
    _Bool _layoutTabControlWithoutPreferredContentInsets;
    NSArray *_contentViewControllers;
    id <IGTabPageViewControllerDelegate> _delegate;
    IGTabControl *_tabControl;
    IGPageViewController *_pageViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) IGTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(nonatomic) _Bool layoutTabControlWithoutPreferredContentInsets; // @synthesize layoutTabControlWithoutPreferredContentInsets=_layoutTabControlWithoutPreferredContentInsets;
@property(nonatomic) _Bool showSingleTab; // @synthesize showSingleTab=_showSingleTab;
@property(nonatomic) _Bool swipingDisabled; // @synthesize swipingDisabled=_swipingDisabled;
@property(nonatomic) _Bool disableScrollAnimationOnTabSwitch; // @synthesize disableScrollAnimationOnTabSwitch=_disableScrollAnimationOnTabSwitch;
@property(nonatomic) __weak id <IGTabPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)pageViewController:(id)arg1 didChangeCurrentViewControllerToController:(id)arg2 atIndex:(long long)arg3;
- (void)pageViewControllerDidFinishScrolling:(id)arg1;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned long long)arg2;
- (void)_switchToViewController:(id)arg1;
- (id)_viewControllerAtIndex:(long long)arg1;
- (long long)_pageCount;
- (void)_reloadTabs;
- (_Bool)_hidesTabControl;
@property(nonatomic) _Bool enableScrollableSegments;
- (void)_configure;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)setCurrentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftSwipeDisabled:(_Bool)arg1;
@property(readonly, nonatomic) UIView *pagingContentView;
@property(retain, nonatomic) UIViewController *currentViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (struct UIEdgeInsets)_preferredContentInsetsWithoutTabControl;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)ig_keyViewControllers;
- (id)initWithContentViewControllers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
