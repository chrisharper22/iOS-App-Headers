//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStoryStickerDeletable-Protocol.h>

@class IGStoryStickerExportModel, NSString, UIBezierPath, UIImageView;

@interface IGThirdPartyStickerView : UIView <IGConstrainedSizeStickerViewType, IGStoryStickerDeletable>
{
    UIImageView *_imageView;
    UIBezierPath *_cachedOutlinePath;
    _Bool _outlinePathComputationInProgress;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
+ (id)createStickerViewFromPasteboardItem:(id)arg1;
- (void).cxx_destruct;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)_recomputeOutlinePath;
- (_Bool)highQualityOutlinePath;
- (id)outlinePath;
@property(nonatomic) _Bool isNonDeletable;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_initWithStickerImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

