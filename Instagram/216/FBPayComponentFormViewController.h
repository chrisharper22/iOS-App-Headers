//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBPayExpressCheckoutBaseViewController.h"

#import "FBPayBottomSheetResizable-Protocol.h"
#import "FBPayFormViewControllerUpdateDelegate-Protocol.h"
#import "FBPayFormViewModelDelegate-Protocol.h"
#import "FBPayWebBrowserControllerDelegate-Protocol.h"

@class FBPayExpressCheckoutNavigationBarConfig, FBPayFormViewController, FBPayFormViewModel, FBPayFullScreenLoadingView, NSString, UIView;
@protocol FBPayComponentFormViewControllerDelegate, FBPayComponentFormViewControllerUpdateDelegate, FBPayUPLLoggingAPI, FBPayWebBrowserControlling;

@interface FBPayComponentFormViewController : FBPayExpressCheckoutBaseViewController <FBPayFormViewModelDelegate, FBPayFormViewControllerUpdateDelegate, FBPayWebBrowserControllerDelegate, FBPayBottomSheetResizable>
{
    FBPayExpressCheckoutNavigationBarConfig *_defaultNavBarConfig;
    _Bool _shouldSkipNavBarUpdates;
    UIView *_formView;
    FBPayFormViewController *_formViewController;
    FBPayFullScreenLoadingView *_fullScreenLoadingView;
    double _contentHeight;
    long long _componentType;
    id <FBPayUPLLoggingAPI> _logger;
    id <FBPayWebBrowserControlling> _webController;
    id <FBPayComponentFormViewControllerDelegate> _delegate;
    id <FBPayComponentFormViewControllerUpdateDelegate> _updateDelegate;
    FBPayFormViewModel *_formViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBPayFormViewModel *formViewModel; // @synthesize formViewModel=_formViewModel;
@property(nonatomic) __weak id <FBPayComponentFormViewControllerUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) __weak id <FBPayComponentFormViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)totalViewHeight;
- (void)resizeContentHeight:(double)arg1;
- (void)browserControllerDidCancel:(id)arg1;
- (void)browserControllerDidChange:(id)arg1 url:(id)arg2;
- (void)browserControllerDidFinish:(id)arg1 url:(id)arg2;
- (void)fbpayFormViewControllerDidUpdate:(id)arg1 isReadyToSave:(_Bool)arg2;
- (void)fbpayFormViewModelDidPopulateForm:(id)arg1;
- (void)fbpayFormViewModelDidFinish:(id)arg1;
- (void)_updateNavigationBarConfig:(_Bool)arg1;
- (void)_presentWebControllerWithURL:(id)arg1;
- (void)_handleUserFacingError:(id)arg1;
- (void)_handleMutatingResponse:(id)arg1;
- (void)updateNavigationBarConfig:(id)arg1;
- (void)userDidTapRightBarButtonItem;
- (void)userDidTapLeftBarButtonItem;
- (void)_popComponentFormViewController;
- (id)_constraintsForFormView;
- (void)_setupConstraints;
- (void)_dismissLoadingStateOnForm;
- (void)_showLoadingStateOnForm;
- (void)_setupFormView;
- (void)_setupNUXShimmerView;
- (void)_setupViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNavigationBarConfig:(id)arg1 componentType:(long long)arg2 formViewModel:(id)arg3 contentHeight:(double)arg4 logger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
