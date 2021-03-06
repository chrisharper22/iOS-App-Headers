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

@class IGRollCallStickerButtonView, IGStoryStickerExportModel, IGTextView, NSString;
@protocol IGRollCallStickerViewDelegate;

@interface IGRollCallStickerView : UIView <UITextViewDelegate, IGStickerViewType, IGConstrainedSizeStickerViewType, IGEditableStickerViewType>
{
    _Bool _isEditing;
    id <IGRollCallStickerViewDelegate> _delegate;
    NSString *_placeholderQuestionText;
    IGTextView *_textView;
    IGRollCallStickerButtonView *_buttonView;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) IGRollCallStickerButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(readonly, nonatomic) IGTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *placeholderQuestionText; // @synthesize placeholderQuestionText=_placeholderQuestionText;
@property(nonatomic) __weak id <IGRollCallStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)outlinePath;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
@property(readonly, nonatomic) unsigned long long editableStickerType;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
@property(retain, nonatomic) NSString *questionText;
- (struct CGSize)_textViewSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initConsumption;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

