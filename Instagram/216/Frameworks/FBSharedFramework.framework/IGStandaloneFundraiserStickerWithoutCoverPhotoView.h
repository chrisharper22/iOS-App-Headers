//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>

@class IGFixedWidthLayout, IGStackLayout, IGStandaloneFundraiserThumbnailProfilesView, IGStoryStickerExportModel, IGUser, NSString, UILabel;

@interface IGStandaloneFundraiserStickerWithoutCoverPhotoView : UIView <IGStickerViewType, IGConstrainedSizeStickerViewType>
{
    NSString *_fundraiserId;
    NSString *_source;
    IGUser *_fundraiserCreator;
    NSString *_beneficiaryPhotoURL;
    UIView *_containerView;
    UIView *_textContainerView;
    UIView *_profileImagesContainerView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_donateLabel;
    UIView *_lineView;
    IGStandaloneFundraiserThumbnailProfilesView *_profileImagesView;
    IGFixedWidthLayout *_titleLayout;
    IGFixedWidthLayout *_descriptionLayout;
    IGStackLayout *_layout;
    IGStackLayout *_profileLayout;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (_Bool)isDraftSupported;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setContentWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 description:(id)arg2 fundraiserId:(id)arg3 fundraiserCreator:(id)arg4 beneficiaryPhotoURL:(id)arg5 source:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

