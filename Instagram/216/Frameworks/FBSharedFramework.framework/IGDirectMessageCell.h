//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGCoreTextLinkHandler-Protocol.h>
#import <FBSharedFramework/IGCoreTextNonLinkHandler-Protocol.h>
#import <FBSharedFramework/IGDirectContentAnchoringFrameable-Protocol.h>
#import <FBSharedFramework/IGDirectMessageBubbleContainerViewDelegate-Protocol.h>
#import <FBSharedFramework/IGDirectMessageBubbleContainerViewSupporting-Protocol.h>
#import <FBSharedFramework/IGDirectMessageReactionsViewDelegate-Protocol.h>
#import <FBSharedFramework/IGDirectPreviewImageProviding-Protocol.h>
#import <FBSharedFramework/IGDirectReactionsViewSupporting-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class CAShapeLayer, IGCoreTextView, IGDirectAvatarView, IGDirectMessageBubbleContainerView, IGDirectMessageBubbleView, IGDirectMessageCellLayoutSpec, IGDirectMessageReactionsView, IGTapButton, NSString, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol IGDirectMessageCellDelegate, IGDirectMessageViewModelProtocol, IGDirectVaulting;

@interface IGDirectMessageCell : UICollectionViewCell <IGDirectMessageBubbleContainerViewDelegate, IGDirectMessageReactionsViewDelegate, IGCoreTextLinkHandler, IGCoreTextNonLinkHandler, UIGestureRecognizerDelegate, IGDirectContentAnchoringFrameable, IGDirectMessageBubbleContainerViewSupporting, IGDirectPreviewImageProviding, IGDirectReactionsViewSupporting>
{
    UIView *_replyIndicatorView;
    UIImageView *_replyImageView;
    CAShapeLayer *_replyIndicatorProgressRing;
    UIView *_forwardContainerView;
    UIView *_forwardShortcutView;
    IGTapButton *_forwardShortcutIcon;
    IGCoreTextView *_footerView;
    UILongPressGestureRecognizer *_avatarLongPressGesture;
    UITapGestureRecognizer *_footerViewTapGesture;
    _Bool _panHasExceededSwipeToReplyThreshold;
    double _messageBubbleXOffset;
    _Bool _shouldAddFooterViewToAccessibilityElement;
    _Bool _didLayoutFooterView;
    _Bool _isDisplayingCell;
    id <IGDirectMessageCellDelegate> _delegate;
    IGDirectMessageBubbleContainerView *_messageContentContainerView;
    IGDirectMessageCellLayoutSpec *_layoutSpec;
    id <IGDirectMessageViewModelProtocol> _viewModel;
    id <IGDirectVaulting> _vault;
    IGDirectAvatarView *_avatarView;
    UIView *_sidebarContainerView;
    UILabel *_timestampLabel;
    UIImageView *_actionStatusIconImageView;
    UIView *_sendingIndicatorView;
}

+ (_Bool)needsToPassTouchEvents;
+ (_Bool)needsContainerStyling;
+ (_Bool)needsReactionsView;
+ (_Bool)needsLongPressGesture;
+ (_Bool)needsDoubleTapGesture;
+ (_Bool)needsSingleTapGesture;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *sendingIndicatorView; // @synthesize sendingIndicatorView=_sendingIndicatorView;
@property(readonly, nonatomic) UIImageView *actionStatusIconImageView; // @synthesize actionStatusIconImageView=_actionStatusIconImageView;
@property(readonly, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(readonly, nonatomic) UIView *sidebarContainerView; // @synthesize sidebarContainerView=_sidebarContainerView;
@property(readonly, nonatomic) IGDirectAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) id <IGDirectVaulting> vault; // @synthesize vault=_vault;
@property(readonly, nonatomic) id <IGDirectMessageViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isDisplayingCell; // @synthesize isDisplayingCell=_isDisplayingCell;
@property(retain, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGDirectMessageBubbleContainerView *messageContentContainerView; // @synthesize messageContentContainerView=_messageContentContainerView;
@property(nonatomic) __weak id <IGDirectMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextViewDidTapOnNonLinkedString:(id)arg1 touchEvent:(unsigned long long)arg2;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_updateReplyIndicatorBorderPathForProgress:(double)arg1;
- (void)_updateReplyIndicatorForProgress:(double)arg1;
- (double)_swipeOffset;
- (double)_transitionDistance;
- (_Bool)_isSwipeLeftToRight;
- (void)messageBubbleContainerView:(id)arg1 didEndPanWithTranslation:(double)arg2;
- (void)messageBubbleContainerView:(id)arg1 didChangePanWithTranslation:(double)arg2;
- (void)messageBubbleContainerViewDidBeginPan:(id)arg1;
- (void)messageBubbleContainerViewDidStopScaleAnimation:(id)arg1;
- (void)messageBubbleContainerViewWillStartScaleAnimation:(id)arg1;
- (_Bool)messageBubbleContainerViewShouldStartScaleAnimation:(id)arg1;
- (void)messageBubbleContainerViewWillBringMessageCellToFrontOfMessageList:(id)arg1;
- (void)messageBubbleContainerViewDidLongPressMessageContent:(id)arg1 gestureRecognizer:(id)arg2;
- (_Bool)messageBubbleContainerView:(id)arg1 shouldHandleTouch:(id)arg2 gestureRecognizer:(id)arg3;
- (id)messageBubbleContainerViewCreateTapGestureRecognizer:(id)arg1;
- (void)directMessageReactionsViewWasLongPressed:(id)arg1 gestureRecognizer:(id)arg2;
- (void)directMessageReactionsViewWasTapped:(id)arg1;
- (void)_didLongPressAvatar:(id)arg1;
- (void)_didTapAvatar:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldHandleTouch:(id)arg1 gestureRecognizer:(id)arg2;
- (void)didDoubleTap;
- (void)didSingleTap;
- (_Bool)_isFooterTextTranslation;
- (_Bool)_isFooterTextQuickPromotion;
- (void)_layoutFooterView;
- (void)_layoutForwardShortcutView;
- (void)_layoutReplyIndicatorView;
- (void)_layoutMessageContentContainerView;
- (void)_layoutAvatarView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)_sidebarImageForViewModel:(id)arg1;
- (void)_configureSidebarForViewModel:(id)arg1;
- (void)_configureSendingIndicatorForViewModel:(id)arg1;
- (id)previewImage;
- (double)minVerticalOffsetForReactionsUnit;
- (struct CGRect)contentAnchoringFrame;
- (id)staticGradientView;
- (void)layoutGradientIfNecessaryWithGradientBubbleTracker:(id)arg1;
- (void)reloadSidebar;
- (void)setVault:(id)arg1;
- (void)setAvatarHidden:(_Bool)arg1;
- (double)reactionsOriginXOffsetForIncomingMessage;
- (double)reactionsOriginXOffsetForOutgoingMessage;
- (double)avatarOriginYOffset;
- (void)updatePanAmountWithPercentPanned:(double)arg1;
- (struct CGSize)messageContentSize;
- (void)animateFloatingReactions:(id)arg1;
@property(readonly, nonatomic) IGDirectMessageReactionsView *reactionsView;
@property(readonly, nonatomic) IGDirectMessageBubbleView *messageContentView;
- (void)_configureForwardShortcutWithNeedsUserInterfaceStyleUpdate:(_Bool)arg1;
- (void)_setUpForwardShortcut;
- (void)configureAccessibility;
- (void)_configureFooterViewWithViewModel:(id)arg1;
- (void)_configureAvatarViewWithViewModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)_didTapForwardShortcut;
- (void)_setupReplyIndicatorIfNeeded;
- (void)_setupSidebarContainerView;
- (void)_setupFooterView;
- (id)_createTapGestureRecognizer;
- (void)_setupCombinedTapGestures;
- (void)_setupAvatarLongPressGesture;
- (void)_setupAvatarTapGesture;
- (void)_setupAvatarView;
- (void)_setupMessageContentContainerView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

