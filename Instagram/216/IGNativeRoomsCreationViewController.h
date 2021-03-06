//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGDirectRecipientListViewControllerDelegate-Protocol.h"
#import "IGRoomsHeaderSectionControllerDelegate-Protocol.h"

@class IGNativeRoomsService, IGRoomsOneTapRoomCreationModel, IGUserSession, IGVideoCallRoomLogger, NSSet, NSString;
@protocol IGDirectRecipientListViewControllerType;

@interface IGNativeRoomsCreationViewController : IGViewController <IGAnalyticsModule, IGDirectRecipientListViewControllerDelegate, IGRoomsHeaderSectionControllerDelegate>
{
    IGNativeRoomsService *_roomsService;
    IGUserSession *_userSession;
    IGVideoCallRoomLogger *_logger;
    NSString *_roomURL;
    NSString *_roomURLStringForCopyPaste;
    NSString *_linkHash;
    IGViewController<IGDirectRecipientListViewControllerType> *_recipientListViewController;
    IGRoomsOneTapRoomCreationModel *_oneTapRoomCreationModel;
    _Bool _didSendOrShareLink;
    _Bool _isE2eEncrypted;
    NSSet *_selectedDirectRecipients;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)selectRecipientViewController:(id)arg1 didTapSendToGroupButtonWithSelectedRecipients:(id)arg2 sender:(id)arg3 text:(id)arg4 externalServices:(id)arg5 storyViewerViewModel:(id)arg6 storyViewerLoggingContext:(id)arg7 currentStoryItem:(id)arg8 loggingProvider:(id)arg9 media:(id)arg10 selectedPost:(id)arg11;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToCollabStoriesRecipient:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 willShowPrivacyBanner:(_Bool)arg2;
- (void)selectRecipientViewController:(id)arg1 willToggleFullScreenOn:(_Bool)arg2;
- (void)selectRecipientViewController:(id)arg1 didUpdateSelectedRecipients:(id)arg2;
- (void)selectRecipientViewControllerDidDismissRecipientList:(id)arg1 recipientsFromSearch:(id)arg2 bumpedRecipients:(id)arg3;
- (id)selectedRecipientsSoFarFromOneTapping:(id)arg1;
- (void)selectRecipientViewControllerDidTapPromote:(id)arg1;
- (void)selectRecipientViewControllerDidTapAddToHighlight:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToGroupStoriesRecipient:(id)arg2;
- (void)selectRecipientViewController:(id)arg1;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToBlastList:(id)arg2;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToExternalService:(long long)arg2 willShareToFbWithYourStoryButton:(_Bool)arg3;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToStoryTarget:(long long)arg2 willShareToFbWithYourStoryButton:(_Bool)arg3;
- (void)selectRecipientViewController:(id)arg1 didOneTapSendToDirectRecipient:(id)arg2 messageText:(id)arg3;
- (void)selectRecipientViewController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)selectRecipientViewControllerDidTapScheduleRoomButton:(id)arg1 expectedStartTime:(double)arg2 directRecipients:(id)arg3;
- (void)selectRecipientViewControllerDidTapFinishButton:(id)arg1 storySendTarget:(long long)arg2 sender:(id)arg3 directRecipients:(id)arg4 externalServices:(id)arg5 text:(id)arg6 fromOneTap:(_Bool)arg7 storyViewerViewModel:(id)arg8 storyViewerLoggingContext:(id)arg9 currentStoryItem:(id)arg10 loggingProvider:(id)arg11 media:(id)arg12 selectedPost:(id)arg13;
- (void)selectRecipientViewControllerDidTapBackButton:(id)arg1;
- (void)roomHeaderSectionControllerWillUpdateJoinRequestSettings:(id)arg1 isJoinRequestsEnabled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)roomsHeaderSectionControllerDidEncryptRoom:(id)arg1 isE2EEncrypted:(_Bool)arg2;
- (void)roomHeaderSectionControllerDidTapTurnOnE2eEncryption:(id)arg1 successHandler:(CDUnknownBlockType)arg2;
- (void)roomsHeaderSectionControllerTappedEditRoomName:(id)arg1;
- (void)roomsHeaderSectionControllerDidEditRoomName:(id)arg1;
- (void)roomsHeaderSectionControllerDidTapSettingsButton:(id)arg1;
- (void)roomsHeaderSectionControllerDidTapMoreOptionsButton:(id)arg1;
- (void)roomsHeaderSectionControllerDidShareLink:(id)arg1 activityType:(id)arg2;
- (void)roomsHeaderSectionControllerDidTapShareLink:(id)arg1;
- (void)_sendRoomsXMA:(id)arg1;
- (void)_sendScheduledRoomsInvite:(id)arg1 directRecipients:(id)arg2;
- (void)_sendRoomLinkToDirectRecipients:(id)arg1 fromOneTap:(_Bool)arg2 forScheduledRooms:(_Bool)arg3 expectedStartTime:(double)arg4;
- (void)_joinRoom;
- (void)_showJoinRoomDialog;
- (void)_showShareSheet;
- (void)_roomLinkSharedOrSent;
- (void)setDoneButtonEnabled:(_Bool)arg1;
- (id)_createRecipientListViewController;
- (void)_showRecipientListViewController;
- (id)_firstNameOrUserName;
- (void)_didTapDoneButton;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 oneTapRoomCreationModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

