//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGLiveBroadcastCaptureManagerDelegate-Protocol.h"
#import "IGLiveBroadcastControllerDelegate-Protocol.h"
#import "IGLiveBroadcastSetupViewDelegate-Protocol.h"

@class IGLiveBroadcastCaptureManager, IGLiveBroadcastController, IGLiveBroadcastLogger, IGLiveBroadcastSetupShoppingConfig, IGLiveBroadcastSetupView, IGServiceManager, IGUser, IGUserDefaults, NSArray, NSString;
@protocol FBCancelable, IGAPIClient, IGLiveBroadcastSetupViewControllerDelegate, IGUserLauncherSetProviding;

@interface IGLiveBroadcastSetupViewController : UIViewController <IGLiveBroadcastControllerDelegate, IGLiveBroadcastCaptureManagerDelegate, IGLiveBroadcastSetupViewDelegate>
{
    IGLiveBroadcastController *_broadcastController;
    IGLiveBroadcastSetupView *_contentView;
    IGLiveBroadcastCaptureManager *_broadcastCaptureManager;
    _Bool _didCancelBroadcast;
    IGLiveBroadcastLogger *_logger;
    struct CGSize _cameraViewSize;
    IGServiceManager *_serviceManager;
    IGUserDefaults *_userDefaults;
    id <IGUserLauncherSetProviding> _launcherSet;
    id <IGAPIClient> _networker;
    NSString *_title;
    NSArray *_taggedPartners;
    _Bool _isUserPayActivated;
    unsigned long long _audienceType;
    _Bool _isVideoToggledOff;
    IGLiveBroadcastSetupShoppingConfig *_shoppingConfig;
    IGUser *_fundraiserCharity;
    NSString *_goalSettingMessage;
    id <FBCancelable> _creationRequest;
    id <IGLiveBroadcastSetupViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveBroadcastSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityPerformEscape;
- (void)liveBroadcastControllerVideoCaptureStalled:(id)arg1;
- (void)liveBroadcastControllerAudioCaptureStalled:(id)arg1;
- (void)liveBroadcastController:(id)arg1 didResumeVideoWithGuestIdentifier:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didStallVideoWithGuestIdentifier:(id)arg2;
- (void)liveBroadcastControllerDidDismissFromCall:(id)arg1 reason:(long long)arg2;
- (void)liveBroadcastController:(id)arg1 didFailInvitationWithUserIds:(id)arg2;
- (void)liveBroadcastController:(id)arg1 guestDidDeclineInvitation:(id)arg2;
- (void)liveBroadcastControllerDidReceiveInvitation:(id)arg1;
- (void)liveBroadcastController:(id)arg1 didUpdateStatusToConnectingWithUserId:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didRemoveVideoWithGuestIdentifier:(id)arg2;
- (void)liveBroadcastController:(id)arg1 didAddVideoInView:(id)arg2 withGuestIdentifier:(id)arg3;
- (void)liveBroadcastControllerDidReconnect:(id)arg1;
- (void)liveBroadcastControllerDidLoseConnection:(id)arg1;
- (void)liveBroadcastController:(id)arg1 didUpdateBroadcastWithStats:(id)arg2;
- (void)liveBroadcastControllerDidSwapBackToRtmp:(id)arg1;
- (void)liveBroadcastController:(id)arg1 broadcastForSession:(id)arg2 didFailWithError:(id)arg3;
- (void)liveBroadcastController:(id)arg1 didConnectToServerForSession:(id)arg2 withSpeedTestSuccess:(_Bool)arg3 badgesEnabled:(_Bool)arg4;
- (void)captureManagerDidEndInterruption:(id)arg1;
- (void)captureManagerWasInterrupted:(id)arg1;
- (void)captureManagerDidStartRunning:(id)arg1;
- (void)captureManager:(id)arg1 activatingAudioSessionDidError:(id)arg2;
- (void)captureManager:(id)arg1 didCaptureVideoBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManager:(id)arg1 didCaptureAudioBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureManagerDidChangeCamera:(id)arg1 toPosition:(long long)arg2;
- (void)captureManagerWillChangeCamera:(id)arg1;
- (void)doubleTappedInSetupView:(id)arg1;
- (void)cancelButtonTappedInSetupView:(id)arg1;
- (void)_cancelBroadcastWithReason:(long long)arg1;
- (void)_finishSetup:(_Bool)arg1;
- (void)_onAppWillResignActive:(id)arg1;
- (void)_onAppWillTerminate:(id)arg1;
@property(readonly, nonatomic) struct CGSize captureVideoSize;
- (long long)currentCameraPosition;
- (void)_createBroadcast;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 captureManager:(id)arg2 cameraViewSize:(struct CGSize)arg3 captureVideoSize:(struct CGSize)arg4 logger:(id)arg5 title:(id)arg6 taggedPartners:(id)arg7 shoppingConfig:(id)arg8 fundraiserCharity:(id)arg9 isUserPayActivated:(_Bool)arg10 audienceType:(unsigned long long)arg11 isInternalMute:(_Bool)arg12 isVideoToggledOff:(_Bool)arg13 goalSettingMessage:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

