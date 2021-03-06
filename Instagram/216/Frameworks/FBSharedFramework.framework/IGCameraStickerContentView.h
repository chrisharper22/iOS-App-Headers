//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGSerializable-Protocol.h>
#import <FBSharedFramework/IGStickerBundleContentViewType-Protocol.h>

@class AVCaptureVideoPreviewLayer, IGFilteredImageView, IGImageView, IGStoryStickerExportModel, NSArray, NSString, UIImageView;
@protocol IGStickerBundleContentViewLoadingDelegate;

@interface IGCameraStickerContentView : UIView <IGStickerBundleContentViewType, IGSerializable>
{
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    double _playbackTime;
    AVCaptureVideoPreviewLayer *_previewLayer;
    IGFilteredImageView *_captureImageView;
    IGImageView *_frameImageView;
    UIImageView *_maskImageView;
    UIView *_selfieContainerView;
    long long _currentIndex;
    NSArray *_frames;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) UIView *selfieContainerView; // @synthesize selfieContainerView=_selfieContainerView;
@property(readonly, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(readonly, nonatomic) IGImageView *frameImageView; // @synthesize frameImageView=_frameImageView;
@property(readonly, nonatomic) IGFilteredImageView *captureImageView; // @synthesize captureImageView=_captureImageView;
@property(readonly, nonatomic) __weak AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)outlinePath;
- (void)_animateFlashWithDuration:(double)arg1;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (id)_currentFrame;
@property(readonly, nonatomic) long long currentStickerIndex;
- (void)setCaptureImage:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPreviewLayer:(id)arg1 frames:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

