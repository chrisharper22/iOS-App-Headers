//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAnimationCurve, IGBackgroundGradient, NSArray, NSDictionary, NSString, NSUUID;
@protocol IGMediaAsset, IGMediaEffect;

@interface IGMediaCompositionStateConfig : NSObject
{
    _Bool _mediaSupportsUserInteraction;
    _Bool _colorFiltersLimitedToMediaRegion;
    id <IGMediaAsset> _asset;
    double _overallCompositionVolume;
    double _assetVolume;
    IGAnimationCurve *_assetVolumeCurve;
    NSArray *_assetAudioEffects;
    id <IGMediaEffect> _mediaEffect;
    NSArray *_postProcessingEffects;
    NSArray *_stickers;
    NSArray *_burnedInStickers;
    NSArray *_availableBackgroundGradients;
    long long _currentBackgroundGradientIndex;
    IGBackgroundGradient *_customGradient;
    NSDictionary *_audioTracks;
    NSArray *_drawingBrushStrokes;
    NSString *_filterIdentifier;
    NSDictionary *_filterParameters;
    double _maximumOverallDuration;
    NSUUID *_identifier;
    struct CGSize _compositionSize;
    struct IGMediaTransform _mediaTransform;
    struct CGAffineTransform _mediaContainerAffineTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool colorFiltersLimitedToMediaRegion; // @synthesize colorFiltersLimitedToMediaRegion=_colorFiltersLimitedToMediaRegion;
@property(nonatomic) _Bool mediaSupportsUserInteraction; // @synthesize mediaSupportsUserInteraction=_mediaSupportsUserInteraction;
@property(nonatomic) double maximumOverallDuration; // @synthesize maximumOverallDuration=_maximumOverallDuration;
@property(copy, nonatomic) NSDictionary *filterParameters; // @synthesize filterParameters=_filterParameters;
@property(copy, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
@property(copy, nonatomic) NSArray *drawingBrushStrokes; // @synthesize drawingBrushStrokes=_drawingBrushStrokes;
@property(copy, nonatomic) NSDictionary *audioTracks; // @synthesize audioTracks=_audioTracks;
@property(retain, nonatomic) IGBackgroundGradient *customGradient; // @synthesize customGradient=_customGradient;
@property(nonatomic) long long currentBackgroundGradientIndex; // @synthesize currentBackgroundGradientIndex=_currentBackgroundGradientIndex;
@property(copy, nonatomic) NSArray *availableBackgroundGradients; // @synthesize availableBackgroundGradients=_availableBackgroundGradients;
@property(copy, nonatomic) NSArray *burnedInStickers; // @synthesize burnedInStickers=_burnedInStickers;
@property(copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(copy, nonatomic) NSArray *postProcessingEffects; // @synthesize postProcessingEffects=_postProcessingEffects;
@property(retain, nonatomic) id <IGMediaEffect> mediaEffect; // @synthesize mediaEffect=_mediaEffect;
@property(copy, nonatomic) NSArray *assetAudioEffects; // @synthesize assetAudioEffects=_assetAudioEffects;
@property(copy, nonatomic) IGAnimationCurve *assetVolumeCurve; // @synthesize assetVolumeCurve=_assetVolumeCurve;
@property(nonatomic) double assetVolume; // @synthesize assetVolume=_assetVolume;
@property(nonatomic) double overallCompositionVolume; // @synthesize overallCompositionVolume=_overallCompositionVolume;
@property(nonatomic) struct CGAffineTransform mediaContainerAffineTransform; // @synthesize mediaContainerAffineTransform=_mediaContainerAffineTransform;
@property(nonatomic) struct IGMediaTransform mediaTransform; // @synthesize mediaTransform=_mediaTransform;
@property(retain, nonatomic) id <IGMediaAsset> asset; // @synthesize asset=_asset;
@property(nonatomic) struct CGSize compositionSize; // @synthesize compositionSize=_compositionSize;
- (id)init;

@end

