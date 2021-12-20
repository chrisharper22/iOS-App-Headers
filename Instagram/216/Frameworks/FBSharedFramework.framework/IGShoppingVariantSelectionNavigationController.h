//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGNavigationController.h>

#import <FBSharedFramework/IGInfoViewDelegate-Protocol.h>
#import <FBSharedFramework/IGShoppingTextVariantPickerViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGShoppingThumbnailVariantPickerViewControllerDelegate-Protocol.h>

@class IGInfoView, IGShoppingVariantPickerConfiguration, IGShoppingVariantSelectionFlowCoordinator, IGUserSession, NSMapTable, NSString, UIActivityIndicatorView;
@protocol IGShoppingVariantSelectionNavigationControllerDelegate, IGShoppingVariantSelectionResolving;

@interface IGShoppingVariantSelectionNavigationController : IGNavigationController <IGInfoViewDelegate, IGShoppingTextVariantPickerViewControllerDelegate, IGShoppingThumbnailVariantPickerViewControllerDelegate>
{
    IGShoppingVariantPickerConfiguration *_config;
    IGShoppingVariantSelectionFlowCoordinator *_flowCoordinator;
    UIActivityIndicatorView *_activityIndicator;
    IGInfoView *_infoView;
    NSMapTable *_viewControllerToFlowStepMap;
    id <IGShoppingVariantSelectionResolving> _variantResolver;
    IGUserSession *_userSession;
    id <IGShoppingVariantSelectionNavigationControllerDelegate> _selectionDelegate;
    long long _loadingState;
}

- (void).cxx_destruct;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) __weak id <IGShoppingVariantSelectionNavigationControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void)_advanceStepWithSelectedVariantValue:(id)arg1 forViewController:(id)arg2;
- (void)infoViewWasTapped:(id)arg1;
- (void)shoppingThumbnailVariantPickerViewController:(id)arg1 didSelectVariantValueWithViewModel:(id)arg2;
- (void)shoppingTextVariantPickerViewController:(id)arg1 didSelectVariantValueWithViewModel:(id)arg2;
- (void)_applyLoadingState:(long long)arg1;
- (void)_manuallyUpdatePreferredContentSize;
- (void)_handleResolvedProductItem:(id)arg1;
- (void)_unresolveStepsForViewControllers:(id)arg1;
- (void)_pushStep:(id)arg1;
- (void)_startFlow;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVariantResolver:(id)arg1 flowSelectionType:(id)arg2 variantPickerConfig:(id)arg3 loadingState:(long long)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
