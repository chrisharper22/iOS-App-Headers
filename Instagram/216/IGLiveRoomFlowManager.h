//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveInviteViewerConfirmationRequesting-Protocol.h"

@class IGLiveBroadcast, IGLiveInviteViewerConfirmationHandler, IGLiveNotificationStore, IGLiveViewStatusTracker, IGUserSession, NSString;

@interface IGLiveRoomFlowManager : NSObject <IGLiveInviteViewerConfirmationRequesting>
{
    IGUserSession *_userSession;
    IGLiveNotificationStore *_notificationStore;
    IGLiveViewStatusTracker *_viewStatusTracker;
    IGLiveInviteViewerConfirmationHandler *_inviteViewerConfirmationHandler;
    IGLiveBroadcast *_broadcast;
}

- (void).cxx_destruct;
- (void)storyViewerDidUnfollow:(id)arg1;
- (void)storyViewerDidMute:(id)arg1 didMutePosts:(_Bool)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (_Bool)confirmationHandlerShouldConfirmPresenting:(id)arg1;
- (void)confirmationHandler:(id)arg1 didLoadBroadcast:(id)arg2 error:(id)arg3;
- (void)confirmationHandler:(id)arg1 willLoadBroadcastWithId:(id)arg2;
- (void)_continueToPresentLiveViewerViewController;
- (void)_showLiveWithViewerControllerWithServerInfoData:(id)arg1 entryPoint:(long long)arg2;
- (void)_launchUserProfileForUserId:(id)arg1;
- (void)_handleBroadcast:(id)arg1 serverInfoData:(id)arg2 source:(long long)arg3 autoJoin:(_Bool)arg4;
- (void)handleLiveWithIntentTarget:(id)arg1;
- (_Bool)isBroadcastActiveForBroadcastId:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

