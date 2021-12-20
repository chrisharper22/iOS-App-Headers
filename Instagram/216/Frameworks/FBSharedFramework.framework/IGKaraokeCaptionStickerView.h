//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGAnimatedStickerViewType-Protocol.h>
#import <FBSharedFramework/IGDynamicSurfaceStickerViewType-Protocol.h>
#import <FBSharedFramework/IGEditableStickerViewType-Protocol.h>
#import <FBSharedFramework/IGPlaybackTimelineDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryThumbnailProvidingView-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGAsyncTask, IGPlaybackTimeline, IGStoryStickerExportModel, NSArray, NSNumber, NSString, UIColor;
@protocol IGDynamicTextViewProtocol;

@interface IGKaraokeCaptionStickerView : UIView <IGPlaybackTimelineDelegate, NSCopying, IGEditableStickerViewType, IGAnimatedStickerViewType, IGDynamicSurfaceStickerViewType, IGStoryThumbnailProvidingView>
{
    UIView *_contentView;
    IGPlaybackTimeline *_timeline;
    UIView<IGDynamicTextViewProtocol> *_dynamicTextView;
    IGAsyncTask *_captions;
    long long _style;
    UIColor *_color;
    UIColor *_textBackgroundColor;
    NSNumber *_audioLength;
    NSArray *_phraseModels;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *phraseModels; // @synthesize phraseModels=_phraseModels;
@property(retain, nonatomic) NSNumber *audioLength; // @synthesize audioLength=_audioLength;
@property(retain, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) IGAsyncTask *captions; // @synthesize captions=_captions;
- (id)thumbnailView;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
@property(readonly, nonatomic) unsigned long long editableStickerType;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
@property(readonly, nonatomic) _Bool isLoadingCaptions;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

