//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGRoomsPeopleManagementViewControllerDelegate-Protocol.h"
#import "IGRoomsSettingViewControllerDelegate-Protocol.h"
#import "IGVideoCallInCallSettingsDataSourceDelegate-Protocol.h"

@class IGRTCKragleCall, IGUserSession, IGVideoCallInCallSettingsDataSource, IGVideoCallUserDataSource, IGViewController, NSString;
@protocol IGVideoCallInCallSettingsUIHelperDelegate;

@interface IGVideoCallInCallSettingsUIHelper : NSObject <IGRoomsSettingViewControllerDelegate, IGVideoCallInCallSettingsDataSourceDelegate, IGRoomsPeopleManagementViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGVideoCallUserDataSource *_userDataSource;
    IGViewController *_parentViewController;
    IGRTCKragleCall *_call;
    _Bool _isThreadCall;
    IGVideoCallInCallSettingsDataSource *_settingsDataSource;
    NSString *_linkSettingsURL;
    id <IGVideoCallInCallSettingsUIHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoCallInCallSettingsUIHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateJoinRequestSettings:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)usersPendingJoinRequestsDidUpdate:(id)arg1;
- (void)peopleManagementViewControllerDidUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2;
- (void)peopleManagementViewControllerWillUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)roomSettingsViewControllerDidUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2;
- (void)roomSettingsViewControllerWillUpdateJoinRequestSettings:(id)arg1 joinRequestsEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)roomSettingsViewControllerDidTapChangeRoomName:(id)arg1;
- (void)roomSettingsViewControllerDidChangeRoomName:(id)arg1 newRoomName:(id)arg2;
- (void)roomSettingsViewControllerDidEncryptRoom:(id)arg1 isE2eEncrypted:(_Bool)arg2;
- (void)roomSettingsViewControllerDidTapTurnOnE2eEncryption:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void)handleE2eeKeysButtonTapped;
- (void)handlePeopleButtonTappedWithLinkURL:(id)arg1 isParticipantOwner:(_Bool)arg2 roomLogger:(id)arg3 inCallRoomsLogger:(id)arg4;
- (void)handleCallSettingsButtonTappedWithLinkURL:(id)arg1 isJoinRequestsEnabled:(_Bool)arg2 isE2eEncrypted:(_Bool)arg3;
- (void)handleFeedbackButtonTappedWithLinkHash:(id)arg1;
- (id)initWithUserSession:(id)arg1 parentViewController:(id)arg2 call:(id)arg3 isThreadCall:(_Bool)arg4 userDataSource:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

