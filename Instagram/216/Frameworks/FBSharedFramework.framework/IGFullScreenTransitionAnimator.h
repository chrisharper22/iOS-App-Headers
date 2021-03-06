//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGKeyboardObserverShowDelegate-Protocol.h>
#import <FBSharedFramework/UIViewControllerAnimatedTransitioning-Protocol.h>

@class IGKeyboardObserver, NSString, UIColor, UIImage, UIView, UIViewController;

@interface IGFullScreenTransitionAnimator : NSObject <IGKeyboardObserverShowDelegate, UIViewControllerAnimatedTransitioning>
{
    _Bool _translateDismissalSourceRectIfKeyboardPresents;
    _Bool _isPresenting;
    _Bool _useCustomInitialDismissCenter;
    UIView *_mediaView;
    UIImage *_topBarSnapshot;
    UIImage *_bottomBarSnapshot;
    UIColor *_backgroundColor;
    double _finalCornerRadius;
    UIViewController *_sourceController;
    IGKeyboardObserver *_keyboardObserver;
    long long _presentKeyboardAnimationCurve;
    double _presentKeyboardDuration;
    double _presentKeyboardTranslation;
    struct CGPoint _initialCenterForDismiss;
    struct CGRect _sourceRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double presentKeyboardTranslation; // @synthesize presentKeyboardTranslation=_presentKeyboardTranslation;
@property(readonly, nonatomic) double presentKeyboardDuration; // @synthesize presentKeyboardDuration=_presentKeyboardDuration;
@property(readonly, nonatomic) long long presentKeyboardAnimationCurve; // @synthesize presentKeyboardAnimationCurve=_presentKeyboardAnimationCurve;
@property(readonly, nonatomic) IGKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(readonly, nonatomic) __weak UIViewController *sourceController; // @synthesize sourceController=_sourceController;
@property(nonatomic) _Bool useCustomInitialDismissCenter; // @synthesize useCustomInitialDismissCenter=_useCustomInitialDismissCenter;
@property(readonly, nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) _Bool translateDismissalSourceRectIfKeyboardPresents; // @synthesize translateDismissalSourceRectIfKeyboardPresents=_translateDismissalSourceRectIfKeyboardPresents;
@property(nonatomic) double finalCornerRadius; // @synthesize finalCornerRadius=_finalCornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGPoint initialCenterForDismiss; // @synthesize initialCenterForDismiss=_initialCenterForDismiss;
@property(retain, nonatomic) UIImage *bottomBarSnapshot; // @synthesize bottomBarSnapshot=_bottomBarSnapshot;
@property(retain, nonatomic) UIImage *topBarSnapshot; // @synthesize topBarSnapshot=_topBarSnapshot;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePresentTransition:(id)arg1;
- (void)_hideStatusBarForViewControllerIfPossible:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithSourceRect:(struct CGRect)arg1 sourceController:(id)arg2 isPresenting:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

