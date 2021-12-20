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

@class IGBoostPostLogger, IGUserSession, NSArray, NSString, UIPageControl, UIPageViewController, UIView;
@protocol IGPromoteEducationCarouselViewDelegate;

@interface IGPromoteEducationCarouselViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, IGPromoteEducationViewDelegate, IGGestureHandler, IGAnalyticsModule>
{
    IGBoostPostLogger *_logger;
    NSString *_step;
    IGUserSession *_session;
    NSArray *_educationSheetViewModels;
    NSArray *_educationSheetViewControllers;
    UIPageViewController *_pageViewController;
    UIPageControl *_pageControl;
    UIView *_containerView;
    id <IGPromoteEducationCarouselViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteEducationCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)promoteEducationViewDetailsCell:(id)arg1 didTapDetailsLink:(id)arg2;
- (void)promoteEducationViewDidSelectActionWithViewModel:(id)arg1;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)_openWebViewWithURL:(id)arg1;
- (void)_didChangePageControlValue;
- (void)_setupViewsAndPageControl;
- (void)_populateViewControllers;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModels:(id)arg1 delegate:(id)arg2 logger:(id)arg3 step:(id)arg4 session:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

