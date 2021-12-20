//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import "IGRoomsPeopleManagementViewControllerDelegate-Protocol.h"
#import "IGSwitchViewProviderDelegate-Protocol.h"

@class IGRTCKragleCall, IGRoomsInCallLogger, IGRoomsIncallRoomModel, IGUser, IGUserSession, IGVideoCallInCallSettingsUIHelper, IGVideoCallRoomLogger, IGVideoCallUserDataSource, NSArray, NSString;
@protocol IGSubscriptionToken;

@interface IGRoomsInCallSettingsViewController : IGGroupedTableViewController <IGSwitchViewProviderDelegate, IGRoomsPeopleManagementViewControllerDelegate>
{
    NSArray *_settingsSections;
    IGRTCKragleCall *_call;
    IGRoomsInCallLogger *_inCallRoomsLogger;
    IGUserSession *_userSession;
    IGUser *_currentUser;
    NSString *_roomHash;
    NSString *_roomUrl;
    IGRoomsIncallRoomModel *_currentRoomModel;
    NSArray *_usersPendingJoinRequests;
    IGVideoCallUserDataSource *_userDataSource;
    _Bool _isJoinRequestsEnabled;
    _Bool _isE2eEncrypted;
    IGVideoCallInCallSettingsUIHelper *_settingsUIHelper;
    IGVideoCallRoomLogger *_roomLogger;
    id <IGSubscriptionToken> _roomModelSubscriptionToken;
}

- (void).cxx_destruct;
- (void)_handleEngineModelUpdated:(id)arg1;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (void)_updateRoomLockState;
- (void)_showUnlockAlert;
- (void)_shareRoomButtonTapped;
- (void)_e2eeKeysButtonTapped;
- (void)_endRoomButtonTapped;
- (void)_feedbackButtonTapped;
- (void)_peopleButtonTapped;
- (void)_roomSettingsButtonTapped;
- (void)_lockRoomSwitchTapped;
- (void)_setupAccessibilityForCell:(id)arg1 withLabel:(id)arg2;
- (_Bool)_isCurrentParticipantOwner;
- (void)_adjustSettingsSectionBasedOnOwner;
- (void)_updateJoinRequestSettings:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)peopleManagementViewControllerDidUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2;
- (void)peopleManagementViewControllerWillUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 call:(id)arg2 userDataSource:(id)arg3 roomLogger:(id)arg4 inCallRoomsLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
