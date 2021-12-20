//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import "IGStoryMediaCompositionEditingControlsOverlayViewProtocol-Protocol.h"

@class IGEffectSlider, IGGradientColorToggleButton, IGStoryMultiEditCompositionThumbnailTray, IGStoryPostCaptureHeaderView, IGUserSession, IGVideoLayerListView, IGVideoTimelineView, NSString, UIControl, UIView;
@protocol IGStoryPreviewFooterViewType;

@interface IGProfilePicturePostCaptureEditingOverlayView : IGPassthroughView <IGStoryMediaCompositionEditingControlsOverlayViewProtocol>
{
    IGUserSession *_userSession;
    _Bool _imageAdjustmentControlsVisible;
    _Bool _thumbnailTrayVisible;
    IGEffectSlider *_imageAdjustmentsSlider;
    IGStoryMultiEditCompositionThumbnailTray *_thumbnailTray;
    IGVideoTimelineView *_videoTimeline;
    IGVideoLayerListView *_videoLayerList;
    IGStoryPostCaptureHeaderView *_headerView;
    UIView<IGStoryPreviewFooterViewType> *_footerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView<IGStoryPreviewFooterViewType> *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) IGStoryPostCaptureHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) IGVideoLayerListView *videoLayerList; // @synthesize videoLayerList=_videoLayerList;
@property(readonly, nonatomic) IGVideoTimelineView *videoTimeline; // @synthesize videoTimeline=_videoTimeline;
@property(nonatomic) _Bool thumbnailTrayVisible; // @synthesize thumbnailTrayVisible=_thumbnailTrayVisible;
@property(readonly, nonatomic) IGStoryMultiEditCompositionThumbnailTray *thumbnailTray; // @synthesize thumbnailTray=_thumbnailTray;
@property(readonly, nonatomic) IGEffectSlider *imageAdjustmentsSlider; // @synthesize imageAdjustmentsSlider=_imageAdjustmentsSlider;
@property(nonatomic) _Bool imageAdjustmentControlsVisible; // @synthesize imageAdjustmentControlsVisible=_imageAdjustmentControlsVisible;
@property(readonly, nonatomic) UIView *viewForGradientButtonLongPress;
- (void)setStickerButtonToSuggestedStickerWithIcon:(id)arg1 tooltipText:(id)arg2;
- (void)setThumbnailTrayVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImageAdjustmentControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) IGGradientColorToggleButton *gradientButton;
@property(readonly, nonatomic) UIControl *mediaMuteButton;
@property(readonly, nonatomic) UIControl *brandedContentButton;
@property(readonly, nonatomic) UIControl *trimButton;
@property(readonly, nonatomic) UIControl *musicButton;
@property(readonly, nonatomic) UIControl *addStickerButton;
@property(readonly, nonatomic) UIControl *editMotionFilterButton;
@property(readonly, nonatomic) UIControl *editPhotoBoothButton;
@property(readonly, nonatomic) UIControl *editBoomerangButton;
@property(readonly, nonatomic) UIControl *addDrawingButton;
@property(readonly, nonatomic) UIControl *addTextButton;
- (void)setCurrentMediaComposition:(id)arg1;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

