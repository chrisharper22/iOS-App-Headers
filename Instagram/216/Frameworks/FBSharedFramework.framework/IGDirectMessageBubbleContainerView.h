//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGDirectMessageBubbleView, IGDirectMessageCellReactionsViewLayoutSpec, IGDirectMessageReactionsBorderMaskView, IGDirectMessageReactionsView, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol IGDirectMessageBubbleContainerViewDelegate><IGDirectMessageBubbleContainerViewSupporting><IGDirectMessageReactionsViewDelegate, IGDirectMessageViewModelProtocol;

@interface IGDirectMessageBubbleContainerView : IGPassthroughView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _touchesBegan;
    IGDirectMessageReactionsBorderMaskView *_reactionsBorderMaskView;
    UIView *_maskedContainerViewForReactions;
    id <IGDirectMessageViewModelProtocol> _viewModel;
    IGDirectMessageCellReactionsViewLayoutSpec *_reactionsViewLayoutSpec;
    id <IGDirectMessageBubbleContainerViewDelegate><IGDirectMessageBubbleContainerViewSupporting><IGDirectMessageReactionsViewDelegate> _delegate;
    long long _swipeDirection;
    IGDirectMessageBubbleView *_messageContentView;
    IGDirectMessageReactionsView *_reactionsView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectMessageReactionsView *reactionsView; // @synthesize reactionsView=_reactionsView;
@property(readonly, nonatomic) IGDirectMessageBubbleView *messageContentView; // @synthesize messageContentView=_messageContentView;
@property(readonly, nonatomic) long long swipeDirection; // @synthesize swipeDirection=_swipeDirection;
- (void)_didPanContentView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTouchEnded;
- (void)_setSpringAnimationWhenPressed:(_Bool)arg1;
- (void)_handleTouches:(id)arg1 withType:(long long)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_configureReactionsViewWithLayoutSpec:(id)arg1;
- (void)_configureReactionsView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_styleContainerIfNecessary;
- (void)_removePanGestureRecognizer;
- (void)_setupPanGestureRecognizerIfNeeded;
- (void)_configureSwipeToReply;
- (void)_configureLongPressScaleAnimation;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (double)_reactionsOriginXForUnitSize:(struct CGSize)arg1 leftMargin:(double)arg2;
- (void)_layoutReactionsViewWithLayoutSpec:(id)arg1;
- (void)layoutSubviews;
- (void)_didReceiveLongPressAndSwipe:(id)arg1;
- (void)_setUpReactionsView;
- (void)_setUpLongPressGesture;
- (void)_setUpTapGesture;
- (void)_setUpMessageContentView;
- (void)_setUpMaskedContainerViewForReactions;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
