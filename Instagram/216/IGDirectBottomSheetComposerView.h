//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGDirectComposerButtonDelegate-Protocol.h"
#import "IGDirectComposerSizingDelegate-Protocol.h"
#import "IGDirectComposerTextListener-Protocol.h"

@class IGDirectComposer, IGUserSession, NSString;
@protocol IGDirectBottomSheetComposerDelegate, IGDirectComposerProtocol;

@interface IGDirectBottomSheetComposerView : UIView <IGDirectComposerButtonDelegate, IGDirectComposerSizingDelegate, IGDirectComposerTextListener>
{
    IGUserSession *_userSession;
    IGDirectComposer *_composer;
    UIView<IGDirectComposerProtocol> *_composerView;
    id <IGDirectBottomSheetComposerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectBottomSheetComposerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView<IGDirectComposerProtocol> *composerView; // @synthesize composerView=_composerView;
- (void)composerDidRestoreDraftMessage:(id)arg1;
- (void)composer:(id)arg1 willChange:(_Bool)arg2 textInRange:(struct _NSRange)arg3 replacementText:(id)arg4 updatedText:(id)arg5;
- (void)composerDidEndEditing:(id)arg1;
- (void)composerDidBeginEditing:(id)arg1;
- (void)composerDidTapOnTextArea:(id)arg1;
- (void)composerDidReachMaxTextLength:(id)arg1;
- (void)composer:(id)arg1 didChangeToText:(id)arg2 mode:(id)arg3;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)arg1 needsImmediateLayout:(_Bool)arg2;
- (void)inputView:(id)arg1 didTapRemoveGifButton:(id)arg2 withGifModel:(id)arg3;
- (void)inputView:(id)arg1 didTapReshareHubButton:(id)arg2;
- (void)inputView:(id)arg1 didTapReshareButton:(id)arg2;
- (void)inputView:(id)arg1 didTapEmojiReactionEntrypointButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSelfieStickerButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerSearchButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerButton:(id)arg2;
- (void)inputView:(id)arg1 didTapPlusButton:(id)arg2 isExpanded:(_Bool)arg3;
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
- (void)inputView:(id)arg1 didTapOrderManagementButton:(id)arg2;
- (void)_animateLayoutChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)height;
- (void)layoutSubviews;
- (void)configureComposer;
- (void)clearComposerText;
- (_Bool)isComposingMessage;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
