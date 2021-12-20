//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGParentalContactContainerViewDelegate-Protocol.h"

@class IGKeyboardObserver, IGParentalContactContainerView, IGRegistrationLogger, NSString;
@protocol IGAPIClient, IGParentalConsentContactViewControllerDelegate;

@interface IGParentalConsentContactViewController : IGViewController <IGParentalContactContainerViewDelegate, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate>
{
    id <IGAPIClient> _networker;
    IGKeyboardObserver *_keyboardObserver;
    IGParentalContactContainerView *_containerView;
    IGRegistrationLogger *_logger;
    id <IGParentalConsentContactViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGParentalConsentContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)contactContainerView:(id)arg1 didSubmitEmail:(id)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithLogger:(id)arg1 networker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

