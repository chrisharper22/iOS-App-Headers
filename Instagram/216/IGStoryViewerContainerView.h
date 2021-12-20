//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#import "IGStoryGestureNuxViewDelegate-Protocol.h"
#import "IGStorySelfPacedNuxViewDelegate-Protocol.h"
#import "IGVerticalStoriesPublicNuxViewDelegate-Protocol.h"

@class IGKeyboardObserver, IGStoryFullscreenOverlayView, IGStoryGestureNuxView, IGStorySelfPacedNuxView, IGVerticalStoriesPublicNuxView, NSString;
@protocol IGStoryPlayerMediaViewType, IGStoryViewerContainerViewDelegate;

@interface IGStoryViewerContainerView : UIView <IGKeyboardObserverFrameChangeDelegate, IGStoryGestureNuxViewDelegate, IGStorySelfPacedNuxViewDelegate, IGVerticalStoriesPublicNuxViewDelegate>
{
    IGKeyboardObserver *_keyboardObserver;
    struct CGRect _keyboardFrame;
    UIView *_backdropView;
    _Bool _shouldExtendMediaAndOverlayViewToEdges;
    _Bool _shouldQueueKeyboardNotification;
    IGStorySelfPacedNuxView *_selfPacedNuxView;
    IGVerticalStoriesPublicNuxView *_verticalStoriesNuxView;
    id <IGStoryViewerContainerViewDelegate> _delegate;
    IGStoryFullscreenOverlayView *_overlayView;
    UIView<IGStoryPlayerMediaViewType> *_mediaView;
    IGStoryGestureNuxView *_gestureNuxView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryGestureNuxView *gestureNuxView; // @synthesize gestureNuxView=_gestureNuxView;
@property(retain, nonatomic) UIView<IGStoryPlayerMediaViewType> *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) IGStoryFullscreenOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak id <IGStoryViewerContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)verticalStoriesPublicNuxViewDismissed;
- (void)storySelfPacedNuxViewTapped;
- (void)fullscreenNuxShouldDismiss:(id)arg1 dismissAction:(id)arg2;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_keyboardObserver:(id)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(long long)arg4;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_layoutOverlayWithBottomInset:(double)arg1;
- (struct CGRect)_overlayViewFrame;
- (void)displayVerticalStoriesPublicNux;
- (void)displaySelfPacedNux;
- (void)displayGestureNuxConfiguredForVertical:(_Bool)arg1;
- (void)setMediaView:(id)arg1 withRoundedCorners:(unsigned long long)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 shouldCreateComposerBackgroundView:(_Bool)arg2 userSession:(id)arg3 bloksContext:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

