//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGARlinkDetectedCardDelegate-Protocol.h"
#import "IGAnalyticsModule-Protocol.h"
#import "IGFollowControllerDelegate-Protocol.h"

@class IGARLinkDetectedCardView, IGNametagLoggingContext, IGNametagParsedCardModel, IGUser, IGUserSession, NSString, UITapGestureRecognizer, UIView;
@protocol IGARLinkDetectedCardViewControllerDelegate, IGAnalyticsEventLoggingProtocol;

@interface IGARLinkDetectedCardViewController : IGViewController <IGFollowControllerDelegate, IGARlinkDetectedCardDelegate, IGAnalyticsModule>
{
    IGUser *_detectedUser;
    IGUserSession *_userSession;
    IGARLinkDetectedCardView *_detectedCardView;
    UIView *_backgroundView;
    _Bool _fromStoryCamera;
    _Bool _fromFollowURL;
    UITapGestureRecognizer *_backgroundTapGestureRecognizer;
    IGNametagLoggingContext *_loggingContext;
    _Bool _firstTimeAppear;
    CDUnknownBlockType _onDismiss;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGARLinkDetectedCardViewControllerDelegate> _navigationDelegate;
    IGNametagParsedCardModel *_parsedCardModel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IGNametagParsedCardModel *parsedCardModel; // @synthesize parsedCardModel=_parsedCardModel;
@property(nonatomic) __weak id <IGARLinkDetectedCardViewControllerDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(retain, nonatomic) IGNametagLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
- (long long)preferredTabBarBehavior;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)detectedCardDidTapCloseButton;
- (void)followControllerDidDetectNewButtonState:(id)arg1;
- (void)followController:(id)arg1 buttonWasTappedWithAction:(long long)arg2;
- (void)followController:(id)arg1 didCompleteAction:(long long)arg2 success:(_Bool)arg3;
- (void)_onApplicationWillResignActiveNotification:(id)arg1;
- (void)_updateViewModel;
- (void)_didTapCustomPrimaryButton;
- (void)_didTapBackground;
- (void)_extendCard;
- (void)_didTapViewProfileButton;
- (void)_setParsedModel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 fromStoryCamera:(_Bool)arg2 fromFollowURL:(_Bool)arg3 loggingContext:(id)arg4 onDismiss:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
