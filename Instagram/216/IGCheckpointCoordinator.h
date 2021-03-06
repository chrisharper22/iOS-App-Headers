//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGChallengeUnderAgeViewControllerDelegate-Protocol.h"
#import "IGCheckpointBloksEnvironmentDelegate-Protocol.h"
#import "IGCheckpointCoordinatorProtocol-Protocol.h"
#import "IGCheckpointViewControllerProtocol-Protocol.h"

@class IGBloksAsyncActionHandler, IGCheckpointModel, IGSessionContext, NSString;
@protocol IGAPIClient, IGAnalyticsEventLoggingProtocol, IGChallengePresenting, IGCheckpointCoordinatorDelegate, IGSCPIDCaptureManagerProtocol;

@interface IGCheckpointCoordinator : NSObject <IGCheckpointBloksEnvironmentDelegate, IGChallengeUnderAgeViewControllerDelegate, IGCheckpointViewControllerProtocol, IGCheckpointCoordinatorProtocol>
{
    id <IGAPIClient> _networker;
    IGCheckpointModel *_checkpointModel;
    IGCheckpointModel *_prevCheckpointModel;
    IGSessionContext *_checkpointSession;
    long long _entryHostViewControllerIndex;
    _Bool _isPresentedModally;
    IGBloksAsyncActionHandler *_asyncActionHandler;
    id <IGSCPIDCaptureManagerProtocol> _idCaptureManager;
    id <IGChallengePresenting> _presenter;
    NSString *_instanceId;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGCheckpointCoordinatorDelegate> _delegate;
    NSString *_userID;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) __weak id <IGCheckpointCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentCheckpointWithHostViewController:(id)arg1 bloksAction:(id)arg2 bloksParams:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)_challengeRequestDictWithParams:(id)arg1;
- (id)_getViewControllerWithCheckpointModel:(id)arg1 hostViewController:(id)arg2 presentDirection:(long long)arg3;
- (void)_terminateChallengeWithHostViewController:(id)arg1;
- (void)_selectViewControllerWithPresentDirection:(long long)arg1 hostViewerController:(id)arg2 viewController:(id)arg3;
- (void)_pushViewControllerWithCheckpointModel:(id)arg1 hostViewController:(id)arg2 presentDirection:(long long)arg3;
- (void)_moveForwardWithCheckpointModel:(id)arg1 hostViewController:(id)arg2 presentDirection:(long long)arg3 authHeader:(id)arg4 routingHeaders:(id)arg5;
- (void)_showChallengeInBloksWithCheckpointModel:(id)arg1 hostViewController:(id)arg2 presentDirection:(long long)arg3;
- (void)_showChallengeInWWWBloksWithCheckpointModel:(id)arg1 hostViewController:(id)arg2;
- (void)_proceedChallengeInWebWithViewController:(id)arg1 webViewParameters:(id)arg2;
- (void)_exposeChallengeInWebWithCheckpointModel:(id)arg1 hostViewController:(id)arg2 presentDirection:(long long)arg3;
- (void)_switchChallengeExperienceWithCheckpointModel:(id)arg1 hostViewController:(id)arg2 presentDirection:(long long)arg3;
- (void)challengeUnderAgeViewControllerDidTerminate:(id)arg1;
- (void)checkpointBloksEnvironment:(id)arg1 didSwitchPlatformWithHostViewController:(id)arg2 checkpointDict:(id)arg3;
- (void)checkpointBloksEnvironment:(id)arg1 didTerminateWithChallengeType:(id)arg2 isCleared:(_Bool)arg3;
- (void)checkpointBloksEnvironment:(id)arg1 didSucceedWithType:(id)arg2;
- (void)checkpointBloksEnvironmentDidBackToLogin:(id)arg1;
- (void)viewControllerDidBackToLogin:(id)arg1;
- (void)viewControllerDidAbortChallenge:(id)arg1;
- (void)viewController:(id)arg1 didReplayWithData:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)viewControllerDidRewindChallenge:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)viewController:(id)arg1 didProceedWithData:(id)arg2 timeoutInterval:(double)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (void)viewController:(id)arg1 didProceedWithData:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)viewControllerDidResetChallenge:(id)arg1;
- (void)presentCheckpointWithHostViewController:(id)arg1 bloksAction:(id)arg2 bloksParams:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)presentCheckpointWithHostViewController:(id)arg1 checkpointModel:(id)arg2 isPresentedModally:(_Bool)arg3;
- (void)presentCheckpointWithHostViewController:(id)arg1 challengeURLString:(id)arg2 challengeContext:(id)arg3 isPresentedModally:(_Bool)arg4;
- (id)initWithCheckpointSession:(id)arg1 presenter:(id)arg2;
- (id)initWithSessionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

