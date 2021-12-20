//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGAnimatedStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStoryStickerDeletable-Protocol.h>
#import <FBSharedFramework/IGVideoStickerViewType-Protocol.h>

@class IGAssetPlayerView, IGGradientView, IGResharedVideoStickerHeaderView, IGResharedVideoStickerModel, IGStoryStickerExportModel, IGVideoStickerContentView, NSString, UIImage;

@interface IGResharedVideoStickerView : UIView <IGVideoStickerViewType, IGStickerViewType, IGStoryStickerDeletable, IGAnimatedStickerViewType>
{
    IGVideoStickerContentView *_contentView;
    UIImage *_staticOverlaySnapshot;
    IGAssetPlayerView *_playerView;
    UIView *_headerWrapperView;
    IGGradientView *_topGradientView;
    IGResharedVideoStickerHeaderView *_headerView;
    double _cornerRadiusWidthRatio;
    NSString *_musicBrowseSessionID;
    _Bool _isNonDeletable;
    _Bool _mutedForComposition;
    IGResharedVideoStickerModel *_model;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGResharedVideoStickerModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool mutedForComposition; // @synthesize mutedForComposition=_mutedForComposition;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)outlinePath;
- (id)_staticOverlaySnapshot;
- (void)_updateCornerRadiusWidthRatio:(double)arg1;
- (id)_tapModelObject;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
- (_Bool)isDraftSupported;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)audioClip;
- (id)videoClip;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) _Bool alwaysMuted;
- (id)initWithModel:(id)arg1 musicBrowseSessionID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
