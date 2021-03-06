//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGAnimatedStickerViewType-Protocol.h>
#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGDynamicSurfaceStickerViewType-Protocol.h>
#import <FBSharedFramework/IGSimpleVideoPlayerViewDelegate-Protocol.h>
#import <FBSharedFramework/IGSingleStickerInstanceEnforcedViewType-Protocol.h>
#import <FBSharedFramework/IGSoundStateListenerDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryStickerDeletable-Protocol.h>
#import <FBSharedFramework/IGVideoStickerViewType-Protocol.h>

@class IGReshareStickerShimmeringLoadingView, IGSimpleVideoPlayerView, IGSoundStateListener, IGStoryStickerExportModel, IGTVStoryPreviewMetadataSticker, NSString;

@interface IGTVReshareStickerView : UIView <IGSimpleVideoPlayerViewDelegate, IGSoundStateListenerDelegate, IGAnimatedStickerViewType, IGConstrainedSizeStickerViewType, IGDynamicSurfaceStickerViewType, IGSingleStickerInstanceEnforcedViewType, IGStoryStickerDeletable, IGVideoStickerViewType>
{
    IGSoundStateListener *_soundStateListener;
    double _requiredMinimumDurationForBurnIn;
    IGReshareStickerShimmeringLoadingView *_shimmeringView;
    IGSimpleVideoPlayerView *_videoPlayerView;
    IGTVStoryPreviewMetadataSticker *_metadataSticker;
    _Bool _isNonDeletable;
    _Bool _mutedForComposition;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool mutedForComposition; // @synthesize mutedForComposition=_mutedForComposition;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)outlinePath;
- (unsigned long long)stickerSingleInstanceEnforcementType;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (id)audioClip;
- (id)videoClip;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
- (void)simpleVideoPlayerViewAssetLoaded:(id)arg1;
- (void)soundListenerDidSetStickySoundState:(id)arg1;
- (void)soundListenerDidUpdate:(id)arg1;
- (_Bool)isDraftSupported;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (void)_updateSoundState;
- (void)layoutSubviews;
- (id)initWithVideo:(id)arg1 previewImage:(id)arg2 model:(id)arg3 tapModelObject:(id)arg4 requiredMinimumDuration:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

