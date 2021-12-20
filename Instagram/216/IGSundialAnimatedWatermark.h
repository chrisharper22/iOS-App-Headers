//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGAnimatedStickerViewType-Protocol.h"
#import "IGDynamicSurfaceStickerViewType-Protocol.h"
#import "IGPlaybackTimelineDelegate-Protocol.h"
#import "IGSundialWatermarkType-Protocol.h"
#import "NSCopying-Protocol.h"

@class CAGradientLayer, IGPlaybackTimeline, IGStoryStickerExportModel, IGSundialAudioAttributionLabel, NSString, UIImageView, UILabel;

@interface IGSundialAnimatedWatermark : UIView <IGPlaybackTimelineDelegate, IGSundialWatermarkType, IGAnimatedStickerViewType, IGDynamicSurfaceStickerViewType, NSCopying>
{
    IGPlaybackTimeline *_playbackTimeline;
    double _playbackDuration;
    CAGradientLayer *_alphaGradientLayer;
    UIView *_contentContainerView;
    UILabel *_creatorLabel;
    IGSundialAudioAttributionLabel *_audioAttributionLabel;
    UIImageView *_instagramLogoImageView;
    UIImageView *_sundialLogoImageView;
    NSString *_audioAttributionTitle;
    NSString *_audioAttributionArtistUsername;
    double _currentTime;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)setAudioAttributionWithTitle:(id)arg1 artistUsername:(id)arg2;
@property(nonatomic) NSString *voiceoverAuthor;
@property(nonatomic) _Bool isReactiveAudio;
@property(nonatomic) _Bool isExplicit;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)layoutSubviews;
- (id)initWithCreatorName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
