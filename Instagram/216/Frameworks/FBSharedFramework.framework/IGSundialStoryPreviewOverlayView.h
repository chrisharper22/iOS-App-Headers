//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGAnimatedStickerViewType-Protocol.h>
#import <FBSharedFramework/IGDynamicSurfaceStickerViewType-Protocol.h>
#import <FBSharedFramework/IGPlaybackTimelineDelegate-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGGradientView, IGPlaybackTimeline, IGStoryOverlayTapModelObject, IGStoryStickerExportModel, IGSundialStoryPreviewCTAView, IGSundialStoryPreviewOverlayHeaderView, IGSundialStoryPreviewOverlayViewModel, NSString, UIColor;

@interface IGSundialStoryPreviewOverlayView : UIView <IGPlaybackTimelineDelegate, IGAnimatedStickerViewType, IGStickerViewType, IGDynamicSurfaceStickerViewType, NSCopying>
{
    _Bool _shouldUseLowFrameRate;
    IGSundialStoryPreviewOverlayViewModel *_viewModel;
    IGPlaybackTimeline *_timeline;
    IGSundialStoryPreviewOverlayHeaderView *_headerView;
    IGGradientView *_topGradient;
    UIColor *_ctaTintColor;
    IGStoryOverlayTapModelObject *_tapModelObject;
    IGSundialStoryPreviewCTAView *_ctaView;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGSundialStoryPreviewCTAView *ctaView; // @synthesize ctaView=_ctaView;
@property(retain, nonatomic) IGStoryOverlayTapModelObject *tapModelObject; // @synthesize tapModelObject=_tapModelObject;
- (double)_stickerDuration;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (_Bool)isDraftSupported;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
@property(nonatomic) double playbackTime;
@property(nonatomic) _Bool durationLabelHidden;
- (id)resharedMediaId;
- (double)mediaVerticalOvershootAmountForSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaTapModelObject:(id)arg1 ctaTapModelObject:(id)arg2 ctaTintColor:(id)arg3 viewModel:(id)arg4 shouldUseLowFrameRate:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
