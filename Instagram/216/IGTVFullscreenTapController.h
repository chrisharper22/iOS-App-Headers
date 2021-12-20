//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImpactFeedbackGenerator, UITapGestureRecognizer, UIView;
@protocol IGTVFullscreenTapControllerActionDelegate, IGTVFullscreenTapControllerGestureDelegate;

@interface IGTVFullscreenTapController : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_rewindView;
    UIView *_fastForwardView;
    UIView *_skipIconContainerView;
    UIView *_skipIconView;
    long long _hideToken;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    long long _tapCount;
    long long _tapToken;
    id <IGTVFullscreenTapControllerActionDelegate> _actionDelegate;
    id <IGTVFullscreenTapControllerGestureDelegate> _gestureDelegate;
    UITapGestureRecognizer *_tapGesture;
    double _animationProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double animationProgress; // @synthesize animationProgress=_animationProgress;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak id <IGTVFullscreenTapControllerGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(nonatomic) __weak id <IGTVFullscreenTapControllerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (long long)_actionForTapGesture:(id)arg1;
- (void)_animateSeekPresented:(_Bool)arg1;
- (void)_showQuickSkipForAction:(long long)arg1;
- (void)_updateSkipIcon;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleDoubleTapGestureForAction:(long long)arg1;
- (void)_handleSingleTapGesture;
- (void)_handleTapGesture:(id)arg1;
- (id)initWithRewindView:(id)arg1 fastForwardView:(id)arg2 skipIconContainerView:(id)arg3 skipIconView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

