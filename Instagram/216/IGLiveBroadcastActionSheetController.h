//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveInviteModeratorViewControllerDelegate-Protocol.h"

@class IGLiveBroadcastLogger, IGLiveInviteModeratorViewController, IGUser, IGUserSession, NSString, UIViewController;
@protocol IGLiveBroadcastActionSheetControllerDelegate;

@interface IGLiveBroadcastActionSheetController : NSObject <IGLiveInviteModeratorViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGUser *_liveVideoSystemUser;
    UIViewController *_viewController;
    IGLiveBroadcastLogger *_logger;
    _Bool _passUnifiedActionSheetQE;
    _Bool _checkedUnifiedActionSheetQE;
    IGLiveInviteModeratorViewController *_inviteModeratorViewController;
    id <IGLiveBroadcastActionSheetControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveBroadcastActionSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_shareLinkForBroadcaster:(id)arg1 broadcastId:(id)arg2 module:(id)arg3;
- (void)_copyLinkForBroadcaster:(id)arg1 broadcastId:(id)arg2 module:(id)arg3;
- (id)_liveRoomWithActionWithComment:(id)arg1;
- (id)_pinActionWithComment:(id)arg1;
- (id)_unpinActionWithComment:(id)arg1;
- (id)_reportCommentActionWithComment:(id)arg1 module:(id)arg2;
- (id)_deleteCommentActionWithComment:(id)arg1 broadcastId:(id)arg2;
- (id)_hideLiveFromActionWithComment:(id)arg1;
- (id)_removeUserFromComment:(id)arg1 broardcastId:(id)arg2;
- (id)_blockActionWithUser:(id)arg1 module:(id)arg2;
- (id)_followActionFromComment:(id)arg1 module:(id)arg2;
- (id)_removeModeratorWithBroadcastId:(id)arg1 user:(id)arg2;
- (id)_addModeratorActionWithComment:(id)arg1 broadcastId:(id)arg2;
- (void)_showinviteModeratorViewControllerWithBroadcastId:(id)arg1;
- (void)liveInviteModeratorViewController:(id)arg1 didAddModerator:(id)arg2;
- (void)presentActionSheetForComment:(id)arg1 isPinnedComment:(_Bool)arg2 isCurrentlyLiveWith:(_Bool)arg3 isCommentFromGuest:(_Bool)arg4 canAssignModerator:(_Bool)arg5 broadcastId:(id)arg6 module:(id)arg7;
- (void)presentActionSheetForMoreOptionsWithCommentsCurrentlyMuted:(_Bool)arg1 requestToJoinCurrentlyEnabled:(_Bool)arg2 questionsCurrentlyEnabled:(_Bool)arg3 shareLinkEnabled:(_Bool)arg4 practiceModeEnabled:(_Bool)arg5 canToggleBadges:(_Bool)arg6 badgesCurrentlyEnabled:(_Bool)arg7 broadcaster:(id)arg8 broadcastId:(id)arg9 module:(id)arg10;
- (id)initWithUserSession:(id)arg1 liveVideoSystemUser:(id)arg2 viewController:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

