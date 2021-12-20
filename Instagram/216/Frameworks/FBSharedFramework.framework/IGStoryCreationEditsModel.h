//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAREngineFilter, IGAudioMusicTrackClip, IGCompositionFilterMetadata, IGFilter, NSArray, NSDictionary, NSString;

@interface IGStoryCreationEditsModel : NSObject
{
    _Bool _photoToVideoConversionEnabled;
    NSArray *_overlays;
    NSArray *_burnedInOverlayModels;
    NSArray *_dynamicOverlayModels;
    NSArray *_extraAudioClips;
    NSString *_filterIdentifier;
    NSDictionary *_filterParameters;
    IGAudioMusicTrackClip *_musicTrackClip;
    IGCompositionFilterMetadata *_compositionFilterMetadata;
    IGFilter *_effectFilter;
    FBAREngineFilter *_fbEffectFilter;
    struct CGSize _containerViewSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool photoToVideoConversionEnabled; // @synthesize photoToVideoConversionEnabled=_photoToVideoConversionEnabled;
@property(readonly, nonatomic) FBAREngineFilter *fbEffectFilter; // @synthesize fbEffectFilter=_fbEffectFilter;
@property(readonly, nonatomic) IGFilter *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(readonly, nonatomic) IGCompositionFilterMetadata *compositionFilterMetadata; // @synthesize compositionFilterMetadata=_compositionFilterMetadata;
@property(readonly, nonatomic) IGAudioMusicTrackClip *musicTrackClip; // @synthesize musicTrackClip=_musicTrackClip;
@property(readonly, nonatomic) struct CGSize containerViewSize; // @synthesize containerViewSize=_containerViewSize;
@property(readonly, nonatomic) NSDictionary *filterParameters; // @synthesize filterParameters=_filterParameters;
@property(readonly, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
@property(retain, nonatomic) NSArray *extraAudioClips; // @synthesize extraAudioClips=_extraAudioClips;
@property(readonly, nonatomic) NSArray *dynamicOverlayModels; // @synthesize dynamicOverlayModels=_dynamicOverlayModels;
@property(readonly, nonatomic) NSArray *burnedInOverlayModels; // @synthesize burnedInOverlayModels=_burnedInOverlayModels;
@property(readonly, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
@property(readonly, nonatomic) _Bool shouldConvertPhotoToVideo;
- (id)initWithOverlayViews:(id)arg1 burnedInOverlayModels:(id)arg2 dynamicOverlayModels:(id)arg3 extraAudioClips:(id)arg4 filterIdentifier:(id)arg5 filterParameters:(id)arg6 containerViewSize:(struct CGSize)arg7 musicTrackClip:(id)arg8 compositionFilterMetadata:(id)arg9 effectFilter:(id)arg10 fbEffectFilter:(id)arg11 photoToVideoConversionEnabled:(_Bool)arg12;

@end

