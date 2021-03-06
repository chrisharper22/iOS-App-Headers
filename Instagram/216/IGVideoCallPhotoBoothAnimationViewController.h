//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGCountdownControllerDelegate-Protocol.h"

@class IGCountdownController, IGPassthroughView, IGStoryPhotoBoothCountdownAnimationController, KeyframesView, NSString;
@protocol IGVideoCallPhotoBoothFlowCoordinatorInterface;

@interface IGVideoCallPhotoBoothAnimationViewController : UIViewController <IGCountdownControllerDelegate>
{
    UIViewController *_presentingViewController;
    id <IGVideoCallPhotoBoothFlowCoordinatorInterface> _delegate;
    IGCountdownController *_countdownController;
    IGStoryPhotoBoothCountdownAnimationController *_animationsController;
    KeyframesView *_countdownAnimationView;
    KeyframesView *_miniCountdownAnimationView;
    IGPassthroughView *_controlsView;
    _Bool _isPhotoBoothActive;
}

- (void).cxx_destruct;
- (void)countdownControllerDidInvalidateTimer:(id)arg1;
- (void)countdownController:(id)arg1 didCountTo:(long long)arg2;
- (void)_loadCountdownAnimations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)startCountdownForNextCaptureWithPhotoBoothActive:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

