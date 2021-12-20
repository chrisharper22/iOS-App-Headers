//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStoryProductStickerProtocol-Protocol.h>

@class IGGradientLabel, IGImageView, IGProductStickerModel, IGProfilePictureImageView, IGStoryStickerExportModel, NSString, UIColor, UIImage, UILabel;

@interface IGCreatorFanEngagementProductStickerView : UIView <IGStoryProductStickerProtocol>
{
    IGProductStickerModel *_stickerModel;
    UIView *_backgroundView;
    UIColor *_primaryColor;
    UIImage *_shoppingBagIconImage;
    IGImageView *_shoppingIconImageView;
    IGImageView *_shoppingIconBorderImageView;
    UIView *_merchantPictureBorderView;
    IGProfilePictureImageView *_merchantPictureImageView;
    IGGradientLabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSString *_productName;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)_updateLabels;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (_Bool)handleTapActionAtPointInWindowCoordinates:(struct CGPoint)arg1;
- (void)productStickerDidAppear;
- (id)footerLabel;
- (void)setPrimaryColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStickerModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
