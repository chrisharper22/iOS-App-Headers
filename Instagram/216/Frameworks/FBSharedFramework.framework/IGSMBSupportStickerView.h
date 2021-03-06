//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGEditableStickerViewType-Protocol.h>
#import <FBSharedFramework/IGSerializable-Protocol.h>
#import <FBSharedFramework/IGSingleStickerInstanceEnforcedViewType-Protocol.h>
#import <FBSharedFramework/IGStickerBundleContentViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/UITextViewDelegate-Protocol.h>

@class IGGradientView, IGImageView, IGSMBSupportStickerBuyNowButtonView, IGStoryColorPaletteGradientWheel, IGStorySMBSupportStickerModel, IGStoryStickerExportModel, IGTextView, IGUserSession, NSArray, NSNumber, NSString, UIColor, UIImageView, UILabel, UITapGestureRecognizer;
@protocol IGSMBSupportStickerViewDelegate, IGStickerBundleContentViewLoadingDelegate;

@interface IGSMBSupportStickerView : UIView <UITextViewDelegate, IGConstrainedSizeStickerViewType, IGStickerViewType, IGStickerBundleContentViewType, IGSerializable, IGEditableStickerViewType, IGSingleStickerInstanceEnforcedViewType>
{
    IGGradientView *_gradientView;
    IGTextView *_titleTextView;
    IGImageView *_profilePictureImageView;
    UIView *_profilePictureBorderView;
    UIImageView *_serviceTypeImageView;
    UIView *_serviceTypeBorderView;
    IGGradientView *_gradientViewForImageView;
    UILabel *_subtitleLabel;
    IGSMBSupportStickerBuyNowButtonView *_buyNowButton;
    UILabel *_footerLabel;
    IGUserSession *_userSession;
    _Bool _hasEditedTitle;
    _Bool _hasInputAccessoryView;
    _Bool _shouldHideTitleView;
    NSNumber *_originalSubtitleHeight;
    UITapGestureRecognizer *_tapProtector;
    _Bool _editable;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    double _playbackTime;
    id <IGSMBSupportStickerViewDelegate> _delegate;
    NSString *_stickerPk;
    IGStorySMBSupportStickerModel *_stickerModel;
    IGStoryColorPaletteGradientWheel *_colorWheel;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryColorPaletteGradientWheel *colorWheel; // @synthesize colorWheel=_colorWheel;
@property(readonly, nonatomic) IGStorySMBSupportStickerModel *stickerModel; // @synthesize stickerModel=_stickerModel;
@property(retain, nonatomic) NSString *stickerPk; // @synthesize stickerPk=_stickerPk;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) __weak id <IGSMBSupportStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)_updateStickerViewAccessibilityLabel;
- (id)_smbSupportStickerModel;
- (_Bool)_isUsingLightGradientViewColors;
- (unsigned long long)stickerSingleInstanceEnforcementType;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(readonly, nonatomic) unsigned long long editableStickerType;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (_Bool)stickerPinningDisabled;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)_loggingId;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) UIColor *buyNowBackgroundColor;
@property(retain, nonatomic) UIColor *buyNowTextColor;
@property(retain, nonatomic) UIColor *subtitleColor;
@property(retain, nonatomic) UIColor *titleColor;
@property(retain, nonatomic) NSArray *backgroundColors;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
@property(retain, nonatomic) UIView *inputAccessoryView;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)hideTitleViewIfEmpty;
- (void)showTitleView;
- (void)_defaultInitWithModel:(id)arg1;
- (id)initConsumptionWithStickerModel:(id)arg1;
- (id)initCreationWithStickerModel:(id)arg1;
- (id)initCreationViewWithUserSession:(id)arg1 stickerModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

