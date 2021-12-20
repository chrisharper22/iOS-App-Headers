//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGEditableStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/UITextViewDelegate-Protocol.h>

@class CAShapeLayer, IGGradientView, IGITakeCareStickerModel, IGStoryStickerExportModel, NSString, UIImageView, UILabel, UITextView;

@interface IGITakeCareStickerView : UIView <IGStickerViewType, IGConstrainedSizeStickerViewType, IGEditableStickerViewType, UITextViewDelegate>
{
    UILabel *_promptLabel;
    CAShapeLayer *_backdropLayer;
    CAShapeLayer *_responseBackdropLayer;
    CAShapeLayer *_heartIconImageBackgroundLayer;
    UIImageView *_heartIconImageView;
    NSString *_placeholderText;
    IGGradientView *_gradientView;
    _Bool _hasFirstInteraction;
    UITextView *_inputTextView;
    IGITakeCareStickerModel *_model;
    long long _currentStyle;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasFirstInteraction; // @synthesize hasFirstInteraction=_hasFirstInteraction;
@property(nonatomic) long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(readonly, nonatomic) IGITakeCareStickerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(readonly, nonatomic) unsigned long long editableStickerType;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)accessibilityLabel;
- (void)sizeToFit;
- (void)layoutSubviews;
- (_Bool)isEmptyTextOrPlaceholderText;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

