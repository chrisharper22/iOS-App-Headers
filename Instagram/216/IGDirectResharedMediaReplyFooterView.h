//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGDirectComposerButtonDelegate-Protocol.h"
#import "IGDirectComposerSizingDelegate-Protocol.h"
#import "IGDirectComposerTextListener-Protocol.h"

@class IGDirectComposer, NSArray, NSString;
@protocol IGDirectResharedMediaReplyFooterViewDelegate;

@interface IGDirectResharedMediaReplyFooterView : UIView <IGDirectComposerButtonDelegate, IGDirectComposerSizingDelegate, IGDirectComposerTextListener>
{
    IGDirectComposer *_composer;
    long long _autocapitalizationType;
    id <IGDirectResharedMediaReplyFooterViewDelegate> _delegate;
    NSString *_placeholderText;
    NSArray *_profilePictureURLs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *profilePictureURLs; // @synthesize profilePictureURLs=_profilePictureURLs;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) __weak id <IGDirectResharedMediaReplyFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)inputView:(id)arg1 didTapQuickReplyButton:(id)arg2 isHighlighted:(_Bool)arg3 text:(id)arg4;
- (void)inputView:(id)arg1 didTapPlusButton:(id)arg2 isExpanded:(_Bool)arg3;
- (void)inputView:(id)arg1 didTapBusinessToolsButton:(id)arg2;
- (void)inputView:(id)arg1 didTapOrderManagementButton:(id)arg2;
- (void)inputView:(id)arg1 didTapProductPickerButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSelfieStickerButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapStickerSearchButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 voiceMessageLongPressGestureRecognizerDidUpdate:(id)arg2;
- (void)inputView:(id)arg1 didLongPressCameraButtonWithGesture:(id)arg2;
- (void)inputView:(id)arg1 didLongPressSendButton:(id)arg2 withText:(id)arg3;
- (void)inputView:(id)arg1 didTapReshareHubButton:(id)arg2;
- (void)inputView:(id)arg1 didTapRemoveGifButton:(id)arg2 withGifModel:(id)arg3;
- (void)inputView:(id)arg1 didTapReshareButton:(id)arg2;
- (void)inputView:(id)arg1 didTapEmojiReactionEntrypointButton:(id)arg2;
- (void)inputView:(id)arg1 didTapStickerButton:(id)arg2;
- (void)inputView:(id)arg1 didTapVoiceMessageButton:(id)arg2;
- (void)inputView:(id)arg1 didTapAnimatedMediaButton:(id)arg2;
- (void)inputView:(id)arg1 didTapMoreButton:(id)arg2;
- (void)inputView:(id)arg1 didTapLikeButton:(id)arg2;
- (void)inputView:(id)arg1 didTapGalleryButton:(id)arg2;
- (void)inputView:(id)arg1 didTapCameraButton:(id)arg2;
- (void)inputView:(id)arg1 didTapSendButtonWithText:(id)arg2 quotedContent:(id)arg3 attachment:(id)arg4;
- (void)composerDidRestoreDraftMessage:(id)arg1;
- (void)composer:(id)arg1 willChange:(_Bool)arg2 textInRange:(struct _NSRange)arg3 replacementText:(id)arg4 updatedText:(id)arg5;
- (void)composerDidTapOnTextArea:(id)arg1;
- (void)composerDidReachMaxTextLength:(id)arg1;
- (void)composer:(id)arg1 didChangeToText:(id)arg2 mode:(id)arg3;
- (void)composerDidEndEditing:(id)arg1;
- (void)composerDidBeginEditing:(id)arg1;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)arg1 needsImmediateLayout:(_Bool)arg2;
- (void)setMaximumNumberOfLines:(id)arg1;
@property(readonly, nonatomic) _Bool isComposingMessage;
- (_Bool)_endEditing:(_Bool)arg1 didSendMessage:(_Bool)arg2;
- (_Bool)endEditing:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithAutocapitalizationType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
