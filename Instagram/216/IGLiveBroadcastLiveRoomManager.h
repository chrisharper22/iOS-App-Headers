//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveAcceptRequestSheetViewControllerDelegate-Protocol.h"
#import "IGLiveAddonConforming-Protocol.h"
#import "IGLiveBroadcastViewerListQueryServiceDelegate-Protocol.h"
#import "IGLiveHeaderHostSheetViewControllerDelegate-Protocol.h"
#import "IGLiveInviteControllerDelegate-Protocol.h"
#import "IGLiveInviteGuestControllerDelegate-Protocol.h"
#import "IGLiveRequestToJoinCommentsUpdaterDelegate-Protocol.h"

@class IGLiveBroadcastController, IGLiveBroadcastLogger, IGLiveBroadcastViewerListQueryService, IGLiveHeaderHostSheetViewController, IGLiveInviteGuestSheetViewController, IGLiveInviteSheetViewController, IGLiveRequestToJoinCommentsUpdater, IGLiveRequestToJoinPuller, IGLiveRequestToJoinService, IGUserSession, NSArray, NSMutableDictionary, NSString, UIViewController;
@protocol IGLiveAddonCoordinating, IGLiveBroadcastLiveRoomManagerDelegate;

@interface IGLiveBroadcastLiveRoomManager : NSObject <IGLiveHeaderHostSheetViewControllerDelegate, IGLiveInviteControllerDelegate, IGLiveInviteGuestControllerDelegate, IGLiveRequestToJoinCommentsUpdaterDelegate, IGLiveBroadcastViewerListQueryServiceDelegate, IGLiveAcceptRequestSheetViewControllerDelegate, IGLiveAddonConforming>
{
    IGUserSession *_userSession;
    CDStruct_eef638a9 _liveBroadcastConfig;
    NSString *_broadcastTitle;
    NSArray *_taggedPartners;
    NSMutableDictionary *_inviteTimeoutTimerMap;
    IGLiveRequestToJoinPuller *_requestToJoinPuller;
    IGLiveRequestToJoinCommentsUpdater *_requestToJoinCommentUpdater;
    IGLiveRequestToJoinService *_requestToJoinService;
    _Bool _requestToJoinEnabled;
    IGLiveInviteSheetViewController *_inviteSheetViewController;
    NSMutableDictionary *_inviteInfoMap;
    IGLiveHeaderHostSheetViewController *_hostSheetViewController;
    IGLiveBroadcastViewerListQueryService *_viewerListService;
    IGLiveInviteGuestSheetViewController *_inviteGuestSheetViewController;
    _Bool _canAssignModerator;
    _Bool _disabled;
    _Bool _addonLifeCycleEventEnabled;
    id <IGLiveAddonCoordinating> _coordinator;
    NSString *_identifier;
    IGLiveBroadcastController *_broadcastController;
    unsigned long long _maxNumberOfInvitees;
    UIViewController *_presenter;
    id <IGLiveBroadcastLiveRoomManagerDelegate> _delegate;
    IGLiveBroadcastLogger *_logger;
    NSString *_analyticModule;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *analyticModule; // @synthesize analyticModule=_analyticModule;
@property(retain, nonatomic) IGLiveBroadcastLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <IGLiveBroadcastLiveRoomManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) unsigned long long maxNumberOfInvitees; // @synthesize maxNumberOfInvitees=_maxNumberOfInvitees;
@property(readonly, nonatomic) _Bool requestToJoinEnabled; // @synthesize requestToJoinEnabled=_requestToJoinEnabled;
@property(readonly, nonatomic) IGLiveBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(nonatomic) _Bool addonLifeCycleEventEnabled; // @synthesize addonLifeCycleEventEnabled=_addonLifeCycleEventEnabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IGLiveAddonCoordinating> coordinator; // @synthesize coordinator=_coordinator;
- (void)viewerListQueryService:(id)arg1 didLoadFinalViewerList:(id)arg2 withFinalViewerCount:(long long)arg3 userPayUpdate:(id)arg4;
- (void)viewerListQueryService:(id)arg1 didLoadViewerList:(id)arg2;
- (id)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)receiveEvent:(unsigned long long)arg1 from:(id)arg2 payload:(id)arg3;
- (void)liveRequestToJoinCommentsUpdater:(id)arg1 willShowInviteSheetForRequestedUsers:(id)arg2;
- (void)hostSheetViewController:(id)arg1 didRemoveModerator:(id)arg2;
- (void)hostSheetViewController:(id)arg1 didAddModerator:(id)arg2;
- (void)hostSheetViewController:(id)arg1 didTapActionButtonForGuest:(id)arg2 atState:(long long)arg3;
- (void)hostSheetViewControllerDidRequestInvite:(id)arg1 forUser:(id)arg2;
- (void)hostSheetViewControllerDidRequestInvite:(id)arg1;
- (void)liveInviteGuestController:(id)arg1 didCancelInviteForUser:(id)arg2;
- (void)liveInviteGuestController:(id)arg1 didInviteUser:(id)arg2;
- (void)acceptRequestSheetViewController:(id)arg1 didAcceptRequestFromUser:(id)arg2;
- (void)liveInviteSheetDidDismiss;
- (void)liveInviteSheetDidDismissWithSelectedUsers:(id)arg1;
- (void)setRequestToJoinCommentEnabled:(_Bool)arg1;
- (void)_stopPullingForRequestToJoin;
- (void)_didPullForRequestToJoinWithUsers:(id)arg1 totalCount:(long long)arg2 unseenCount:(long long)arg3;
- (void)_startPullingForRequestToJoin;
- (void)_finishSettingToggleRequestFrom:(_Bool)arg1 to:(_Bool)arg2 success:(_Bool)arg3;
- (void)_setRequestToJoinFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)setRequestToJoinEnabled:(_Bool)arg1;
- (void)startUpdateCommentViewWithUpdater:(id)arg1;
- (void)userPayUpdate:(id)arg1;
- (void)_displayToastWithText:(id)arg1 colorType:(long long)arg2;
- (void)displayUnableToJoinToastForUser:(id)arg1;
- (void)displayUserLeftToastForUser:(id)arg1;
- (void)_didRemoveInvitedUser:(id)arg1 success:(_Bool)arg2;
- (void)_didConfirmRemoveInvitedUser:(id)arg1;
- (void)dismissInvitedUser:(id)arg1;
- (void)_didBlockInvitedUser:(id)arg1 success:(_Bool)arg2;
- (void)blockInvitedUser:(id)arg1;
- (void)failInviteForUserIds:(id)arg1;
- (void)declineInviteForUserId:(id)arg1;
- (void)_didCancelInviteForUserId:(id)arg1 success:(_Bool)arg2;
- (void)cancelInviteForUserId:(id)arg1 reason:(long long)arg2;
- (void)detachForUserId:(id)arg1;
- (void)attachForUserId:(id)arg1;
- (void)_timedCancelInviteForUser:(id)arg1;
- (void)_tearDownInviteTimeoutTimerForUser:(id)arg1;
- (void)_setupInviteTimeoutTimerForUser:(id)arg1;
- (void)inviteUsers:(id)arg1;
- (id)_usersFilteredByBlock:(CDUnknownBlockType)arg1;
- (id)usersWithInviteState:(long long)arg1;
- (unsigned long long)numberOfUserWithInviteState:(long long)arg1;
- (long long)inviteStateForUserId:(id)arg1;
- (id)invitedUserForUserId:(id)arg1;
- (_Bool)hasActiveInvitedUsers;
- (id)anyInvitedUser;
@property(readonly, nonatomic) _Bool canInviteMoreUsers;
- (void)_clearHostSheetView;
- (_Bool)isPresentingHostSheet;
- (void)dismissHostSheetViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentHostSheetView;
- (void)_updateGuestStateForUser:(id)arg1;
- (void)_presentMaxGuestErrorDialogForMaxInviteeCount:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isShowingInviteSheet;
- (void)dismissInviteSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentInviteGuestSheetView;
- (void)presentAcceptRequestSheetView;
- (void)presentInviteSheetViewWithContext:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 broadcastController:(id)arg2 liveBroadcastConfig:(CDStruct_eef638a9)arg3 broadcastTitle:(id)arg4 taggedPartners:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

