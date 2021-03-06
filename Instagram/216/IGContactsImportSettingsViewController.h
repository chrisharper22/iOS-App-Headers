//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGFindFriendsHelperDelegate-Protocol.h"
#import "IGSwitchViewProviderDelegate-Protocol.h"

@class IGContactsFriendsHelper, IGContactsUserStore, IGSwitchViewModel, IGTableLayoutSpec, IGUserSession, NSString;
@protocol IGAPIClient;

@interface IGContactsImportSettingsViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGFindFriendsHelperDelegate, IGSwitchViewProviderDelegate>
{
    id <IGAPIClient> _networker;
    IGContactsFriendsHelper *_contactsHelper;
    IGUserSession *_userSession;
    IGTableLayoutSpec *_layoutSpec;
    IGSwitchViewModel *_viewModelForContactImportCell;
    IGContactsUserStore *_contactsUserStore;
}

- (void).cxx_destruct;
- (_Bool)_hasContactPermissions;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)preferredTabBarBehavior;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

