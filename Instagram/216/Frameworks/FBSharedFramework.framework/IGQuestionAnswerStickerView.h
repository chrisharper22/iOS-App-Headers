//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGEditableStickerViewType-Protocol.h>
#import <FBSharedFramework/IGSpecialBurnedInContentStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/UITextViewDelegate-Protocol.h>

@class FBTimer, IGImageView, IGQuestionAnswerStickerModel, IGStoryStickerExportModel, IGTapButton, IGTextView, NSString, UIColor, UIFont, UILabel, UITapGestureRecognizer;
@protocol IGQuestionAnswerStickerViewDelegate;

@interface IGQuestionAnswerStickerView : UIView <UITextViewDelegate, IGConstrainedSizeStickerViewType, IGStickerViewType, IGSpecialBurnedInContentStickerViewType, IGEditableStickerViewType>
{
    IGQuestionAnswerStickerModel *_model;
    UIView *_textInputContainerView;
    UIView *_containerWrappingView;
    UIView *_shadowWrappingView;
    IGTextView *_questionTextView;
    UILabel *_footerLabel;
    IGImageView *_profilePictureImageView;
    UIView *_profilePictureTopBorderBackgroundView;
    FBTimer *_timer;
    IGTextView *_responseTextView;
    long long _stickerMode;
    _Bool _showSendButton;
    _Bool _hasEditedQuestionText;
    UITapGestureRecognizer *_tapProtector;
    _Bool _isEditing;
    _Bool _borderHidden;
    id <IGQuestionAnswerStickerViewDelegate> _delegate;
    UIColor *_textColor;
    UIColor *_fillColor;
    long long _type;
    IGTapButton *_sendButton;
    UIFont *_sendButtonTitleLabelFont;
    UIFont *_footerLabelFont;
    UIFont *_responseTextFont;
    UIFont *_questionTextFont;
    double _stickerContainerCornerRadius;
    double _sendButtonHeight;
    double _sendButtonTopLineWidth;
    double _headerProfilePictureHeight;
    double _headerProfilePictureBorderWidth;
    double _responseTextHorizontalMargin;
    double _responseTextViewCornerRadius;
    double _shadowWrappingViewShadowOpacity;
    double _shadowWrappingViewShadowRadius;
    struct CGColor *_shadowWrappingShadowColor;
    struct CGColor *_profilePictureBorderColor;
    struct CGColor *_containerWrappingViewBorderColor;
    UIColor *_footerLabelTextColor;
    UIColor *_containerWrappingViewBackgroundColor;
    UIColor *_profilePictureTopBorderBackgroundColor;
    double _responseTextViewBackgroundAlpha;
    double _responseTextViewTextColorAlpha;
    double _textViewContainerHorizontalMargin;
    double _textViewContainerVerticalMargin;
    double _stickerContainerWidth;
    UIColor *_sendButtonDefaultColor;
    UIColor *_sendButtonSentColor;
    UIColor *_questionTextViewBackgroundColor;
    UIColor *_textInputViewWrapperBackgroundColor;
    struct CGSize _shadowWrappingViewShadowOffset;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textInputViewWrapperBackgroundColor; // @synthesize textInputViewWrapperBackgroundColor=_textInputViewWrapperBackgroundColor;
@property(retain, nonatomic) UIColor *questionTextViewBackgroundColor; // @synthesize questionTextViewBackgroundColor=_questionTextViewBackgroundColor;
@property(retain, nonatomic) UIColor *sendButtonSentColor; // @synthesize sendButtonSentColor=_sendButtonSentColor;
@property(retain, nonatomic) UIColor *sendButtonDefaultColor; // @synthesize sendButtonDefaultColor=_sendButtonDefaultColor;
@property(nonatomic) double stickerContainerWidth; // @synthesize stickerContainerWidth=_stickerContainerWidth;
@property(nonatomic) double textViewContainerVerticalMargin; // @synthesize textViewContainerVerticalMargin=_textViewContainerVerticalMargin;
@property(nonatomic) double textViewContainerHorizontalMargin; // @synthesize textViewContainerHorizontalMargin=_textViewContainerHorizontalMargin;
@property(nonatomic) double responseTextViewTextColorAlpha; // @synthesize responseTextViewTextColorAlpha=_responseTextViewTextColorAlpha;
@property(nonatomic) double responseTextViewBackgroundAlpha; // @synthesize responseTextViewBackgroundAlpha=_responseTextViewBackgroundAlpha;
@property(retain, nonatomic) UIColor *profilePictureTopBorderBackgroundColor; // @synthesize profilePictureTopBorderBackgroundColor=_profilePictureTopBorderBackgroundColor;
@property(retain, nonatomic) UIColor *containerWrappingViewBackgroundColor; // @synthesize containerWrappingViewBackgroundColor=_containerWrappingViewBackgroundColor;
@property(retain, nonatomic) UIColor *footerLabelTextColor; // @synthesize footerLabelTextColor=_footerLabelTextColor;
@property(nonatomic) struct CGColor *containerWrappingViewBorderColor; // @synthesize containerWrappingViewBorderColor=_containerWrappingViewBorderColor;
@property(nonatomic) struct CGColor *profilePictureBorderColor; // @synthesize profilePictureBorderColor=_profilePictureBorderColor;
@property(nonatomic) struct CGColor *shadowWrappingShadowColor; // @synthesize shadowWrappingShadowColor=_shadowWrappingShadowColor;
@property(nonatomic) struct CGSize shadowWrappingViewShadowOffset; // @synthesize shadowWrappingViewShadowOffset=_shadowWrappingViewShadowOffset;
@property(nonatomic) double shadowWrappingViewShadowRadius; // @synthesize shadowWrappingViewShadowRadius=_shadowWrappingViewShadowRadius;
@property(nonatomic) double shadowWrappingViewShadowOpacity; // @synthesize shadowWrappingViewShadowOpacity=_shadowWrappingViewShadowOpacity;
@property(nonatomic) double responseTextViewCornerRadius; // @synthesize responseTextViewCornerRadius=_responseTextViewCornerRadius;
@property(nonatomic) double responseTextHorizontalMargin; // @synthesize responseTextHorizontalMargin=_responseTextHorizontalMargin;
@property(nonatomic) double headerProfilePictureBorderWidth; // @synthesize headerProfilePictureBorderWidth=_headerProfilePictureBorderWidth;
@property(nonatomic) double headerProfilePictureHeight; // @synthesize headerProfilePictureHeight=_headerProfilePictureHeight;
@property(nonatomic) double sendButtonTopLineWidth; // @synthesize sendButtonTopLineWidth=_sendButtonTopLineWidth;
@property(nonatomic) double sendButtonHeight; // @synthesize sendButtonHeight=_sendButtonHeight;
@property(nonatomic) double stickerContainerCornerRadius; // @synthesize stickerContainerCornerRadius=_stickerContainerCornerRadius;
@property(retain, nonatomic) UIFont *questionTextFont; // @synthesize questionTextFont=_questionTextFont;
@property(retain, nonatomic) UIFont *responseTextFont; // @synthesize responseTextFont=_responseTextFont;
@property(retain, nonatomic) UIFont *footerLabelFont; // @synthesize footerLabelFont=_footerLabelFont;
@property(retain, nonatomic) UIFont *sendButtonTitleLabelFont; // @synthesize sendButtonTitleLabelFont=_sendButtonTitleLabelFont;
@property(nonatomic) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(readonly, nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) IGTapButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <IGQuestionAnswerStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)updateContentForBurnIn:(_Bool)arg1;
- (id)outlinePath;
@property(readonly, nonatomic) unsigned long long editableStickerType;
- (_Bool)stickerPinningDisabled;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)_loggingId;
- (void)_sendButtonPressed;
- (void)_configureResponseTextView;
- (void)showSendButton:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_focusedTextView;
- (void)_updateSendButtonColor:(id)arg1;
- (_Bool)_shouldShowBorderForFillColor:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)_configureTextViewsWithTextColor:(id)arg1;
- (id)_questionPlaceholderText;
@property(readonly, copy, nonatomic) NSString *currentText;
@property(readonly, copy, nonatomic) NSString *pk;
- (void)setIsEditing:(_Bool)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)willMoveToSuperview:(id)arg1;
- (id)creationModel;
- (id)responseText;
- (void)clearConsumptionState;
- (void)hideLabelHUDAnimated:(_Bool)arg1;
- (void)showSentLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)textInputViewBackgroundColor;
- (id)initWithStickerModel:(id)arg1 stickerMode:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

