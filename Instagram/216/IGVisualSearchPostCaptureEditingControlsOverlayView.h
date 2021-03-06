//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGStoryMediaCompositionEditingControlsOverlayViewProtocol-Protocol.h"

@class IGEffectSlider, IGGradientColorToggleButton, IGGradientView, IGStoryMediaCompositionState, IGStoryMultiEditCompositionThumbnailTray, IGStoryPostCaptureHeaderView, IGVideoLayerListView, IGVideoTimelineView, NSString, UIControl, UIView;

@interface IGVisualSearchPostCaptureEditingControlsOverlayView : IGPassthroughView <IGStoryMediaCompositionEditingControlsOverlayViewProtocol>
{
    IGGradientView *_topGradientView;
    IGGradientView *_bottomGradientView;
    IGStoryPostCaptureHeaderView *_headerView;
    _Bool imageAdjustmentControlsVisible;
    _Bool thumbnailTrayVisible;
    IGEffectSlider *imageAdjustmentsSlider;
    IGStoryMultiEditCompositionThumbnailTray *thumbnailTray;
    UIControl *editPhotoBoothButton;
    UIControl *editMotionFilterButton;
    UIControl *addDrawingButton;
    UIControl *addTextButton;
    UIControl *editBoomerangButton;
    UIControl *addStickerButton;
    IGGradientColorToggleButton *gradientButton;
    UIControl *mediaMuteButton;
    UIControl *musicButton;
    UIControl *trimButton;
    IGVideoLayerListView *videoLayerList;
    IGVideoTimelineView *videoTimeline;
    IGStoryMediaCompositionState *_currentMediaComposition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStoryMediaCompositionState *currentMediaComposition; // @synthesize currentMediaComposition=_currentMediaComposition;
@property(readonly, nonatomic) IGVideoTimelineView *videoTimeline; // @synthesize videoTimeline;
@property(readonly, nonatomic) IGVideoLayerListView *videoLayerList; // @synthesize videoLayerList;
@property(readonly, nonatomic) UIControl *trimButton; // @synthesize trimButton;
@property(readonly, nonatomic) UIControl *musicButton; // @synthesize musicButton;
@property(readonly, nonatomic) UIControl *mediaMuteButton; // @synthesize mediaMuteButton;
@property(readonly, nonatomic) IGGradientColorToggleButton *gradientButton; // @synthesize gradientButton;
@property(readonly, nonatomic) UIControl *addStickerButton; // @synthesize addStickerButton;
@property(readonly, nonatomic) UIControl *editBoomerangButton; // @synthesize editBoomerangButton;
@property(readonly, nonatomic) UIControl *addTextButton; // @synthesize addTextButton;
@property(readonly, nonatomic) UIControl *addDrawingButton; // @synthesize addDrawingButton;
@property(readonly, nonatomic) UIControl *editMotionFilterButton; // @synthesize editMotionFilterButton;
@property(readonly, nonatomic) UIControl *editPhotoBoothButton; // @synthesize editPhotoBoothButton;
@property(nonatomic) _Bool thumbnailTrayVisible; // @synthesize thumbnailTrayVisible;
@property(readonly, nonatomic) IGStoryMultiEditCompositionThumbnailTray *thumbnailTray; // @synthesize thumbnailTray;
@property(readonly, nonatomic) IGEffectSlider *imageAdjustmentsSlider; // @synthesize imageAdjustmentsSlider;
@property(nonatomic) _Bool imageAdjustmentControlsVisible; // @synthesize imageAdjustmentControlsVisible;
@property(readonly, nonatomic) UIView *viewForGradientButtonLongPress;
@property(readonly, nonatomic) UIControl *brandedContentButton;
- (id)cancelButton;
- (void)setThumbnailTrayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStickerButtonToSuggestedStickerWithIcon:(id)arg1 tooltipText:(id)arg2;
- (void)setImageAdjustmentControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithVisualSearchHeaderSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

