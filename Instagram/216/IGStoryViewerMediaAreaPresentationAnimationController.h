//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGStoryViewerPresentationAnimationProtocol-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol IGPresentableStoryViewer;

@interface IGStoryViewerMediaAreaPresentationAnimationController : NSObject <IGStoryViewerPresentationAnimationProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _isPresenting;
    _Bool _shouldFadeInProfileImageView;
    _Bool _shouldScaleTransformToView;
    _Bool _shouldCrossFadeOnTransformAnimation;
    _Bool _shouldFadeToCenterIfNoDestinationOnDismissal;
    UIViewController<IGPresentableStoryViewer> *_viewer;
    UIView *_profileImageView;
    UIView *_fromView;
    UIView *_toView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldFadeToCenterIfNoDestinationOnDismissal; // @synthesize shouldFadeToCenterIfNoDestinationOnDismissal=_shouldFadeToCenterIfNoDestinationOnDismissal;
@property(nonatomic) _Bool shouldCrossFadeOnTransformAnimation; // @synthesize shouldCrossFadeOnTransformAnimation=_shouldCrossFadeOnTransformAnimation;
@property(nonatomic) _Bool shouldScaleTransformToView; // @synthesize shouldScaleTransformToView=_shouldScaleTransformToView;
@property(nonatomic) _Bool shouldFadeInProfileImageView; // @synthesize shouldFadeInProfileImageView=_shouldFadeInProfileImageView;
@property(nonatomic) __weak UIView *toView; // @synthesize toView=_toView;
@property(nonatomic) __weak UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) __weak UIView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(nonatomic) __weak UIViewController<IGPresentableStoryViewer> *viewer; // @synthesize viewer=_viewer;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_dismissAnimation:(id)arg1;
- (void)_presentAnimation:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)configureWithProfileImageView:(id)arg1 viewer:(id)arg2 isPresenting:(_Bool)arg3 presentingFromView:(id)arg4 dismissingToView:(id)arg5 shouldFadeInProfileImageView:(_Bool)arg6 shouldScaleTransformToView:(_Bool)arg7 shouldCrossFadeOnTransformAnimation:(_Bool)arg8 shouldFadeToCenterIfNoDestinationOnDismissal:(_Bool)arg9;
- (void)configureWithProfileImageView:(id)arg1 viewer:(id)arg2 isPresenting:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

