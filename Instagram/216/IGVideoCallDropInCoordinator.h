//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCoPresenceManagerListener-Protocol.h"
#import "IGVideoCallDropInCoordinatorProtocol-Protocol.h"

@class MISSING_TYPE;

@interface IGVideoCallDropInCoordinator : NSObject <IGVideoCallDropInCoordinatorProtocol, IGCoPresenceManagerListener>
{
    MISSING_TYPE *announcer;
    MISSING_TYPE *launcherSet;
    MISSING_TYPE *intentHandler;
    MISSING_TYPE *minimizedViewerPresenter;
    MISSING_TYPE *networker;
    MISSING_TYPE *videoCallDismissHelper;
    MISSING_TYPE *videoCallManager;
    MISSING_TYPE *coPresenceManager;
    MISSING_TYPE *timeoutTimer;
    MISSING_TYPE *subscription;
    MISSING_TYPE *model;
    MISSING_TYPE *callKey;
    MISSING_TYPE *hasEscalatedToBidirectional;
    MISSING_TYPE *userFlowLogger;
}

- (void).cxx_destruct;
- (id)init;
- (void)appBackgroundedWhileStreamingOneWayIncoming;
- (void)appBackgroundedWhileStreamingOneWayOutgoing;
- (void)didLeaveThread;
- (void)coPresenceManager:(id)arg1 didFinishUpdatingThreadPresenceStates:(id)arg2;
- (void)dropInOverlayDidTapAcceptButton;
- (void)dropInOverlayDidTapCancelButton;
- (void)dropInDidUpdate:(id)arg1;
- (void)didTapPulsingVideoIcon;
- (void)presentActionSheetFromViewController:(id)arg1;
- (unsigned long long)streamingDirection;
- (unsigned long long)dropInState;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)handleIncomingCallWithJoinInfo:(id)arg1 joinContext:(id)arg2 threadId:(id)arg3 threadDisplayName:(id)arg4 dropInMetadata:(id)arg5 presenceSessionId:(id)arg6;
- (void)dropInCallIsReadyWithCallSession:(id)arg1;
- (void)willStartCallSession:(id)arg1 presenceSessionId:(id)arg2;
- (id)initWithVideoCallManager:(id)arg1 launcherSet:(id)arg2 intentHandler:(id)arg3 minimizedViewerPresenter:(id)arg4 networker:(id)arg5 videoCallDismissHelper:(id)arg6 coPresenceManager:(id)arg7;

@end
