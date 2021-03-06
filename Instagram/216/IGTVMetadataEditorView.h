//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAutocompleteControllerTextInput-Protocol.h"
#import "IGGestureCoordinatingScrollViewTouchCancellationDelegate-Protocol.h"
#import "IGSharingUIKitCreationFlowToggleDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IGGestureCoordinatingScrollView, IGShareFooterView, IGSharingUIKitCreationFlowToggle, IGSharingUIKitCreationMetadataButtonRow, IGSharingUIKitCreationMetadataTitleRow, IGTVMetadataInputView, IGTVSeparatorView, IGTextView, IGTooltipView, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UITextInputPasswordRules;
@protocol IGTVMetadataEditorViewDelegate;

@interface IGTVMetadataEditorView : UIView <IGGestureCoordinatingScrollViewTouchCancellationDelegate, IGSharingUIKitCreationFlowToggleDelegate, UIScrollViewDelegate, IGAutocompleteControllerTextInput>
{
    double _videoDuration;
    _Bool _hasTurnedFeedPreviewSwitchOff;
    IGSharingUIKitCreationMetadataTitleRow *_monetizationTitleRow;
    IGSharingUIKitCreationMetadataTitleRow *_instagramTitleRow;
    IGSharingUIKitCreationMetadataTitleRow *_facebookAndWatchTitleRow;
    UILabel *_coverPhotoLabel;
    _Bool _feedPreviewCropRowAvailable;
    _Bool _profileCoverCropRowAvailable;
    _Bool _advSettingsRowAvailable;
    _Bool _monetizationRowAvailable;
    _Bool _facebookRowAvailable;
    _Bool _internalRowAvailable;
    _Bool _keepShoppableProductsRowAvailable;
    _Bool _productTaggingRowAvailable;
    long long _draftState;
    NSString *_adsToggleTitle;
    NSString *_adsToggleSubtitle;
    double _keyboardHeight;
    NSString *_feedPreviewToggleTitle;
    NSString *_feedPreviewToggleSubtitle;
    IGTVSeparatorView *_titleAndDescriptionSeparator;
    IGTVSeparatorView *_seriesSeparator;
    IGTVSeparatorView *_productTaggingSeparator;
    IGTVSeparatorView *_sharingToInstagramSeparator;
    IGTVSeparatorView *_monetizationSeparator;
    IGTVSeparatorView *_facebookAndWatchSeparator;
    IGTooltipView *_tooltipView;
    UITapGestureRecognizer *_dismissTooltipTapGestureRecognizer;
    IGShareFooterView *_footerView;
    _Bool _disableFeedPreviewDurationCheck;
    _Bool _isAutocompleteShown;
    _Bool _croppingRowsVisible;
    IGGestureCoordinatingScrollView *_contentScrollView;
    UIView *_autocompleteContainerView;
    long long _autocompleteSource;
    IGTVMetadataInputView *_titleInputView;
    IGTextView *_descriptionTextView;
    IGSharingUIKitCreationFlowToggle *_keepShoppableProductsToggle;
    IGSharingUIKitCreationMetadataButtonRow *_addToSeriesRow;
    IGSharingUIKitCreationMetadataButtonRow *_productTaggingRow;
    IGSharingUIKitCreationFlowToggle *_internalRow;
    IGSharingUIKitCreationFlowToggle *_adsToggle;
    IGSharingUIKitCreationFlowToggle *_feedPreviewToggle;
    IGSharingUIKitCreationMetadataButtonRow *_feedPreviewCropRow;
    IGSharingUIKitCreationMetadataButtonRow *_profileCoverCropRow;
    IGSharingUIKitCreationFlowToggle *_facebookCrossPostToggle;
    UIButton *_coverPhotoView;
    UIImageView *_coverPhotoImageViewErrorIcon;
    IGSharingUIKitCreationMetadataButtonRow *_advSettingsRow;
    id <IGTVMetadataEditorViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVMetadataEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool croppingRowsVisible; // @synthesize croppingRowsVisible=_croppingRowsVisible;
@property(readonly, nonatomic) IGSharingUIKitCreationMetadataButtonRow *advSettingsRow; // @synthesize advSettingsRow=_advSettingsRow;
@property(readonly, nonatomic) UIImageView *coverPhotoImageViewErrorIcon; // @synthesize coverPhotoImageViewErrorIcon=_coverPhotoImageViewErrorIcon;
@property(readonly, nonatomic) UIButton *coverPhotoView; // @synthesize coverPhotoView=_coverPhotoView;
@property(readonly, nonatomic) IGSharingUIKitCreationFlowToggle *facebookCrossPostToggle; // @synthesize facebookCrossPostToggle=_facebookCrossPostToggle;
@property(readonly, nonatomic) IGSharingUIKitCreationMetadataButtonRow *profileCoverCropRow; // @synthesize profileCoverCropRow=_profileCoverCropRow;
@property(readonly, nonatomic) IGSharingUIKitCreationMetadataButtonRow *feedPreviewCropRow; // @synthesize feedPreviewCropRow=_feedPreviewCropRow;
@property(readonly, nonatomic) IGSharingUIKitCreationFlowToggle *feedPreviewToggle; // @synthesize feedPreviewToggle=_feedPreviewToggle;
@property(readonly, nonatomic) IGSharingUIKitCreationFlowToggle *adsToggle; // @synthesize adsToggle=_adsToggle;
@property(readonly, nonatomic) IGSharingUIKitCreationFlowToggle *internalRow; // @synthesize internalRow=_internalRow;
@property(readonly, nonatomic) IGSharingUIKitCreationMetadataButtonRow *productTaggingRow; // @synthesize productTaggingRow=_productTaggingRow;
@property(readonly, nonatomic) IGSharingUIKitCreationMetadataButtonRow *addToSeriesRow; // @synthesize addToSeriesRow=_addToSeriesRow;
@property(readonly, nonatomic) IGSharingUIKitCreationFlowToggle *keepShoppableProductsToggle; // @synthesize keepShoppableProductsToggle=_keepShoppableProductsToggle;
@property(readonly, nonatomic) IGTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(readonly, nonatomic) IGTVMetadataInputView *titleInputView; // @synthesize titleInputView=_titleInputView;
@property(nonatomic) long long autocompleteSource; // @synthesize autocompleteSource=_autocompleteSource;
@property(readonly, nonatomic) _Bool isAutocompleteShown; // @synthesize isAutocompleteShown=_isAutocompleteShown;
@property(retain, nonatomic) UIView *autocompleteContainerView; // @synthesize autocompleteContainerView=_autocompleteContainerView;
@property(readonly, nonatomic) IGGestureCoordinatingScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void)_didTapSaveAsDraft;
- (void)_didTapPostToIGTV;
- (void)_removeTooltipDismissTapGestureRecognizer;
- (void)_setUpTooltipDismissTapGestureRecognizer;
- (void)_showTooltip:(id)arg1 pinToView:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)_coverPhotoViewTapped:(id)arg1;
- (void)_handleTapFrom:(id)arg1;
- (void)_updateFeedPreviewToggleState;
- (void)creationFlowToggleDidTapSubtitleLink:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)gestureCoordinatingScrollView:(id)arg1 touchesShouldCancelInContentView:(id)arg2;
- (id)inputTextView;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)beginningOfDocument;
- (struct _NSRange)selectedRange;
- (void)setText:(id)arg1;
- (id)text;
- (void)setPostButtonEnabled:(_Bool)arg1;
- (void)hideTooltip;
- (void)showProductTaggingTooltip;
- (void)showTurnOnIGTVRevShareToolTip;
- (void)hideAutocompleteView;
- (void)showAutocompleteViewWithKeyboardHeight:(double)arg1;
- (void)configureFacebookCrossPostToggleWithSubtitle:(id)arg1 toggleButtonState:(long long)arg2;
- (void)configureAllowAdsToggleWithHasTurnedSwitchOn:(_Bool)arg1;
- (void)configureFeedPreviewToggleWithVideoDuration:(double)arg1 hasTurnedSwitchOff:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

