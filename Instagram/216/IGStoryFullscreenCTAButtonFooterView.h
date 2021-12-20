//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGDirectComposerButtonDelegate-Protocol.h"
#import "IGDirectComposerTextListener-Protocol.h"
#import "IGRenderingLoggingProviding-Protocol.h"

@class FBTimer, IGDirectThreadInputView, IGStoryCTAButton, IGStoryFullscreenCTAButtonFooterViewModel, IGTapButton, NSString, UIButton;
@protocol IGStoryFullscreenCTAButtonFooterViewDelegate;

@interface IGStoryFullscreenCTAButtonFooterView : UIView <IGDirectComposerButtonDelegate, IGDirectComposerTextListener, IGRenderingLoggingProviding>
{
    IGTapButton *_reshareButton;
    UIButton *_saveButton;
    IGStoryFullscreenCTAButtonFooterViewModel *_viewModel;
    IGDirectThreadInputView *_pillComposerView;
    double _storyCTAButtonTranslationDistance;
    FBTimer *_fillAnimationTimer;
    FBTimer *_bounceAnimationTimer;
    _Bool _isStoryCTAButtonInScaleUpAnimation;
    _Bool _shouldShowButtonBackground;
    _Bool _lazyComposerEnabled;
    _Bool _shouldShowSecondaryDwellAnimation;
    _Bool _shouldAddDropShadowToButtons;
    unsigned long long _ctaButtonState;
    double _ctaAppearanceDelay;
    double _ctaDwellDelay;
    id <IGStoryFullscreenCTAButtonFooterViewDelegate> _delegate;
    IGStoryCTAButton *_storyCTAButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryCTAButton *storyCTAButton; // @synthesize storyCTAButton=_storyCTAButton;
@property(nonatomic) __weak id <IGStoryFullscreenCTAButtonFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double ctaDwellDelay; // @synthesize ctaDwellDelay=_ctaDwellDelay;
@property(nonatomic) double ctaAppearanceDelay; // @synthesize ctaAppearanceDelay=_ctaAppearanceDelay;
@property(nonatomic) _Bool shouldAddDropShadowToButtons; // @synthesize shouldAddDropShadowToButtons=_shouldAddDropShadowToButtons;
@property(nonatomic) _Bool shouldShowSecondaryDwellAnimation; // @synthesize shouldShowSecondaryDwellAnimation=_shouldShowSecondaryDwellAnimation;
@property(readonly, nonatomic) unsigned long long ctaButtonState; // @synthesize ctaButtonState=_ctaButtonState;
- (void)_setShowComposer:(_Bool)arg1;
- (_Bool)_isShowingComposer;
- (id)renderedComponentLoggingInfo;
- (void)_scheduleFillAnimationWithDelay:(double)arg1;
- (void)_animateCTAButtonBounceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateCTAButtonFillWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeCTAButtonAnimations;
- (void)_setCTAButtonState:(unsigned long long)arg1 delay:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateStoryCTAButton;
- (_Bool)inputViewShouldAutomaticallyClearTextOnSend:(id)arg1;
- (void)inputView:(id)arg1 didTapRemoveGifButton:(id)arg2 withGifModel:(id)arg3;
- (void)inputView:(id)arg1 didTapReshareHubButton:(id)arg2;
- (void)inputView:(id)arg1 didTapCommentButton:(id)arg2;
- (void)inputView:(id)arg1 didTapReshareButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSelfieStickerButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapEmojiReactionEntrypointButton:(id)arg2;
- (void)inputView:(id)arg1 didTapStickerSearchButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerButton:(id)arg2;
- (void)inputView:(id)arg1 didTapPlusButton:(id)arg2 isExpanded:(_Bool)arg3;
- (void)inputView:(id)arg1 didTapOrderManagementButton:(id)arg2;
- (void)inputView:(id)arg1 didTapBusinessToolsButton:(id)arg2;
- (void)inputView:(id)arg1 didTapProductPickerButton:(id)arg2;
- (void)inputView:(id)arg1 didTapQuickReplyButton:(id)arg2 isHighlighted:(_Bool)arg3 text:(id)arg4;
- (void)inputView:(id)arg1 voiceMessageLongPressGestureRecognizerDidUpdate:(id)arg2;
- (void)inputView:(id)arg1 didLongPressSendButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapVoiceMessageButton:(id)arg2;
- (void)inputView:(id)arg1 didTapAnimatedMediaButton:(id)arg2;
- (void)inputView:(id)arg1 didTapCameraButton:(id)arg2;
- (void)inputView:(id)arg1 didTapMoreButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSendButtonWithText:(id)arg2 quotedContent:(id)arg3 attachment:(id)arg4;
- (void)inputView:(id)arg1 didTapGalleryButton:(id)arg2;
- (void)inputView:(id)arg1 didTapLikeButton:(id)arg2;
- (void)inputView:(id)arg1 didLongPressCameraButtonWithGesture:(id)arg2;
- (void)composerDidRestoreDraftMessage:(id)arg1;
- (void)composer:(id)arg1 willChange:(_Bool)arg2 textInRange:(struct _NSRange)arg3 replacementText:(id)arg4 updatedText:(id)arg5;
- (void)composerDidEndEditing:(id)arg1;
- (void)composerDidBeginEditing:(id)arg1;
- (void)composerDidTapOnTextArea:(id)arg1;
- (void)composerDidReachMaxTextLength:(id)arg1;
- (void)composer:(id)arg1 didChangeToText:(id)arg2 mode:(id)arg3;
- (_Bool)isComposingMessage;
- (void)_configureForDefaultMode;
- (void)_configureForInputMode;
- (void)beginComposingMessage;
- (void)_handleSaveButtonAnimation;
- (void)_saveLongPressed:(id)arg1;
- (void)_saveTapped;
- (void)_reshareTapped;
- (void)_storyCTAButtonTapped;
- (void)startCTAEndSceneAnimation;
- (void)startCTAScaleUpAnimation;
- (_Bool)isStoryCTAButtonHidden;
- (void)resetCTAButton;
- (void)scheduleBounceAnimationWithDelay:(double)arg1;
- (void)snapCTAButtonToDwelled;
- (void)startCTAButtonAnimation;
- (void)configureWithViewModel:(id)arg1 enableAutomatedLogging:(_Bool)arg2 eventAttributionViewOverlay:(id)arg3;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithLazyComposerEnabled:(_Bool)arg1 shouldShowCTA:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

