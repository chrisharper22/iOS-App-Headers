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

@class IGGradientView, IGPlaybackTimeline, IGStackView, IGStoryStickerExportModel, NSArray, NSString, UIColor, UIFont, UIImageView, UILabel;

@interface IGSundialWatermarkAttributionLabel : UIView <IGPlaybackTimelineDelegate, IGSundialWatermarkType, IGAnimatedStickerViewType, IGDynamicSurfaceStickerViewType, NSCopying>
{
    IGPlaybackTimeline *_playbackTimeline;
    double _playbackDuration;
    UIView *_contentContainerView;
    UIView *_maskView;
    IGGradientView *_leftMaskGradient;
    IGGradientView *_rightMaskGradient;
    UIView *_middleMaskFill;
    _Bool _needsLayoutRebuild;
    _Bool _truncated;
    NSArray *_effectConfigs;
    IGStackView *_stackView;
    IGStackView *_creatorContainerView;
    UIImageView *_appLogoIcon;
    UILabel *_creatorUsernameLabel;
    NSArray *_creatorViews;
    IGStackView *_audioContainerView;
    UIImageView *_musicNoteIcon;
    UILabel *_audioLabel;
    UIImageView *_explicitIcon;
    NSArray *_audioViews;
    IGStackView *_effectContainerView;
    UIImageView *_effectIconView;
    UILabel *_effectLabel;
    NSArray *_effectViews;
    NSArray *_allContainers;
    NSArray *_allLabels;
    NSArray *_allIcons;
    _Bool _isExplicit;
    UIColor *_color;
    UIFont *_font;
    NSString *_creatorUsername;
    NSString *_audioTitle;
    NSString *_artistUsername;
    double _currentTime;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) NSString *artistUsername; // @synthesize artistUsername=_artistUsername;
@property(readonly, nonatomic) NSString *audioTitle; // @synthesize audioTitle=_audioTitle;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSString *creatorUsername; // @synthesize creatorUsername=_creatorUsername;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *text;
@property(retain, nonatomic) NSArray *effectConfigs;
- (void)setAudioAttributionWithAudioTitle:(id)arg1 artistUsername:(id)arg2;
- (void)_fadeInRemainingAttribution:(double)arg1;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_truncateToWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_rebuildStackViewTree;
- (void)_setupContainers;
- (void)_collectViewCollections;
- (void)_setupEffectSegment;
- (void)_setupAudioSegment;
- (void)_setupCreatorSegment;
- (void)_setupStackview;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

