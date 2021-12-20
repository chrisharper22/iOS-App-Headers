//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGOverlayTransformViewType-Protocol.h>
#import <FBSharedFramework/IGStickerBundleContentViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>

@class CAShapeLayer, IGGradientView, IGImageView, IGStoryStickerExportModel, NSString, UILabel;
@protocol IGStickerBundleContentViewLoadingDelegate;

@interface IGSupportPersonalizedAdsStickerView : UIView <IGStickerViewType, IGStickerBundleContentViewType, IGOverlayTransformViewType>
{
    UIView *_contentContainerView;
    CAShapeLayer *_backdropLayer;
    IGImageView *_stickerImageView;
    UILabel *_titleTextLabel;
    UILabel *_subtitleTextLabel;
    IGGradientView *_titleTextGradientView;
    IGGradientView *_subtitleTextGradientView;
    double _playbackTime;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    double _stickerImageSize;
    double _contentContainerViewCornerRadius;
    double _titleTextLabelHeight;
    double _titleTextLabelFontSize;
    double _subtitleTextLabelHeight;
    double _subtitleTextLabelFontSize;
    double _textLabelWidth;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly) double textLabelWidth; // @synthesize textLabelWidth=_textLabelWidth;
@property(readonly) double subtitleTextLabelFontSize; // @synthesize subtitleTextLabelFontSize=_subtitleTextLabelFontSize;
@property(readonly) double subtitleTextLabelHeight; // @synthesize subtitleTextLabelHeight=_subtitleTextLabelHeight;
@property(readonly) double titleTextLabelFontSize; // @synthesize titleTextLabelFontSize=_titleTextLabelFontSize;
@property(readonly) double titleTextLabelHeight; // @synthesize titleTextLabelHeight=_titleTextLabelHeight;
@property(readonly) double contentContainerViewCornerRadius; // @synthesize contentContainerViewCornerRadius=_contentContainerViewCornerRadius;
@property(readonly) double stickerImageSize; // @synthesize stickerImageSize=_stickerImageSize;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)accessibilityLabel;
- (id)transformTargetView;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (void)layoutSubviews;
- (struct CGSize)_contentContainerViewSizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_subtitleTextStickerViewFrame;
- (struct CGRect)_titleTextStickerViewFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;
- (id)initWithSizingAttributes:(double)arg1 CornerRadius:(double)arg2 TitleHeight:(double)arg3 TitleSize:(double)arg4 SubtitleHeight:(double)arg5 SubtitleSize:(double)arg6 TextWidth:(double)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
