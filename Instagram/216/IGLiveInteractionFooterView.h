//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGKeyboardObserverHideDelegate-Protocol.h"
#import "IGKeyboardObserverShowDelegate-Protocol.h"
#import "IGLiveAddonEventDynamicBounding-Protocol.h"
#import "IGLiveAddonUIConforming-Protocol.h"
#import "IGLiveCommentTextFieldContainerViewDelegate-Protocol.h"
#import "IGLiveCommentsContainerViewControllerDelegate-Protocol.h"
#import "IGLiveQuestionOverlayViewDelegate-Protocol.h"
#import "IGLiveQuestionOverlayViewDelegateV2-Protocol.h"
#import "IGLiveTappablePinnedViewControllerDelegate-Protocol.h"
#import "IGLiveTappablePinnedViewControllerDelegateV2-Protocol.h"
#import "IGLiveViewerInteractionButtonsContainerViewDelegate-Protocol.h"
#import "IGStoryMentionsViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGDeviceSession, IGKeyboardObserver, IGLiveBroadcastInteractionButtonsContainerView, IGLiveCommentTextFieldContainerView, IGLiveCommentsContainerViewController, IGLiveGuestInteractionButtonsContainerView, IGLiveQuestionOverlayViewController, IGLiveQuestionOverlayViewControllerV2, IGLiveQuestionOverlayViewModel, IGLiveTappablePinnedViewController, IGLiveTappablePinnedViewControllerV2, IGLiveViewerInteractionButtonsContainerView, IGStoryMentionsView, IGTapButton, NSString, UIButton, UITapGestureRecognizer;
@protocol IGAnalyticsEventLoggingProtocol, IGLiveAddonCoordinating, IGLiveInteractionFooterViewDelegate;

@interface IGLiveInteractionFooterView : UIView <IGLiveAddonEventDynamicBounding, IGLiveCommentsContainerViewControllerDelegate, IGLiveCommentTextFieldContainerViewDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGLiveQuestionOverlayViewDelegate, IGLiveQuestionOverlayViewDelegateV2, IGLiveTappablePinnedViewControllerDelegate, IGLiveTappablePinnedViewControllerDelegateV2, IGStoryMentionsViewDelegate, UIGestureRecognizerDelegate, IGLiveViewerInteractionButtonsContainerViewDelegate, IGLiveAddonUIConforming>
{
    IGLiveCommentsContainerViewController *_commentsContainerViewController;
    IGLiveQuestionOverlayViewController *_questionOverlayViewController;
    IGLiveQuestionOverlayViewControllerV2 *_questionOverlayViewControllerV2;
    _Bool _hasQuestion;
    IGLiveTappablePinnedViewController *_tappablePinnedViewController;
    IGLiveTappablePinnedViewControllerV2 *_tappablePinnedViewControllerV2;
    IGLiveViewerInteractionButtonsContainerView *_viewerButtonsContainer;
    IGLiveBroadcastInteractionButtonsContainerView *_broadcastButtonsContainer;
    IGLiveGuestInteractionButtonsContainerView *_guestButtonsContainer;
    IGLiveCommentTextFieldContainerView *_commentTextFieldContainer;
    IGKeyboardObserver *_keyboardObserver;
    CDStruct_eef638a9 _liveBroadcastConfig;
    UITapGestureRecognizer *_singleTapGesture;
    _Bool _didUserTapToHide;
    IGLiveQuestionOverlayViewModel *_latestQuestionModel;
    UIView *_invisibleBackgroundView;
    _Bool _disabled;
    _Bool _addonLifeCycleEventEnabled;
    _Bool _commentsDisabled;
    _Bool _commentsDisabledForBlockedUser;
    _Bool _shouldConfigureForVerticalScrollWithPeeks;
    _Bool _shouldBottomInsetToMedia;
    _Bool _showExtraQuestionViewSpacing;
    id <IGLiveAddonCoordinating> _coordinator;
    NSString *_identifier;
    long long _commentsDisplayMode;
    id <IGLiveInteractionFooterViewDelegate> _delegate;
    long long _footerViewMode;
    IGStoryMentionsView *_mentionSuggestionsView;
    double _buttonsContainerOriginYReference;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGDeviceSession *_deviceSession;
    UIView *_heartsDisplay;
    struct CGRect _mediaWindowFrameReference;
}

+ (id)addonEventDynamicBoundings;
+ (_Bool)ignoreEventIfNotDynamicBounded;
+ (struct _NSRange)mentionReplacementRangeForFullText:(id)arg1 cursorIndex:(long long)arg2;
+ (id)mentionQueryForFullText:(id)arg1 cursorIndex:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *heartsDisplay; // @synthesize heartsDisplay=_heartsDisplay;
@property(nonatomic) _Bool showExtraQuestionViewSpacing; // @synthesize showExtraQuestionViewSpacing=_showExtraQuestionViewSpacing;
@property(retain, nonatomic) IGDeviceSession *deviceSession; // @synthesize deviceSession=_deviceSession;
@property(retain, nonatomic) id <IGAnalyticsEventLoggingProtocol> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) double buttonsContainerOriginYReference; // @synthesize buttonsContainerOriginYReference=_buttonsContainerOriginYReference;
@property(nonatomic) struct CGRect mediaWindowFrameReference; // @synthesize mediaWindowFrameReference=_mediaWindowFrameReference;
@property(nonatomic) _Bool shouldBottomInsetToMedia; // @synthesize shouldBottomInsetToMedia=_shouldBottomInsetToMedia;
@property(readonly, nonatomic) IGStoryMentionsView *mentionSuggestionsView; // @synthesize mentionSuggestionsView=_mentionSuggestionsView;
@property(nonatomic) _Bool shouldConfigureForVerticalScrollWithPeeks; // @synthesize shouldConfigureForVerticalScrollWithPeeks=_shouldConfigureForVerticalScrollWithPeeks;
@property(nonatomic) long long footerViewMode; // @synthesize footerViewMode=_footerViewMode;
@property(nonatomic) __weak id <IGLiveInteractionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long commentsDisplayMode; // @synthesize commentsDisplayMode=_commentsDisplayMode;
@property(nonatomic) _Bool commentsDisabledForBlockedUser; // @synthesize commentsDisabledForBlockedUser=_commentsDisabledForBlockedUser;
@property(nonatomic) _Bool commentsDisabled; // @synthesize commentsDisabled=_commentsDisabled;
@property(nonatomic) _Bool addonLifeCycleEventEnabled; // @synthesize addonLifeCycleEventEnabled=_addonLifeCycleEventEnabled;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IGLiveAddonCoordinating> coordinator; // @synthesize coordinator=_coordinator;
- (id)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)receiveEvent:(unsigned long long)arg1 from:(id)arg2 payload:(id)arg3;
- (void)unconfigurateCoordinator;
- (void)configurateCoordinator:(id)arg1;
- (void)viewerInteractionButtonsContainerViewStartedAnimating:(id)arg1 expanded:(_Bool)arg2;
- (void)storyMentionsView:(id)arg1 didSelectUser:(id)arg2;
- (void)_questionContentUpdateWithContentModel:(id)arg1;
- (void)_questionCountUpdateWithCount:(id)arg1;
- (void)_createTappablePinnedViewController;
- (void)_updateQuestionOverlayAlpha;
- (_Bool)_shouldShowQuestionOverlay;
- (void)_updateTapToHideElements;
- (void)_updateTappablePinnedViewAlpha;
- (_Bool)_shouldShowTappablePinnedView;
- (_Bool)_hasTappablePin;
- (_Bool)_isTextContainerBelowCameraPreview;
- (_Bool)_isBroadcastMode;
- (id)_buttonsContainerForCurrentMode;
- (double)_additionalHeightPaddingForiPhoneX;
- (void)_updateTextFieldContainerWidth;
- (struct CGRect)_heartFrameWithSize:(double)arg1;
- (void)liveTappablePinnedViewController:(id)arg1 didTapTextWithViewModel:(id)arg2 text:(id)arg3 URL:(id)arg4;
- (void)liveTappablePinnedViewController:(id)arg1 didTapWithViewModel:(id)arg2;
- (void)liveTappablePinnedViewController:(id)arg1 didTapButtonWithViewModel:(id)arg2;
- (void)removeQuestionButtonTapped:(id)arg1;
- (void)questionOverlayTapped:(id)arg1;
- (void)commentsContainerViewController:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3 cell:(id)arg4;
- (void)commentsContainerViewController:(id)arg1 didReceiveUnpinTapOnComment:(id)arg2;
- (void)commentTextFieldContainerViewDidChangeText:(id)arg1 didChangeText:(id)arg2 cursorIndex:(long long)arg3;
- (void)commentTextFieldContainerView:(id)arg1 didPostCommentText:(id)arg2;
- (void)commentTextFieldContainerView:(id)arg1 didChangeEditing:(_Bool)arg2;
- (void)commentTextFieldContainerViewDidAnimateButtonVisibility:(id)arg1;
- (void)commentTextFieldContainerViewDidUpdateButtonVisibility:(id)arg1;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)dismissMentionSuggestionsView;
- (void)presentMentionSuggestionsView;
- (void)initMentionSuggestionsViewWithUserSession:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (double)_bottomInsetForViewerRedesignV2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) UIButton *liveViewerUserPayCtaButton;
@property(readonly, nonatomic) IGTapButton *broadcasterShoppingButton;
@property(readonly, nonatomic) IGTapButton *shoppingButton;
@property(readonly, nonatomic) IGTapButton *badgesButton;
@property(readonly, nonatomic) IGTapButton *submitQuestionButton;
@property(readonly, nonatomic) IGTapButton *inviteGuestButton;
@property(readonly, nonatomic) IGTapButton *questionButton;
@property(readonly, nonatomic) IGTapButton *liveResourceButton;
@property(readonly, nonatomic) IGTapButton *liveRoomsButton;
- (void)updateTappablePinnedViewWithUpdate:(id)arg1;
- (void)configureTappablePinnedViewWithViewModel:(id)arg1;
- (_Bool)_footerViewModeIsBroadcaster;
- (void)setSubmitQuestionButtonSelected:(_Bool)arg1;
- (void)_updateQuestionOverlayForQuestionPk:(id)arg1 question:(id)arg2 submittedByUser:(id)arg3 isActivate:(_Bool)arg4;
- (void)showLiveResourceButtonAnimated:(_Bool)arg1;
- (void)configureLiveResourceButtonWithImageAsset:(unsigned long long)arg1;
- (_Bool)_inViewerCommentsHiddenIncrementalityTest;
- (_Bool)_inHostHiddenIncrementalityTest;
- (void)_updateCommentsViewVisibility;
- (void)_updateButtonsVisibility;
@property(nonatomic) long long commentsContainerDisplayMode; // @dynamic commentsContainerDisplayMode;
- (void)_toggleCommentTextFieldDisabled;
- (void)setCommentsViewHidden:(_Bool)arg1;
- (void)toggleCommentsViewHidden;
- (_Bool)canExpandCommentsContainer;
- (_Bool)isGestureOnCommentContainer:(id)arg1;
- (void)prepareForReuse;
- (void)_updateQuestionButtonBadgeCount:(long long)arg1;
- (void)updateLiveWithInviteBadgeCount:(long long)arg1;
- (void)showCommentTextField;
- (_Bool)isEditingComment;
- (void)setEnabledIncreasedCommentHeight:(_Bool)arg1;
- (id)visibleCellForComment:(id)arg1;
- (void)tagWithUser:(id)arg1;
- (_Bool)isCommentVisible:(id)arg1;
- (void)removeAllCommentsFromUserPk:(id)arg1;
- (void)removeCommentWithPk:(id)arg1;
- (id)currentPinnedComment;
- (void)unpinComment;
- (void)pinComment:(id)arg1 isMultiplePaymentsEnabled:(_Bool)arg2 module:(id)arg3;
- (void)displayFloatingLikeAnimation:(id)arg1;
- (void)displayLikeAnimation:(id)arg1;
- (void)updateCommentPk:(id)arg1 withComment:(id)arg2;
- (void)addComments:(id)arg1 forceScrollToBottom:(_Bool)arg2 module:(id)arg3;
- (void)configureWithLiveBroadcastConfig:(CDStruct_eef638a9)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 footerViewMode:(long long)arg2 liveBroadcastConfig:(CDStruct_eef638a9)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
