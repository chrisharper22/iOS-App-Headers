//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGAnimatedStickerViewType-Protocol.h>
#import <FBSharedFramework/IGEditableStickerViewType-Protocol.h>
#import <FBSharedFramework/IGGalleryStickerEditingProtocol-Protocol.h>
#import <FBSharedFramework/IGVideoStickerViewType-Protocol.h>

@class IGAssetPlayerView, IGGalleryVideoStickerModel, IGStoryStickerExportModel, IGVideoStickerContentView, NSString;

@interface IGGalleryVideoStickerView : UIView <IGVideoStickerViewType, IGAnimatedStickerViewType, IGGalleryStickerEditingProtocol, IGEditableStickerViewType>
{
    IGAssetPlayerView *_playerView;
    IGVideoStickerContentView *_contentView;
    UIView *_containerView;
    _Bool _mutedForComposition;
    _Bool _roundedCornersEnabled;
    unsigned long long _galleryStickerStyle;
    IGGalleryVideoStickerModel *_model;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool roundedCornersEnabled; // @synthesize roundedCornersEnabled=_roundedCornersEnabled;
@property(readonly, nonatomic) IGGalleryVideoStickerModel *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long galleryStickerStyle; // @synthesize galleryStickerStyle=_galleryStickerStyle;
@property(nonatomic) _Bool mutedForComposition; // @synthesize mutedForComposition=_mutedForComposition;
- (id)availableStyles;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)advanceToNextGalleryStyle;
- (id)outlinePath;
@property(readonly, nonatomic) unsigned long long editableStickerType;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
- (id)audioClip;
- (id)videoClip;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
@property(nonatomic) _Bool muted;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

