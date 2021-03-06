//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGTapButton, IGTextButton, IGVideoCallProfileImageContainerView, NSString, UIButton, UILabel, UIVisualEffectView;
@protocol IGVideoCallRingOverlayViewDelegate;

@interface IGVideoCallRingOverlayView : IGPassthroughView
{
    IGVideoCallProfileImageContainerView *_profileImageView;
    NSString *_threadName;
    _Bool _isGroupThread;
    _Bool _animated;
    _Bool _shouldAnimate;
    _Bool _isAudioCall;
    UILabel *_threadNameLabel;
    UILabel *_ringLabel;
    UILabel *_messageTitleLabel;
    UILabel *_messageDescriptionLabel;
    UILabel *_cancelButtonLabel;
    UILabel *_callAgainButtonLabel;
    IGTapButton *_cancelButton;
    IGTapButton *_callAgainButton;
    UIButton *_closeButton;
    long long _overlayMessageType;
    UIVisualEffectView *_blurOverlay;
    _Bool _enableBugReporting;
    IGTextButton *_bugReportButton;
    id <IGVideoCallRingOverlayViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGVideoCallRingOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_hideAllFooterButtonsAndShowCloseButton;
- (void)_showCallAgainAndCancelButtons;
- (void)_updateButtonsAndOverlay;
- (void)_updateChromeForMessageType:(long long)arg1;
- (void)_bugReportButtonTapped;
- (void)_closeButtonTapped:(id)arg1;
- (void)_callAgainButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (long long)overlayMessageType;
- (void)showCallFailedOverlay;
- (void)showCallReceiverIneligibleOverlay;
- (void)showCallEndedOverlay;
- (void)showCallIsFullOverlay;
- (void)showRingScreen;
- (void)showContactScreen;
- (void)showCallScreen;
- (void)showTimeoutOverlay;
- (void)layoutSubviews;
- (id)initWithThreadName:(id)arg1 userProfileImages:(id)arg2 module:(id)arg3 messageType:(long long)arg4 isAudioCall:(_Bool)arg5 shouldAnimate:(_Bool)arg6 enableBugReporting:(_Bool)arg7;

@end

