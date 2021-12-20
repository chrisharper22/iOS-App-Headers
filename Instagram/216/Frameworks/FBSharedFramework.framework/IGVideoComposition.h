//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class AVMutableComposition, FBAREngineFilter, IGCompositionFilterMetadata, IGFilter, IGVideoCompositorInstructions, IGVideoConfiguration, NSArray, NSCache, NSString, NSURL, UIImage;

@interface IGVideoComposition : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _useFbIgluFilters;
    _Bool _shouldMuteAudio;
    _Bool _isReverseVideo;
    _Bool _useCustomCropRectForThumbnail;
    _Bool _renderCompositionAtNaturalSize;
    _Bool _performAVFoundationDownsample;
    _Bool _isFastVideo;
    _Bool _applyFixForVideosWithMultipleAudioTracks_REMOVE_THIS_ASAP;
    NSArray *_clips;
    UIImage *_overlayImage;
    NSArray *_burnedInOverlayModels;
    NSArray *_dynamicOverlayModels;
    NSArray *_extraAudioClips;
    double _keyPosition;
    NSURL *_renderedVideoURL;
    Class _filterClass;
    double _filterStrength;
    IGFilter *_effectFilter;
    FBAREngineFilter *_fbEffectFilter;
    NSArray *_timedFilters;
    NSArray *_timedFbFilters;
    IGCompositionFilterMetadata *_compositionFilterMetadata;
    IGVideoCompositorInstructions *_customCompositorInstructions;
    NSString *_filterIdentifier;
    IGVideoConfiguration *_configuration;
    AVMutableComposition *_composition;
    double _renderProgress;
    UIImage *_thumbnail;
    UIImage *_unfilteredThumbnail;
    NSCache *_thumbnailCache;
    CDStruct_1b6d18a9 _dynamicOverlayFilterTimeOffset;
    struct CGRect _customCropRectForThumbnail;
}

+ (struct CGSize)calculateDownscaleSizeForInputSize:(struct CGSize)arg1 outputSize:(struct CGSize)arg2 clip:(id)arg3;
+ (_Bool)supportsSecureCoding;
+ (id)videoCompositionWithAsset:(id)arg1 videoConfiguration:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool applyFixForVideosWithMultipleAudioTracks_REMOVE_THIS_ASAP; // @synthesize applyFixForVideosWithMultipleAudioTracks_REMOVE_THIS_ASAP=_applyFixForVideosWithMultipleAudioTracks_REMOVE_THIS_ASAP;
@property(retain, nonatomic) NSCache *thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(retain, nonatomic) UIImage *unfilteredThumbnail; // @synthesize unfilteredThumbnail=_unfilteredThumbnail;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) double renderProgress; // @synthesize renderProgress=_renderProgress;
@property(retain, nonatomic) AVMutableComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) IGVideoConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
@property(readonly, nonatomic) _Bool useFbIgluFilters; // @synthesize useFbIgluFilters=_useFbIgluFilters;
@property(nonatomic) _Bool isFastVideo; // @synthesize isFastVideo=_isFastVideo;
@property(nonatomic) _Bool performAVFoundationDownsample; // @synthesize performAVFoundationDownsample=_performAVFoundationDownsample;
@property(nonatomic) _Bool renderCompositionAtNaturalSize; // @synthesize renderCompositionAtNaturalSize=_renderCompositionAtNaturalSize;
@property(nonatomic) struct CGRect customCropRectForThumbnail; // @synthesize customCropRectForThumbnail=_customCropRectForThumbnail;
@property(nonatomic) _Bool useCustomCropRectForThumbnail; // @synthesize useCustomCropRectForThumbnail=_useCustomCropRectForThumbnail;
@property(nonatomic) CDStruct_1b6d18a9 dynamicOverlayFilterTimeOffset; // @synthesize dynamicOverlayFilterTimeOffset=_dynamicOverlayFilterTimeOffset;
@property(retain, nonatomic) IGVideoCompositorInstructions *customCompositorInstructions; // @synthesize customCompositorInstructions=_customCompositorInstructions;
@property(retain, nonatomic) IGCompositionFilterMetadata *compositionFilterMetadata; // @synthesize compositionFilterMetadata=_compositionFilterMetadata;
@property(copy, nonatomic) NSArray *timedFbFilters; // @synthesize timedFbFilters=_timedFbFilters;
@property(copy, nonatomic) NSArray *timedFilters; // @synthesize timedFilters=_timedFilters;
@property(retain, nonatomic) FBAREngineFilter *fbEffectFilter; // @synthesize fbEffectFilter=_fbEffectFilter;
@property(retain, nonatomic) IGFilter *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(nonatomic) double filterStrength; // @synthesize filterStrength=_filterStrength;
@property(retain, nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
@property(nonatomic) _Bool isReverseVideo; // @synthesize isReverseVideo=_isReverseVideo;
@property(nonatomic) _Bool shouldMuteAudio; // @synthesize shouldMuteAudio=_shouldMuteAudio;
@property(retain, nonatomic) NSURL *renderedVideoURL; // @synthesize renderedVideoURL=_renderedVideoURL;
@property(nonatomic) double keyPosition; // @synthesize keyPosition=_keyPosition;
@property(copy, nonatomic) NSArray *extraAudioClips; // @synthesize extraAudioClips=_extraAudioClips;
@property(retain, nonatomic) NSArray *dynamicOverlayModels; // @synthesize dynamicOverlayModels=_dynamicOverlayModels;
@property(retain, nonatomic) NSArray *burnedInOverlayModels; // @synthesize burnedInOverlayModels=_burnedInOverlayModels;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) NSArray *clips; // @synthesize clips=_clips;
- (id)trimmedToMaxDuration:(double)arg1;
- (shared_ptr_f184d616)_dynamicOverlayFilterWithIGLContext:(id)arg1;
- (shared_ptr_f184d616)_imageOverlayFilterWithIGLContext:(id)arg1;
- (shared_ptr_f184d616)_burnedInOverlayFilterWithIGLContext:(id)arg1;
- (shared_ptr_f184d616)_colorFilterWithIGLContext:(id)arg1;
- (id)filterWithIGLContextCache:(id)arg1 iglContext:(id)arg2 launcherSetProvider:(id)arg3;
- (id)filterNamesForLoggingWithIGLContext:(id)arg1;
- (void)setBaseFilterIdentifier:(id)arg1 strength:(double)arg2;
- (id)filterGroupByMediaTime:(CDStruct_1b6d18a9)arg1;
- (id)filterGroup;
- (id)imageFilter;
- (void)setBaseFilterClass:(Class)arg1 strength:(double)arg2;
- (long long)sourceType;
- (CDStruct_1b6d18a9)convertPresentationTime:(CDStruct_1b6d18a9)arg1 toClip:(id)arg2;
- (unsigned long long)clipIndexForFrameTime:(CDStruct_1b6d18a9)arg1;
- (void)invalidateComposition;
@property(readonly, nonatomic) _Bool isFilterSupportsHdr;
- (id)rawVideoLocationString;
- (void)refreshThumbnail;
- (id)_fbThumbnailHelperWithShouldFilterMetal:(_Bool)arg1 image:(struct CGImage *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 clip:(id)arg4 thumbnailSize:(struct CGSize)arg5 iglContext:(id)arg6;
- (id)_igThumbnailHelperWithShouldFilter:(_Bool)arg1 image:(struct CGImage *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 clip:(id)arg4 thumbnailSize:(struct CGSize)arg5;
- (id)_thumbnailHelperWithShouldFilter:(_Bool)arg1 iglContext:(id)arg2;
- (id)thumbnailWithLauncherSetProvider:(id)arg1;
- (id)thumbnailWithIglContext:(id)arg1;
- (id)unfilteredThumbnailWithIglContext:(id)arg1;
- (void)generateUnfilteredThumbnailWithIglContext:(id)arg1;
- (struct CGImage *)_generator:(id)arg1 generateImageForTimestamp:(CDStruct_183601bc *)arg2;
- (struct CGSize)_compositionSize;
- (id)_compositionWithLauncherSet:(id)arg1;
- (void)setPlaybackSpeed:(double)arg1 forTimeRange:(CDStruct_e83c9415)arg2;
- (CDStruct_1b6d18a9)duration;
- (void)removeClipAtIndex:(id)arg1;
- (void)moveClipAtIndex:(id)arg1 toIndex:(id)arg2;
- (void)removeLastClip;
- (void)addClip:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)cloneWithExportPath:(id)arg1 completionGroup:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoConfiguration:(id)arg1;

@end
