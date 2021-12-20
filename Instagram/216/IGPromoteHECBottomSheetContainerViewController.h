//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGPromoteViewController.h"

#import "IGGestureHandler-Protocol.h"
#import "IGPromoteHECBottomSheetViewControllerDelegate-Protocol.h"

@class IGBoostPostLogger, IGPartialModalInternalNavigationController, IGPromoteHECBottomSheetViewController, IGPromoteHECBottomSheetViewModel, IGUserSession, NSMutableSet, NSSet, NSString;
@protocol IGPromoteHECBottomSheetContainerViewControllerDelegate;

@interface IGPromoteHECBottomSheetContainerViewController : IGPromoteViewController <IGPromoteHECBottomSheetViewControllerDelegate, IGGestureHandler>
{
    IGUserSession *_session;
    IGBoostPostLogger *_logger;
    IGPromoteHECBottomSheetViewModel *_hecBottomSheetViewModel;
    NSSet *_regulatedCategories;
    long long _selectedRegulatedCategory;
    NSMutableSet *_selectedRegulatedCategories;
    IGPartialModalInternalNavigationController *_navigationController;
    IGPromoteHECBottomSheetViewController *_hecViewController;
    id <IGPromoteHECBottomSheetContainerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteHECBottomSheetContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)promoteHECBottomSheetViewController:(id)arg1 didUpdateCheckMarkViewModel:(id)arg2;
- (void)promoteHECBottomSheetViewControllerDidTapDoneButton:(id)arg1 selectedRegulatedCategories:(id)arg2;
- (void)promoteHECBottomSheetViewController:(id)arg1 didSelectRegulatedCategory:(long long)arg2;
- (void)promoteHECBottomSheetViewControllerDidTapLearnMore:(id)arg1;
- (void)promoteHECBottomSheetViewControllerViewWillAppear:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_setupViewControllers;
- (void)_setUpNavigationBar;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 regulatedCategories:(id)arg2 selectedRegulatedCategories:(id)arg3 hecBottomSheetViewModel:(id)arg4 logger:(id)arg5;
- (id)initWithSession:(id)arg1 selectedRegulatedCategory:(long long)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

