//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGAccountPrivacyChangeListener-Protocol.h"
#import "IGFriendStatusChangedListener-Protocol.h"
#import "IGPartialModalSheetListener-Protocol.h"
#import "IGSettingsIconSwitchViewProviderDelegate-Protocol.h"
#import "IGSettingsSearch-Protocol.h"

@class IGBloksAsyncActionHandler, IGDirectReachabilityLinkedPageIGDMAccessSettingLogger, IGFavoritesPresentationManager, IGPrivacyCookieConsentHelper, IGSettingsPrivacyModel, NSNumber, NSString;

@interface IGSettingsPrivacyViewController : IGGroupedTableViewController <IGSettingsIconSwitchViewProviderDelegate, IGAccountPrivacyChangeListener, IGPartialModalSheetListener, IGFriendStatusChangedListener, IGSettingsSearch>
{
    IGSettingsPrivacyModel *_privacyModel;
    IGBloksAsyncActionHandler *_asyncActionHandler;
    _Bool _openedFromQP;
    _Bool _shouldSetPrivateByDefault;
    NSString *_qpID;
    IGFavoritesPresentationManager *_favoritesPresentationManager;
    _Bool _isPanoUIRefreshOn;
    _Bool _detailedPrivacySwitchDialogEnabled;
    _Bool _shouldContinuePrivacySwitch;
    NSNumber *_followRequestsCount;
    IGDirectReachabilityLinkedPageIGDMAccessSettingLogger *_linkedPageIGDMAccessSettingLogger;
    _Bool _postsRowEnabled;
    IGPrivacyCookieConsentHelper *_igPrivacyCookieConsentHelper;
}

- (void).cxx_destruct;
- (void)_showRestrictListViewController;
- (void)_showBlockListViewController;
- (void)friendStatusChangedForUser:(id)arg1 withUserAction:(long long)arg2;
- (void)_showRestrictNux;
- (void)partialModalSheet:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 willChangeState:(unsigned long long)arg2;
- (void)partialModalSheet:(id)arg1 didUpdateOffset:(double)arg2 presentationProgress:(double)arg3;
- (void)partialModalSheetDidDismiss:(id)arg1;
- (void)didAcknowledgePrivacyToggleWarning;
- (void)userSession:(id)arg1 didChangeToPrivacyStatus:(long long)arg2;
- (void)_fetchFollowRequestsCount;
- (void)_logDataWithEventName:(id)arg1 extraDict:(id)arg2;
- (void)_performPostPrivacyUpdatingAction:(_Bool)arg1;
- (void)_performActionForDataPermissionsRowType:(long long)arg1;
- (void)_performActionForConnectionsRowType:(long long)arg1;
- (void)_performActionForAccountPrivacyRowType:(long long)arg1;
- (void)_performActionForInteractionsRowType:(long long)arg1;
- (void)performActionForSearchText:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)_tableView:(id)arg1 didSelectDataPermissionsRow:(long long)arg2;
- (void)_tableView:(id)arg1 didSelectConnectionsRow:(long long)arg2;
- (void)_tableView:(id)arg1 didSelectInteractionsRow:(long long)arg2;
- (void)_updatePrivacyWithSwitchIsOn:(_Bool)arg1;
- (void)settingsIconSwitchViewProvider:(id)arg1 switchIsOn:(_Bool)arg2;
- (id)_tableView:(id)arg1 dataPermissionsCellForIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 connectionsCellForIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 interactionsCellForIndexPath:(id)arg2;
- (id)_tableView:(id)arg1 accountPrivacyCellForIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_prepareAppearance;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_handleFetchDirectReachabilityLinkedPageIGDMAccessSettingCompletionWithSuccess:(_Bool)arg1 linkedPageIGDMAccessSettings:(id)arg2 error:(id)arg3;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

