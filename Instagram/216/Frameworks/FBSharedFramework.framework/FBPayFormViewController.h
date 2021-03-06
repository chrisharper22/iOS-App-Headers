//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <FBSharedFramework/FBPayDropdownRendering-Protocol.h>
#import <FBSharedFramework/FBPayFormCellViewModelDelegate-Protocol.h>
#import <FBSharedFramework/FBPayFormDetailedToggleCellViewModelDelegate-Protocol.h>
#import <FBSharedFramework/FBPayFormToggleCellViewModelDelegate-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegate-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class FBPayFormFieldOverlayViewController, FBPayFormViewDataSource, FBPayFormViewModel, FBPayFullScreenLoadingView, NSString, UIBarButtonItem;
@protocol FBPayFormViewControllerUpdateDelegate, FBPayFormViewLifeCycleDelegate;

@interface FBPayFormViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, FBPayFormCellViewModelDelegate, FBPayFormDetailedToggleCellViewModelDelegate, FBPayFormToggleCellViewModelDelegate, FBPayDropdownRendering>
{
    FBPayFormViewDataSource *_dataSource;
    FBPayFullScreenLoadingView *_loadingView;
    FBPayFormFieldOverlayViewController *_cardDropdownViewController;
    UIBarButtonItem *_backItem;
    _Bool _isLoading;
    FBPayFormViewModel *_viewModel;
    id <FBPayFormViewLifeCycleDelegate> _lifeCycleDelegate;
    id <FBPayFormViewControllerUpdateDelegate> _updateDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <FBPayFormViewControllerUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) __weak id <FBPayFormViewLifeCycleDelegate> lifeCycleDelegate; // @synthesize lifeCycleDelegate=_lifeCycleDelegate;
@property(readonly, nonatomic) FBPayFormViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)hideDropdownComponent;
- (void)translateDropdownComponent:(id)arg1;
- (void)renderDropdownForCell:(id)arg1 viewController:(id)arg2 withHeight:(double)arg3;
- (void)fbpayFormDetailedToggleCellViewModelDidUpdate:(id)arg1;
- (void)fbpayFormToggleCellViewModelDidUpdate:(id)arg1;
- (void)fbpayFormCellViewModelDidUpdate:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)fbpayFormCellViewModelDidCompleteEdit:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_setNavigationSaveButtonStatus;
- (id)_getSaveAccessibilityHint;
- (_Bool)_isReadyToSave;
- (id)_backItem;
- (void)_onSave:(id)arg1;
- (_Bool)_becomeFirstResponderFromIdentifier:(id)arg1;
- (void)showError:(id)arg1;
- (id)navigationItem;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reload;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

