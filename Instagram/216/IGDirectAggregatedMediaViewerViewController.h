//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGDirectAggregatedMediaCacheListener-Protocol.h"
#import "IGDirectAggregatedMediaViewerSectionControllerDelegate-Protocol.h"
#import "IGDirectComposerButtonDelegate-Protocol.h"
#import "IGDirectComposerSizingDelegate-Protocol.h"
#import "IGKeyboardInputManagerListener-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListAdapterDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGDirectComposer, IGKeyboardInputManager, IGListAdapter, IGUserSession, NSString, UIButton, UICollectionView, UIImage, UIView;
@protocol IGDirectAggregatedMediaViewerViewControllerActionDelegate, IGDirectAggregatedMediaViewerViewControllerDelegate;

@interface IGDirectAggregatedMediaViewerViewController : IGViewController <IGDirectAggregatedMediaCacheListener, IGDirectAggregatedMediaViewerSectionControllerDelegate, IGDirectComposerButtonDelegate, IGDirectComposerSizingDelegate, IGKeyboardInputManagerListener, IGListAdapterDataSource, IGListAdapterDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    IGUserSession *_userSession;
    NSString *_messageId;
    NSString *_threadId;
    UIImage *_previewImage;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    UIButton *_dismissButton;
    double _lastPanVelocity;
    IGKeyboardInputManager *_keyboardInputManager;
    IGDirectComposer *_composerView;
    UIView *_dimmingView;
    id <IGDirectAggregatedMediaViewerViewControllerDelegate> _delegate;
    id <IGDirectAggregatedMediaViewerViewControllerActionDelegate> _actionDelegate;
    long long _direction;
    double _originalCornerRadius;
    UIView *_hiddenAnimationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *hiddenAnimationView; // @synthesize hiddenAnimationView=_hiddenAnimationView;
@property(nonatomic) double originalCornerRadius; // @synthesize originalCornerRadius=_originalCornerRadius;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) __weak id <IGDirectAggregatedMediaViewerViewControllerActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <IGDirectAggregatedMediaViewerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)inputView:(id)arg1 didTapReshareHubButton:(id)arg2;
- (void)inputView:(id)arg1 didTapRemoveGifButton:(id)arg2 withGifModel:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerButton:(id)arg2;
- (void)inputView:(id)arg1 didTapReshareButton:(id)arg2;
- (void)inputView:(id)arg1 didTapEmojiReactionEntrypointButton:(id)arg2;
- (void)inputView:(id)arg1 didTapPlusButton:(id)arg2 isExpanded:(_Bool)arg3;
- (void)inputView:(id)arg1 didTapOrderManagementButton:(id)arg2;
- (void)inputView:(id)arg1 didTapBusinessToolsButton:(id)arg2;
- (void)inputView:(id)arg1 didTapProductPickerButton:(id)arg2;
- (void)inputView:(id)arg1 didTapQuickReplyButton:(id)arg2 isHighlighted:(_Bool)arg3 text:(id)arg4;
- (void)inputView:(id)arg1 didTapSelfieStickerButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerSearchButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 voiceMessageLongPressGestureRecognizerDidUpdate:(id)arg2;
- (void)inputView:(id)arg1 didLongPressCameraButtonWithGesture:(id)arg2;
- (void)inputView:(id)arg1 didLongPressSendButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapVoiceMessageButton:(id)arg2;
- (void)inputView:(id)arg1 didTapAnimatedMediaButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSendButtonWithText:(id)arg2 quotedContent:(id)arg3 attachment:(id)arg4;
- (void)inputView:(id)arg1 didTapMoreButton:(id)arg2;
- (void)inputView:(id)arg1 didTapLikeButton:(id)arg2;
- (void)inputView:(id)arg1 didTapGalleryButton:(id)arg2;
- (void)inputView:(id)arg1 didTapCameraButton:(id)arg2;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)arg1 needsImmediateLayout:(_Bool)arg2;
- (void)keyboardInputManagerWillChangeKeyboardFrame;
- (void)keyboardInputManagerDidUpdateBottomInsetY:(double)arg1;
- (void)keyboardInputManagerWillUpdateBottomInsetY:(double)arg1;
- (void)keyboardInputManagerDidUpdateKeyboardPercentPresented:(double)arg1;
- (id)_previewImageForMedia:(id)arg1;
- (void)_scrollToMediaAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_animateDismissal:(id)arg1;
- (void)_animatePresentation:(id)arg1;
- (void)_finishInitialSetupAfterLoadingItems;
- (id)_currentlyDisplayedViewModel;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (_Bool)_indexIsNearEndOfList:(long long)arg1;
- (void)_fetchMoreIfNeededWhenDisplayingMediaAtIndex:(long long)arg1;
- (void)_fetchMoreIfNeededWhenDisplayingMedia:(id)arg1;
- (long long)_indexOfMedia:(id)arg1;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)aggregatedMediaCacheDidUpdateForThreadId:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;
- (void)didTapToDismissWithMediaViewerCell:(id)arg1;
- (void)mediaViewerCell:(id)arg1 didTapOnRightOfMedia:(id)arg2;
- (void)mediaViewerCell:(id)arg1 didTapOnLeftOfMedia:(id)arg2;
- (long long)preferredTabBarBehavior;
- (void)_didTapDimmingView:(id)arg1;
- (void)_didPanDimmingView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMessageId:(id)arg1 threadId:(id)arg2 previewImage:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

