//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BKBloksCdsErrorViewControllerDelegate-Protocol.h"

@class BKBloksCdsErrorViewController, BKBloksSurfaceCore, BKContext, CDSIndeterminateProgressRingView, NSString, UIView;
@protocol BKCdsScreenViewControllerDelegate;

@interface BKCdsScreenViewController : UIViewController <BKBloksCdsErrorViewControllerDelegate>
{
    BKBloksSurfaceCore *_surfaceCore;
    id <BKCdsScreenViewControllerDelegate> _delegate;
    NSString *_analyticsModule;
    NSString *_appID;
    _Bool _rendersInBottomUnsafeArea;
    BKBloksCdsErrorViewController *_errorViewController;
    _Bool _needsDefaultLoadingState;
    CDSIndeterminateProgressRingView *_defaultLoadingView;
    _Bool _isNavBarVisible;
    BKContext *_context;
    UIView *_contentView;
    UIView *_headerView;
    double _headerHeight;
    NSString *_screenID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNavBarVisible; // @synthesize isNavBarVisible=_isNavBarVisible;
@property(readonly, nonatomic) NSString *screenID; // @synthesize screenID=_screenID;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) BKContext *context; // @synthesize context=_context;
- (void)reloadPressed;
- (void)_animateChanges;
- (void)_showErrorScreen:(id)arg1;
- (id)analyticsModule;
- (void)_removeDefaultLoadingView;
- (void)_addDefaultLoadingViewIfNeeded;
- (void)_loadContentView;
- (void)_didFetchScreen;
- (double)_safeAreaBottomInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithObjectSet:(id)arg1 bottomSheetScreenModel:(struct BKCdsBottomSheetScreenModel)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

