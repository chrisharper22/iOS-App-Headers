//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStoryProductStickerProtocol-Protocol.h>

@class IGStoryStickerExportModel, IGVisualProductStickerThumbnailImageView, NSString, UILabel;

@interface IGVisualProductStickerView : UIView <IGStoryProductStickerProtocol>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGVisualProductStickerThumbnailImageView *_thumbnailImageView;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)footerLabel;
- (void)productStickerDidAppear;
- (_Bool)handleTapActionAtPointInWindowCoordinates:(struct CGPoint)arg1;
- (void)setPrimaryColor:(id)arg1;
@property(retain, nonatomic) NSString *productName;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)_initWithTitle:(id)arg1 subtitle:(id)arg2 imageSpecifier:(id)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 thumbnail:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

