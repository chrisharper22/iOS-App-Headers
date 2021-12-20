//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectCallButton, IGDirectJointCallButton;
@protocol IGDirectThreadCallButtonsCoordinatorDelegate, IGUserLauncherSet;

@interface IGDirectThreadCallButtonsCoordinator : NSObject
{
    id <IGDirectThreadCallButtonsCoordinatorDelegate> _delegate;
    IGDirectCallButton *_videoCallButton;
    IGDirectCallButton *_audioCallButton;
    IGDirectJointCallButton *_audioJointCallButton;
    IGDirectJointCallButton *_videoJointCallButton;
    _Bool _hasActiveAudioCall;
    _Bool _hasActiveVideoCall;
    _Bool _isThreadE2eeEncrypted;
    id <IGUserLauncherSet> _launcherSet;
}

- (void).cxx_destruct;
- (id)_createBarButtonItemForJointCallButton:(id)arg1;
- (void)_setupJointCallButton:(long long)arg1;
- (void)_setupAudioCallButton;
- (void)_setupVideoCallButton;
- (void)_didTapAudioButton:(id)arg1;
- (void)_didTapVideoButton:(id)arg1;
- (void)setAudioCallButtonActive:(_Bool)arg1;
- (void)setVideoCallButtonActive:(_Bool)arg1 hasAnActiveUser:(_Bool)arg2;
- (id)callButtons;
- (id)initWithAudioCallEnabled:(_Bool)arg1 delegate:(id)arg2 isThreadE2eeEncrypted:(_Bool)arg3 launcherSet:(id)arg4;

@end
