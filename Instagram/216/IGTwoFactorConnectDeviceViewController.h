//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGTwoFactorConnectDeviceViewDelegate-Protocol.h"

@class IGTwoFactorConnectDeviceView, IGTwoFactorSetupFlowContext, IGTwoFactorSetupLogger, IGTwoFactorTOTPSeed, IGUserSession, NSString;
@protocol IGTwoFactorMultipleTOTPKeyDelegate;

@interface IGTwoFactorConnectDeviceViewController : IGViewController <IGTwoFactorConnectDeviceViewDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate>
{
    IGTwoFactorConnectDeviceView *_contentView;
    IGUserSession *_userSession;
    IGTwoFactorSetupLogger *_setupLogger;
    IGTwoFactorTOTPSeed *_seed;
    IGTwoFactorSetupFlowContext *_setupFlowContext;
    id <IGTwoFactorMultipleTOTPKeyDelegate> _keyDelegate;
    long long _style;
}

- (void).cxx_destruct;
- (void)_didTapSave;
- (void)connectDeviceView:(id)arg1 deviceNicknameDidChange:(id)arg2;
- (void)connectDeviceViewDidSelectNextAction:(id)arg1;
- (void)adjustViewWithKeyboardFrame:(struct CGRect)arg1 duration:(double)arg2;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (long long)preferredTabBarBehavior;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 setupFlowContext:(id)arg2 setupLogger:(id)arg3 seed:(id)arg4 keyDelegate:(id)arg5 style:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
