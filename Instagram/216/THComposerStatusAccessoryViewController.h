//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "THComposerStatusAccessoryViewDelegate-Protocol.h"
#import "THIntentHandling-Protocol.h"
#import "THStatusServiceListener-Protocol.h"

@class IGStatusLogger, NSString, THAnimationCoordinator, THComposerStatusAccessoryState, THComposerStatusAccessoryView, THStatusReplyIntent, THStatusService;
@protocol THComposerStatusAccessoryViewControllerDelegate, THThreadComposerLayoutDelegate;

@interface THComposerStatusAccessoryViewController : UIViewController <THStatusServiceListener, THComposerStatusAccessoryViewDelegate, THIntentHandling>
{
    THStatusService *_statusService;
    THComposerStatusAccessoryView *_accessoryView;
    NSString *_userPkForStatuses;
    THAnimationCoordinator *_animationCoordinator;
    id <THComposerStatusAccessoryViewControllerDelegate> _delegate;
    _Bool _keyboardShouldClose;
    _Bool _canEnterReplyMode;
    THStatusReplyIntent *_pendingReplyIntent;
    IGStatusLogger *_statusLogger;
    id <THThreadComposerLayoutDelegate> _layoutDelegate;
    THComposerStatusAccessoryState *_state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) THComposerStatusAccessoryState *state; // @synthesize state=_state;
@property(nonatomic) __weak id <THThreadComposerLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)_enterReplyMode;
- (_Bool)isHidden;
- (void)_updateStateAndInvalidateHeightIfNeeded:(id)arg1;
- (void)_updateStateAndNotifyDelegate:(id)arg1;
- (_Bool)_enterReplyModeForStatusIfPossible:(id)arg1;
- (_Bool)_isVisibleStatusEqualToPK:(id)arg1;
- (void)prepareForIntent:(id)arg1;
- (_Bool)canHandleIntent:(id)arg1;
- (void)handleIntent:(id)arg1;
- (void)composerStatusAccessoryViewDidTapCloseButton;
- (void)composerStatusAccessoryViewDidTapReplyButton;
- (void)composerStatusAccessoryViewDidReceiveSingleTap;
- (void)composerStatusAccessoryViewDidReceiveDoubleTap;
- (void)composerStatusAccessoryViewDidUpdateToStatus:(id)arg1;
- (void)statusServiceDidReceiveUpdate:(id)arg1 forUserPks:(id)arg2;
- (void)computeParallaxWithScrollView:(id)arg1 canScrollAwayBlock:(CDUnknownBlockType)arg2 isScrollingToTop:(_Bool)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (void)configureWithViewModel:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 threadId:(id)arg2 canEnterReplyMode:(_Bool)arg3 delegate:(id)arg4 analyticsModule:(id)arg5;
- (id)initWithUserSession:(id)arg1 threadId:(id)arg2 canEnterReplyMode:(_Bool)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

