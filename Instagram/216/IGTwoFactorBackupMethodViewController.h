//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGListAdapterDataSource-Protocol.h"
#import "IGTwoFactorBackupCodeViewControllerDelegate-Protocol.h"
#import "IGTwoFactorDisclosureSectionControllerDelegate-Protocol.h"
#import "IGTwoFactorSwitchSectionControllerDelegate-Protocol.h"

@class IGListAdapter, IGTwoFactorSetupLogger, IGTwoFactorStatusInfo, IGTwoFactorSwitchCell, IGUserSession, NSString, UIActivityIndicatorView, UIBarButtonItem, UICollectionView;
@protocol IGTwoFactorBackupMethodViewControllerDelegate;

@interface IGTwoFactorBackupMethodViewController : IGViewController <IGListAdapterDataSource, IGTwoFactorBackupCodeViewControllerDelegate, IGTwoFactorDisclosureSectionControllerDelegate, IGTwoFactorSwitchSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGTwoFactorStatusInfo *_statusInfo;
    IGTwoFactorSetupLogger *_setupLogger;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGTwoFactorSwitchCell *_loginNotificationSwitchCell;
    UIActivityIndicatorView *_loadingIndicatorView;
    UIBarButtonItem *_backButton;
    id <IGTwoFactorBackupMethodViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTwoFactorBackupMethodViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_enableUserInteraction:(_Bool)arg1;
- (void)_onBackButtonTapped;
- (void)_updateLoginNotificationSetting:(_Bool)arg1;
- (id)_configureOtherBackupCode;
- (id)_configureLoginNotificationSwitch;
- (id)_configureHeader;
- (void)twoFactorBackupCodeViewControllerDidTapOnBottomButton:(id)arg1;
- (void)twoFactorBackupCodeViewController:(id)arg1 didUpdateBackupCode:(id)arg2;
- (void)twoFactorDisclosureSectionController:(id)arg1 didSelectCellWithViewModel:(id)arg2;
- (void)twoFactorSwitchSectionController:(id)arg1 viewModel:(id)arg2 cell:(id)arg3 didToggle:(_Bool)arg4;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 statusInfo:(id)arg2 setupLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

