//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGLiveInviteViewerConfirmationRequesting-Protocol.h"
#import "IGLiveViewerJoinLoadingViewControllerDelegate-Protocol.h"

@class IGLiveBroadcastIntentTarget, IGLiveInviteViewerConfirmationHandler, IGLiveViewerJoinLoadingViewController, IGUserSession, NSString;

@interface IGLiveViewerJoinFlowManager : NSObject <IGLiveInviteViewerConfirmationRequesting, IGLiveViewerJoinLoadingViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGLiveBroadcastIntentTarget *_intentTarget;
    IGLiveInviteViewerConfirmationHandler *_inviteViewerConfirmationHandler;
    IGLiveViewerJoinLoadingViewController *_loadingViewController;
}

- (void).cxx_destruct;
- (void)liveViewerJoinLoadingViewControllerDidCancel:(id)arg1;
- (void)storyViewerDidUnfollow:(id)arg1;
- (void)storyViewerDidMute:(id)arg1 didMutePosts:(_Bool)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (_Bool)confirmationHandlerShouldConfirmPresenting:(id)arg1;
- (void)_launchUserProfileForHostId:(id)arg1 animated:(_Bool)arg2;
- (void)_launchUserPostLiveScreenForBroadcast:(id)arg1 source:(long long)arg2 animated:(_Bool)arg3;
- (void)_launchPostLiveTVForBroadcast:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_dismissExistingLiveIfNeeded;
- (void)_presentForLoadedBroadcast:(id)arg1;
- (void)_presentAfterDismissingLiveWithLoadedBroadcast:(id)arg1;
- (void)confirmationHandler:(id)arg1 didLoadBroadcast:(id)arg2 error:(id)arg3;
- (void)confirmationHandler:(id)arg1 willLoadBroadcastWithId:(id)arg2;
- (void)_dismissLoadingViewControllerIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentLoadingViewControllerIfNeeded;
- (void)handleBroadcastIntentTarget:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

