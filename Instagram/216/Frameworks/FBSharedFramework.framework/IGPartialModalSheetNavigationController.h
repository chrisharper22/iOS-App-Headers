//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGNavigationController.h>

@class IGPartialModalSheetViewController;
@protocol IGPartialModalSheetNavigationControllerPresentDelegate;

@interface IGPartialModalSheetNavigationController : IGNavigationController
{
    IGPartialModalSheetViewController *_partialModalSheetViewController;
    id <IGPartialModalSheetNavigationControllerPresentDelegate> _presentDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPartialModalSheetNavigationControllerPresentDelegate> presentDelegate; // @synthesize presentDelegate=_presentDelegate;
- (_Bool)_isAtRoot;
- (_Bool)_appearanceForwardingCanHidePresentersView;
- (void)_endForwardingAppearanceTranstion;
- (void)_beginForwardingAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_partialModalPresentationController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)overrideTraitCollectionForChildViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (long long)modalPresentationStyle;
- (id)transitioningDelegate;
- (void)viewDidLoad;
- (id)initWithPartialModalSheetViewController:(id)arg1 experimentTraits:(CDStruct_b31ca263)arg2;

@end
