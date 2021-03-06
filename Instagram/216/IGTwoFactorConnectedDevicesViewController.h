//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGTwoFactorConnectedDevicesHeaderDelegate-Protocol.h"
#import "IGTwoFactorMultipleTOTPKeyDelegate-Protocol.h"
#import "IGTwoFactorSwitchSectionControllerDelegate-Protocol.h"

@class IGListAdapter, IGTwoFactorSetupFlowContext, IGTwoFactorSetupLogger, IGTwoFactorSwitchCell, IGUserSession, NSString, UICollectionView;
@protocol IGTwoFactorConnectedDevicesViewControllerDelegate;

@interface IGTwoFactorConnectedDevicesViewController : IGViewController <IGListAdapterDataSource, IGTwoFactorConnectedDevicesHeaderDelegate, IGTwoFactorMultipleTOTPKeyDelegate, IGTwoFactorSwitchSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorSetupFlowContext *_setupFlowContext;
    IGTwoFactorSetupLogger *_setupLogger;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGTwoFactorSwitchCell *_authAppSwitchCell;
    id <IGTwoFactorConnectedDevicesViewControllerDelegate> _delegate;
    _Bool _isRefreshing;
}

- (void).cxx_destruct;
- (void)_removeDevice:(id)arg1;
- (void)_presentRemoveLastDeviceAlertForSeed:(id)arg1;
- (void)_presentRemoveDeviceAlertForSeed:(id)arg1;
- (void)_presentRemoveAlertForSeed:(id)arg1;
- (void)_presentActionSheetForSeed:(id)arg1;
- (void)_refreshSeeds;
- (void)keyWasRenamed;
- (void)confirmationCodeDidValidate;
- (void)connectedDevicesHeaderDidTapLink:(id)arg1;
- (void)connectedDevicesHeaderDidTapAddButton;
- (void)_presentDisableAuthAppAlert;
- (id)_configureAuthAppSwitch;
- (void)twoFactorSwitchSectionController:(id)arg1 viewModel:(id)arg2 cell:(id)arg3 didToggle:(_Bool)arg4;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 setupFlowContext:(id)arg2 setupLogger:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

