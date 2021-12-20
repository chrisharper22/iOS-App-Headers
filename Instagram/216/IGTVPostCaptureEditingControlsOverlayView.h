//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGStoryMediaCompositionEditingControlsOverlayViewProtocol-Protocol.h"

@class IGEffectSlider, IGGradientColorToggleButton, IGGradientView, IGStoryMediaCompositionState, IGStoryMultiEditCompositionThumbnailTray, IGStoryPostCaptureHeaderView, IGVideoLayerListView, IGVideoTimelineView, NSString, UIButton, UIControl, UIView;

@interface IGTVPostCaptureEditingControlsOverlayView : IGPassthroughView <IGStoryMediaCompositionEditingControlsOverlayViewProtocol>
{
    IGGradientView *_topGradientView;
    IGGradientView *_bottomGradientView;
    IGStoryPostCaptureHeaderView *_headerView;
    _Bool _imageAdjustmentControlsVisible;
    _Bool _thumbnailTrayVisible;
    IGStoryMultiEditCompositionThumbnailTray *_thumbnailTray;
    IGEffectSlider *_imageAdjustmentsSlider;
    IGStoryMediaCompositionState *_currentMediaComposition;
    UIButton *_nextButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) IGStoryMediaCompositionState *currentMediaComposition; // @synthesize currentMediaComposition=_currentMediaComposition;
@property(readonly, nonatomic) IGEffectSlider *imageAdjustmentsSlider; // @synthesize imageAdjustmentsSlider=_imageAdjustmentsSlider;
@property(readonly, nonatomic) IGStoryMultiEditCompositionThumbnailTray *thumbnailTray; // @synthesize thumbnailTray=_thumbnailTray;
@property(nonatomic) _Bool thumbnailTrayVisible; // @synthesize thumbnailTrayVisible=_thumbnailTrayVisible;
@property(nonatomic) _Bool imageAdjustmentControlsVisible; // @synthesize imageAdjustmentControlsVisible=_imageAdjustmentControlsVisible;
- (void)setStickerButtonToSuggestedStickerWithIcon:(id)arg1 tooltipText:(id)arg2;
- (void)setThumbnailTrayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImageAdjustmentControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView *viewForGradientButtonLongPress;
@property(readonly, nonatomic) IGVideoLayerListView *videoLayerList;
@property(readonly, nonatomic) IGVideoTimelineView *videoTimeline;
@property(readonly, nonatomic) UIControl *trimButton;
@property(readonly, nonatomic) UIControl *brandedContentButton;
@property(readonly, nonatomic) UIControl *cancelButton;
@property(readonly, nonatomic) UIControl *saveButton;
@property(readonly, nonatomic) IGGradientColorToggleButton *gradientButton;
@property(readonly, nonatomic) UIControl *mediaMuteButton;
@property(readonly, nonatomic) UIControl *musicButton;
@property(readonly, nonatomic) UIControl *addStickerButton;
@property(readonly, nonatomic) UIControl *editMotionFilterButton;
@property(readonly, nonatomic) UIControl *editPhotoBoothButton;
@property(readonly, nonatomic) UIControl *editBoomerangButton;
@property(readonly, nonatomic) UIControl *addDrawingButton;
@property(readonly, nonatomic) UIControl *addTextButton;
- (void)layoutSubviews;
- (id)initWithHeaderSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

