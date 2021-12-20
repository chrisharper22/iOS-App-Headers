//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGSerializable-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>

@class IGEmojiModel, IGStoryStickerExportModel, NSString, UIBezierPath, UILabel;

@interface IGEmojiStickerView : UIView <IGStickerViewType, IGSerializable>
{
    UILabel *_label;
    UIBezierPath *_cachedOutlinePath;
    UIView *_labelContainer;
    IGEmojiModel *_emojiModel;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGEmojiModel *emojiModel; // @synthesize emojiModel=_emojiModel;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (void)_recomputeOutlinePath;
- (_Bool)highQualityOutlinePath;
- (id)outlinePath;
@property(readonly, nonatomic) double fontSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithModel:(id)arg1 fontSize:(double)arg2;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
