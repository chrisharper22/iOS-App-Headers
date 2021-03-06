//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGStickerViewType-Protocol.h"
#import "IGStoryStickerDeletable-Protocol.h"

@class IGGradientView, IGImageSpecifier, IGImageStickerView, IGResharedVideoStickerHeaderView, IGStoryStickerExportModel, IGTemplateStickerModel, NSString;

@interface IGTemplateStickerView : UIView <IGStickerViewType, IGStoryStickerDeletable>
{
    IGImageStickerView *_imageStickerView;
    IGResharedVideoStickerHeaderView *_headerView;
    IGGradientView *_topGradientView;
    _Bool _isNonDeletable;
    _Bool _hideUserAttribution;
    IGTemplateStickerModel *_model;
    double _cornerRadius;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool hideUserAttribution; // @synthesize hideUserAttribution=_hideUserAttribution;
@property(readonly, nonatomic) IGTemplateStickerModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
@property(readonly, nonatomic) IGImageSpecifier *imageSpecifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

