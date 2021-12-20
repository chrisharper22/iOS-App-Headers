//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGPromoteEducationViewDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class IGBoostPostLogger, IGPromoteEducationDrawerViewController, IGTapButton, NSArray, NSString, UIPageControl, UIPageViewController, UIView;
@protocol IGPromoteEducationDrawerViewDelegate;

@interface IGPromoteEducationDrawerContainerViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, IGPromoteEducationViewDelegate, IGGestureHandler, IGAnalyticsModule>
{
    IGTapButton *_dismissButton;
    UIView *_containerView;
    UIPageControl *_pageControl;
    UIPageViewController *_pageViewController;
    NSArray *_tutorialStepViewControllers;
    IGBoostPostLogger *_logger;
    NSArray *_educationViewModels;
    IGPromoteEducationDrawerViewController *_activeViewController;
    NSString *_step;
    id <IGPromoteEducationDrawerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteEducationDrawerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setNewActiveViewControllerIfNeeded:(id)arg1;
- (void)_dismissDrawer;
- (id)analyticsModule;
- (void)promoteEducationViewDetailsCell:(id)arg1 didTapDetailsLink:(id)arg2;
- (void)promoteEducationViewDidSelectActionWithViewModel:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)_configurePageViewController;
- (void)_setupViews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithViewModels:(id)arg1 step:(id)arg2 delegate:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

