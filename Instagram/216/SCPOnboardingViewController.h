//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPOnboardingViewControlling-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, SCPButton, UIPageControl, UIScrollView, UIView;
@protocol SCPOnboardingPresenting, SCPOnboardingViewControllerDelegate;

@interface SCPOnboardingViewController : UIViewController <UIScrollViewDelegate, SCPOnboardingViewControlling>
{
    id <SCPOnboardingViewControllerDelegate> _delegate;
    id <SCPOnboardingPresenting> _presenter;
    SCPButton *_actionButton;
    UIScrollView *_scrollView;
    UIView *_bottomContainerSeparatorView;
    UIView *_bottomContainerView;
    UIView *_disclaimerView;
    UIPageControl *_pageControl;
    NSArray *_stepViews;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *stepViews; // @synthesize stepViews=_stepViews;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIView *disclaimerView; // @synthesize disclaimerView=_disclaimerView;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UIView *bottomContainerSeparatorView; // @synthesize bottomContainerSeparatorView=_bottomContainerSeparatorView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SCPButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) id <SCPOnboardingPresenting> presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <SCPOnboardingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateScrollViewContentSize;
- (void)viewDidLayoutSubviews;
- (void)actionButtonPressed;
- (void)setupStepsViewsConstraints;
- (void)loadPresenterData;
- (void)configureConstraints;
- (void)initializeViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

